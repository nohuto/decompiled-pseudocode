/*
 * XREFs of OSNotifyCreateOperationRegion @ 0x14001E71C
 * Callers:
 *     ACPIBuildMissingChildren @ 0x14001CAE4 (ACPIBuildMissingChildren.c)
 *     OSNotifyCreate @ 0x14001E5B0 (OSNotifyCreate.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x14001E480 (ACPIInitReferenceDeviceExtension.c)
 *     AMLIIterateParentNext @ 0x14001E874 (AMLIIterateParentNext.c)
 *     AMLIGetParent @ 0x14001E8A8 (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_qd @ 0x14002ED00 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall OSNotifyCreateOperationRegion(__int64 a1)
{
  __int64 v1; // rsi
  __int64 i; // rax
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int16 v5; // ax
  __int64 v7; // rbx
  unsigned __int8 v8; // cl
  unsigned int v9; // eax
  int v10; // ecx
  bool v11; // zf
  char v12; // al
  int v13; // edx
  _QWORD *Pool2; // r8
  struct _WORK_QUEUE_ITEM *v15; // r8

  v1 = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
  for ( i = AMLIGetParent(a1); ; i = AMLIIterateParentNext(v3) )
  {
    v3 = i;
    if ( !i )
      break;
    v4 = *(_QWORD *)i;
    v5 = *(_WORD *)(*(_QWORD *)i + 66LL);
    if ( v5 != 8 )
    {
      if ( v5 == 6 )
      {
        v7 = *(_QWORD *)(v4 + 104);
        if ( v7 )
        {
          v8 = *(_BYTE *)(v1 + 12);
          v9 = v8 >= 0x1Fu ? 0x80000000 : 1 << v8;
          v10 = *(_DWORD *)(v7 + 668);
          if ( (v10 & v9) == 0 )
          {
            v11 = *(_DWORD *)(v7 + 368) == 3;
            *(_DWORD *)(v7 + 668) = v9 | v10;
            if ( v11 )
            {
              v12 = *(_BYTE *)(v1 + 12);
              if ( v12 == 8 || v12 == 9 )
              {
                Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1299211073LL);
                if ( Pool2 )
                {
                  Pool2[3] = Pool2;
                  Pool2[2] = OSNotifyCreateOperationRegionWorker;
                  *Pool2 = 0LL;
                  ACPIInitReferenceDeviceExtension(v7);
                  v15[1].List.Flink = (_LIST_ENTRY *)v7;
                  ExQueueWorkItem(v15, DelayedWorkQueue);
                }
                else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v13) = 2;
                  WPP_RECORDER_SF_qd(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v13,
                    21,
                    14,
                    (__int64)&WPP_8260a3bc179634b52004a65d64c9ed63_Traceguids,
                    v7,
                    *(_BYTE *)(v1 + 12));
                }
              }
            }
          }
        }
      }
      AMLIDereferenceHandleEx(v3);
      return 0LL;
    }
  }
  return 0LL;
}
