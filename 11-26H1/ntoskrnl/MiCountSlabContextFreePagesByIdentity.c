/*
 * XREFs of MiCountSlabContextFreePagesByIdentity @ 0x14070AD10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCountSlabContextFreePagesByIdentity(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 ***v4; // rcx
  __int64 **v5; // r9

  v3 = *(unsigned __int8 *)(a3 + 88);
  v4 = (__int64 ***)(16 * v3 + *(_QWORD *)(a2 + 88));
  v5 = *v4;
  while ( v5 != (__int64 **)v4 )
  {
    *(_QWORD *)(a3 + 8 * v3 + 96) += *((unsigned int *)v5 + 15);
    v5 = (__int64 **)*v5;
    v4 = (__int64 ***)(16 * v3 + *(_QWORD *)(a2 + 88));
  }
  return 0LL;
}
