/*
 * XREFs of ndisFindSomeoneToBlame @ 0x140145154
 * Callers:
 *     ?ReportTimeout@NdisWatchdogState@@QEAAXXZ @ 0x140145094 (-ReportTimeout@NdisWatchdogState@@QEAAXXZ.c)
 *     ndisWaitForExternalDriver @ 0x140155320 (ndisWaitForExternalDriver.c)
 * Callees:
 *     ndisReportTimeoutWaitingForExternalDriver @ 0x1401452A8 (ndisReportTimeoutWaitingForExternalDriver.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015C3D0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall ndisFindSomeoneToBlame(unsigned int a1, unsigned __int64 a2, int a3, void *a4)
{
  unsigned __int64 v4; // r14
  void **v8; // rdi
  _DEVICE_OBJECT *SystemArgument1; // rsi
  unsigned int v10; // ebp
  void **p_DeviceExtension; // rbx
  unsigned int v12; // eax
  KLockHolder v13; // [rsp+20h] [rbp-48h] BYREF

  v4 = a2;
  v8 = 0LL;
  KLockThisExclusive::KLockThisExclusive(
    (KLockThisExclusive *)&v13,
    (struct KPushLockBase *)&WPP_MAIN_CB.Dpc.DeferredContext);
  SystemArgument1 = (_DEVICE_OBJECT *)WPP_MAIN_CB.Dpc.SystemArgument1;
  v10 = g_ndisWatchdogSequenceNumber - a3;
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 == &WPP_MAIN_CB.Dpc.SystemArgument1 )
    goto LABEL_14;
  do
  {
    p_DeviceExtension = &SystemArgument1[-1].DeviceExtension;
    if ( !KeReadStateEvent((PRKEVENT)&SystemArgument1[-1].Dpc.DeferredContext)
      && p_DeviceExtension[29] == a4
      && 10000LL * (MEMORY[0xFFFFF78000000008] - (_QWORD)p_DeviceExtension[28]) >= (unsigned __int64)*((unsigned int *)p_DeviceExtension + 51) >> 2 )
    {
      v12 = g_ndisWatchdogSequenceNumber - *((_DWORD *)p_DeviceExtension + 41);
      if ( v12 >= v10 )
      {
        *((_DWORD *)p_DeviceExtension + 40) = 0;
      }
      else
      {
        if ( v8 )
          *((_DWORD *)v8 + 40) = 0;
        v8 = &SystemArgument1[-1].DeviceExtension;
        v10 = v12;
      }
    }
    SystemArgument1 = *(_DEVICE_OBJECT **)&SystemArgument1->Type;
  }
  while ( SystemArgument1 != (_DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.SystemArgument1 );
  v4 = a2;
  if ( !v8 )
  {
LABEL_14:
    ndisReportTimeoutWaitingForExternalDriver(a1, v4);
  }
  else if ( *((_DWORD *)v8 + 40) )
  {
    ndisReportTimeoutWaitingForExternalDriver(*((unsigned int *)v8 + 48), (unsigned __int64)(v8 + 25));
    *((_DWORD *)v8 + 40) = 0;
  }
  KLockHolder::~KLockHolder(&v13);
}
