/*
 * XREFs of VslReapplyBootIndirectPatches @ 0x140CBF9B4
 * Callers:
 *     MmReapplyBootPatchImports @ 0x140D01DB4 (MmReapplyBootPatchImports.c)
 *     MiInitializeLoadedModuleList @ 0x140D06810 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslReapplyBootIndirectPatches(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rcx
  _BYTE v4[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v5; // [rsp+28h] [rbp-80h]

  memset_0(v4, 0, 0x68uLL);
  _InterlockedIncrement(&dword_140F86C4C);
  v5 = a1;
  result = VslpEnterIumSecureMode(2u, 0xDEu, 0, (__int64)v4);
  v3 = (volatile signed __int32 *)&unk_140F86C50;
  if ( (int)result < 0 )
    v3 = (volatile signed __int32 *)&unk_140F86C54;
  _InterlockedIncrement(v3);
  return result;
}
