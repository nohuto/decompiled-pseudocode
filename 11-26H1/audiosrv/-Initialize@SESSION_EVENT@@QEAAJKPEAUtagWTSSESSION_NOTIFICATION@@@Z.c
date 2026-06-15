/*
 * XREFs of ?Initialize@SESSION_EVENT@@QEAAJKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18006EA38
 * Callers:
 *     ?PostSessionEvent@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18006E9A8 (-PostSessionEvent@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 */

__int64 __fastcall SESSION_EVENT::Initialize(SESSION_EVENT *this, int a2, struct tagWTSSESSION_NOTIFICATION *a3)
{
  unsigned int v3; // ebx
  void *v6; // rax

  v3 = 0;
  *((_DWORD *)this + 2) = a2;
  if ( a3 )
  {
    v6 = malloc(a3->cbSize);
    *((_QWORD *)this + 2) = v6;
    if ( v6 )
    {
      memcpy_0(v6, a3, a3->cbSize);
    }
    else
    {
      v3 = -2147024882;
      AudSrvTraceLoggingErrorHelper("SESSION_EVENT::Initialize", 61, -2147024882);
    }
  }
  return v3;
}
