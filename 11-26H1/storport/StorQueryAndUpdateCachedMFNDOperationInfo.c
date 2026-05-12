/*
 * XREFs of StorQueryAndUpdateCachedMFNDOperationInfo @ 0x1400CD7C8
 * Callers:
 *     StorInitializeMFND @ 0x1400CA970 (StorInitializeMFND.c)
 * Callees:
 *     StorLogMFNDQueryOperationInfo @ 0x1400CC2E8 (StorLogMFNDQueryOperationInfo.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     StorSendMFNDCommand @ 0x140194890 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorQueryAndUpdateCachedMFNDOperationInfo(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // esi
  _DWORD v5[10]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v6; // [rsp+88h] [rbp-20h]

  memset_0(v5, 0, 0x40uLL);
  v6 = v6 & 0xFFFFFF00 | 0xD1;
  v5[0] = 10;
  v2 = StorSendMFNDCommand(a1, 0, 0, 0, (__int64)v5);
  v3 = v2;
  if ( v2 < 0 )
  {
    StorLogMFNDQueryOperationInfo(a1, -1, -1, 0, v2);
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 6224) + 36LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 6224) + 32LL) = 0;
  }
  return v3;
}
