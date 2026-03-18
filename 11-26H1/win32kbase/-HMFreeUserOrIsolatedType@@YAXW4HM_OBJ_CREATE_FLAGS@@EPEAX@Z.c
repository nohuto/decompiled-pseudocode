/*
 * XREFs of ?HMFreeUserOrIsolatedType@@YAXW4HM_OBJ_CREATE_FLAGS@@EPEAX@Z @ 0x140134F94
 * Callers:
 *     HMFreeObject @ 0x1401187F0 (HMFreeObject.c)
 *     HMAllocObjectEx @ 0x14011DE20 (HMAllocObjectEx.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?HMFreeIsolatedType@@YAXEPEAX@Z @ 0x140134FC4 (-HMFreeIsolatedType@@YAXEPEAX@Z.c)
 */

void __fastcall HMFreeUserOrIsolatedType(__int16 a1, __int64 a2, void *a3, __int64 a4)
{
  if ( (a1 & 0x200) != 0 )
    HMFreeIsolatedType(a2, a3);
  else
    GreDeleteFastMutex((char *)a3, a2, (__int64)a3, a4);
}
