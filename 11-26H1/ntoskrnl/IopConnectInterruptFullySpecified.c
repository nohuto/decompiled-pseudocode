/*
 * XREFs of IopConnectInterruptFullySpecified @ 0x1407A2248
 * Callers:
 *     IoConnectInterrupt @ 0x1407A1EA0 (IoConnectInterrupt.c)
 *     IoConnectInterruptEx @ 0x140A9C1B0 (IoConnectInterruptEx.c)
 * Callees:
 *     KeVerifyGroupAffinity @ 0x14047D244 (KeVerifyGroupAffinity.c)
 *     HalGetVectorInput @ 0x14057DCE0 (HalGetVectorInput.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IopConnectInterrupt @ 0x140A9CA10 (IopConnectInterrupt.c)
 */

__int64 __fastcall IopConnectInterruptFullySpecified(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        int a9,
        char a10,
        __int128 *a11)
{
  unsigned __int8 v15; // bl
  __int128 v16; // xmm0
  char v17; // di
  __int64 result; // rax
  __int64 v19; // [rsp+68h] [rbp-71h] BYREF
  _DWORD v20[4]; // [rsp+70h] [rbp-69h] BYREF
  unsigned __int8 v21; // [rsp+80h] [rbp-59h]
  int v22; // [rsp+84h] [rbp-55h]
  int v23; // [rsp+88h] [rbp-51h]
  __int128 v24; // [rsp+90h] [rbp-49h] BYREF
  int v25; // [rsp+B0h] [rbp-29h]
  char v26; // [rsp+B4h] [rbp-25h]

  v20[1] = 0;
  memset_0(v20, 0, 0x5CuLL);
  v19 = 0LL;
  if ( !a3 || !KeVerifyGroupAffinity((__int64)a11, 0) )
    return 3221225485LL;
  v15 = a8;
  if ( !a8 )
  {
    v15 = a7;
    goto LABEL_6;
  }
  if ( a8 < a7 )
    return 3221225485LL;
LABEL_6:
  v16 = *a11;
  v21 = a7;
  v23 = a9;
  v17 = 1;
  v20[0] = 1;
  v20[2] = 0;
  v20[3] = a6;
  v24 = v16;
  result = HalGetVectorInput(a6, (__int64)&v24);
  if ( (int)result >= 0 )
  {
    guard_dispatch_icall_no_overrides(0LL, 0LL);
    v25 = 0;
    if ( (v26 & 1) == 0 )
      v17 = a10;
    v22 = 0;
    *a1 = 0LL;
    result = IopConnectInterrupt(&v19, a2, a3, 0LL, a4, 0, a5, v15, v17);
    if ( (int)result >= 0 )
      *a1 = v19 + 112;
  }
  return result;
}
