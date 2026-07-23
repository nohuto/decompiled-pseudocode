/*
 * XREFs of WdipSemLoadScenarioTable @ 0x140826454
 * Callers:
 *     WdipSemCleanStart @ 0x140825700 (WdipSemCleanStart.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlVerifyVersionInfo @ 0x14048F510 (RtlVerifyVersionInfo.c)
 *     VerSetConditionMask @ 0x1404A8A90 (VerSetConditionMask.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwEnumerateKey @ 0x140728600 (ZwEnumerateKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     WdipSemAddScenarioToTable @ 0x140825640 (WdipSemAddScenarioToTable.c)
 *     WdipSemLoadNextScenario @ 0x140825F5C (WdipSemLoadNextScenario.c)
 *     WdipSemRollBackProviderTable @ 0x140826A64 (WdipSemRollBackProviderTable.c)
 *     WdipSemFreeScenario @ 0x14082703C (WdipSemFreeScenario.c)
 *     WdipSemWriteMisconfigEvent @ 0x140827514 (WdipSemWriteMisconfigEvent.c)
 *     WdipSemWriteScenarioLimitExceededEvent @ 0x14082760C (WdipSemWriteScenarioLimitExceededEvent.c)
 *     WdipSemOpenRegistryKey @ 0x140827820 (WdipSemOpenRegistryKey.c)
 *     WdipSemQueryValueFromRegistry @ 0x1408278B0 (WdipSemQueryValueFromRegistry.c)
 *     WdipSemEnableAllProviders @ 0x140827A80 (WdipSemEnableAllProviders.c)
 *     WdipSemUpdateProviderEntryForEvent @ 0x140827C7C (WdipSemUpdateProviderEntryForEvent.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     WdipSemFastAllocate @ 0x140AD7DB0 (WdipSemFastAllocate.c)
 *     WdipSemUpdateProviderTableWithEvent @ 0x140B630F4 (WdipSemUpdateProviderTableWithEvent.c)
 */

__int64 WdipSemLoadScenarioTable()
{
  __int64 v0; // rbx
  ULONGLONG v1; // r13
  int v2; // edi
  ULONG v3; // r12d
  NTSTATUS v4; // eax
  unsigned int i; // r8d
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  bool v8; // r15
  ULONG v9; // r14d
  void *v10; // rax
  int NextScenario; // eax
  unsigned int v12; // edi
  unsigned int v13; // esi
  __int64 v14; // rdx
  __int64 j; // rdi
  __int64 v16; // rdi
  unsigned int v17; // eax
  bool v18; // si
  __int64 v19; // rdx
  unsigned int v20; // eax
  __int64 k; // rdi
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE v24; // [rsp+40h] [rbp-C8h]
  HANDLE Handle; // [rsp+48h] [rbp-C0h]
  int v26; // [rsp+50h] [rbp-B8h] BYREF
  int v27; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v28; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A8h]
  HANDLE v30; // [rsp+68h] [rbp-A0h]
  UNICODE_STRING v31; // [rsp+70h] [rbp-98h] BYREF
  _OSVERSIONINFOEXW VersionInfo; // [rsp+88h] [rbp-80h] BYREF
  GUID Guid; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE KeyInformation[12]; // [rsp+1B8h] [rbp+B0h] BYREF
  unsigned int v35; // [rsp+1C4h] [rbp+BCh]
  WCHAR SourceString[68]; // [rsp+1C8h] [rbp+C0h] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  v24 = 0LL;
  v30 = 0LL;
  v0 = 0LL;
  ResultLength[0] = 0;
  v26 = 0;
  v27 = 0;
  v31 = 0LL;
  Guid = 0LL;
  memset_0(&VersionInfo, 0, sizeof(VersionInfo));
  v1 = 0LL;
  v2 = WdipSemOpenRegistryKey(L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\Control\\WDI\\Scenarios");
  if ( v2 >= 0 )
  {
    v3 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_3:
        if ( Handle )
        {
          ZwClose(Handle);
          Handle = 0LL;
        }
        if ( v24 )
        {
          ZwClose(v24);
          v24 = 0LL;
        }
        if ( v30 )
        {
          ZwClose(v30);
          v30 = 0LL;
        }
        memset_0(KeyInformation, 0, 0x98uLL);
        v4 = ZwEnumerateKey(KeyHandle, v3++, KeyBasicInformation, KeyInformation, 0x96u, ResultLength);
        if ( v4 == -2147483622 )
        {
          v2 = 0;
          WdipSemEnableAllProviders();
          goto LABEL_59;
        }
        if ( v4 >= 0 )
        {
          if ( v35 >= 0x80 )
          {
            v2 = -2147483643;
            goto LABEL_59;
          }
          SourceString[(unsigned __int64)v35 >> 1] = 0;
          RtlInitUnicodeString(&v31, SourceString);
          if ( RtlGUIDFromString(&v31, &Guid) >= 0 )
          {
            if ( stru_140F042A0.Timer.Header.WaitListHead.Blink )
            {
              for ( i = 0; i < LODWORD(stru_140F042A0.Timer.Header.WaitListHead.Blink[64].Flink); ++i )
              {
                v6 = i;
                v7 = *(_QWORD *)&Guid.Data1 - (unsigned __int64)stru_140F042A0.Timer.Header.WaitListHead.Blink[v6].Flink;
                if ( *(struct _LIST_ENTRY **)&Guid.Data1 == stru_140F042A0.Timer.Header.WaitListHead.Blink[v6].Flink )
                  v7 = *(_QWORD *)Guid.Data4
                     - (unsigned __int64)stru_140F042A0.Timer.Header.WaitListHead.Blink[v6].Blink;
                if ( !v7 )
                  goto LABEL_3;
              }
            }
            if ( (int)WdipSemOpenRegistryKey(SourceString) >= 0 )
              break;
          }
        }
      }
      LODWORD(v28) = 1;
      v8 = 1;
      if ( (int)WdipSemOpenRegistryKey(L"Config") < 0 )
        goto LABEL_29;
      if ( (int)WdipSemQueryValueFromRegistry(v24, &v26, (__int64)ResultLength) < 0 || v26 )
      {
        if ( (int)WdipSemQueryValueFromRegistry(v24, &v27, (__int64)ResultLength) < 0
          || (v27 & 1) == 0
          || (memset_0(&VersionInfo, 0, sizeof(VersionInfo)),
              VersionInfo.wSuiteMask = 16,
              v1 = VerSetConditionMask(v1, 0x40u, 6u),
              RtlVerifyVersionInfo(&VersionInfo, 0x40u, v1) < 0) )
        {
          if ( (int)WdipSemQueryValueFromRegistry(v24, &v28, (__int64)ResultLength) >= 0 )
            v8 = (_DWORD)v28 != 0;
LABEL_29:
          if ( (int)WdipSemOpenRegistryKey(L"Instrumentation") >= 0 )
          {
            v9 = 0;
            while ( 1 )
            {
              while ( 1 )
              {
                if ( v0 )
                  WdipSemFreeScenario(v0);
                v10 = (void *)WdipSemFastAllocate(1LL, 1184LL);
                v0 = (__int64)v10;
                if ( !v10 )
                {
                  v2 = -1073741670;
                  goto LABEL_59;
                }
                memset_0(v10, 0, 0x4A0uLL);
                *(_BYTE *)(v0 + 1176) = v8;
                NextScenario = WdipSemLoadNextScenario(v30, v9++, (GUID *)v0);
                v12 = NextScenario;
                if ( NextScenario == -2147483622 )
                  goto LABEL_3;
                if ( NextScenario >= 0 )
                  break;
                if ( EtwEventEnabled((REGHANDLE)stru_140F06A28.Header.WaitListHead.Flink, &WDI_SEM_EVENT_INIT_MISCONFIG) )
                  WdipSemWriteMisconfigEvent(v0, *(unsigned __int16 *)(v0 + 16), v12);
              }
              if ( LODWORD(stru_140F042A0.SchedulerSharedSystemSlot) >= 0x40 )
                break;
              v13 = dword_140F06A20;
              if ( (int)WdipSemUpdateProviderTableWithEvent(v0) < 0 )
                goto LABEL_49;
              for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v0 + 48); j = (unsigned int)(j + 1) )
              {
                if ( (int)WdipSemUpdateProviderTableWithEvent(*(_QWORD *)(v0 + 8 * j + 56)) < 0 )
                  goto LABEL_49;
              }
              v16 = 0LL;
              if ( *(_DWORD *)(v0 + 52) )
              {
                while ( (int)WdipSemUpdateProviderTableWithEvent(*(_QWORD *)(v0 + 8 * v16 + 1048)) >= 0 )
                {
                  v17 = *(_DWORD *)(v0 + 52);
                  v16 = (unsigned int)(v16 + 1);
                  if ( (unsigned int)v16 >= v17 )
                  {
                    if ( !v17 || (int)WdipSemAddScenarioToTable(v0) >= 0 )
                      goto LABEL_50;
                    break;
                  }
                }
LABEL_49:
                WdipSemRollBackProviderTable(v13);
              }
              else
              {
LABEL_50:
                v18 = *(_DWORD *)(v0 + 52) != 0;
                LOBYTE(v14) = v18;
                WdipSemUpdateProviderEntryForEvent(v0, v14);
                v20 = *(_DWORD *)(v0 + 52);
                for ( k = 0LL; (unsigned int)k < v20; k = (unsigned int)(k + 1) )
                {
                  LOBYTE(v19) = v18;
                  WdipSemUpdateProviderEntryForEvent(*(_QWORD *)(v0 + 8 * k + 1048), v19);
                  v20 = *(_DWORD *)(v0 + 52);
                }
                if ( v20 )
                  v0 = 0LL;
              }
            }
            if ( EtwEventEnabled((REGHANDLE)stru_140F06A28.Header.WaitListHead.Flink, &WDI_SEM_EVENT_INIT_SCENARIO_MAX) )
              WdipSemWriteScenarioLimitExceededEvent(
                &WDI_SEM_EVENT_INIT_SCENARIO_MAX,
                v0,
                *(unsigned __int16 *)(v0 + 16));
          }
        }
      }
    }
  }
LABEL_59:
  if ( KeyHandle )
  {
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( Handle )
  {
    ZwClose(Handle);
    Handle = 0LL;
  }
  if ( v24 )
  {
    ZwClose(v24);
    v24 = 0LL;
  }
  if ( v30 )
    ZwClose(v30);
  if ( v0 )
    WdipSemFreeScenario(v0);
  return (unsigned int)v2;
}
