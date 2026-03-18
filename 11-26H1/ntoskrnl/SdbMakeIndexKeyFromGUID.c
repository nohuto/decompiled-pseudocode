/*
 * XREFs of SdbMakeIndexKeyFromGUID @ 0x140887798
 * Callers:
 *     SdbMergeIsEntryUpdated @ 0x1408877E4 (SdbMergeIsEntryUpdated.c)
 * Callees:
 *     MmIsUserAddress @ 0x14044E7C0 (MmIsUserAddress.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 */

__int64 __fastcall SdbMakeIndexKeyFromGUID(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 ULong64FromUser; // rbx
  __int64 v4; // rax

  v2 = a1 + 1;
  if ( MmIsUserAddress((unsigned __int64)a1) )
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    v4 = RtlReadULong64FromUser(v2);
  }
  else
  {
    ULong64FromUser = *a1;
    v4 = *v2;
  }
  return ULong64FromUser ^ v4;
}
