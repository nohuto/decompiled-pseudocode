/*
 * XREFs of ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x14014B640
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     HMMarkObjectDestroy @ 0x14003E6E0 (HMMarkObjectDestroy.c)
 *     UpdatePointerDeviceSystemMetrics @ 0x14014B6B8 (UpdatePointerDeviceSystemMetrics.c)
 *     HMRemoveHandleForObject @ 0x140161860 (HMRemoveHandleForObject.c)
 *     ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140211590 (-RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 */

char __fastcall CHidInput::OnRIMDeviceDestroyed(
        CHidInput *this,
        struct RawInputManagerDeviceObject *a2,
        struct DEVICEINFO *a3)
{
  char v3; // di
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdx

  v3 = 1;
  if ( (*((_DWORD *)a2 + 64) & 0x80u) != 0 )
  {
    v5 = *((_QWORD *)a2 + 66);
    UpdatePointerDeviceSystemMetrics(a3);
    if ( *(_QWORD *)(v5 + 1064) )
      CPTPProcessorFactory::RemoveProcessor((struct tagHID_POINTER_DEVICE_INFO *)v5);
    HMUnlockObject((int *)v5, v6);
    if ( *(_DWORD *)(v5 + 8) )
    {
      return 0;
    }
    else
    {
      HMMarkObjectDestroy((struct _HEAD *)v5, v7);
      HMRemoveHandleForObject(v5);
    }
  }
  return v3;
}
