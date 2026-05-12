/*
 * XREFs of RaidAdapterReleaseCryptoKeyResources @ 0x14005C9E0
 * Callers:
 *     RaidUnitProcessBusyRequest @ 0x140012A1C (RaidUnitProcessBusyRequest.c)
 *     RaUnitStartIo @ 0x140013D70 (RaUnitStartIo.c)
 *     RaUnitAsyncError @ 0x140016430 (RaUnitAsyncError.c)
 *     RaidUnitCompleteRequest @ 0x140017760 (RaidUnitCompleteRequest.c)
 *     RaidUnitCompleteResetRequest @ 0x140024200 (RaidUnitCompleteResetRequest.c)
 *     RaUnitStartResetIo @ 0x1400A2224 (RaUnitStartResetIo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterReleaseCryptoKeyResources(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  volatile signed __int32 *v3; // roff
  __int64 v4; // rcx
  __int64 result; // rax

  v2 = *(_DWORD **)(a2 + 792);
  if ( *v2 != 1 || v2[1] != 24 )
    return 0LL;
  v3 = (volatile signed __int32 *)(((unsigned __int64)(unsigned int)v2[2] << 6) + *(_QWORD *)(a1 + 5704) + 40);
  _InterlockedDecrement(v3);
  v4 = *(_QWORD *)(a2 + 792);
  result = (*(int *)v3 >> 31) & 0xC0000001;
  *(_OWORD *)v4 = 0LL;
  *(_QWORD *)(v4 + 16) = 0LL;
  return result;
}
