/*
 * XREFs of PipDeviceObjectListRemove @ 0x140B5B5EC
 * Callers:
 *     IopRemoveRelationFromList @ 0x1407B5784 (IopRemoveRelationFromList.c)
 *     PiInvalidateSpeculativeRelations @ 0x1409B4C90 (PiInvalidateSpeculativeRelations.c)
 *     IopRemoveCurrentRelationFromList @ 0x140B5D354 (IopRemoveCurrentRelationFromList.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall PipDeviceObjectListRemove(unsigned int *a1, unsigned int a2)
{
  PVOID *v5; // rsi

  if ( a2 >= *a1 )
    return 3221225612LL;
  v5 = (PVOID *)&a1[6 * a2];
  ObfDereferenceObjectWithTag(v5[2], 0x4C706E50u);
  if ( ((_DWORD)v5[4] & 1) != 0 )
    --a1[2];
  if ( a2 < *a1 - 1 )
    memmove(v5 + 2, &a1[4 * a2 + 10 + 2 * a2], 24LL * (*a1 + ~a2));
  --*a1;
  return 0LL;
}
