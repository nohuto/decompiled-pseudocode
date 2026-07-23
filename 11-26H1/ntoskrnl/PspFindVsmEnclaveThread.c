/*
 * XREFs of PspFindVsmEnclaveThread @ 0x140ACC5E0
 * Callers:
 *     PsAdjustBasicEnclaveThreadList @ 0x140619A30 (PsAdjustBasicEnclaveThreadList.c)
 *     PsLoadVsmEnclaveData @ 0x140619BC8 (PsLoadVsmEnclaveData.c)
 *     PsCallEnclave @ 0x140803C20 (PsCallEnclave.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspFindVsmEnclaveThread(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *(_QWORD *)(a2 + 24);
  if ( a1 < v2 )
    return 0xFFFFFFFFLL;
  else
    return a1 > v2;
}
