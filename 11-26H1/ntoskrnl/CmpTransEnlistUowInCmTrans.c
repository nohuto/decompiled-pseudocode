/*
 * XREFs of CmpTransEnlistUowInCmTrans @ 0x1404B8B98
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
 *     LOCK_TRANSACTION_LIST @ 0x1408AEE3C (LOCK_TRANSACTION_LIST.c)
 *     UNLOCK_TRANSACTION_LIST @ 0x140AE0EFC (UNLOCK_TRANSACTION_LIST.c)
 */

__int64 __fastcall CmpTransEnlistUowInCmTrans(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rcx
  __int64 result; // rax

  LOCK_TRANSACTION_LIST();
  if ( (*(_DWORD *)(a2 + 48) & 7) != 0 )
  {
    UNLOCK_TRANSACTION_LIST();
    return 3222863874LL;
  }
  else
  {
    v4 = *(_QWORD **)(a2 + 24);
    if ( *v4 != a2 + 16 )
      __fastfail(3u);
    *a1 = a2 + 16;
    a1[1] = v4;
    *v4 = a1;
    *(_QWORD *)(a2 + 24) = a1;
    UNLOCK_TRANSACTION_LIST();
    result = 0LL;
    a1[7] = a2;
  }
  return result;
}
