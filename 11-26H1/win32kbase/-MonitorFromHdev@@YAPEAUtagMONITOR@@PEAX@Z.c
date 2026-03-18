/*
 * XREFs of ?MonitorFromHdev@@YAPEAUtagMONITOR@@PEAX@Z @ 0x140036094
 * Callers:
 *     UserGetMonitorDC @ 0x140035F78 (UserGetMonitorDC.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x14007FA6C (-zzzUpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     <none>
 */

struct tagMONITOR *__fastcall MonitorFromHdev(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagMONITOR *result; // rax

  for ( result = *(struct tagMONITOR **)(*(_QWORD *)(W32GetUserSessionState(a1, a2, a3, a4) + 56968) + 104LL);
        result && *((void **)result + 10) != a1;
        result = (struct tagMONITOR *)*((_QWORD *)result + 7) )
  {
    ;
  }
  return result;
}
