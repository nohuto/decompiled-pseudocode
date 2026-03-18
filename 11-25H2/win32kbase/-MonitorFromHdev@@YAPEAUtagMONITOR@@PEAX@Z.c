/*
 * XREFs of ?MonitorFromHdev@@YAPEAUtagMONITOR@@PEAX@Z @ 0x1400A245C
 * Callers:
 *     UserGetMonitorDC @ 0x1400A2330 (UserGetMonitorDC.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1400ABDF8 (-zzzUpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     <none>
 */

struct tagMONITOR *__fastcall MonitorFromHdev(void *a1, __int64 a2)
{
  struct tagMONITOR *result; // rax

  for ( result = *(struct tagMONITOR **)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 56968) + 112LL);
        result && *((void **)result + 10) != a1;
        result = (struct tagMONITOR *)*((_QWORD *)result + 7) )
  {
    ;
  }
  return result;
}
