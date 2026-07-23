/*
 * XREFs of CmpPromoteSubtree @ 0x14094717C
 * Callers:
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmSaveKey @ 0x140A7EF8C (CmSaveKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpSubtreeEnumeratorBeginForKcbStack @ 0x14086537C (CmpSubtreeEnumeratorBeginForKcbStack.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140866CE8 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1409432C8 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140943804 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140943998 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpSubtreeEnumeratorStart @ 0x140943AB8 (CmpSubtreeEnumeratorStart.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140943D6C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpInitializeKeyNodeStack @ 0x140944138 (CmpInitializeKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140944398 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x140947320 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpSubtreeEnumeratorStartForKeyNodeStack @ 0x140947434 (CmpSubtreeEnumeratorStartForKeyNodeStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1409479F4 (CmpPromoteSingleKeyFromKcbStacks.c)
 */

__int64 __fastcall CmpPromoteSubtree(__int64 a1, __int16 *a2)
{
  __int16 v4; // si
  int v5; // ebx
  int v6; // eax
  __int64 v7; // r8
  __int16 *v8; // rdi
  unsigned __int16 *v9; // r14
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // r15
  int v14; // eax
  __int16 v16; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v17[14]; // [rsp+22h] [rbp-47h] BYREF
  char v18[80]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v19; // [rsp+80h] [rbp+17h]

  memset_0(v17, 0, 0x66uLL);
  v16 = -2;
  CmpInitializeKeyNodeStack(v18);
  if ( a1 )
  {
    v4 = *(_WORD *)(a1 + 2);
    v5 = CmpSubtreeEnumeratorStart((__int64)&v16, v4);
    if ( v5 >= 0 )
    {
      CmpSubtreeEnumeratorBeginForKcbStack((__int64)&v16, a1);
LABEL_3:
      while ( 1 )
      {
        v6 = CmpSubtreeEnumeratorAdvance(&v16);
        v5 = v6;
        if ( v6 == -2147483622 )
          break;
        if ( v6 < 0 )
          goto LABEL_10;
        v7 = 408LL * v16;
        v8 = *(__int16 **)(v7 + v19 + 16);
        v9 = *(unsigned __int16 **)(v7 + v19 - 392);
        v13 = *(_QWORD *)(CmpKeyNodeStackGetEntryAtLayerHeight((__int64)v8, v4) + 16);
        if ( v12 )
        {
          LOBYTE(v10) = 1;
          v14 = CmpPromoteSingleKeyFromKcbStacks(v11, v12, v10);
        }
        else if ( v11 )
        {
          v14 = CmpPromoteSingleKeyFromParentKcbAndChildKeyNode(v11, (__int64)v8, 1);
        }
        else
        {
          v5 = CmpPartialPromoteSingleKeyFromKeyNodeStacks(v9, (__int64)v8);
          if ( v5 < 0 )
            goto LABEL_10;
          v14 = CmpFullPromoteSingleKeyFromKeyNodeStacks((__int64)v9, v8);
        }
        v5 = v14;
        if ( v14 < 0 )
          goto LABEL_10;
        if ( !v13 )
          CmpKeyEnumStackNotifyPromotion(v19 + 56 + 408LL * (v16 - 1));
      }
      v5 = 0;
    }
  }
  else
  {
    v4 = *a2;
    v5 = CmpSubtreeEnumeratorStartForKeyNodeStack(&v16, a2);
    if ( v5 >= 0 )
      goto LABEL_3;
  }
LABEL_10:
  CmpSubtreeEnumeratorCleanup((__int64)&v16);
  return (unsigned int)v5;
}
