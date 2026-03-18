/*
 * XREFs of NtDCompositionGetFrameLegacyTokens @ 0x1400BF130
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x14004E260 (UserIsCurrentProcessDwm.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14004F5D4 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14004F604 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?FindCompositionFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEAUICompositionFrame@@@Z @ 0x1400C7DAC (-FindCompositionFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEAUICompositionFrame@@@Z.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140243540 (memmove.c)
 *     RtlCopyToUser @ 0x1402C9008 (RtlCopyToUser.c)
 */

__int64 __fastcall NtDCompositionGetFrameLegacyTokens(void *Src, void *a2, void *a3)
{
  size_t v5; // rsi
  signed int CompositionFrame; // ebx
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v8; // r14
  unsigned int v9; // edx
  int v10; // eax
  int v12; // [rsp+30h] [rbp-78h] BYREF
  _DWORD v13[3]; // [rsp+34h] [rbp-74h] BYREF
  void *v14; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-60h] BYREF
  struct ICompositionFrame *v16; // [rsp+50h] [rbp-58h] BYREF
  size_t v17; // [rsp+58h] [rbp-50h]
  void *Srca; // [rsp+60h] [rbp-48h] BYREF
  size_t Size; // [rsp+B0h] [rbp+8h] BYREF
  void *v20; // [rsp+B8h] [rbp+10h]
  void *v21; // [rsp+C0h] [rbp+18h]
  int v22; // [rsp+C8h] [rbp+20h] BYREF

  v21 = a3;
  v20 = a2;
  v22 = 0;
  v12 = 0;
  v5 = 0LL;
  v17 = 0LL;
  if ( Src )
  {
    Size = 0LL;
    RtlCopyFromUser(&Size, Src, 8uLL);
    v5 = Size;
    v17 = Size;
    CompositionFrame = Size == 0 ? 0xC000000D : 0;
    v13[1] = CompositionFrame;
  }
  else
  {
    CompositionFrame = -1073741811;
  }
  if ( CompositionFrame >= 0 )
  {
    if ( UserIsCurrentProcessDwm((__int64)Src, (__int64)a2) )
    {
      KeEnterCriticalRegion();
      DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
      v8 = DefaultConnection;
      if ( DefaultConnection )
      {
        v16 = 0LL;
        CompositionFrame = DirectComposition::CConnection::FindCompositionFrame(DefaultConnection, v5, &v16);
        if ( CompositionFrame >= 0 )
        {
          v14 = 0LL;
          v15 = 0LL;
          CompositionFrame = (*(__int64 (__fastcall **)(_QWORD *, void **, unsigned __int64 *))(**((_QWORD **)v8 + 37)
                                                                                              + 64LL))(
                               *((_QWORD **)v8 + 37),
                               &v14,
                               &v15);
          if ( CompositionFrame >= 0 )
          {
            do
            {
              Srca = 0LL;
              LODWORD(Size) = 0;
              v13[0] = 0;
              v10 = (*(unsigned __int8 (__fastcall **)(struct ICompositionFrame *, void **, size_t *, _DWORD *))(*(_QWORD *)v16 + 40LL))(
                      v16,
                      &Srca,
                      &Size,
                      v13);
              v12 = (unsigned __int8)v10;
              if ( (_DWORD)Size )
              {
                memmove(v14, Srca, (unsigned int)Size);
                v14 = (char *)v14 + (unsigned int)Size;
                v15 -= (unsigned int)Size;
                v22 += v13[0];
                v10 = v12;
              }
            }
            while ( v10 && v15 >= 0x800 );
          }
          (*(void (__fastcall **)(struct ICompositionFrame *))(*(_QWORD *)v16 + 8LL))(v16);
        }
        DirectComposition::CConnection::Release(v8, v9);
      }
      else
      {
        CompositionFrame = -1073741790;
      }
      KeLeaveCriticalRegion();
    }
    else
    {
      CompositionFrame = -1073741790;
    }
  }
  RtlCopyToUser(a2, &v22, 4uLL);
  RtlCopyToUser(a3, &v12, 4uLL);
  return (unsigned int)CompositionFrame;
}
