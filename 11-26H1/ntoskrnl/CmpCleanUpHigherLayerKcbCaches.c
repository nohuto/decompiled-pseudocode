/*
 * XREFs of CmpCleanUpHigherLayerKcbCaches @ 0x140948B48
 * Callers:
 *     CmRestoreKey @ 0x140947D24 (CmRestoreKey.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14043F920 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140446F50 (CmpInitializeDelayDerefContext.c)
 *     CmpCleanUpHigherLayerKcbCachesPostCallback @ 0x140864EC8 (CmpCleanUpHigherLayerKcbCachesPostCallback.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1408C9E60 (CmpDelayDerefKeyControlBlock.c)
 *     CmpReferenceKeyControlBlock @ 0x140A81AC0 (CmpReferenceKeyControlBlock.c)
 */

void __fastcall CmpCleanUpHigherLayerKcbCaches(__int64 a1)
{
  _QWORD *v2; // rdi
  ULONG_PTR v3; // rsi
  bool v4; // r14
  char v5; // cl
  _QWORD *v6; // rbx
  _QWORD *v7; // rdx
  ULONG_PTR v8; // rbp
  _QWORD *v9; // r15
  _QWORD *v10; // rax
  _OWORD v11[3]; // [rsp+20h] [rbp-38h] BYREF

  v11[0] = 0LL;
  CmpInitializeDelayDerefContext(v11);
  v2 = *(_QWORD **)(a1 + 192);
  v3 = 0LL;
  v4 = 0;
  if ( v2 )
  {
    v5 = 0;
    v6 = (_QWORD *)v2[4];
    if ( v6 != v2 + 4 )
    {
      v7 = *(_QWORD **)(a1 + 192);
      do
      {
        if ( v6 == v7 )
          break;
        if ( v6 != v2 + 4 )
        {
          v8 = v6[2];
          v9 = v6;
          if ( !v5 )
          {
            if ( v8 == v3 )
              v3 = 0LL;
            else
              CmpReferenceKeyControlBlock(v6[2]);
            v6 = (_QWORD *)v6[4];
            v2 = v9;
LABEL_12:
            v5 = 0;
            goto LABEL_13;
          }
          v10 = (_QWORD *)*v6;
          v6 = v10;
          if ( v10 != v2 + 4 )
          {
            v3 = v10[2];
            CmpReferenceKeyControlBlock(v3);
          }
          if ( !v4 )
            v4 = (unsigned int)CmpCleanUpHigherLayerKcbCachesPostCallback(v8) == 1;
          CmpDelayDerefKeyControlBlock(v8, (__int64)v11);
          if ( !v4 )
            goto LABEL_12;
          if ( v3 )
          {
            CmpDelayDerefKeyControlBlock(v3, (__int64)v11);
            v3 = 0LL;
          }
        }
        v6 = v2;
        v5 = 1;
        v2 = (_QWORD *)v2[3];
LABEL_13:
        v7 = *(_QWORD **)(a1 + 192);
      }
      while ( v6 != v7 + 4 );
    }
  }
  CmpDrainDelayDerefContext((_QWORD **)v11);
}
