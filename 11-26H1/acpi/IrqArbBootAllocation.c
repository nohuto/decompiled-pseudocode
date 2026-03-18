/*
 * XREFs of IrqArbBootAllocation @ 0x1400C35D0
 * Callers:
 *     <none>
 * Callees:
 *     ArbBootAllocation @ 0x1400A9B80 (ArbBootAllocation.c)
 *     IcCopyData @ 0x1400C3674 (IcCopyData.c)
 *     ProcessorCopyData @ 0x1400C3F28 (ProcessorCopyData.c)
 *     ProcessorpClearData @ 0x1400C42E8 (ProcessorpClearData.c)
 *     IcClearPossibleData @ 0x1400C4400 (IcClearPossibleData.c)
 *     IcRemapInputs @ 0x1400C46B0 (IcRemapInputs.c)
 */

__int64 __fastcall IrqArbBootAllocation(__int64 a1, _QWORD **a2)
{
  int v4; // ebx

  ProcessorpClearData(1LL);
  IcClearPossibleData();
  v4 = ProcessorCopyData(1LL);
  if ( v4 >= 0 )
  {
    v4 = IcCopyData(1LL);
    if ( v4 >= 0 )
    {
      v4 = ArbBootAllocation(a1, a2);
      if ( v4 >= 0 )
      {
        v4 = ProcessorCopyData(0LL);
        if ( v4 >= 0 )
        {
          v4 = IcRemapInputs();
          if ( v4 >= 0 )
          {
            v4 = IcCopyData(0LL);
            if ( v4 >= 0 )
            {
              ProcessorpClearData(1LL);
              IcClearPossibleData();
            }
          }
        }
      }
    }
  }
  return (unsigned int)v4;
}
