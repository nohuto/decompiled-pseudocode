/*
 * XREFs of MiLogRetpolineImageLoadEvents @ 0x140B1F474
 * Callers:
 *     MiFinalizeKernelScpForSystemImage @ 0x140B1F2AC (MiFinalizeKernelScpForSystemImage.c)
 *     MiApplyRetpolineToBootDriver @ 0x140CFA8C8 (MiApplyRetpolineToBootDriver.c)
 * Callees:
 *     RtlIsImageFullyRetpolined @ 0x1404FFD68 (RtlIsImageFullyRetpolined.c)
 *     MiConstructNonRetpolineImageLoadRecord @ 0x14086D670 (MiConstructNonRetpolineImageLoadRecord.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x140B1F4E0 (MiLogNonRetpolineImageLoadEvent.c)
 */

_QWORD *__fastcall MiLogRetpolineImageLoadEvents(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *Object; // rcx

  result = (_QWORD *)RtlIsImageFullyRetpolined(*(_QWORD *)(a1 + 48));
  if ( !(_DWORD)result )
  {
    if ( stru_140E36558.FirstArgument )
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
        Object = stru_140E2D150.WaitBlock[2].Object;
        if ( *(struct _KTHREAD **)stru_140E2D150.WaitBlock[2].Object != (struct _KTHREAD *)&stru_140E2D150.WaitBlockFill11[120] )
          __fastfail(3u);
        *result = &stru_140E2D150.WaitBlock[2].Thread;
        result[1] = Object;
        *Object = result;
        stru_140E2D150.WaitBlock[2].Object = result;
      }
    }
  }
  return result;
}
