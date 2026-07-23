/*
 * XREFs of VslPrepareDriverForPatch @ 0x1405C5F98
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x140874754 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslPrepareDriverForPatch(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rcx
  _BYTE v4[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v5; // [rsp+28h] [rbp-80h]

  memset_0(v4, 0, 0x68uLL);
  _InterlockedIncrement(&dword_140F86C38);
  v5 = a1;
  result = VslpEnterIumSecureMode(2u, 0x4Fu, 0, (__int64)v4);
  v3 = (volatile signed __int32 *)&unk_140F86C3C;
  if ( (int)result < 0 )
    v3 = (volatile signed __int32 *)&unk_140F86C40;
  _InterlockedIncrement(v3);
  return result;
}
