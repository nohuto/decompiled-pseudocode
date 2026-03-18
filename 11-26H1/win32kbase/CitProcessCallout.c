/*
 * XREFs of CitProcessCallout @ 0x1400D55F0
 * Callers:
 *     DestroyProcessInfo @ 0x1401CA2F4 (DestroyProcessInfo.c)
 *     xxxInitProcessInfo @ 0x1401CB0D4 (xxxInitProcessInfo.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?CitIsEnabled@@YAEXZ @ 0x1400D598C (-CitIsEnabled@@YAEXZ.c)
 *     ?CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z @ 0x1400D5DD4 (-CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1400D5DF8 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ?CitpProcessInfoCleanup@@YAXPEAU_CIT_PROCESS@@@Z @ 0x1400D7A74 (-CitpProcessInfoCleanup@@YAXPEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1400EB994 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x14016B920 (-CitpInitialize@@YAJPEBG@Z.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x14016BA00 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpGetInteractiveUserLUID@@YA?AU_LUID@@XZ @ 0x14018A160 (-CitpGetInteractiveUserLUID@@YA-AU_LUID@@XZ.c)
 *     ?CitpClearDelegation@@YAXPEAU_CIT_PROCESS@@@Z @ 0x1401B3368 (-CitpClearDelegation@@YAXPEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpCleanup@@YAXXZ @ 0x140249A40 (-CitpCleanup@@YAXXZ.c)
 */

void __fastcall CitProcessCallout(__int64 a1, int a2, int a3)
{
  char v3; // bl
  int v5; // edx
  int v6; // ecx
  __int64 v7; // rsi
  int v8; // r8d
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  __int64 v12; // rbx
  struct _CIT_PROCESS *v13; // rbx
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  char IsStateSeparationEnabled; // al
  const WCHAR *v21; // rcx
  __int64 v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  struct _LUID InteractiveUserLUID; // [rsp+50h] [rbp+18h] BYREF

  v3 = a2;
  v7 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 18952);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 912) = 52976LL;
    if ( *(_QWORD *)(W32GetUserSessionState(v6, v5, v8) + 36400)
      && !*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9, v11) + 36400) + 368LL)
      && !*(_BYTE *)v7 )
    {
      IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
      v21 = L"\\Registry\\Machine\\OSDATA\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT";
      if ( !IsStateSeparationEnabled )
        v21 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT";
      CitpInitialize(v21);
    }
    if ( CitIsEnabled() )
    {
      v12 = *(_QWORD *)(v7 + 32);
      if ( !*(_QWORD *)(v12 + 96) )
      {
        InteractiveUserLUID = CitpGetInteractiveUserLUID();
        if ( InteractiveUserLUID )
          CitpContextUserLogon((struct _CIT_IMPACT_CONTEXT *)v12, &InteractiveUserLUID);
      }
    }
  }
  else
  {
    v13 = *(struct _CIT_PROCESS **)(a1 + 912);
    if ( CitpProcessInfoIsValid(v13) )
    {
      if ( CitIsEnabled() )
      {
        v22 = *(_QWORD *)(v7 + 32);
        if ( a1 == *(_QWORD *)(v22 + 120) )
          CitpSetForegroundProcess(
            *(struct _CIT_IMPACT_CONTEXT **)(v7 + 32),
            (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
            0LL,
            0LL);
        if ( a1 == *(_QWORD *)(v22 + 128) )
          *(_QWORD *)(v22 + 128) = 0LL;
        CitpClearDelegation(v13);
      }
      CitpProcessInfoCleanup(v13);
      GreDeleteFastMutex((char *)v13, v23, v24, v25);
    }
    *(_QWORD *)(a1 + 912) = 52977LL;
    if ( *(_QWORD *)(W32GetUserSessionState(v15, v14, v16) + 36400)
      && !*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v18, v17, v19) + 36400) + 368LL) )
    {
      if ( CitIsEnabled() )
        CitpContextFlush(
          *(struct _CIT_IMPACT_CONTEXT **)(v7 + 32),
          (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
      CitpCleanup();
    }
  }
}
