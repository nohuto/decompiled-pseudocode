/*
 * XREFs of GreSfmCleanupPresentHistory @ 0x1400AF0F0
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1400AEF0C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     PALLOCMEM @ 0x14004C634 (PALLOCMEM.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 */

void GreSfmCleanupPresentHistory()
{
  _BYTE *v0; // rdi
  __int64 v1; // rcx
  __int64 DxgkWin32kInterface; // rax
  __int64 v3; // r8
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned int v10; // esi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  _DWORD v15[2]; // [rsp+38h] [rbp-49h] BYREF
  _BYTE *v16; // [rsp+40h] [rbp-41h]
  _DWORD v17[4]; // [rsp+48h] [rbp-39h] BYREF
  _BYTE Buffer[112]; // [rsp+58h] [rbp-29h] BYREF

  v15[1] = 0;
  memset(Buffer, 0, 0x64uLL);
  v15[0] = 0;
  v0 = Buffer;
  v16 = 0LL;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v1);
  LOBYTE(v3) = 1;
  if ( (*(int (__fastcall **)(_DWORD *, _QWORD, __int64, _QWORD))(DxgkWin32kInterface + 72))(v15, 0LL, v3, 0LL) >= 0 )
  {
    v4 = v15[0];
    if ( v15[0] )
    {
      if ( v15[0] <= 5u || (v0 = (_BYTE *)PALLOCMEM((unsigned int)(20 * v15[0]), 1886221383LL)) != 0LL )
      {
        memset(v0, 0, 20 * v4);
        v16 = v0;
        v6 = DxDdGetDxgkWin32kInterface(v5);
        LOBYTE(v7) = 1;
        if ( (*(int (__fastcall **)(_DWORD *, _QWORD, __int64, _QWORD))(v6 + 72))(v15, 0LL, v7, 0LL) >= 0
          && v15[0]
          && v15[0] <= (unsigned int)v4 )
        {
          v9 = 0LL;
          do
          {
            v10 = *(_DWORD *)&v16[20 * v9];
            v11 = DxDdGetDxgkWin32kInterface(v8);
            if ( (*(int (__fastcall **)(_QWORD))(v11 + 136))(v10) >= 0 )
            {
              v13 = DxDdGetDxgkWin32kInterface(v12);
              (*(void (__fastcall **)(_QWORD))(v13 + 112))(v10);
            }
            v17[0] = *(_DWORD *)&v16[20 * v9];
            v14 = DxDdGetDxgkWin32kInterface(v17[0]);
            (*(void (__fastcall **)(_DWORD *, _QWORD))(v14 + 88))(v17, 0LL);
            v9 = (unsigned int)(v9 + 1);
          }
          while ( (unsigned int)v9 < v15[0] );
        }
        if ( v0 != Buffer )
          GreDeleteFastMutex(v0);
      }
    }
  }
}
