/*
 * XREFs of ?ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z @ 0x1403FF3C8
 * Callers:
 *     DxgkSetMemoryBudgetTarget @ 0x1403FEDF0 (DxgkSetMemoryBudgetTarget.c)
 *     DxgkSetYieldPercentage @ 0x1403FF0C0 (DxgkSetYieldPercentage.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1400744BC (Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?AcquireExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x14007BD9C (-AcquireExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x14007BDD0 (-AcquireShared@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x14007C354 (-Release@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall ApplyResourceManagerPolicyToRenderAdapters(int a1, __int64 a2)
{
  _QWORD **v4; // r14
  _QWORD *v5; // rsi
  _QWORD *v6; // rax
  bool v7; // zf
  struct DXGADAPTER *v8; // rbx
  _QWORD *v9; // rcx
  __int64 v10; // r9
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v12; // rax
  DXGADAPTERLISTLOCK *v13; // [rsp+20h] [rbp-58h] BYREF
  int v14; // [rsp+28h] [rbp-50h]
  _BYTE v15[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v16[32]; // [rsp+40h] [rbp-38h] BYREF

  v13 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 680);
  if ( (unsigned int)Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    DXGADAPTERLISTLOCK::AcquireShared(v13);
    v14 = 1;
  }
  else
  {
    DXGADAPTERLISTLOCK::AcquireExclusive(v13);
    v14 = 2;
  }
  v4 = (_QWORD **)((char *)DXGGLOBAL::GetGlobal() + 808);
  v5 = *v4;
  while ( 1 )
  {
    v6 = 0LL;
    if ( v5 != v4 )
      v6 = v5;
    if ( !v6 )
      break;
    v7 = v5 == v4;
    v8 = (struct DXGADAPTER *)v5;
    v5 = (_QWORD *)*v5;
    if ( v7 )
      v8 = 0LL;
    if ( *((_QWORD *)v8 + 396) && (*((_DWORD *)v8 + 111) & 0x4000) == 0 )
    {
      DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v16, v8, 1);
      if ( *((_DWORD *)v8 + 50) == 1 )
      {
        v9 = (_QWORD *)*((_QWORD *)v8 + 396);
        v10 = v9[96];
        if ( a1 )
        {
          if ( a1 == 1 )
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, DXGADAPTERLISTLOCK *, int))(*(_QWORD *)(v9[95] + 8LL)
                                                                                               + 1120LL))(
              v9[96],
              *(unsigned int *)(a2 + 8),
              *(unsigned int *)(a2 + 12),
              v10,
              v13,
              v14);
        }
        else
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, DXGADAPTERLISTLOCK *, int))(*(_QWORD *)(v9[92] + 8LL)
                                                                                             + 976LL))(
            v9[93],
            *(unsigned int *)(a2 + 8),
            *(unsigned int *)(a2 + 12),
            v10,
            v13,
            v14);
        }
      }
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v16);
    }
  }
  Global = DXGGLOBAL::GetGlobal();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (struct DXGGLOBAL *)((char *)Global + 304824), 0);
  if ( (unsigned int)Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    DXGAUTOADAPTERLISTLOCK::Release((DXGAUTOADAPTERLISTLOCK *)&v13);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  }
  v12 = DXGGLOBAL::GetGlobal();
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      *((_DWORD *)v12 + 76219) = *(_DWORD *)(a2 + 8);
      *((_DWORD *)v12 + 76220) = *(_DWORD *)(a2 + 12);
    }
  }
  else
  {
    *((_DWORD *)v12 + 76218) = *(_DWORD *)(a2 + 12);
    *((_DWORD *)v12 + 76221) ^= (*(_DWORD *)(a2 + 8) ^ *((_DWORD *)v12 + 76221)) & 1;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v15);
  DXGAUTOADAPTERLISTLOCK::Release((DXGAUTOADAPTERLISTLOCK *)&v13);
}
