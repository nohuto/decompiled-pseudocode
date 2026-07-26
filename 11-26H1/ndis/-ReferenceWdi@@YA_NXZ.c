/*
 * XREFs of ?ReferenceWdi@@YA_NXZ @ 0x140145760
 * Callers:
 *     NdisMRegisterWdiMiniportDriver @ 0x1401459A0 (NdisMRegisterWdiMiniportDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Z @ 0x140056EF0 (WPP_RECORDER_SF_Z.c)
 *     WPP_RECORDER_SF_Zd @ 0x1400C8B38 (WPP_RECORDER_SF_Zd.c)
 *     ?Wait@?$KWaitEventBase@U?$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ @ 0x140138EA0 (-Wait@-$KWaitEventBase@U-$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x14015C400 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x14015C6A0 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 */

char ReferenceWdi(void)
{
  bool v0; // bl
  unsigned int v1; // eax
  NTSTATUS Driver; // eax
  int v3; // edx
  KLockHolder v5; // [rsp+40h] [rbp-20h] BYREF

  v0 = 0;
  v5.m_State = Unlocked;
  v5.m_Lock = (KPushLockBase *)&WPP_MAIN_CB.ActiveThreadCount;
  v5.m_Region.m_Entered = 0;
  while ( 1 )
  {
    KLockHolder::AcquireExclusive(&v5);
    if ( g_WdiLoadState == 3 )
      goto LABEL_6;
    v1 = g_WdiRefCount + 1;
    g_WdiRefCount = v1;
    if ( v1 == 1 )
      break;
    if ( g_WdiLoadState == 2 )
      goto LABEL_19;
    g_WdiRefCount = v1 - 1;
LABEL_6:
    KLockHolder::ReleaseExclusive(&v5);
    KWaitEventBase<wistd::integral_constant<enum _EVENT_TYPE,0>>::Wait(&WPP_MAIN_CB.SecurityDescriptor);
  }
  KeClearEvent((PRKEVENT)&WPP_MAIN_CB.SecurityDescriptor);
  g_WdiLoadState = 1;
  KLockHolder::ReleaseExclusive(&v5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_834e21fbe3523c7dd35af4d888c0fe37_Traceguids,
      &DriverServiceName.Length);
  Driver = ZwLoadDriver((PUNICODE_STRING)&DriverServiceName);
  if ( Driver == -1073741554 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 4;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v3,
        1,
        11,
        (struct _GUID *)&WPP_834e21fbe3523c7dd35af4d888c0fe37_Traceguids);
    }
LABEL_18:
    KLockHolder::AcquireExclusive(&v5);
    g_WdiLoadState = 2;
    KeSetEvent((PRKEVENT)&WPP_MAIN_CB.SecurityDescriptor, 0, 0);
    g_WdiLoadedByNdis = v0;
    KLockHolder::ReleaseExclusive(&v5);
LABEL_19:
    KLockHolder::~KLockHolder(&v5);
    return 1;
  }
  if ( Driver >= 0 )
  {
    v0 = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Z(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0xDu,
        (struct _GUID *)&WPP_834e21fbe3523c7dd35af4d888c0fe37_Traceguids,
        &DriverServiceName.Length);
    goto LABEL_18;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Zd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      1u,
      0xCu,
      (struct _GUID *)&WPP_834e21fbe3523c7dd35af4d888c0fe37_Traceguids,
      &DriverServiceName.Length,
      Driver);
  KLockHolder::AcquireExclusive(&v5);
  --g_WdiRefCount;
  g_WdiLoadState = 0;
  KeSetEvent((PRKEVENT)&WPP_MAIN_CB.SecurityDescriptor, 0, 0);
  KLockHolder::ReleaseExclusive(&v5);
  KLockHolder::~KLockHolder(&v5);
  return 0;
}
