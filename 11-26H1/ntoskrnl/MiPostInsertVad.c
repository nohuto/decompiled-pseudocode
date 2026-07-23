/*
 * XREFs of MiPostInsertVad @ 0x140318774
 * Callers:
 *     MiPerformVadSplitting @ 0x140317B74 (MiPerformVadSplitting.c)
 *     MiInsertVad @ 0x140318030 (MiInsertVad.c)
 * Callees:
 *     MiUnlockControlAreaFileObjectExclusive @ 0x140317868 (MiUnlockControlAreaFileObjectExclusive.c)
 *     MiLockControlAreaFileObjectExclusive @ 0x140318824 (MiLockControlAreaFileObjectExclusive.c)
 *     MiAweViewInserter @ 0x140705814 (MiAweViewInserter.c)
 */

void __fastcall MiPostInsertVad(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rcx

  if ( (*(_DWORD *)(a1 + 48) & 0x80000) == 0 )
  {
    v4 = (_QWORD *)(a1 + 104);
    v5 = *(__int64 **)(a1 + 80);
    *(_QWORD *)(a1 + 120) = (__int64)KeGetCurrentThread()->ApcState.Process | 1;
    v6 = *v5;
    MiLockControlAreaFileObjectExclusive(*v5);
    if ( (*(_DWORD *)(v6 + 56) & 0x400) == 0 )
    {
      v7 = (_QWORD *)(v6 + 8);
      v8 = *(_QWORD *)(v6 + 8);
      if ( *(_QWORD *)(v8 + 8) != v6 + 8 )
        __fastfail(3u);
      *v4 = v8;
      v4[1] = v7;
      *(_QWORD *)(v8 + 8) = v4;
      *v7 = v4;
    }
    MiUnlockControlAreaFileObjectExclusive(v6);
  }
  if ( a3 )
    MiAweViewInserter(KeGetCurrentThread()->ApcState.Process, a3);
}
