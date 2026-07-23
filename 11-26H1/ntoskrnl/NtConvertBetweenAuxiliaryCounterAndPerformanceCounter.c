/*
 * XREFs of NtConvertBetweenAuxiliaryCounterAndPerformanceCounter @ 0x140B683A0
 * Callers:
 *     DifNtConvertBetweenAuxiliaryCounterAndPerformanceCounterWrapper @ 0x140673460 (DifNtConvertBetweenAuxiliaryCounterAndPerformanceCounterWrapper.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 */

NTSTATUS __cdecl NtConvertBetweenAuxiliaryCounterAndPerformanceCounter(
        BOOLEAN ConvertAuxiliaryToPerformanceCounter,
        PLARGE_INTEGER PerformanceOrAuxiliaryCounterValue,
        PLARGE_INTEGER ConvertedValue,
        PLARGE_INTEGER ConversionError)
{
  LONGLONG QuadPart; // rsi
  NTSTATUS v8; // ecx
  LONGLONG v10; // [rsp+20h] [rbp-28h] BYREF
  LONGLONG v11; // [rsp+28h] [rbp-20h]
  LONGLONG v12; // [rsp+30h] [rbp-18h]

  v11 = 0LL;
  v10 = 0LL;
  if ( !KeGetCurrentThread()->PreviousMode )
    return guard_dispatch_icall_no_overrides(PerformanceOrAuxiliaryCounterValue->QuadPart, (__int64)ConvertedValue);
  ProbeForRead(PerformanceOrAuxiliaryCounterValue, 8uLL, 4u);
  QuadPart = PerformanceOrAuxiliaryCounterValue->QuadPart;
  v12 = QuadPart;
  ProbeForWrite(ConvertedValue, 8uLL, 4u);
  if ( ConversionError )
    ProbeForWrite(ConversionError, 8uLL, 4u);
  v8 = guard_dispatch_icall_no_overrides(QuadPart, (__int64)&v10);
  if ( v8 >= 0 )
  {
    ConvertedValue->QuadPart = v10;
    if ( ConversionError )
      ConversionError->QuadPart = v11;
  }
  return v8;
}
