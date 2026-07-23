/*
 * XREFs of KsepDbGetSdbString @ 0x1407BFA68
 * Callers:
 *     KsepDbGetShimInfo @ 0x1407BFA9C (KsepDbGetShimInfo.c)
 *     KsepDbGetDriverShimsInternal @ 0x1409D8FD8 (KsepDbGetDriverShimsInternal.c)
 * Callees:
 *     SdbGetStringTagPtr @ 0x1409D4804 (SdbGetStringTagPtr.c)
 *     KsepStringDuplicate @ 0x1409D73AC (KsepStringDuplicate.c)
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
