/*
 * XREFs of fnHkINLPCWPEXSTRUCT @ 0x1402DD8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxCallNextHookEx@@YA_JH_K_J@Z @ 0x1400C4B00 (-xxxCallNextHookEx@@YA_JH_K_J@Z.c)
 *     PhkNextValid @ 0x1400C5F24 (PhkNextValid.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall fnHkINLPCWPEXSTRUCT(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // r15d
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rax
  __int64 v14; // rdx
  __int64 Valid; // rax
  __int64 v17[2]; // [rsp+30h] [rbp-48h] BYREF
  int v18; // [rsp+40h] [rbp-38h]
  int v19; // [rsp+44h] [rbp-34h]
  __int64 v20; // [rsp+48h] [rbp-30h]
  __int64 v21; // [rsp+50h] [rbp-28h]

  v6 = a2;
  v19 = 0;
  v10 = (_DWORD *)*((_QWORD *)PtiCurrent(a1, a2) + 65);
  if ( a1 && *(struct tagTHREADINFO **)(a1 + 16) != PtiCurrent(v9, v8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 488);
  if ( *((_QWORD *)PtiCurrent(v9, v8) + 91) )
  {
    v13 = PtiCurrent(v12, v11);
    Valid = PhkNextValid(*((_QWORD *)v13 + 91), v14);
    if ( Valid )
    {
      if ( *(_DWORD *)(Valid + 48) != 4 )
        return 0LL;
    }
  }
  if ( a1 )
    v20 = *(_QWORD *)a1;
  else
    v20 = 0LL;
  v18 = v6;
  v17[1] = a3;
  v17[0] = a4;
  v21 = 0LL;
  return xxxCallNextHookEx(0LL, (*v10 >> 4) & 1, (__int64)v17);
}
