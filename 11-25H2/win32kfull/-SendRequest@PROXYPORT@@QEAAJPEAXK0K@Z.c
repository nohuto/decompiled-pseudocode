/*
 * XREFs of ?SendRequest@PROXYPORT@@QEAAJPEAXK0K@Z @ 0x1400D4BA0
 * Callers:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D425C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall PROXYPORT::SendRequest(PROXYPORT *this, void *a2, int a3, void *a4, unsigned int a5)
{
  int v9; // eax
  unsigned int v10; // edx
  int v11; // eax
  _QWORD *v12; // rcx
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v15[5]; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+68h] [rbp-98h]
  void *v17; // [rsp+70h] [rbp-90h]
  unsigned int v18; // [rsp+78h] [rbp-88h]
  void *v19; // [rsp+80h] [rbp-80h]
  _WORD v20[4]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v21; // [rsp+98h] [rbp-68h]
  int v22; // [rsp+C8h] [rbp-38h]
  void *v23; // [rsp+D0h] [rbp-30h]

  memset_0(v15, 0, 0x48uLL);
  memset_0(v20, 0, 0x2B0uLL);
  v15[0] = 0x800000480020LL;
  v16 = a3;
  v17 = a2;
  v19 = a4;
  v14 = 688LL;
  v18 = a4 != 0LL ? a5 : 0;
  v9 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD *, _WORD *, __int64 *, _QWORD))LpcSendWaitReceivePort)(
         **(_QWORD **)this,
         33685504LL,
         v15,
         v20,
         &v14,
         0LL);
  v10 = v9;
  if ( v9 == -1073741769 )
  {
    *(_DWORD *)(*(_QWORD *)this + 76LL) = 0;
    goto LABEL_13;
  }
  if ( v9 < 0 )
  {
LABEL_13:
    *(_QWORD *)(*(_QWORD *)this + 32LL) = 0LL;
    return v10;
  }
  if ( (v20[2] & 0x7FFF) == 2 )
  {
    v11 = 0;
    if ( v20[0] == 32 && a4 == v23 )
      LOBYTE(v11) = a5 == v22;
    v12 = *(_QWORD **)this;
    if ( v11 )
    {
      v12[4] = v21;
      return v10;
    }
    v12[4] = 0LL;
  }
  return 3221225473LL;
}
