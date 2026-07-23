/*
 * XREFs of DifPopThreadContextData @ 0x14064E380
 * Callers:
 *     <none>
 * Callees:
 *     DifPushSegment @ 0x140650CFC (DifPushSegment.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall DifPopThreadContextData(int a1, void *a2, unsigned int a3)
{
  char v3; // si
  _QWORD *v4; // rbx
  __int64 v5; // rdi

  v3 = 0;
  if ( DifPluginStates[a1] )
  {
    v4 = *(_QWORD **)&KeGetCurrentThread()[1].WaitBlockFill11[64];
    if ( v4 )
    {
      v5 = v4[1];
      if ( v5 )
      {
        v4[1] = *(_QWORD *)v5;
        if ( a2 )
          memmove(a2, *(const void **)(v5 + 8), a3);
        ExFreePoolWithTag(*(PVOID *)(v5 + 8), 0x4E666944u);
        *(_QWORD *)(v5 + 8) = 0LL;
        DifPushSegment(&stru_140E27C48.InGlobalForegroundList);
        v3 = 1;
      }
      if ( !v4[1] && !*v4 )
      {
        DifPushSegment(&stru_140E27C48.792);
        *(_QWORD *)&KeGetCurrentThread()[1].WaitBlockFill11[64] = 0LL;
      }
    }
  }
  return v3;
}
