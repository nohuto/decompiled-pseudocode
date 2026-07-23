/*
 * XREFs of FsRtlTruncateSmallMcb @ 0x140527050
 * Callers:
 *     KiInterruptThunk @ 0x140737A40 (KiInterruptThunk.c)
 *     $$1 @ 0x140737A50 ($$1.c)
 *     $$2 @ 0x140737A60 ($$2.c)
 *     $$3 @ 0x140737A70 ($$3.c)
 *     $$4 @ 0x140737A80 ($$4.c)
 *     $$5 @ 0x140737A90 ($$5.c)
 *     $$6 @ 0x140737AA0 ($$6.c)
 *     $$7 @ 0x140737AB0 ($$7.c)
 *     $$8 @ 0x140737AC0 ($$8.c)
 *     $$9 @ 0x140737AD0 ($$9.c)
 *     $$a @ 0x140737AE0 ($$a.c)
 *     $$b @ 0x140737AF0 ($$b.c)
 *     $$c @ 0x140737B00 ($$c.c)
 *     $$d @ 0x140737B10 ($$d.c)
 *     $$e @ 0x140737B20 ($$e.c)
 *     $$f @ 0x140737B30 ($$f.c)
 * Callees:
 *     KeExitRetpoline @ 0x14048727C (KeExitRetpoline.c)
 *     RtlpComputeEpilogueOffset @ 0x140555648 (RtlpComputeEpilogueOffset.c)
 *     KiCustomAccessRoutine0 @ 0x140737800 (KiCustomAccessRoutine0.c)
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
