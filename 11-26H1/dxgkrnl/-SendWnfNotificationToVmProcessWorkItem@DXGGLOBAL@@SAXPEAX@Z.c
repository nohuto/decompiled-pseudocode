/*
 * XREFs of ?SendWnfNotificationToVmProcessWorkItem@DXGGLOBAL@@SAXPEAX@Z @ 0x1403E4BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusSendWnfNotification@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_SENDWNFNOTIFICATION@@I@Z @ 0x1403E4D8C (-VmBusSendWnfNotification@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_SENDWNFNOTIFICATION@@I.c)
 */

void __fastcall DXGGLOBAL::SendWnfNotificationToVmProcessWorkItem(char *a1)
{
  struct DXGGLOBAL *Global; // rax
  volatile signed __int32 *v3; // rbp
  _QWORD **v4; // r12
  _QWORD *v5; // rdi
  struct _KTHREAD **v6; // r15
  struct _KTHREAD **i; // r14
  struct _KTHREAD **v8; // r13
  struct _KTHREAD *v9; // rcx
  int v10; // eax
  __int64 v11; // rbx
  _BYTE v12[32]; // [rsp+50h] [rbp-48h] BYREF
  char *v13; // [rsp+A0h] [rbp+8h]

  if ( RtlCompareMemory(a1 + 80, &WNF_DX_VIDMM_TRIM_NOTIFICATION, 8uLL) == 8 )
  {
    Global = DXGGLOBAL::GetGlobal();
    v3 = (volatile signed __int32 *)((char *)Global + 496);
    v13 = (char *)Global + 496;
    v4 = (_QWORD **)((char *)Global + 1704);
    DXGPUSHLOCK::AcquireShared((struct DXGGLOBAL *)((char *)Global + 496));
    v5 = *v4;
    if ( *v4 != v4 )
    {
      do
      {
        v6 = (struct _KTHREAD **)(v5 - 1);
        if ( v5 - 1 == *((_QWORD **)a1 + 5) )
        {
          DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v12, v6 + 12);
          for ( i = (struct _KTHREAD **)v6[5]; i != v6 + 5; i = (struct _KTHREAD **)*i )
          {
            v8 = i - 17;
            if ( *((_DWORD *)*(i - 4) + 98) > 0x10u )
            {
              v9 = v8[2];
              if ( *((_DWORD *)v9 + 103) == *((_DWORD *)a1 + 25) && *((_DWORD *)v9 + 104) == *((_DWORD *)a1 + 26) )
              {
                *(_QWORD *)(a1 + 100) = v8[43];
                v10 = DXG_HOST_GLOBAL_VMBUS::VmBusSendWnfNotification(
                        (DXG_HOST_GLOBAL_VMBUS *)(v6 + 20),
                        (struct DXGKVMB_COMMAND_SENDWNFNOTIFICATION *)(a1 + 56),
                        *((_DWORD *)a1 + 12));
                if ( v10 < 0 )
                {
                  v11 = v10;
                  WdLogSingleEntry2(2LL, i - 17, v10);
                  WdLogGlobalForLineNumber = 7549;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Failed to send WNF notification to vGPU:0x%I64x 0x%I64x",
                    (__int64)(i - 17),
                    v11,
                    0LL,
                    0LL,
                    0LL);
                }
              }
            }
          }
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
        }
        v5 = (_QWORD *)*v5;
      }
      while ( v5 != v4 );
      v3 = (volatile signed __int32 *)v13;
    }
    _InterlockedDecrement(v3 + 4);
    ExReleasePushLockSharedEx(v3, 0LL);
    KeLeaveCriticalRegion();
  }
}
