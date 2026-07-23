/*
 * XREFs of MiLogRetpolineImageLoadEvents @ 0x140B214F4
 * Callers:
 *     MiFinalizeKernelScpForSystemImage @ 0x140B2132C (MiFinalizeKernelScpForSystemImage.c)
 *     MiApplyRetpolineToBootDriver @ 0x140D00C48 (MiApplyRetpolineToBootDriver.c)
 * Callees:
 *     RtlIsImageFullyRetpolined @ 0x1404F9558 (RtlIsImageFullyRetpolined.c)
 *     MiConstructNonRetpolineImageLoadRecord @ 0x140873A40 (MiConstructNonRetpolineImageLoadRecord.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x140B21560 (MiLogNonRetpolineImageLoadEvent.c)
 */

_QWORD *__fastcall MiLogRetpolineImageLoadEvents(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *Object; // rcx

  result = (_QWORD *)RtlIsImageFullyRetpolined(*(_QWORD *)(a1 + 48));
  if ( !(_DWORD)result )
  {
    if ( stru_140E366D8.FirstArgument )
    {
      return (_QWORD *)MiLogNonRetpolineImageLoadEvent(
                         a1 + 88,
                         *(unsigned int *)(a1 + 120),
                         *(unsigned int *)(a1 + 156));
    }
    else
    {
      result = (_QWORD *)MiConstructNonRetpolineImageLoadRecord(a1);
      if ( result )
      {
        Object = stru_140E2D2D0.WaitBlock[2].Object;
        if ( *(struct _KTHREAD **)stru_140E2D2D0.WaitBlock[2].Object != (struct _KTHREAD *)&stru_140E2D2D0.WaitBlockFill11[120] )
          __fastfail(3u);
        *result = &stru_140E2D2D0.WaitBlock[2].Thread;
        result[1] = Object;
        *Object = result;
        stru_140E2D2D0.WaitBlock[2].Object = result;
      }
    }
  }
  return result;
}
