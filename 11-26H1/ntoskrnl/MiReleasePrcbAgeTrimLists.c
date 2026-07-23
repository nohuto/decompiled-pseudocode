/*
 * XREFs of MiReleasePrcbAgeTrimLists @ 0x14045D41C
 * Callers:
 *     MiFastTrimWorkingSet @ 0x1403216C0 (MiFastTrimWorkingSet.c)
 *     MiAgeWorkingSetTail @ 0x14032AD10 (MiAgeWorkingSetTail.c)
 *     MiTrimWorkingSetTail @ 0x14045D050 (MiTrimWorkingSetTail.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x14045D220 (MiUpdateOldWorkingSetPagesTail.c)
 *     MiAgeTrimListsTail @ 0x14045D310 (MiAgeTrimListsTail.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReleasePrcbAgeTrimLists(_QWORD *a1)
{
  struct _KPRCB *CurrentPrcb; // rax
  __int64 *MmInternal; // r8
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  MmInternal = MxTempPrcb;
  if ( CurrentPrcb->MmInternal )
    MmInternal = (__int64 *)CurrentPrcb->MmInternal;
  result = (unsigned int)(*((_DWORD *)MmInternal + 85) - 1);
  MmInternal[2575 * result + 3070] = 0LL;
  --*((_DWORD *)MmInternal + 85);
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( a1[2] )
    a1[2] = 1LL;
  return result;
}
