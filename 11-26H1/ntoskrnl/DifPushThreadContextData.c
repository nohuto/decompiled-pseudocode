/*
 * XREFs of DifPushThreadContextData @ 0x14064E460
 * Callers:
 *     <none>
 * Callees:
 *     DifPopSegment @ 0x140650C14 (DifPopSegment.c)
 *     DifPushSegment @ 0x140650CFC (DifPushSegment.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DifPushThreadContextData(int a1, int a2, const void *a3, unsigned int a4)
{
  unsigned int v5; // ebx
  size_t v8; // r15
  void *Pool2; // rbp
  __int64 v10; // rdi
  __int64 v11; // rsi

  v5 = 0;
  if ( !DifPluginStates[a1] || !a3 || !a4 )
    return (unsigned int)-1073741811;
  v8 = a4;
  Pool2 = (void *)ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  v10 = DifPopSegment(&stru_140E27C48.InGlobalForegroundList);
  if ( v10 )
  {
    v11 = *(_QWORD *)&KeGetCurrentThread()[1].WaitBlockFill11[64];
    if ( !v11 )
    {
      v11 = DifPopSegment(&stru_140E27C48.792);
      if ( !v11 )
        goto LABEL_9;
      *(_QWORD *)&KeGetCurrentThread()[1].WaitBlockFill11[64] = v11;
    }
    *(_QWORD *)(v10 + 8) = Pool2;
    memmove(Pool2, a3, v8);
    *(_DWORD *)(v10 + 20) = a1;
    *(_DWORD *)(v10 + 16) = a2;
    *(_QWORD *)v10 = *(_QWORD *)(v11 + 8);
    *(_QWORD *)(v11 + 8) = v10;
    return v5;
  }
LABEL_9:
  v5 = -1073741801;
  ExFreePoolWithTag(Pool2, 0x4E666944u);
  if ( v10 )
    DifPushSegment(&stru_140E27C48.InGlobalForegroundList);
  return v5;
}
