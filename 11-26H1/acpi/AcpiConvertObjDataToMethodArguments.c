/*
 * XREFs of AcpiConvertObjDataToMethodArguments @ 0x140037F90
 * Callers:
 *     AcpiSetupNativeMethodContext @ 0x1400545E0 (AcpiSetupNativeMethodContext.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x140038194 (ACPIIoctlCalculateOutputBufferV1.c)
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x140038328 (ACPIIoctlCalculateOutputBufferSizeV1.c)
 *     WPP_RECORDER_SF_DDDD @ 0x140066600 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_PD @ 0x140066970 (WPP_RECORDER_SF_PD.c)
 */

__int64 __fastcall AcpiConvertObjDataToMethodArguments(unsigned int a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  unsigned int v4; // ebp
  _QWORD *v5; // r12
  __int64 v7; // rbx
  int v9; // ebx
  unsigned int v10; // r11d
  __int64 v11; // rsi
  int v12; // edx
  int v13; // r11d
  __int64 v14; // r14
  __int64 Pool2; // rax
  int v16; // edx
  __int64 v17; // r8
  int v18; // r9d
  void *v19; // rsi
  __int64 v20; // r15
  int v21; // edx
  __int64 v22; // rax
  int v24; // [rsp+20h] [rbp-78h]
  __int64 v25; // [rsp+50h] [rbp-48h] BYREF
  int v26; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+10h]

  v27 = a2;
  v4 = 0;
  v5 = a4;
  v7 = a2;
  if ( a1 )
  {
    v25 = 0LL;
    v10 = 0;
    v26 = 0;
    while ( v10 < a1 )
    {
      LOBYTE(a4) = 1;
      v11 = v7 + 40LL * v10;
      v9 = ACPIIoctlCalculateOutputBufferSizeV1(
             (unsigned int)v7 + 40 * v10,
             (unsigned int)&v25,
             (unsigned int)&v26,
             (_DWORD)a4,
             0);
      if ( v9 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDDD(WPP_GLOBAL_Control->DeviceExtension, v12, 21, 21, v24, v13, a1, *(_WORD *)(v11 + 2), v9);
        return (unsigned int)v9;
      }
      v7 = v27;
      v10 = v13 + 1;
    }
    v14 = v25;
    Pool2 = ExAllocatePool2(64LL, v25, 1315988289LL);
    v19 = (void *)Pool2;
    if ( Pool2 )
    {
      v20 = Pool2;
      while ( 1 )
      {
        if ( v4 >= a1 )
        {
          *a3 = v19;
          v9 = 0;
          *v5 = v14;
          return (unsigned int)v9;
        }
        LOBYTE(v17) = 1;
        v25 = v7 + 40LL * v4;
        v9 = ACPIIoctlCalculateOutputBufferV1(v25, v20, v17, 0LL);
        if ( v9 < 0 )
          break;
        v22 = *(unsigned __int16 *)(v20 + 2);
        if ( (unsigned __int16)v22 < 4u )
          v22 = 4LL;
        v7 = v27;
        v20 += v22 + 4;
        ++v4;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDDD(WPP_GLOBAL_Control->DeviceExtension, v21, 19, 23, v24, v4, a1, *(_WORD *)(v25 + 2), v9);
      ExFreePoolWithTag(v19, 0x4E706341u);
    }
    else
    {
      v9 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_PD(WPP_GLOBAL_Control->DeviceExtension, v16, v17, v18, v24, v14);
    }
  }
  else
  {
    *a3 = 0LL;
    v9 = 0;
    *a4 = 0LL;
  }
  return (unsigned int)v9;
}
