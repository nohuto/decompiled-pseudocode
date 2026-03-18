/*
 * XREFs of UserEnableConsoleMode @ 0x14023F388
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1400AEF0C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x14017DD8C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UserEnableConsoleMode(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 (__fastcall *v3)(_QWORD); // rax

  v2 = a1;
  v3 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 2176LL);
  if ( v3 )
    return v3(v2);
  else
    return 3221225659LL;
}
