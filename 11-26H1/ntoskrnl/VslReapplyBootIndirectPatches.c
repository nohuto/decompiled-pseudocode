/*
 * XREFs of VslReapplyBootIndirectPatches @ 0x140CB9974
 * Callers:
 *     MmReapplyBootPatchImports @ 0x140CFBA34 (MmReapplyBootPatchImports.c)
 *     MiInitializeLoadedModuleList @ 0x140D00470 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall VslReapplyBootIndirectPatches(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *p_CycleTime; // rcx
  _BYTE v4[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v5; // [rsp+28h] [rbp-80h]

  memset_0(v4, 0, 0x68uLL);
  _InterlockedIncrement((_DWORD *)&VslpReservedTransferLock.ThreadLock + 1);
  v5 = a1;
  result = VslpEnterIumSecureMode(2u, 0xDEu, 0, (__int64)v4);
  p_CycleTime = (volatile signed __int32 *)&VslpReservedTransferLock.CycleTime;
  if ( (int)result < 0 )
    p_CycleTime = (volatile signed __int32 *)&VslpReservedTransferLock.CycleTime + 1;
  _InterlockedIncrement(p_CycleTime);
  return result;
}
