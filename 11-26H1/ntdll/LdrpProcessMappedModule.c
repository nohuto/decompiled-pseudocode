/*
 * XREFs of LdrpProcessMappedModule @ 0x180119E48
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18007B7D0 (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x180118B60 (LdrpInitializeNtdllDataTableEntry.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     RtlpInsertOrRemoveScpCfgFunctionTable @ 0x180076F90 (RtlpInsertOrRemoveScpCfgFunctionTable.c)
 *     LdrInitSecurityCookie @ 0x180077BE0 (LdrInitSecurityCookie.c)
 *     RtlInsertInvertedFunctionTable @ 0x180078C94 (RtlInsertInvertedFunctionTable.c)
 *     LdrpLogDllState @ 0x18007A680 (LdrpLogDllState.c)
 *     LdrpIsExecutableRelocatedImage @ 0x1800D9050 (LdrpIsExecutableRelocatedImage.c)
 *     LdrpGenRandom @ 0x1800D9C5C (LdrpGenRandom.c)
 *     LdrpValidateEntrySection @ 0x1800DA980 (LdrpValidateEntrySection.c)
 *     LdrpCfgProcessLoadConfig @ 0x1801197F0 (LdrpCfgProcessLoadConfig.c)
 *     LdrpSignalModuleMapped @ 0x18011B26C (LdrpSignalModuleMapped.c)
 *     LdrpIsImageAddress @ 0x18015CBF8 (LdrpIsImageAddress.c)
 */

__int64 __fastcall LdrpProcessMappedModule(__int64 a1, int a2, int a3)
{
  char *v3; // rsi
  NTSTATUS Config; // edi
  __int64 v8; // rbp
  char *v9; // rax
  __int64 v10; // rdx
  int v11; // r15d
  __int64 v12; // rax
  __int64 v13; // r9
  int inited; // eax
  int v15; // eax
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(char **)(a1 + 48);
  v17 = 0LL;
  Config = RtlImageNtHeaderEx(3u, v3, 0LL, (PIMAGE_NT_HEADERS *)&v17);
  if ( Config >= 0 )
  {
    v8 = v17;
    if ( (*(_DWORD *)(a1 + 104) & 4) != 0 && (*(_DWORD *)(a1 + 104) & 0x1000000) == 0 && *(_DWORD *)(a1 + 268) != 9 )
    {
      if ( *(_DWORD *)(v17 + 40) )
        v9 = &v3[*(unsigned int *)(v17 + 40)];
      else
        v9 = 0LL;
      *(_QWORD *)(a1 + 56) = v9;
    }
    if ( !LdrpValidateEntrySection(a1) )
      return (unsigned int)-1073741701;
    *(_QWORD *)(a1 + 248) = *(_QWORD *)(v8 + 48);
    *(_QWORD *)(a1 + 256) = MEMORY[0x7FFE0014];
    v11 = a2 & 0x800000;
    if ( !v11 )
    {
      if ( ((*(_DWORD *)(a1 + 104) & 4) != 0 || a3 && LdrpIsExecutableRelocatedImage(v3))
        && (*(_DWORD *)(a1 + 104) & 0x2000) == 0
        && a3 )
      {
        v17 = 0LL;
        v12 = LdrpGenRandom();
        inited = LdrInitSecurityCookie((unsigned __int64 *)v3, *(_DWORD *)(a1 + 64), 0LL, v12 ^ v13, &v17);
        if ( v3 != (char *)0x180000000LL
          && *(_QWORD *)(a1 + 56)
          && (*(_WORD *)(v8 + 72) == 6 && *(_WORD *)(v8 + 74) >= 3u || *(_WORD *)(v8 + 72) >= 7u)
          && !inited )
        {
          return (unsigned int)-1073741701;
        }
        Config = LdrpCfgProcessLoadConfig(a1, (unsigned __int16 *)v8, v17);
        if ( Config < 0 )
          return (unsigned int)Config;
        *(_DWORD *)(a1 + 104) |= 0x2000u;
      }
      if ( (*(_DWORD *)(a1 + 104) & 0x200) == 0 )
      {
        RtlInsertInvertedFunctionTable(v3, *(_DWORD *)(a1 + 64));
        *(_DWORD *)(a1 + 104) |= 0x200u;
      }
      if ( (*(_DWORD *)(a1 + 104) & 0x200000) == 0 )
      {
        v15 = RtlpInsertOrRemoveScpCfgFunctionTable(v3, v10, 1);
        Config = v15;
        if ( v15 )
        {
          if ( v15 == -1073741503 )
          {
            LODWORD(v17) = 0;
            if ( (int)LdrpIsImageAddress(v3, &v17) < 0 || (_DWORD)v17 )
              return (unsigned int)Config;
          }
          else if ( v15 < 0 )
          {
            return (unsigned int)Config;
          }
        }
        else
        {
          *(_DWORD *)(a1 + 104) |= 0x200000u;
        }
        Config = 0;
      }
    }
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) = 2;
    if ( !v11 && *(_QWORD *)(a1 + 176) )
      LdrpSignalModuleMapped(a1);
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    LdrpLogDllState(*(_QWORD *)(a1 + 48), a1 + 72, 0x14A1u);
  }
  return (unsigned int)Config;
}
