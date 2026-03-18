/*
 * XREFs of ??0?$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEAA@_K@Z @ 0x14004BAE0
 * Callers:
 *     ??0ProtectableFromChange@@QEAA@EE@Z @ 0x14004B99C (--0ProtectableFromChange@@QEAA@EE@Z.c)
 * Callees:
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall Vector<ProtectableFromChange::ModifyingActionConstraints>::Vector<ProtectableFromChange::ModifyingActionConstraints>(
        __int64 a1)
{
  void *Pool2; // rax

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &Vector<unsigned __int64>::`vftable';
  *(_QWORD *)(a1 + 16) = 4LL;
  *(_DWORD *)(a1 + 32) = 1;
  Pool2 = (void *)ExAllocatePool2(256LL, 4LL, 1313891414LL);
  *(_QWORD *)(a1 + 24) = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, *(_QWORD *)(a1 + 16));
    *(_DWORD *)(a1 + 32) = 2;
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 43;
    *(_DWORD *)(a1 + 8) = -1073741801;
  }
  return a1;
}
