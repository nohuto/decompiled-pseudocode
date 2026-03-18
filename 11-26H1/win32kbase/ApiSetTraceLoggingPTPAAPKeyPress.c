/*
 * XREFs of ApiSetTraceLoggingPTPAAPKeyPress @ 0x140147AC0
 * Callers:
 *     ?OnKeyPress@CPTPProcessor@@CAX_N@Z @ 0x140147A44 (-OnKeyPress@CPTPProcessor@@CAX_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetTraceLoggingPTPAAPKeyPress(__int64 a1))(void)
{
  unsigned int v1; // ebx
  __int64 (*result)(void); // rax
  __int64 v3; // rcx

  v1 = a1;
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 6744LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 48) + 6752LL);
      if ( result )
        return (__int64 (*)(void))((__int64 (__fastcall *)(_QWORD))result)(v1);
    }
  }
  return result;
}
