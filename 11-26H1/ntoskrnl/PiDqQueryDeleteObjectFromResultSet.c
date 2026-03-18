/*
 * XREFs of PiDqQueryDeleteObjectFromResultSet @ 0x140990010
 * Callers:
 *     PiDqQueryApplyObjectEvent @ 0x14098F6F0 (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryFreeActiveData @ 0x140990044 (PiDqQueryFreeActiveData.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1403B8A60 (RtlDeleteElementGenericTableAvl.c)
 *     PiDmObjectRelease @ 0x1409A6000 (PiDmObjectRelease.c)
 */

BOOLEAN __fastcall PiDqQueryDeleteObjectFromResultSet(__int64 a1, void *a2)
{
  BOOLEAN result; // al
  PVOID Buffer; // [rsp+38h] [rbp+10h] BYREF

  Buffer = a2;
  result = RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 72), &Buffer);
  if ( result )
    return PiDmObjectRelease(Buffer);
  return result;
}
