/*
 * XREFs of PspSetMinimalProcessName @ 0x140B6C7E4
 * Callers:
 *     PsCreateMinimalProcess @ 0x140801BC8 (PsCreateMinimalProcess.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     PspSetProcessShortName @ 0x140AA711C (PspSetProcessShortName.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspSetMinimalProcessName(__int64 a1, const void **a2)
{
  __int64 Pool2; // rax
  __int64 v5; // rdi
  void *v7; // rcx

  Pool2 = ExAllocatePool2(0x40uLL);
  v5 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  *(_QWORD *)(Pool2 + 8) = Pool2 + 16;
  *(_WORD *)Pool2 = *(_WORD *)a2;
  *(_WORD *)(Pool2 + 2) = *(_WORD *)a2;
  memmove((void *)(Pool2 + 16), a2[1], *(unsigned __int16 *)a2);
  v7 = *(void **)(a1 + 848);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  *(_QWORD *)(a1 + 848) = v5;
  PspSetProcessShortName(a1, (unsigned __int16 *)a2);
  return 0LL;
}
