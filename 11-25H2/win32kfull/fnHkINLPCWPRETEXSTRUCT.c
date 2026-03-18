/*
 * XREFs of fnHkINLPCWPRETEXSTRUCT @ 0x1402DDA00
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxCallNextHookEx@@YA_JH_K_J@Z @ 0x1400C4B00 (-xxxCallNextHookEx@@YA_JH_K_J@Z.c)
 *     PhkNextValid @ 0x1400C5F24 (PhkNextValid.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall fnHkINLPCWPRETEXSTRUCT(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // r15d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rax
  __int64 v14; // rdx
  __int64 Valid; // rax
  __int64 v17[3]; // [rsp+30h] [rbp-48h] BYREF
  int v18; // [rsp+48h] [rbp-30h]
  int v19; // [rsp+4Ch] [rbp-2Ch]
  __int64 v20; // [rsp+50h] [rbp-28h]
  __int64 v21; // [rsp+58h] [rbp-20h]

  v6 = a2;
  v17[0] = 0LL;
  v19 = 0;
  v10 = *((_QWORD *)PtiCurrent(a1, a2) + 65);
  if ( a1 && *(struct tagTHREADINFO **)(a1 + 16) != PtiCurrent(v9, v8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 529);
  if ( *((_QWORD *)PtiCurrent(v9, v8) + 91) )
  {
    v13 = PtiCurrent(v12, v11);
    Valid = PhkNextValid(*((_QWORD *)v13 + 91), v14);
    if ( Valid )
    {
      if ( *(_DWORD *)(Valid + 48) != 12 )
        return 0LL;
    }
  }
  if ( a1 )
    v20 = *(_QWORD *)a1;
  else
    v20 = 0LL;
  v18 = v6;
  v17[2] = a3;
  v17[1] = a4;
  v21 = 0LL;
  v17[0] = *(_QWORD *)(v10 + 104);
  return xxxCallNextHookEx(0LL, (*(_DWORD *)v10 >> 4) & 1, (__int64)v17);
}
