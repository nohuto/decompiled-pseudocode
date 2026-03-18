/*
 * XREFs of MiReleasePrcbAgeTrimLists @ 0x14046445C
 * Callers:
 *     MiFastTrimWorkingSet @ 0x14031F690 (MiFastTrimWorkingSet.c)
 *     MiAgeWorkingSetTail @ 0x140328CE0 (MiAgeWorkingSetTail.c)
 *     MiTrimWorkingSetTail @ 0x140464090 (MiTrimWorkingSetTail.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x140464260 (MiUpdateOldWorkingSetPagesTail.c)
 *     MiAgeTrimListsTail @ 0x140464350 (MiAgeTrimListsTail.c)
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
