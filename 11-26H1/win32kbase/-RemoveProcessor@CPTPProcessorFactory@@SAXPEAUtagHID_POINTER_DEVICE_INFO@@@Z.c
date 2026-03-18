/*
 * XREFs of ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140218E84
 * Callers:
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1401857A0 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x140207AC4 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1CPTPProcessor@@AEAA@XZ @ 0x140218B9C (--1CPTPProcessor@@AEAA@XZ.c)
 */

void __fastcall CPTPProcessorFactory::RemoveProcessor(struct tagHID_POINTER_DEVICE_INFO *a1)
{
  char *v1; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  v1 = (char *)*((_QWORD *)a1 + 133);
  if ( v1 )
  {
    CPTPProcessor::~CPTPProcessor(*((CPTPProcessor **)a1 + 133));
    GreDeleteFastMutex(v1, v3, v4, v5);
    *((_QWORD *)a1 + 133) = 0LL;
  }
}
