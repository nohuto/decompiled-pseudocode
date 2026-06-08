/*
 * XREFs of AcquirePccInterface @ 0x140027238
 * Callers:
 *     InitAcpiLegacyPcc @ 0x140027008 (InitAcpiLegacyPcc.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     memset @ 0x140010740 (memset.c)
 *     ValidatePccHeader @ 0x1400355D8 (ValidatePccHeader.c)
 */

__int64 __fastcall AcquirePccInterface(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ebx

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1400191A8,
    0LL);
  if ( qword_1400197A8 )
  {
    v3 = 0;
  }
  else
  {
    dword_140019780 = -1;
    v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, void *, __int16, __int16, _QWORD))(WdfFunctions_01015 + 1048))(
           WdfDriverGlobals,
           v2,
           &GUID_PCC_INTERFACE_STANDARD,
           &unk_140019760,
           128,
           1,
           0LL);
    if ( v3 >= 0 )
    {
      v3 = ValidatePccHeader(qword_1400197A8);
      if ( v3 < 0 )
      {
        ((void (__fastcall *)(__int64))qword_140019778)(qword_140019768);
        memset(&unk_140019760, 0, 0x80uLL);
      }
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1400191A8);
  return (unsigned int)v3;
}
