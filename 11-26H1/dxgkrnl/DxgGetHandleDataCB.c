/*
 * XREFs of DxgGetHandleDataCB @ 0x1401C4190
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x140034914 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140037230 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x140038950 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402F9980 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1403126F0 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 */

__int64 __fastcall DxgGetHandleDataCB(_DWORD *a1)
{
  struct DXGPROCESS *Current; // rsi
  int v3; // ecx
  __int64 v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // rcx
  struct DXGALLOCATION *v7; // rdx
  KIRQL v8; // al
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rdx
  unsigned int v13; // eax
  __int64 v14; // r9
  struct DXGRESOURCE *v15; // rdx
  KIRQL CurrentIrql; // al
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v21[24]; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v22[56]; // [rsp+78h] [rbp+17h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v22);
  Current = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v21, (struct _KTHREAD **)Current);
  v3 = a1[1];
  v4 = 0LL;
  if ( v3 != 1 )
  {
    if ( v3 != 2 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 156;
      goto LABEL_43;
    }
    v13 = (*a1 >> 6) & 0xFFFFFF;
    if ( v13 < *((_DWORD *)Current + 74)
      && (v14 = *((_QWORD *)Current + 35), ((*a1 >> 25) & 0x60) == (*(_BYTE *)(v14 + 16LL * v13 + 8) & 0x60))
      && (*(_DWORD *)(v14 + 16LL * v13 + 8) & 0x6000) != 0x2000
      && (*(_DWORD *)(v14 + 16LL * v13 + 8) & 0x1F) == 4 )
    {
      v15 = *(struct DXGRESOURCE **)(v14 + 16LL * v13);
    }
    else
    {
      v15 = 0LL;
    }
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v20, v15);
    if ( v20 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v17 = v20;
      if ( CurrentIrql >= 2u )
      {
        v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) + 16LL) + 16LL);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
        {
          WdLogSingleEntry5(0LL, 275LL, 20LL, v18, 0LL, 0LL);
          v17 = v20;
          WdLogGlobalForLineNumber = 123;
        }
      }
      if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v17 + 8) + 16LL) + 16LL)) )
      {
        if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 344) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 134;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"WDDM2 driver calls WDDM1.x DDI!",
            134LL,
            0LL,
            0LL,
            0LL,
            0LL);
LABEL_41:
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v20);
          goto LABEL_43;
        }
        v19 = v20;
      }
      if ( (*(_DWORD *)(v19 + 4) & 1) != 0 )
        v4 = *(_QWORD *)(*(_QWORD *)(v19 + 56) + 16LL);
      else
        v4 = *(_QWORD *)(v19 + 56);
      goto LABEL_41;
    }
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 150;
    goto LABEL_41;
  }
  v5 = (*a1 >> 6) & 0xFFFFFF;
  if ( v5 < *((_DWORD *)Current + 74)
    && ((*a1 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)Current + 35) + 16LL * v5 + 8) & 0x60)
    && (*(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v5 + 8) & 0x6000) != 0x2000
    && (*(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v5 + 8) & 0x1F) != 0
    && (v6 = *((_QWORD *)Current + 35), (*(_BYTE *)(v6 + 16LL * v5 + 8) & 0x1F) == 5) )
  {
    v7 = *(struct DXGALLOCATION **)(v6 + 16LL * v5);
  }
  else
  {
    v7 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v20, v7);
  if ( v20 )
  {
    v8 = KeGetCurrentIrql();
    v9 = v20;
    if ( v8 >= 2u )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) + 16LL) + 16LL);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
      {
        WdLogSingleEntry5(0LL, 275LL, 20LL, v10, 0LL, 0LL);
        v9 = v20;
        WdLogGlobalForLineNumber = 80;
      }
    }
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL) + 16LL)) )
    {
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 344) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 91;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"WDDM2 driver calls WDDM1.x DDI!",
          91LL,
          0LL,
          0LL,
          0LL,
          0LL);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v20);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21);
        DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v22);
        return 0LL;
      }
      v11 = v20;
    }
    if ( (a1[2] & 1) != 0 )
      v4 = *(_QWORD *)(v11 + 32);
    else
      v4 = *(_QWORD *)(*(_QWORD *)(v11 + 48) + 16LL);
  }
  else
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 107;
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v20);
LABEL_43:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21);
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v22);
  return v4;
}
