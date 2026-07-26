/*
 * XREFs of ?WaitSynchronously@NdisWatchdogState@@QEAAXPEAU_KEVENT@@@Z @ 0x140155280
 * Callers:
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x140155470 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 * Callees:
 *     ndisWaitForExternalDriver @ 0x140155320 (ndisWaitForExternalDriver.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall NdisWatchdogState::WaitSynchronously(NdisWatchdogState *this, struct _KEVENT *a2)
{
  if ( *((_BYTE *)this + 264) )
    goto LABEL_4;
  if ( !(unsigned __int8)ndisWaitForExternalDriver(a2, *((_DWORD *)this + 41)) )
  {
    *((_BYTE *)this + 264) = 1;
LABEL_4:
    ndisWaitForKernelObject(a2);
  }
}
