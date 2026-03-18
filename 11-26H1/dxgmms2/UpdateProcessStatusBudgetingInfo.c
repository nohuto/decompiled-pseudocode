/*
 * XREFs of UpdateProcessStatusBudgetingInfo @ 0x1400A6654
 * Callers:
 *     VidMmNotifyProcessStatusChange2 @ 0x1400A67A0 (VidMmNotifyProcessStatusChange2.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGAUTOEXPUSHLOCK@@QEAA@XZ @ 0x140035F30 (--1DXGAUTOEXPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1400362C8 (--0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?UmdManagesResidency@DXGPROCESS@@QEBAEXZ @ 0x14003B53C (-UmdManagesResidency@DXGPROCESS@@QEBAEXZ.c)
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x14003BC64 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1400E1030 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 */

void __fastcall UpdateProcessStatusBudgetingInfo(DXGPROCESS *this)
{
  __int64 v1; // rax
  __int64 v3; // rbp
  PVOID *i; // rbx
  PVOID *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  PVOID **v10; // rdx
  PVOID *v11; // rax
  PVOID **v12; // rcx
  PVOID **v13; // r8
  _BYTE v14[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v15[32]; // [rsp+38h] [rbp-20h] BYREF

  v1 = *((_QWORD *)this + 8);
  if ( v1 )
    v3 = *(_QWORD *)(v1 + 8);
  else
    v3 = 0LL;
  if ( DXGPROCESS::UmdManagesResidency(this) )
  {
    DXGAUTOEXPUSHLOCKSHARED::DXGAUTOEXPUSHLOCKSHARED(
      (DXGAUTOEXPUSHLOCKSHARED *)v15,
      (struct _EX_PUSH_LOCK *const)&VIDMM_GLOBAL::_AdapterListLock);
    for ( i = (PVOID *)VIDMM_GLOBAL::_AdapterListHead; i != &VIDMM_GLOBAL::_AdapterListHead; i = (PVOID *)*i )
    {
      v5 = i - 5655;
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v14, (struct _KTHREAD **)i - 503);
      v6 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8LL * *((unsigned int *)*(i - 5652) + 60));
      if ( v6 )
      {
        v7 = v6 + 56;
        v8 = *(_QWORD *)(v6 + 56);
        if ( *(_QWORD *)(v8 + 8) != v6 + 56 || (v9 = *(_QWORD **)(v6 + 64), *v9 != v7) )
LABEL_19:
          __fastfail(3u);
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        if ( DXGPROCESS::IsHighPriorityProcess(this) )
        {
          v11 = v5 + 5026;
          v12 = (PVOID **)v5[5027];
          if ( *v12 != v5 + 5026 )
            goto LABEL_19;
          *v10 = v11;
          v10[1] = (PVOID *)v12;
          *v12 = (PVOID *)v10;
        }
        else
        {
          v11 = v5 + 5021;
          v13 = (PVOID **)v5[5022];
          if ( *v13 != v5 + 5021 )
            goto LABEL_19;
          *v10 = v11;
          v10[1] = (PVOID *)v13;
          *v13 = (PVOID *)v10;
        }
        v11[1] = v10;
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14);
      VIDMM_GLOBAL::RequestNewBudget((VIDMM_GLOBAL *)(i - 5655), 1);
    }
    DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v15);
  }
}
