/*
 * XREFs of ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18009BE10
 * Callers:
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x18009A328 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     CapabilityHelper::CreateSecurityAttributesForUWPCapability @ 0x18009ADFC (CapabilityHelper--CreateSecurityAttributesForUWPCapability.c)
 *     ?_CheckLinkHash@CLauncherTipContextMenu@@AEAAJAEBVCPropertyStoreHelper@@PEAK@Z @ 0x18009B7DC (-_CheckLinkHash@CLauncherTipContextMenu@@AEAAJAEBVCPropertyStoreHelper@@PEAK@Z.c)
 *     ?ReplaceInitialPathCharactersWithGuid@@YAXPEAG_KPEBGAEBU_GUID@@1@Z @ 0x180219CF4 (-ReplaceInitialPathCharactersWithGuid@@YAXPEAG_KPEBGAEBU_GUID@@1@Z.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x1802DC640 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ??$ReportFailure_CaughtExceptionMsg@$01@details@wil@@YAJPEAXIPEBD1101PEAD@Z @ 0x18033D1CC (--$ReportFailure_CaughtExceptionMsg@$01@details@wil@@YAJPEAXIPEBD1101PEAD@Z.c)
 *     ?EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z @ 0x1805D6FC8 (-EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z.c)
 *     CapabilityHelper::CreateSecurityAttributesForUWPCapability_0 @ 0x1806254C4 (CapabilityHelper--CreateSecurityAttributesForUWPCapability_0.c)
 *     ?IsTombstoneLink@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@@Z @ 0x18066D658 (-IsTombstoneLink@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCatW(unsigned __int16 *a1, __int64 a2, char *a3)
{
  __int64 v5; // r10
  unsigned __int16 *v6; // rax
  unsigned int v7; // edx
  __int64 v8; // r8
  unsigned __int16 *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  char *v12; // r11
  unsigned __int16 v13; // r8
  unsigned __int16 *v14; // rax

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    return (unsigned int)-2147024809;
  }
  else
  {
    v5 = a2;
    v6 = a1;
    do
    {
      if ( !*v6 )
        break;
      ++v6;
      --v5;
    }
    while ( v5 );
    v7 = v5 == 0 ? 0x80070057 : 0;
    v8 = (a2 - v5) & -(__int64)(v5 != 0);
    if ( v5 )
    {
      v9 = &a1[v8];
      v10 = a2 - v8;
      if ( a2 != v8 )
      {
        v11 = 2147483646LL;
        v12 = (char *)(a3 - (char *)v9);
        do
        {
          if ( !v11 )
            break;
          v13 = *(unsigned __int16 *)((char *)v9 + (_QWORD)v12);
          if ( !v13 )
            break;
          *v9 = v13;
          --v11;
          ++v9;
          --v10;
        }
        while ( v10 );
      }
      v14 = v9 - 1;
      if ( v10 )
        v14 = v9;
      v7 = v10 == 0 ? 0x8007007A : 0;
      *v14 = 0;
    }
  }
  return v7;
}
