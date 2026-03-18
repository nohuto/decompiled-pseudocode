/*
 * XREFs of CmpTransEnlistUowInKcb @ 0x1404BD714
 * Callers:
 *     CmSetKeyFlags @ 0x1408B09D8 (CmSetKeyFlags.c)
 *     CmDeleteKey @ 0x1408BAD90 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1408BB780 (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1408BE00C (CmpSetKeySecurity.c)
 *     CmSetValueKey @ 0x1408CEE30 (CmSetValueKey.c)
 *     CmpCreateChild @ 0x1408DF4A0 (CmpCreateChild.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140AB95FC (CmpUndoDeleteKeyForTrans.c)
 *     CmSetLastWriteTimeKey @ 0x140B53BB0 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmpReferenceKeyControlBlock @ 0x140A79B80 (CmpReferenceKeyControlBlock.c)
 */

__int64 __fastcall CmpTransEnlistUowInKcb(_QWORD *a1, ULONG_PTR a2)
{
  ULONG_PTR v2; // r8
  ULONG_PTR **v4; // rdx
  ULONG_PTR *v5; // rax
  __int64 result; // rax

  v2 = a2 + 208;
  v4 = *(ULONG_PTR ***)(a2 + 216);
  v5 = a1 + 4;
  if ( *v4 != (ULONG_PTR *)v2 )
    __fastfail(3u);
  *v5 = v2;
  a1[5] = v4;
  *v4 = v5;
  *(_QWORD *)(v2 + 8) = v5;
  result = CmpReferenceKeyControlBlock(a2);
  a1[6] = a2;
  return result;
}
