/*
 * XREFs of ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1401857A0
 * Callers:
 *     <none>
 * Callees:
 *     HMMarkObjectDestroy @ 0x140048740 (HMMarkObjectDestroy.c)
 *     HMUnlockObject @ 0x14009B9C0 (HMUnlockObject.c)
 *     UpdatePointerDeviceSystemMetrics @ 0x140185818 (UpdatePointerDeviceSystemMetrics.c)
 *     HMRemoveHandleForObject @ 0x1401BCC80 (HMRemoveHandleForObject.c)
 *     ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140218E84 (-RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 */

char __fastcall CHidInput::OnRIMDeviceDestroyed(
        CHidInput *this,
        struct RawInputManagerDeviceObject *a2,
        struct DEVICEINFO *a3)
{
  char v3; // di
  __int64 v5; // rbx
  int v6; // edx
  int v7; // r8d
  int v8; // edx
  int v9; // r8d

  v3 = 1;
  if ( (*((_DWORD *)a2 + 64) & 0x80u) != 0 )
  {
    v5 = *((_QWORD *)a2 + 66);
    UpdatePointerDeviceSystemMetrics(a3);
    if ( *(_QWORD *)(v5 + 1064) )
      CPTPProcessorFactory::RemoveProcessor((struct tagHID_POINTER_DEVICE_INFO *)v5);
    HMUnlockObject(v5, v6, v7);
    if ( *(_DWORD *)(v5 + 8) )
    {
      return 0;
    }
    else
    {
      HMMarkObjectDestroy((struct _HEAD *)v5, v8, v9);
      HMRemoveHandleForObject(v5);
    }
  }
  return v3;
}
