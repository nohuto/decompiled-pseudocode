/*
 * XREFs of ?SmmInitializeIommu@@YAJPEAUSYSMM_IOMMU@@PEBUSYSMM_ADAPTER_CREATE_PARAMS@@@Z @ 0x1402850B4
 * Callers:
 *     ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIQEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x140286618 (-SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIQEBUSYS.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??$SmmInitializePushLock@$00@@YAXPEAU?$SYSMM_PUSHLOCK@$00@@@Z @ 0x14006DD0C (--$SmmInitializePushLock@$00@@YAXPEAU-$SYSMM_PUSHLOCK@$00@@@Z.c)
 *     ??$SmmInitializeSpinLock@$00@@YAXPEAU?$SYSMM_SPINLOCK@$00@@@Z @ 0x14009BAE0 (--$SmmInitializeSpinLock@$00@@YAXPEAU-$SYSMM_SPINLOCK@$00@@@Z.c)
 *     ?Initialize@DXGK_LOG@@QEAAJIW4DXGK_POOL_FLAGS@@_K1@Z @ 0x14009D8BC (-Initialize@DXGK_LOG@@QEAAJIW4DXGK_POOL_FLAGS@@_K1@Z.c)
 */

__int64 __fastcall SmmInitializeIommu(struct SYSMM_IOMMU *a1, const struct SYSMM_ADAPTER_CREATE_PARAMS *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  __int64 v9; // rax

  SmmInitializeSpinLock<1>((_DWORD *)a1 + 2);
  SmmInitializePushLock<1>((_QWORD *)a1 + 2);
  SmmInitializePushLock<1>(a1);
  *((_DWORD *)a1 + 10) = 1;
  *((_DWORD *)a1 + 6) = 0;
  *((_OWORD *)a1 + 14) = xmmword_140138C48;
  *((_DWORD *)a1 + 8) = 0;
  *((_QWORD *)a1 + 6) = 0LL;
  *((_OWORD *)a1 + 15) = xmmword_140138C58;
  *((_QWORD *)a1 + 34) = 0LL;
  *((_OWORD *)a1 + 16) = xmmword_140138C68;
  v5 = *(_DWORD *)(v3 + 16) & 1;
  *((_DWORD *)a1 + 6) = v5;
  v6 = v5 | *(_DWORD *)(v3 + 16) & 2;
  *((_DWORD *)a1 + 6) = v6;
  v7 = v6 | *(_DWORD *)(v3 + 16) & 4;
  *((_DWORD *)a1 + 6) = v7;
  v8 = v7 | *(_DWORD *)(v3 + 16) & 8;
  *((_DWORD *)a1 + 6) = v8;
  *((_DWORD *)a1 + 6) = v8 | *(_DWORD *)(v3 + 16) & 0x10;
  if ( (*(_DWORD *)(v3 + 12) & 1) != 0
    || (*((_QWORD *)a1 + 8) = 0LL,
        SmmInitializeSpinLock<1>((_DWORD *)a1 + 18),
        ExInitializeLookasideListEx(
          (PLOOKASIDE_LIST_EX)((char *)a1 + 80),
          0LL,
          0LL,
          (POOL_TYPE)512,
          0,
          0x28uLL,
          0x34737844u,
          0),
        v9 = operator new[](0x800uLL, 0x39737844u, 64LL),
        (*((_QWORD *)a1 + 22) = v9) != 0LL) )
  {
    if ( dword_1401696C4 )
    {
      if ( (int)DXGK_LOG::Initialize((__int64)a1 + 192, v3, v4, (unsigned int)dword_1401696C4, qword_1401696C8) < 0 )
      {
        _InterlockedIncrement(&dword_14016974C);
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 2831;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate Iommu mapping log",
          2831LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    return 0LL;
  }
  else
  {
    _InterlockedIncrement(&dword_140169708);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2814;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate Iommu staging PFN array",
      2814LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
