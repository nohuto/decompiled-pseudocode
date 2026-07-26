/*
 * XREFs of ?DereferenceWdi@@YAXXZ @ 0x1401455EC
 * Callers:
 *     NdisMRegisterWdiMiniportDriver @ 0x1401459A0 (NdisMRegisterWdiMiniportDriver.c)
 *     NdisMDeregisterWdiMiniportDriver @ 0x14016B370 (NdisMDeregisterWdiMiniportDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Z @ 0x140056EF0 (WPP_RECORDER_SF_Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015C3D0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x14015C400 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x14015C6A0 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 */

void DereferenceWdi(void)
{
  int v0; // edx
  bool v1; // al
  KLockHolder v2; // [rsp+30h] [rbp-28h] BYREF

  KLockThisExclusive::KLockThisExclusive(
    (KLockThisExclusive *)&v2,
    (struct KPushLockBase *)&WPP_MAIN_CB.ActiveThreadCount);
  if ( !--g_WdiRefCount )
  {
    g_WdiLoadState = 3;
    KeClearEvent((PRKEVENT)&WPP_MAIN_CB.SecurityDescriptor);
    v1 = g_WdiLoadedByNdis;
    g_WdiLoadedByNdis = 0;
    if ( v1 )
    {
      KLockHolder::ReleaseExclusive(&v2);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Z(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          1u,
          0xEu,
          (struct _GUID *)&WPP_834e21fbe3523c7dd35af4d888c0fe37_Traceguids,
          &DriverServiceName.Length);
      ZwUnloadDriver((PUNICODE_STRING)&DriverServiceName);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Z(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          1u,
          0xFu,
          (struct _GUID *)&WPP_834e21fbe3523c7dd35af4d888c0fe37_Traceguids,
          &DriverServiceName.Length);
      KLockHolder::AcquireExclusive(&v2);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v0) = 4;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v0,
        1,
        16,
        (struct _GUID *)&WPP_834e21fbe3523c7dd35af4d888c0fe37_Traceguids);
    }
    g_WdiLoadState = 0;
    KeSetEvent((PRKEVENT)&WPP_MAIN_CB.SecurityDescriptor, 0, 0);
  }
  KLockHolder::~KLockHolder(&v2);
}
