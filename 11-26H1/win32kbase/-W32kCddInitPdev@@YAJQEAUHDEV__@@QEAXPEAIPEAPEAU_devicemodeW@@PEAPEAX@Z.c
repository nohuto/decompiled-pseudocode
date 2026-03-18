/*
 * XREFs of ?W32kCddInitPdev@@YAJQEAUHDEV__@@QEAXPEAIPEAPEAU_devicemodeW@@PEAPEAX@Z @ 0x140197660
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGraphicsDeviceFromDevObjHandle@@YAPEAUtagGRAPHICS_DEVICE@@QEAX@Z @ 0x14002B34C (-GetGraphicsDeviceFromDevObjHandle@@YAPEAUtagGRAPHICS_DEVICE@@QEAX@Z.c)
 */

__int64 __fastcall W32kCddInitPdev(HDEV a1, void *const a2, unsigned int *a3, struct _devicemodeW **a4, void **a5)
{
  struct tagGRAPHICS_DEVICE *GraphicsDeviceFromDevObjHandle; // rax

  if ( !a1 )
    return 3221225485LL;
  GraphicsDeviceFromDevObjHandle = GetGraphicsDeviceFromDevObjHandle(a2);
  if ( !GraphicsDeviceFromDevObjHandle )
    return 3221225485LL;
  *a3 = *((_DWORD *)GraphicsDeviceFromDevObjHandle + 47);
  *a4 = (struct _devicemodeW *)*((_QWORD *)GraphicsDeviceFromDevObjHandle + 22);
  *a5 = &gDxgkWin32kEngInterface;
  return 0LL;
}
