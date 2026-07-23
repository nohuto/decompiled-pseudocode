/*
 * XREFs of CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A40D14
 * Callers:
 *     CmDeleteLayeredKey @ 0x14043F510 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x1408C1360 (CmDeleteKey.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A3FFF0 (CmpLightWeightCommitDeleteKeyUoW.c)
 * Callees:
 *     CmpDelayDerefKeyControlBlock @ 0x1408C9E60 (CmpDelayDerefKeyControlBlock.c)
 *     CmpCommitDiscardReplacePost @ 0x140A41418 (CmpCommitDiscardReplacePost.c)
 *     CmpReferenceKeyControlBlock @ 0x140A81AC0 (CmpReferenceKeyControlBlock.c)
 */

__int64 __fastcall CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(
        ULONG_PTR BugCheckParameter4,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rdi
  ULONG_PTR v4; // rbp
  bool v5; // r15
  char v8; // dl
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx
  ULONG_PTR v11; // rsi
  _QWORD *v12; // r12
  _QWORD *v14; // rax

  v3 = *(_QWORD **)(BugCheckParameter4 + 192);
  v4 = 0LL;
  v5 = 0;
  if ( v3 )
  {
    v8 = 0;
    v9 = (_QWORD *)v3[4];
    if ( v9 != v3 + 4 )
    {
      v10 = *(_QWORD **)(BugCheckParameter4 + 192);
      do
      {
        if ( v9 == v10 )
          return CmpCommitDiscardReplacePost(BugCheckParameter4);
        if ( v9 == v3 + 4 )
        {
          v9 = v3;
          v8 = 1;
          v3 = (_QWORD *)v3[3];
        }
        else
        {
          v11 = v9[2];
          v12 = v9;
          if ( v8 )
          {
            v14 = (_QWORD *)*v9;
            v9 = v14;
            if ( v14 != v3 + 4 )
            {
              v4 = v14[2];
              CmpReferenceKeyControlBlock(v4);
            }
            if ( !v5 )
              v5 = (unsigned int)CmpCommitDiscardReplacePost(v11) == 1;
            CmpDelayDerefKeyControlBlock(v11, a3);
            if ( v5 )
            {
              if ( v4 )
              {
                CmpDelayDerefKeyControlBlock(v4, a3);
                v4 = 0LL;
              }
              v9 = v3;
              v8 = 1;
              v3 = (_QWORD *)v3[3];
              goto LABEL_15;
            }
          }
          else
          {
            if ( v11 == v4 )
              v4 = 0LL;
            else
              CmpReferenceKeyControlBlock(v9[2]);
            if ( *(_DWORD *)(v11 + 40) == -1 )
            {
              v9 = (_QWORD *)v9[4];
              v3 = v12;
            }
            else
            {
              v9 = (_QWORD *)*v9;
              CmpDelayDerefKeyControlBlock(v11, a3);
            }
          }
          v8 = 0;
        }
LABEL_15:
        v10 = *(_QWORD **)(BugCheckParameter4 + 192);
      }
      while ( v9 != v10 + 4 );
    }
  }
  return CmpCommitDiscardReplacePost(BugCheckParameter4);
}
