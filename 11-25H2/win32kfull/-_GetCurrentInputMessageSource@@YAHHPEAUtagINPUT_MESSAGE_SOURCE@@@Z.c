/*
 * XREFs of ?_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140247BD4
 * Callers:
 *     NtUserGetCIMSSM @ 0x140248D40 (NtUserGetCIMSSM.c)
 *     NtUserGetCurrentInputMessageSource @ 0x140249640 (NtUserGetCurrentInputMessageSource.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall _GetCurrentInputMessageSource(__int64 a1, struct tagINPUT_MESSAGE_SOURCE *a2)
{
  int v3; // esi
  struct tagTHREADINFO *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int *v7; // rcx
  __int64 v8; // rdx
  BOOL v9; // edx
  BOOL v11; // [rsp+20h] [rbp-18h]

  v3 = a1;
  v4 = PtiCurrent(a1, (__int64)a2);
  v7 = (unsigned int *)*((_QWORD *)PtiCurrent(v6, v5) + 65);
  v8 = *v7;
  v11 = (v8 & 0x40000000) != 0;
  v9 = **((int **)PtiCurrent((__int64)v7, v8) + 65) < 0;
  if ( v3 )
  {
    if ( !v9 && (**((_DWORD **)v4 + 61) & 8) == 0 )
      goto LABEL_8;
  }
  else if ( !v11 && (**((_DWORD **)v4 + 61) & 6) == 0 )
  {
LABEL_8:
    *(_QWORD *)a2 = *((_QWORD *)v4 + 172);
    return 1LL;
  }
  SetUnavailableInputSource(a2);
  return 1LL;
}
