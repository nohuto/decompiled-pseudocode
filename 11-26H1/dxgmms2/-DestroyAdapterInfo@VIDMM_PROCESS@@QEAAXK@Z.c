/*
 * XREFs of ?DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z @ 0x1400E2790
 * Callers:
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1400E2318 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1401294CC (--1VIDMM_PROCESS@@QEAA@XZ.c)
 * Callees:
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1400046CC (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     Feature_PeriodicTrimImprovements__private_IsEnabledDeviceUsageNoInline @ 0x14003B500 (Feature_PeriodicTrimImprovements__private_IsEnabledDeviceUsageNoInline.c)
 *     ?UmdManagesResidency@DXGPROCESS@@QEBAEXZ @ 0x14003B53C (-UmdManagesResidency@DXGPROCESS@@QEBAEXZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1400E1030 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 */

void __fastcall VIDMM_PROCESS::DestroyAdapterInfo(VIDMM_PROCESS *this, unsigned int a2)
{
  __int64 v3; // rbp
  VIDMM_GLOBAL **v4; // rbx
  unsigned int i; // edi
  VIDMM_GLOBAL *v6; // r8
  VIDMM_GLOBAL ***v7; // rcx
  __int64 *v8; // rdx
  __int64 v9; // rax
  struct _PCW_INSTANCE *v10; // rcx
  DXGPROCESS *v11; // rcx
  VIDMM_GLOBAL *v12; // rdx
  VIDMM_GLOBAL ***v13; // rcx
  __int64 **v14; // rcx
  _BYTE v15[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2;
  v4 = *(VIDMM_GLOBAL ***)(*((_QWORD *)this + 4) + 8LL * a2);
  if ( v4 )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v15, (struct _KTHREAD **)*v4 + 5152);
    if ( (unsigned int)Feature_PeriodicTrimImprovements__private_IsEnabledDeviceUsageNoInline() )
    {
      v11 = (DXGPROCESS *)*((_QWORD *)v4[2] + 9);
      if ( v11 )
      {
        if ( DXGPROCESS::UmdManagesResidency(v11) )
        {
          v12 = v4[7];
          if ( *((VIDMM_GLOBAL ***)v12 + 1) != v4 + 7 )
            goto LABEL_12;
          v13 = (VIDMM_GLOBAL ***)v4[8];
          if ( *v13 != v4 + 7 )
            goto LABEL_12;
          *v13 = (VIDMM_GLOBAL **)v12;
          *((_QWORD *)v12 + 1) = v13;
        }
      }
    }
    for ( i = 0; i < *((_DWORD *)*v4 + 1738); ++i )
    {
      v8 = (__int64 *)((char *)v4[1] + 304 * (unsigned __int16)i + 8);
      v9 = *v8;
      if ( *v8 )
      {
        if ( *(__int64 **)(v9 + 8) != v8 )
          goto LABEL_12;
        v14 = (__int64 **)v8[1];
        if ( *v14 != v8 )
          goto LABEL_12;
        *v14 = (__int64 *)v9;
        *(_QWORD *)(v9 + 8) = v14;
        *v8 = 0LL;
        v8[1] = 0LL;
      }
      v10 = (struct _PCW_INSTANCE *)v8[31];
      if ( v10 )
        PcwCloseInstance(v10);
    }
    v6 = v4[5];
    if ( *((VIDMM_GLOBAL ***)v6 + 1) == v4 + 5 )
    {
      v7 = (VIDMM_GLOBAL ***)v4[6];
      if ( *v7 == v4 + 5 )
      {
        *v7 = (VIDMM_GLOBAL **)v6;
        *((_QWORD *)v6 + 1) = v7;
        *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v3) = 0LL;
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
        VIDMM_GLOBAL::RequestNewBudget(*v4, 1);
        VIDMM_PROCESS_ADAPTER_INFO::`scalar deleting destructor'((VIDMM_PROCESS_ADAPTER_INFO *)v4);
        return;
      }
    }
LABEL_12:
    __fastfail(3u);
  }
}
