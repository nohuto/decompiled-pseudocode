/*
 * XREFs of CmpEnumerateAllHigherLayerKcbs @ 0x140A402C0
 * Callers:
 *     CmpInvalidateAllHigherLayerKcbs @ 0x140864FF0 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1408650A4 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x1408651EC (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmDeleteKey @ 0x1408C1360 (CmDeleteKey.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x140A4026C (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpCleanupDiscardReplaceContext @ 0x140A40C9C (CmpCleanupDiscardReplaceContext.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1408C9E60 (CmpDelayDerefKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x1408D5100 (CmpLockKcbExclusive.c)
 *     CmpReferenceKeyControlBlock @ 0x140A81AC0 (CmpReferenceKeyControlBlock.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C5E3F0 (CmpLockKcbShared.c)
 */

void __fastcall CmpEnumerateAllHigherLayerKcbs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7)
{
  _QWORD *v7; // rdi
  ULONG_PTR v8; // rbp
  bool v9; // r13
  struct _KLOCK_ENTRIES *v11; // r9
  _QWORD *v12; // rbx
  _QWORD *v13; // rcx
  ULONG_PTR v14; // rsi
  _QWORD *v15; // r14
  _QWORD *v16; // rax

  v7 = *(_QWORD **)(a1 + 192);
  v8 = 0LL;
  v9 = 0;
  v11 = (struct _KLOCK_ENTRIES *)a3;
  if ( v7 )
  {
    LOBYTE(a2) = 0;
    v12 = (_QWORD *)v7[4];
    if ( v12 != v7 + 4 )
    {
      v13 = *(_QWORD **)(a1 + 192);
      do
      {
        if ( v12 == v13 )
          return;
        if ( v12 == v7 + 4 )
        {
          v12 = v7;
          LOBYTE(a2) = 1;
          v7 = (_QWORD *)v7[3];
          goto LABEL_17;
        }
        v14 = v12[2];
        v15 = v12;
        if ( (_BYTE)a2 )
        {
          v16 = (_QWORD *)*v12;
          v12 = v16;
          if ( v16 != v7 + 4 )
          {
            v8 = v16[2];
            CmpReferenceKeyControlBlock(v8);
          }
          if ( !v9 )
            v9 = (unsigned int)guard_dispatch_icall_no_overrides(v14, a4) == 1;
          if ( !a6 )
            CmpUnlockKcb(v14);
          CmpDelayDerefKeyControlBlock(v14, a4);
          if ( v9 )
          {
            if ( v8 )
            {
              CmpDelayDerefKeyControlBlock(v8, a4);
              v8 = 0LL;
            }
            v12 = v7;
            LOBYTE(a2) = 1;
            v7 = (_QWORD *)v7[3];
            goto LABEL_16;
          }
        }
        else
        {
          if ( !a6 )
          {
            if ( a7 )
              CmpLockKcbExclusive(v14, a2, a3, v11);
            else
              CmpLockKcbShared(v14);
          }
          if ( v14 == v8 )
            v8 = 0LL;
          else
            CmpReferenceKeyControlBlock(v14);
          if ( (unsigned int)guard_dispatch_icall_no_overrides(v14, a5) == 1 )
          {
            v12 = (_QWORD *)v12[4];
            v7 = v15;
          }
          else
          {
            v12 = (_QWORD *)*v12;
            if ( !a6 )
              CmpUnlockKcb(v14);
            CmpDelayDerefKeyControlBlock(v14, a4);
          }
        }
        LOBYTE(a2) = 0;
LABEL_16:
        v11 = (struct _KLOCK_ENTRIES *)a3;
LABEL_17:
        v13 = *(_QWORD **)(a1 + 192);
      }
      while ( v12 != v13 + 4 );
    }
  }
}
