/*
 * XREFs of PspJobIoRateControlDisable @ 0x140AFC11C
 * Callers:
 *     PspJobDelete @ 0x1406187E0 (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x1407FEF84 (PspSetJobIoRateControl.c)
 * Callees:
 *     PspJobIoRateVolumeEntryRemoveAll @ 0x1404C4AF0 (PspJobIoRateVolumeEntryRemoveAll.c)
 *     PspIoRateEntryDeactivate @ 0x140B3CA34 (PspIoRateEntryDeactivate.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspJobIoRateControlDisable(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  PVOID v4; // rbx
  __int64 v6; // rax
  PVOID P[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v3 = a1 + 1632;
  if ( *(_QWORD *)(v3 + 40) )
  {
    PspIoRateEntryDeactivate(v3);
    v2 = 1;
  }
  P[1] = P;
  P[0] = P;
  PspJobIoRateVolumeEntryRemoveAll(a1, (__int64)P);
  while ( 1 )
  {
    v4 = P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P || (v6 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v6 + 8) = P;
    PspIoRateEntryDeactivate(v4);
    ExFreePoolWithTag(v4, 0);
    ++v2;
  }
  return v2;
}
