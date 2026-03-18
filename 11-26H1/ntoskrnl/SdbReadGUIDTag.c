/*
 * XREFs of SdbReadGUIDTag @ 0x140885AE4
 * Callers:
 *     KsepDbGetShimInfo @ 0x1407BCA3C (KsepDbGetShimInfo.c)
 *     KsepDbGetDriverShimsInternal @ 0x1409E47C0 (KsepDbGetDriverShimsInternal.c)
 * Callees:
 *     SdbReadBinaryTag @ 0x1409E3C80 (SdbReadBinaryTag.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 */

_OWORD *__fastcall SdbReadGUIDTag(_OWORD *a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  *a1 = 0LL;
  if ( !(unsigned int)SdbReadBinaryTag(a2, a3, a1, 16LL) )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbReadGUIDTag", 196, (unsigned int)"Failed to read GUID");
    *a1 = *a4;
  }
  return a1;
}
