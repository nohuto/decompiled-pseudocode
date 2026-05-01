/*
 * XREFs of ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180019990
 * Callers:
 *     ?StartActivity@OnViewCreatedBase@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x180011CA0 (-StartActivity@OnViewCreatedBase@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?StartActivity@Cloak@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x180011F08 (-StartActivity@Cloak@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?StartActivity@OnViewDestroyedBase@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x180013D68 (-StartActivity@OnViewDestroyedBase@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?StartActivity@Launch@SingleViewExperienceTelemetry@@QEAAXPEBG0PEAX@Z @ 0x180019798 (-StartActivity@Launch@SingleViewExperienceTelemetry@@QEAAXPEBG0PEAX@Z.c)
 *     ?StartActivity@Show@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z @ 0x180019A68 (-StartActivity@Show@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z.c)
 *     ?StartActivity@Uncloak@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x18001AD9C (-StartActivity@Uncloak@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?StartActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0I_N11@Z @ 0x18001B100 (-StartActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0I_N11@.c)
 *     ?StartActivity@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXPEBG0I@Z @ 0x18001D298 (-StartActivity@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXPEBG0I@Z.c)
 *     ?StartActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0_N@Z @ 0x18008F2B4 (-StartActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0.c)
 *     ?StartActivity@Hide@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z @ 0x1801AB8AC (-StartActivity@Hide@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z.c)
 *     ?StartActivity@RemoveKeepAlive@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z @ 0x18065C1A0 (-StartActivity@RemoveKeepAlive@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z.c)
 * Callees:
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800310C4 (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  RTL_SRWLOCK *v1; // rbx
  __int64 v3; // rdi
  const struct _tlgProvider_t *v4; // rax

  v1 = *(RTL_SRWLOCK **)(a1 + 280);
  if ( v1 )
  {
    v1 += 33;
    AcquireSRWLockExclusive(v1);
  }
  v3 = *(_QWORD *)(a1 + 272);
  v4 = SingleViewExperienceLogging::Provider();
  if ( *(_DWORD *)v4 > 5u
    && (*((_QWORD *)v4 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v4 + 3) & 0x200000000000LL) == *((_QWORD *)v4 + 3) )
  {
    EventActivityIdControl(3u, (LPGUID)(v3 + 8));
  }
  else
  {
    *(_OWORD *)(v3 + 8) = 0LL;
  }
  *(_DWORD *)v3 = 1;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
