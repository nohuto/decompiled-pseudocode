/*
 * XREFs of ACPIVerifyAndCopyFirmwareDependencies @ 0x140053384
 * Callers:
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x140029650 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x140035FC0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x140058720 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1400589F0 (ACPIBuildProcessThermalZoneCheckType.c)
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x14001B500 (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_L @ 0x1400385BC (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_s @ 0x14003EBCC (WPP_RECORDER_SF_s.c)
 *     ACPIWriteEventLogEntry @ 0x1400535C0 (ACPIWriteEventLogEntry.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall ACPIVerifyAndCopyFirmwareDependencies(__int64 *BugCheckParameter2, __int64 a2, __int64 *a3)
{
  unsigned int v3; // ebx
  bool v6; // zf
  _DWORD *v9; // rdi
  unsigned int v10; // r12d
  __int64 v11; // r14
  unsigned int v12; // eax
  int v13; // eax
  int v14; // edx
  __int64 Pool2; // rax
  __int64 v16; // rbp
  size_t v17; // r8
  __int64 v18; // r15
  const void **v19; // rsi
  __int64 v20; // r14
  __int64 v21; // rdi
  __int64 v22; // rax
  unsigned int v23; // [rsp+78h] [rbp+10h]
  __int64 v24; // [rsp+80h] [rbp+18h] BYREF

  v3 = 0;
  *a3 = 0LL;
  v6 = *(_WORD *)(a2 + 2) == 4;
  v24 = 0LL;
  if ( v6 )
  {
    v9 = *(_DWORD **)(a2 + 32);
    v10 = 0;
    v11 = *(unsigned int *)(a2 + 24) + 40LL;
    v12 = *v9;
    v23 = *v9;
    while ( v10 < v12 )
    {
      v13 = AMLIGetNameSpaceObject(*(_BYTE **)&v9[10 * v10 + 10], BugCheckParameter2, &v24, 0);
      if ( v13 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = 2;
          WPP_RECORDER_SF_L(
            WPP_GLOBAL_Control->DeviceExtension,
            v14,
            21,
            11,
            (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
            v13);
        }
        KeBugCheckEx(0xA5u, 0x18uLL, (ULONG_PTR)BugCheckParameter2, *(_QWORD *)&v9[10 * v10 + 10], 0LL);
      }
      if ( !v24 || *(_WORD *)(*(_QWORD *)v24 + 66LL) != 6 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = 2;
          WPP_RECORDER_SF_s(
            WPP_GLOBAL_Control->DeviceExtension,
            v14,
            21,
            12,
            (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
            *(_QWORD *)&v9[10 * v10 + 10]);
        }
        KeBugCheckEx(0xA5u, 0x19uLL, (ULONG_PTR)BugCheckParameter2, *(_QWORD *)&v9[10 * v10 + 10], 0LL);
      }
      AMLIDereferenceHandleEx(v24);
      v11 += (unsigned int)v9[10 * v10 + 8];
      v24 = 0LL;
      v12 = v23;
      ++v10;
    }
    Pool2 = ExAllocatePool2(64LL, v11, 1332765505LL);
    v16 = Pool2;
    if ( Pool2 )
    {
      *(_OWORD *)Pool2 = *(_OWORD *)a2;
      *(_OWORD *)(Pool2 + 16) = *(_OWORD *)(a2 + 16);
      v17 = *(unsigned int *)(Pool2 + 24);
      *(_QWORD *)(Pool2 + 32) = Pool2 + 40;
      memmove((void *)(Pool2 + 40), *(const void **)(a2 + 32), v17);
      v18 = *(unsigned int *)(a2 + 24) + 40LL;
      if ( v23 )
      {
        v19 = (const void **)(v9 + 8);
        v20 = *(_QWORD *)(v16 + 32) - (_QWORD)v9;
        v21 = v23;
        do
        {
          *(const void **)((char *)v19 + v20 + 8) = (const void *)(v18 + v16);
          memmove((void *)(v18 + v16), v19[1], *(unsigned int *)v19);
          v22 = *(unsigned int *)((char *)v19 + v20);
          v19 += 5;
          v18 += v22;
          --v21;
        }
        while ( v21 );
      }
    }
    else
    {
      v3 = -1073741670;
    }
    *a3 = v16;
    return v3;
  }
  else
  {
    ACPIWriteEventLogEntry(3221553169LL, 0LL, 0LL);
    return 3221225485LL;
  }
}
