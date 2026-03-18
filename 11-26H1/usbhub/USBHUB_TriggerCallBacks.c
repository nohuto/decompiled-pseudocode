/*
 * XREFs of USBHUB_TriggerCallBacks @ 0x14004F3E4
 * Callers:
 *     UsbhDecPdoIoCount @ 0x140007EA0 (UsbhDecPdoIoCount.c)
 *     UsbhFdoReturnPortStatus @ 0x140017DD0 (UsbhFdoReturnPortStatus.c)
 *     UsbhFdoUrbPdoFilter @ 0x1400187E0 (UsbhFdoUrbPdoFilter.c)
 *     UsbhPdoInternalDeviceControl @ 0x140018B20 (UsbhPdoInternalDeviceControl.c)
 *     UsbhTrapFatal_Dbg @ 0x140039F64 (UsbhTrapFatal_Dbg.c)
 *     UsbhTrapBadIrp @ 0x14003A2E0 (UsbhTrapBadIrp.c)
 *     UsbhTrapFatalTimeout_x9f @ 0x14003E084 (UsbhTrapFatalTimeout_x9f.c)
 * Callees:
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall USBHUB_TriggerCallBacks(__int64 a1))(_QWORD)
{
  _DWORD *v1; // rdi
  void *v2; // rbx
  int v3; // edx
  _DWORD *v4; // rax
  void *v5; // rbx
  __int64 (__fastcall *result)(_QWORD); // rax

  v1 = 0LL;
  v2 = 0LL;
  v3 = **(_DWORD **)(a1 + 64);
  if ( v3 == 541218120 )
  {
    v2 = (void *)a1;
    goto LABEL_6;
  }
  if ( v3 == 1329877064 )
  {
    v4 = PdoExt(a1);
    v2 = (void *)*((_QWORD *)v4 + 148);
    if ( v2 )
    {
      a1 = *((_QWORD *)v4 + 148);
LABEL_6:
      v1 = FdoExt(a1);
    }
  }
  ObfReferenceObject(v2);
  v5 = (void *)_InterlockedExchange64((volatile __int64 *)&WPP_MAIN_CB.Queue.ListEntry.Flink, (__int64)v2);
  result = (__int64 (__fastcall *)(_QWORD))*((_QWORD *)v1 + 585);
  if ( result )
    result = (__int64 (__fastcall *)(_QWORD))result(*((_QWORD *)v1 + 582));
  if ( v5 )
    return (__int64 (__fastcall *)(_QWORD))ObfDereferenceObject(v5);
  return result;
}
