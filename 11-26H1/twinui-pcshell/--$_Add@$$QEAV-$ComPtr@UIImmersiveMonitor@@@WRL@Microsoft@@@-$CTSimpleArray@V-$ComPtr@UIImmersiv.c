/*
 * XREFs of ??$_Add@$$QEAV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@PEA_K@Z @ 0x18012AAF4
 * Callers:
 *     ?GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@@Z @ 0x180048E50 (-GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV-$CCoSimpleArray@V-$ComPtr@.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x18004A620 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x18012A870 (-_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTO.c)
 * Callees:
 *     ?_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z @ 0x18004A13C (-_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveMonitor>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>::_Add<Microsoft::WRL::ComPtr<IImmersiveMonitor> &&>(
        __int64 a1,
        _QWORD *a2)
{
  unsigned __int64 v2; // rbx
  _QWORD *v3; // rbp
  __int64 v4; // rax
  int v5; // r8d
  __int64 *v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r14
  char *v15; // rax
  char *v16; // rsi
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rdx

  v2 = *(_QWORD *)(a1 + 24);
  v3 = (_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = 0;
  v8 = (__int64 *)(a1 + 8);
  if ( v4 == v2 )
  {
    v9 = v4 + 1;
    v5 = -2147024774;
    if ( (unsigned __int64)(v4 + 1) > 0xFFFFFFFE || (v5 = 0, v9 <= v2) )
    {
      if ( v5 < 0 )
        return (unsigned int)v5;
    }
    else
    {
      v10 = 2 * v2;
      if ( !is_mul_ok(v2, 2uLL) )
        return (unsigned int)-2147024362;
      v11 = v2;
      v12 = v2 + 4096;
      if ( v11 <= 0x1000 )
        v12 = v10;
      if ( v9 > v12 )
      {
        v12 = v9;
      }
      else if ( v12 > 0xFFFFFFFE )
      {
        v12 = 4294967294LL;
      }
      v13 = 8 * v12;
      if ( !is_mul_ok(v12, 8uLL) )
        return (unsigned int)-2147024362;
      v15 = (char *)CoTaskMemRealloc(*(LPVOID *)a1, 8 * v12);
      v16 = v15;
      if ( !v15 )
        return (unsigned int)-2147024882;
      v17 = CTCoAllocPolicy::_CoTaskMemSize(v15);
      if ( v17 > v13 )
        memset_0(&v16[v13], 0, v17 - v13);
      v5 = 0;
      *(_QWORD *)(a1 + 24) = v12;
      *(_QWORD *)a1 = v16;
    }
    v8 = (__int64 *)(a1 + 8);
  }
  v18 = *v3 + 1LL;
  v19 = *(_QWORD *)a1 - 8LL;
  *v8 = v18;
  v20 = (_QWORD *)(v19 + 8 * v18);
  if ( v20 )
  {
    *v20 = 0LL;
    if ( v20 != a2 )
    {
      *v20 = *a2;
      *a2 = 0LL;
    }
  }
  return (unsigned int)v5;
}
