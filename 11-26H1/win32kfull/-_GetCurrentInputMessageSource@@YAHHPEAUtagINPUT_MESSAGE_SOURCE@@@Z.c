/*
 * XREFs of ?_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14022E048
 * Callers:
 *     NtUserGetCurrentInputMessageSource @ 0x14021E140 (NtUserGetCurrentInputMessageSource.c)
 *     NtUserGetCIMSSM @ 0x1402B2450 (NtUserGetCIMSSM.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall _GetCurrentInputMessageSource(__int64 a1, struct tagINPUT_MESSAGE_SOURCE *a2)
{
  int v3; // esi
  struct tagTHREADINFO *v4; // rbx
  __int64 v5; // rcx
  _DWORD *v6; // rcx
  BOOL v7; // r14d
  BOOL v8; // edx

  v3 = a1;
  v4 = PtiCurrent(a1);
  v6 = (_DWORD *)*((_QWORD *)PtiCurrent(v5) + 64);
  v7 = (*v6 & 0x40000000) != 0;
  v8 = **((int **)PtiCurrent((__int64)v6) + 64) < 0;
  if ( v3 )
  {
    if ( !v8 && (**((_DWORD **)v4 + 60) & 8) == 0 )
      goto LABEL_6;
  }
  else if ( !v7 && (**((_DWORD **)v4 + 60) & 6) == 0 )
  {
LABEL_6:
    *(_QWORD *)a2 = *((_QWORD *)v4 + 172);
    return 1LL;
  }
  SetUnavailableInputSource(a2);
  return 1LL;
}
