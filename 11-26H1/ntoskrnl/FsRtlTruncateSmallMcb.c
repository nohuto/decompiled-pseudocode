/*
 * XREFs of FsRtlTruncateSmallMcb @ 0x1405249E0
 * Callers:
 *     KiInterruptThunk @ 0x140732E70 (KiInterruptThunk.c)
 *     $$1 @ 0x140732E80 ($$1.c)
 *     $$2 @ 0x140732E90 ($$2.c)
 *     $$3 @ 0x140732EA0 ($$3.c)
 *     $$4 @ 0x140732EB0 ($$4.c)
 *     $$5 @ 0x140732EC0 ($$5.c)
 *     $$6 @ 0x140732ED0 ($$6.c)
 *     $$7 @ 0x140732EE0 ($$7.c)
 *     $$8 @ 0x140732EF0 ($$8.c)
 *     $$9 @ 0x140732F00 ($$9.c)
 *     $$a @ 0x140732F10 ($$a.c)
 *     $$b @ 0x140732F20 ($$b.c)
 *     $$c @ 0x140732F30 ($$c.c)
 *     $$d @ 0x140732F40 ($$d.c)
 *     $$e @ 0x140732F50 ($$e.c)
 *     $$f @ 0x140732F60 ($$f.c)
 * Callees:
 *     KeExitRetpoline @ 0x14048D73C (KeExitRetpoline.c)
 *     RtlpComputeEpilogueOffset @ 0x1405531C8 (RtlpComputeEpilogueOffset.c)
 *     KiCustomAccessRoutine0 @ 0x140732C30 (KiCustomAccessRoutine0.c)
 */

__int64 __fastcall FsRtlTruncateSmallMcb(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax

  KeExitRetpoline();
  result = (a2 >> 47) + 1;
  if ( a2 >> 47 != -1 && result != 1 )
  {
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine0(a2);
    return 7LL;
  }
  return result;
}
