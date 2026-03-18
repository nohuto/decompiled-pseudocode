/*
 * XREFs of ?VmBusSetIoSpaceRegion@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140233210
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14004ED14 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?SetSharedPage@DXGVIRTUALMACHINE@@QEAAJI@Z @ 0x1401F7780 (-SetSharedPage@DXGVIRTUALMACHINE@@QEAAJI@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSetIoSpaceRegion(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned int v4; // edx
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-38h]
  int v11; // [rsp+68h] [rbp+10h] BYREF

  v11 = 0;
  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU>((__int64)a1);
  v3 = v2;
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 32) == *((_QWORD *)DXGGLOBAL::GetGlobal() + 218) )
    {
      v4 = *(_DWORD *)(v3 + 40);
      if ( v4 )
      {
        v5 = DXGVIRTUALMACHINE::SetSharedPage(*(DXGVIRTUALMACHINE **)(*((_QWORD *)a1 + 12) + 592LL), v4);
        v11 = v5;
      }
      else
      {
        v5 = v11;
      }
      if ( v5 >= 0 )
      {
        v6 = *(_QWORD *)(v3 + 24);
        if ( v6 )
        {
          v7 = *(_QWORD *)(v3 + 32);
          if ( v7 )
          {
            v8 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 592LL);
            *(_QWORD *)(v8 + 256) = v6;
            *(_QWORD *)(v8 + 264) = v7;
          }
        }
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      v10 = *(_QWORD *)(v3 + 32);
      WdLogGlobalForLineNumber = 7767;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"The VM has incorrect MMIO region size: 0x%I64x",
        v10,
        0LL,
        0LL,
        0LL,
        0LL);
      v11 = -1073741811;
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v11, 4u);
    LOBYTE(v2) = 1;
  }
  return v2;
}
