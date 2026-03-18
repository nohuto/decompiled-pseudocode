/*
 * XREFs of VslPrepareDriverForPatch @ 0x14058A28C
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x1407E1548 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall VslPrepareDriverForPatch(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rcx
  _BYTE v4[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v5; // [rsp+28h] [rbp-80h]

  memset_0(v4, 0, 0x68uLL);
  _InterlockedIncrement(&dword_140F8D698);
  v5 = a1;
  result = VslpEnterIumSecureMode(2u, 0x4Eu, 0, (__int64)v4);
  v3 = (volatile signed __int32 *)&unk_140F8D69C;
  if ( (int)result < 0 )
    v3 = (volatile signed __int32 *)&unk_140F8D6A0;
  _InterlockedIncrement(v3);
  return result;
}
