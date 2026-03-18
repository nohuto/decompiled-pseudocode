/*
 * XREFs of KsepDbGetSdbString @ 0x1407BCA08
 * Callers:
 *     KsepDbGetShimInfo @ 0x1407BCA3C (KsepDbGetShimInfo.c)
 *     KsepDbGetDriverShimsInternal @ 0x1409E47C0 (KsepDbGetDriverShimsInternal.c)
 * Callees:
 *     KsepStringDuplicate @ 0x1409E5E2C (KsepStringDuplicate.c)
 *     SdbGetStringTagPtr @ 0x1409E7DF4 (SdbGetStringTagPtr.c)
 */

__int64 __fastcall KsepDbGetSdbString(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 StringTagPtr; // rax

  StringTagPtr = SdbGetStringTagPtr(a1, a2, a3, a4);
  if ( StringTagPtr )
    return KsepStringDuplicate(a3, StringTagPtr);
  else
    return 3221225485LL;
}
