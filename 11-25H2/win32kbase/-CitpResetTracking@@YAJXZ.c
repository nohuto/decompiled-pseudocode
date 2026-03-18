/*
 * XREFs of ?CitpResetTracking@@YAJXZ @ 0x140240788
 * Callers:
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@_K@Z @ 0x14023FB58 (-CitEtwEnableCallback@@YAXPEBU_GUID@@_K@Z.c)
 * Callees:
 *     ?CitIsEnabled@@YAEXZ @ 0x14007D3EC (-CitIsEnabled@@YAEXZ.c)
 *     ?CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z @ 0x14007F3CC (-CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x14007F4D8 (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x140132DD8 (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x140156A6C (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x14015E464 (-CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x14019C85C (-CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpCleanup@@YAXXZ @ 0x14023FCA4 (-CitpCleanup@@YAXXZ.c)
 */

__int64 __fastcall CitpResetTracking(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  struct _CIT_IMPACT_CONTEXT *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 i; // rbx
  __int64 v14; // rcx
  char IsStateSeparationEnabled; // al
  const WCHAR *v16; // rdx

  v2 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18912);
  v3 = v2 + 4;
  if ( !CitIsEnabled(v5, v4) )
    goto LABEL_2;
  v10 = *(struct _CIT_IMPACT_CONTEXT **)(v2 + 32);
  CitpContextFlush(v10, (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  for ( i = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 36368); i; i = *(_QWORD *)(i + 360) )
  {
    if ( CitpProcessInfoIsValid(*(struct _CIT_PROCESS **)(i + 912)) )
    {
      *(_DWORD *)(v14 + 40) = 0;
      CitpInteractionSummaryDelete((struct _CIT_INTERACTION_SUMMARY **)(*(_QWORD *)(i + 912) + 32LL));
    }
  }
  CitpContextTrackingDataCleanup(v10);
  *(_WORD *)(v3 + 20) = 0;
  IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
  v16 = L"\\Registry\\Machine\\OSDATA\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT";
  if ( !IsStateSeparationEnabled )
    v16 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT";
  CitpParametersLoad((struct _CIT_PARAMETERS *)v3, v16);
  if ( *(_BYTE *)(v3 + 20) )
  {
    v8 = CitpContextTrackingDataStart(v10, v6);
    if ( v8 >= 0 )
      return 0;
  }
  else
  {
LABEL_2:
    v8 = -1073741637;
  }
  CitpCleanup(v7, v6);
  return (unsigned int)v8;
}
