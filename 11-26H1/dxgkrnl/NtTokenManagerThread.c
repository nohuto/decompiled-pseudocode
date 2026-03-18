/*
 * XREFs of NtTokenManagerThread @ 0x140026010
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     DxgkGetSessionTokenManager @ 0x140027250 (DxgkGetSessionTokenManager.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall NtTokenManagerThread(void *Src)
{
  _BYTE *v2; // rdi
  __int64 v3; // rsi
  __int64 Win32kImportTable; // rax
  int v5; // eax
  signed int SessionTokenManager; // ebx
  unsigned int v7; // r14d
  unsigned __int64 v9; // rax
  __int64 v10; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-E0h]
  _BYTE *v12; // [rsp+40h] [rbp-D8h]
  void *Srca[2]; // [rsp+48h] [rbp-D0h]
  __int64 v14; // [rsp+58h] [rbp-C0h]
  __int128 v15; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+70h] [rbp-A8h]
  _BYTE v17[128]; // [rsp+80h] [rbp-98h] BYREF

  *(_OWORD *)Srca = 0LL;
  v14 = 0LL;
  memset(v17, 0, 0x78uLL);
  v2 = v17;
  v12 = v17;
  v3 = 0LL;
  v10 = 0LL;
  Win32kImportTable = DxgkGetWin32kImportTable();
  v5 = (*(__int64 (**)(void))(Win32kImportTable + 608))();
  SessionTokenManager = v5 == 0 ? 0xC0000022 : 0;
  if ( v5 && Src )
  {
    v15 = 0LL;
    v16 = 0LL;
    RtlCopyFromUser(&v15, Src, 0x18uLL);
    *(_OWORD *)Srca = v15;
    v14 = v16;
  }
  else
  {
    SessionTokenManager = -1073741811;
  }
  if ( SessionTokenManager >= 0 && !(_DWORD)v14 )
    SessionTokenManager = -1073741811;
  KeEnterCriticalRegion();
  v7 = EtwpDisableStackWalkApc();
  v11 = v7;
  if ( SessionTokenManager >= 0 )
  {
    SessionTokenManager = DxgkGetSessionTokenManager(&v10);
    v3 = v10;
    if ( SessionTokenManager >= 0 )
    {
      if ( (unsigned int)v14 > 5 )
      {
        v9 = 24LL * (unsigned int)v14;
        if ( !is_mul_ok((unsigned int)v14, 0x18uLL) )
          v9 = -1LL;
        v2 = (_BYTE *)operator new[](v9, 0x62634D54u, 256LL);
        v12 = v2;
      }
      if ( v2 )
        RtlCopyFromUser(v2, Srca[1], 24LL * (unsigned int)v14);
      else
        SessionTokenManager = -1073741801;
      if ( SessionTokenManager >= 0 )
        SessionTokenManager = (*(__int64 (__fastcall **)(__int64, void *, _BYTE *, _QWORD))(*(_QWORD *)v3 + 72LL))(
                                v3,
                                Srca[0],
                                v2,
                                (unsigned int)v14);
    }
  }
  if ( v2 && v2 != v17 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  EtwpReenableStackWalkApc(v7);
  KeLeaveCriticalRegion();
  return (unsigned int)SessionTokenManager;
}
