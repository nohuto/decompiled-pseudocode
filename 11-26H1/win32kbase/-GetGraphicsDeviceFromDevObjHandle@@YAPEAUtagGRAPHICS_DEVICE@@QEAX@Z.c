/*
 * XREFs of ?GetGraphicsDeviceFromDevObjHandle@@YAPEAUtagGRAPHICS_DEVICE@@QEAX@Z @ 0x14002B34C
 * Callers:
 *     EngQueryW32kCddInterface @ 0x14002B170 (EngQueryW32kCddInterface.c)
 *     ?W32kCddInitPdev@@YAJQEAUHDEV__@@QEAXPEAIPEAPEAU_devicemodeW@@PEAPEAX@Z @ 0x140197660 (-W32kCddInitPdev@@YAJQEAUHDEV__@@QEAXPEAIPEAPEAU_devicemodeW@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

struct tagGRAPHICS_DEVICE *__fastcall GetGraphicsDeviceFromDevObjHandle(void *const a1)
{
  struct tagGRAPHICS_DEVICE *result; // rax

  for ( result = *(struct tagGRAPHICS_DEVICE **)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 1184LL);
        result && *((void *const *)result + 17) != a1;
        result = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)result + 16) )
  {
    ;
  }
  return result;
}
