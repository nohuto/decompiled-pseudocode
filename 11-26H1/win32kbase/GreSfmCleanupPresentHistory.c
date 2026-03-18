/*
 * XREFs of GreSfmCleanupPresentHistory @ 0x140181930
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1401FBD50 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 * Callees:
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void GreSfmCleanupPresentHistory()
{
  _BYTE *v0; // rdi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 DxgkWin32kInterface; // rax
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  unsigned int v17; // esi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+38h] [rbp-49h] BYREF
  _BYTE *v24; // [rsp+40h] [rbp-41h]
  _DWORD v25[4]; // [rsp+48h] [rbp-39h] BYREF
  _BYTE Buffer[112]; // [rsp+58h] [rbp-29h] BYREF

  v23 = 0LL;
  memset(Buffer, 0, 0x64uLL);
  v0 = Buffer;
  v24 = 0LL;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v2, v1);
  LOBYTE(v4) = 1;
  if ( (*(int (__fastcall **)(__int64 *, _QWORD, __int64, _QWORD))(DxgkWin32kInterface + 72))(&v23, 0LL, v4, 0LL) >= 0 )
  {
    v7 = (unsigned int)v23;
    if ( (_DWORD)v23 )
    {
      if ( (unsigned int)v23 <= 5 || (v0 = (_BYTE *)PALLOCMEM((unsigned int)(20 * v23), 1886221383LL, v5, v6)) != 0LL )
      {
        memset(v0, 0, 20 * v7);
        v24 = v0;
        v10 = DxDdGetDxgkWin32kInterface(v9, v8);
        LOBYTE(v11) = 1;
        if ( (*(int (__fastcall **)(__int64 *, _QWORD, __int64, _QWORD))(v10 + 72))(&v23, 0LL, v11, 0LL) >= 0
          && (_DWORD)v23
          && (unsigned int)v23 <= (unsigned int)v7 )
        {
          v16 = 0LL;
          do
          {
            v17 = *(_DWORD *)&v24[20 * v16];
            v18 = DxDdGetDxgkWin32kInterface(v13, v12);
            if ( (*(int (__fastcall **)(_QWORD))(v18 + 136))(v17) >= 0 )
            {
              v21 = DxDdGetDxgkWin32kInterface(v20, v19);
              (*(void (__fastcall **)(_QWORD))(v21 + 112))(v17);
            }
            v25[0] = *(_DWORD *)&v24[20 * v16];
            v22 = DxDdGetDxgkWin32kInterface(v25[0], v19);
            (*(void (__fastcall **)(_DWORD *, _QWORD))(v22 + 88))(v25, 0LL);
            v16 = (unsigned int)(v16 + 1);
          }
          while ( (unsigned int)v16 < (unsigned int)v23 );
        }
        if ( v0 != Buffer )
          GreDeleteFastMutex(v0, v12, v14, v15);
      }
    }
  }
}
