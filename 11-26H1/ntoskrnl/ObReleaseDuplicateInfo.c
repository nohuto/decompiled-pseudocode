/*
 * XREFs of ObReleaseDuplicateInfo @ 0x140A99D68
 * Callers:
 *     AlpcHandleDataDestroyProcedure @ 0x140A99D00 (AlpcHandleDataDestroyProcedure.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObpDecrementHandleCount2 @ 0x1408F0360 (ObpDecrementHandleCount2.c)
 */

LONG_PTR __fastcall ObReleaseDuplicateInfo(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rdx
  LONG_PTR result; // rax

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    ObpDecrementHandleCount2(*(PRKPROCESS *)a1, v4 - 48, 0LL, a4);
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 16), 0x7544624Fu);
    result = ObfDereferenceObjectWithTag(*(PVOID *)a1, 0x7544624Fu);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
