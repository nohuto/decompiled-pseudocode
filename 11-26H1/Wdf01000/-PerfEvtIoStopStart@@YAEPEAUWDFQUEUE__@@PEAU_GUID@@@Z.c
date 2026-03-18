/*
 * XREFs of ?PerfEvtIoStopStart@@YAEPEAUWDFQUEUE__@@PEAU_GUID@@@Z @ 0x14008FF24
 * Callers:
 *     VfEvtIoStop @ 0x1400E48E0 (VfEvtIoStop.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140010970 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x1400900A4 (McTemplateK0pp_EtwWriteTransfer.c)
 */

char __fastcall PerfEvtIoStopStart(unsigned __int64 Queue, _GUID *pActivityId)
{
  unsigned __int16 *v2; // r8
  char v3; // bl
  __int64 v5; // rsi
  FxDeviceBase *m_DeviceBase; // rdi
  unsigned __int16 m_ObjectSize; // r14
  const void *v8; // rsi
  _MCGEN_TRACE_CONTEXT *v9; // rcx
  const void *Context; // rdi
  FxIoQueue *pQueue; // [rsp+50h] [rbp+8h] BYREF

  pQueue = 0LL;
  v2 = (unsigned __int16 *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
  v3 = 1;
  if ( (Queue & 1) != 0 )
    v2 = (unsigned __int16 *)((char *)v2 - *v2);
  v5 = *((_QWORD *)v2 + 2);
  if ( (*(_DWORD *)(v5 + 412) & 0xF00000) == 0 )
    return 0;
  FxObjectHandleGetPtr(*((_FX_DRIVER_GLOBALS **)v2 + 2), Queue, 0x1003u, (void **)&pQueue);
  m_DeviceBase = pQueue->m_DeviceBase;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v8 = *(const void **)(*(_QWORD *)(v5 + 80) + 176LL);
  EtwActivityIdControl(3u, pActivityId);
  if ( ((__int64)WPP_GLOBAL_WDF_Control.DeviceExtension & 1) != 0 )
  {
    Context = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      Context = 0LL;
    McTemplateK0pp_EtwWriteTransfer(v9, &FX_EVTIOSTOP_START, pActivityId, v8, Context);
  }
  return v3;
}
