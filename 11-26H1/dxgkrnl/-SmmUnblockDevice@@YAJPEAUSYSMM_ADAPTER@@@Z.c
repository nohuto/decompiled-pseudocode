/*
 * XREFs of ?SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x140285ADC
 * Callers:
 *     ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIQEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x140286618 (-SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIQEBUSYS.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x140285654 (-SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x140285CDC (-SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 */

__int64 __fastcall SmmUnblockDevice(struct SYSMM_ADAPTER *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  __int64 i; // rdx
  unsigned int *v5; // rsi
  int v6; // edx
  int v7; // eax
  __int64 v9; // [rsp+20h] [rbp-38h]
  int v10; // [rsp+60h] [rbp+8h] BYREF

  if ( (*((_DWORD *)a1 + 5) & 4) == 0 )
    return 0LL;
  LODWORD(v2) = 0;
  v3 = 0LL;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 6); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)a1 + 45) + 48 * i + 24);
    if ( v3 )
    {
      v5 = (unsigned int *)((char *)a1 + 100);
      ((void (__fastcall *)(__int64, char *))qword_140169648)(v3, (char *)a1 + 100);
      goto LABEL_8;
    }
  }
  v5 = (unsigned int *)((char *)a1 + 100);
LABEL_8:
  v6 = *v5;
  if ( *v5 != 2 && (*((_DWORD *)a1 + 22) & 8) == 0 )
  {
    if ( (v6 & 2) != 0 )
    {
      LODWORD(v2) = SmmIommuSwitchToPassthrough(a1);
      if ( (int)v2 < 0 )
      {
        WdLogSingleEntry1(4LL);
        WdLogGlobalForLineNumber = 3248;
      }
    }
    else if ( (v6 & 1) != 0 )
    {
      LODWORD(v2) = SysMmEnableIommu(a1, 1LL);
      if ( (int)v2 >= 0 )
      {
        v10 = 1;
        v7 = ((__int64 (__fastcall *)(void (__fastcall *)(struct _IOMMU_INTERFACE_STATE_CHANGE *, _DWORD *), struct SYSMM_ADAPTER *, __int64, int *))qword_140169650)(
               SmmDomainTypeStateChangeCallback,
               a1,
               v3,
               &v10);
        v2 = v7;
        if ( v7 < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 3284;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to register domain state callback. Status=0x%.8x",
            v2,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        WdLogSingleEntry1(4LL);
        WdLogGlobalForLineNumber = 3261;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      v9 = *v5;
      WdLogGlobalForLineNumber = 3294;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"QueryAvailableDomainTypes returned unexpected list of available types. No passthrough or translate doma"
                  "ins available. AvailableDomainTypes=0x%.8x",
        v9,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v2) = -1073741823;
    }
  }
  return (unsigned int)v2;
}
