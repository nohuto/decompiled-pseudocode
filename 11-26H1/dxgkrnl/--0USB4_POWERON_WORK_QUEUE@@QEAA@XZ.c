/*
 * XREFs of ??0USB4_POWERON_WORK_QUEUE@@QEAA@XZ @ 0x1402774B8
 * Callers:
 *     ??0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x140005A40 (--0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z.c)
 *     ?CreateStaticUSB4Class@MONITOR_MGR@@SAJXZ @ 0x140273A04 (-CreateStaticUSB4Class@MONITOR_MGR@@SAJXZ.c)
 * Callees:
 *     <none>
 */

USB4_POWERON_WORK_QUEUE *__fastcall USB4_POWERON_WORK_QUEUE::USB4_POWERON_WORK_QUEUE(USB4_POWERON_WORK_QUEUE *this)
{
  *(_DWORD *)this = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = -1;
  *((_DWORD *)this + 12) = 1;
  *((_BYTE *)this + 80) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  KeInitializeEvent((PRKEVENT)((char *)this + 56), NotificationEvent, 1u);
  return this;
}
