/*
 * XREFs of CitProcessCallout @ 0x14007F1B4
 * Callers:
 *     DestroyProcessInfo @ 0x140162224 (DestroyProcessInfo.c)
 *     xxxInitProcessInfo @ 0x140165DD4 (xxxInitProcessInfo.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x14007BDA0 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ?CitIsEnabled@@YAEXZ @ 0x14007D3EC (-CitIsEnabled@@YAEXZ.c)
 *     ?CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z @ 0x14007F3CC (-CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpProcessInfoCleanup@@YAXPEAU_CIT_PROCESS@@@Z @ 0x14007F3F0 (-CitpProcessInfoCleanup@@YAXPEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpClearDelegation@@YAXPEAU_CIT_PROCESS@@@Z @ 0x14007F53C (-CitpClearDelegation@@YAXPEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x140132ACC (-CitpInitialize@@YAJPEBG@Z.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x140132BB0 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpGetInteractiveUserLUID@@YA?AU_LUID@@XZ @ 0x14014FEF0 (-CitpGetInteractiveUserLUID@@YA-AU_LUID@@XZ.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x140156A6C (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpCleanup@@YAXXZ @ 0x14023FCA4 (-CitpCleanup@@YAXXZ.c)
 */

void __fastcall CitProcessCallout(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  struct _CIT_PROCESS *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  char IsStateSeparationEnabled; // al
  const WCHAR *v18; // rcx
  __int64 v19; // rbp
  struct _LUID InteractiveUserLUID; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  v6 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18912);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 912) = 52976LL;
    if ( *(_QWORD *)(W32GetUserSessionState(v5, v4) + 36368) )
    {
      v8 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 36368);
      if ( !*(_QWORD *)(v8 + 360) && !*(_BYTE *)v6 )
      {
        IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
        v18 = L"\\Registry\\Machine\\OSDATA\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT";
        if ( !IsStateSeparationEnabled )
          v18 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT";
        CitpInitialize(v18);
      }
    }
    if ( CitIsEnabled(v8, v7) )
    {
      v9 = *(_QWORD *)(v6 + 32);
      if ( !*(_QWORD *)(v9 + 96) )
      {
        InteractiveUserLUID = CitpGetInteractiveUserLUID();
        if ( InteractiveUserLUID )
          CitpContextUserLogon((struct _CIT_IMPACT_CONTEXT *)v9, &InteractiveUserLUID);
      }
    }
  }
  else
  {
    v10 = *(struct _CIT_PROCESS **)(a1 + 912);
    if ( CitpProcessInfoIsValid(v10) )
    {
      if ( CitIsEnabled(v12, v11) )
      {
        v19 = *(_QWORD *)(v6 + 32);
        if ( a1 == *(_QWORD *)(v19 + 120) )
          CitpSetForegroundProcess(
            *(struct _CIT_IMPACT_CONTEXT **)(v6 + 32),
            (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
            0LL,
            0LL);
        if ( a1 == *(_QWORD *)(v19 + 128) )
          *(_QWORD *)(v19 + 128) = 0LL;
        CitpClearDelegation(v10);
      }
      CitpProcessInfoCleanup(v10);
      GreDeleteFastMutex((char *)v10);
    }
    *(_QWORD *)(a1 + 912) = 52977LL;
    if ( *(_QWORD *)(W32GetUserSessionState(v12, v11) + 36368) )
    {
      v16 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 36368);
      if ( !*(_QWORD *)(v16 + 360) )
      {
        if ( CitIsEnabled(v16, v15) )
          CitpContextFlush(
            *(struct _CIT_IMPACT_CONTEXT **)(v6 + 32),
            (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        CitpCleanup();
      }
    }
  }
}
