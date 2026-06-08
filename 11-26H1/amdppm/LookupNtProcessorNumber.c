/*
 * XREFs of LookupNtProcessorNumber @ 0x14000B2C8
 * Callers:
 *     GetNtProcessorNumber @ 0x1400327D0 (GetNtProcessorNumber.c)
 *     GetLpIndex @ 0x14003D480 (GetLpIndex.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140003168 (WPP_RECORDER_SF_DD.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall LookupNtProcessorNumber(_DWORD *a1)
{
  ULONG ActiveProcessorCount; // ebp
  unsigned int i; // ebx
  int ProcessorIdByNtNumber; // edi
  unsigned int v5; // ebp
  unsigned int j; // ebx
  int v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  for ( i = 0; i < ActiveProcessorCount; ++i )
  {
    ProcessorIdByNtNumber = HalGetProcessorIdByNtNumber(i, &v10);
    if ( ProcessorIdByNtNumber >= 0 && v10 == a1[12] )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1400155D8,
        0LL);
      if ( (unsigned int)KeCheckProcessorAffinityEx(&unk_140015A18) )
      {
        ProcessorIdByNtNumber = -1073741811;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v9 = v10;
          v8 = a1[13];
          WPP_RECORDER_SF_DD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x31u,
            (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids,
            v8,
            v9);
        }
      }
      else
      {
        a1[14] = i;
        KeAddProcessorAffinityEx(&unk_140015A18, i);
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_1400155D8);
      return (unsigned int)ProcessorIdByNtNumber;
    }
  }
  if ( _bittest64(&Globals, 0x2Du) )
  {
    v5 = HalPrivateDispatchTable[145](0xFFFFFFFFLL);
    for ( j = 0; j < v5; ++j )
    {
      ProcessorIdByNtNumber = ((__int64 (__fastcall *)(_QWORD, int *))HalPrivateDispatchTable[146])(j, &v10);
      if ( ProcessorIdByNtNumber >= 0 && v10 == a1[12] )
      {
        a1[14] = -1;
        a1[18] = j;
        return (unsigned int)ProcessorIdByNtNumber;
      }
    }
  }
  return (unsigned int)-1073741275;
}
