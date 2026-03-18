/*
 * XREFs of AcpiAllocateNativeMethodOutputBuffer @ 0x140065CC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x14003D714 (WPP_RECORDER_SF_qD.c)
 */

__int64 __fastcall AcpiAllocateNativeMethodOutputBuffer(_QWORD *a1, void *a2, __int64 a3, __int64 *a4)
{
  unsigned int v4; // ebx
  __int64 Pool2; // rax
  int v9; // edx

  v4 = 0;
  if ( a2 )
    ExFreePoolWithTag(a2, 0x4E706341u);
  Pool2 = ExAllocatePool2(64LL, a3, 1315988289LL);
  a1[7] = Pool2;
  if ( Pool2 )
  {
    a1[6] = a3;
    *a4 = Pool2;
  }
  else
  {
    v4 = -1073741670;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_qD(
        WPP_GLOBAL_Control->DeviceExtension,
        v9,
        19,
        17,
        (__int64)&WPP_ddc14e6fd4133db509d0c44d0c15805e_Traceguids,
        a1[1],
        154);
    }
  }
  return v4;
}
