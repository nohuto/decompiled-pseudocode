/*
 * XREFs of AcpiIrqLibConfigureLibrary @ 0x1400D7BD8
 * Callers:
 *     ACPIInitialize @ 0x1400D7008 (ACPIInitialize.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1400AA4A4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     IcAddGicInstance @ 0x1400BE980 (IcAddGicInstance.c)
 *     IcAddSecondaryIcInstance @ 0x1400BEAF0 (IcAddSecondaryIcInstance.c)
 *     IrqLibpParseMadt @ 0x1400DC8F4 (IrqLibpParseMadt.c)
 *     ProcessorConfigure @ 0x1400DCB8C (ProcessorConfigure.c)
 *     IrqArbUpdateInterruptLimit @ 0x1400DCE04 (IrqArbUpdateInterruptLimit.c)
 *     IrqPolicyConfigure @ 0x1400DCF48 (IrqPolicyConfigure.c)
 *     IrqPolicyUpdatePolicy @ 0x1400DD280 (IrqPolicyUpdatePolicy.c)
 */

__int64 __fastcall AcpiIrqLibConfigureLibrary(int a1, __int64 a2)
{
  __int64 result; // rax

  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_14008DEC0);
  IrqLibRealInterruptModel = a1;
  if ( (unsigned int)(a1 - 2) <= 2 )
  {
    IrqLibInterruptModel = 1;
  }
  else
  {
    IrqLibInterruptModel = a1;
    if ( a1 != 1 )
      return 3221225485LL;
  }
  result = ProcessorConfigure();
  if ( (int)result >= 0 )
  {
    result = IrqPolicyConfigure();
    if ( (int)result >= 0 )
    {
      if ( IrqLibRealInterruptModel != 1 )
      {
        switch ( IrqLibRealInterruptModel )
        {
          case 2:
            IrqLibGicVersion = 1;
            break;
          case 3:
            IrqLibGicVersion = 3;
            break;
          case 4:
            IrqLibpParseMadt(a2);
            result = IcAddGicInstance(0);
            goto LABEL_16;
          default:
            return 3221225473LL;
        }
      }
      result = IrqLibpParseMadt(a2);
LABEL_16:
      if ( (int)result >= 0 )
      {
        result = IrqPolicyUpdatePolicy();
        if ( (int)result >= 0 )
        {
          IrqArbUpdateInterruptLimit();
          IcAddSecondaryIcInstance();
          HalPrivateDispatchTable[22] = (__int64 (__fastcall *)(_QWORD, __int64))IrqTransGetInterruptVector;
          HalPrivateDispatchTable[23] = (__int64 (__fastcall *)(_QWORD, __int64))IrqLibpGetVectorInput;
          HalPrivateDispatchTable[27] = (__int64 (__fastcall *)(_QWORD, __int64))IrqLibAllocateMessageTarget;
          HalPrivateDispatchTable[28] = (__int64 (__fastcall *)(_QWORD, __int64))IrqLibFreeMessageTarget;
          return 0LL;
        }
      }
    }
  }
  return result;
}
