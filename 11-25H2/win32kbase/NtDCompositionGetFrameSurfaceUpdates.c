/*
 * XREFs of NtDCompositionGetFrameSurfaceUpdates @ 0x1400C0490
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x14004E260 (UserIsCurrentProcessDwm.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14004F5D4 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14004F604 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?FindCompositionFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEAUICompositionFrame@@@Z @ 0x1400C7DAC (-FindCompositionFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEAUICompositionFrame@@@Z.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     RtlCopyToUser @ 0x1402C9008 (RtlCopyToUser.c)
 */

__int64 __fastcall NtDCompositionGetFrameSurfaceUpdates(void *Src, void *a2, void *a3)
{
  struct ICompositionFrame *v5; // rsi
  signed int CompositionFrame; // ebx
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v8; // r14
  unsigned int v9; // edx
  struct ICompositionFrame *v11; // [rsp+38h] [rbp-50h] BYREF
  struct ICompositionFrame *v12; // [rsp+40h] [rbp-48h]
  unsigned __int64 v13; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v14[7]; // [rsp+50h] [rbp-38h] BYREF
  int Srca; // [rsp+90h] [rbp+8h] BYREF
  void *v16; // [rsp+98h] [rbp+10h]
  void *v17; // [rsp+A0h] [rbp+18h]
  int v18; // [rsp+A8h] [rbp+20h] BYREF

  v17 = a3;
  v16 = a2;
  Srca = 0;
  v18 = 0;
  v5 = 0LL;
  v12 = 0LL;
  if ( Src )
  {
    v11 = 0LL;
    RtlCopyFromUser(&v11, Src, 8uLL);
    v5 = v11;
    v12 = v11;
    CompositionFrame = v11 == 0LL ? 0xC000000D : 0;
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
        v11 = 0LL;
        CompositionFrame = DirectComposition::CConnection::FindCompositionFrame(
                             DefaultConnection,
                             (unsigned __int64)v5,
                             &v11);
        if ( CompositionFrame >= 0 )
        {
          v14[0] = 0LL;
          v13 = 0LL;
          CompositionFrame = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *, unsigned __int64 *))(**((_QWORD **)v8 + 37)
                                                                                               + 64LL))(
                               *((_QWORD **)v8 + 37),
                               v14,
                               &v13);
          if ( CompositionFrame >= 0 )
            v18 = (*(unsigned __int8 (__fastcall **)(struct ICompositionFrame *, _QWORD, unsigned __int64, int *))(*(_QWORD *)v11 + 48LL))(
                    v11,
                    v14[0],
                    v13 / 0x178,
                    &Srca);
          (*(void (__fastcall **)(struct ICompositionFrame *))(*(_QWORD *)v11 + 8LL))(v11);
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
  RtlCopyToUser(a2, &Srca, 4uLL);
  RtlCopyToUser(a3, &v18, 4uLL);
  return (unsigned int)CompositionFrame;
}
