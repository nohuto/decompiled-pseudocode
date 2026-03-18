/*
 * XREFs of ?CitpResetTracking@@YAJXZ @ 0x14024A3B8
 * Callers:
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@_K@Z @ 0x140196CFC (-CitEtwEnableCallback@@YAXPEBU_GUID@@_K@Z.c)
 * Callees:
 *     ?CitIsEnabled@@YAEXZ @ 0x1400D598C (-CitIsEnabled@@YAEXZ.c)
 *     ?CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z @ 0x1400D5DD4 (-CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1400D7B64 (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1400EB994 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x14016BC30 (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     ?CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x14016BF30 (-CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1401B7AF8 (-CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpCleanup@@YAXXZ @ 0x140249A40 (-CitpCleanup@@YAXXZ.c)
 */

__int64 __fastcall CitpResetTracking(int a1, int a2, int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // ebx
  struct _CIT_IMPACT_CONTEXT *v13; // rsi
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // rdx
  __int64 i; // rbx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  char IsStateSeparationEnabled; // al
  const WCHAR *v23; // rdx

  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 18952);
  v4 = v3 + 4;
  if ( !CitIsEnabled(v6, v5, v7) )
    goto LABEL_2;
  v13 = *(struct _CIT_IMPACT_CONTEXT **)(v3 + 32);
  CitpContextFlush(v13, (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  for ( i = *(_QWORD *)(W32GetUserSessionState(v15, v14, v16) + 36400); i; i = *(_QWORD *)(i + 368) )
  {
    if ( CitpProcessInfoIsValid(*(struct _CIT_PROCESS **)(i + 912)) )
    {
      *(_DWORD *)(v21 + 40) = 0;
      CitpInteractionSummaryDelete((struct _CIT_INTERACTION_SUMMARY **)(*(_QWORD *)(i + 912) + 32LL), v17, v19, v20);
    }
  }
  CitpContextTrackingDataCleanup(v13, v17, v19, v20);
  *(_WORD *)(v4 + 20) = 0;
  IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
  v23 = L"\\Registry\\Machine\\OSDATA\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT";
  if ( !IsStateSeparationEnabled )
    v23 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT";
  CitpParametersLoad((struct _CIT_PARAMETERS *)v4, v23);
  if ( *(_BYTE *)(v4 + 20) )
  {
    v11 = CitpContextTrackingDataStart(v13, v8, v10);
    if ( v11 >= 0 )
      return 0;
  }
  else
  {
LABEL_2:
    v11 = -1073741637;
  }
  CitpCleanup(v9, v8, v10);
  return (unsigned int)v11;
}
