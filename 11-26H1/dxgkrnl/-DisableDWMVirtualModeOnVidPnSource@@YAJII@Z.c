/*
 * XREFs of ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1401C2094
 * Callers:
 *     DxgkSetVidPnSourceOwner @ 0x140435750 (DxgkSetVidPnSourceOwner.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z @ 0x14002EB40 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140039DDC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1400421EC (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     DxgkNotifyDisplayChange @ 0x1402051B0 (DxgkNotifyDisplayChange.c)
 *     ?DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z @ 0x140268D1C (-DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1402ABFFC (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402AC2B8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x140319388 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x14033D124 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140365C4C (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x14039D288 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1403DAF18 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?AcquireWin32kDwmStateAndPDevLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1403F3714 (-AcquireWin32kDwmStateAndPDevLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x14040B150 (DxgkGetGlobalRawmodeFlag.c)
 */

__int64 __fastcall DisableDWMVirtualModeOnVidPnSource(unsigned int a1, unsigned int a2)
{
  __int64 v3; // rsi
  struct _KTHREAD **Current; // rax
  __int64 v5; // rdi
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // r9
  unsigned __int16 v10; // bx
  int v11; // eax
  const wchar_t *v12; // r9
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  unsigned int i; // ecx
  __int64 v19; // r8
  unsigned __int16 v20; // [rsp+50h] [rbp-B0h] BYREF
  struct _LUID v21; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v22[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v23[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v24[24]; // [rsp+78h] [rbp-88h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v25[2]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v26[64]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v27; // [rsp+E0h] [rbp-20h]
  _BYTE v28[432]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v29[160]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v3 = a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v5 = (__int64)Current;
  if ( !Current )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3628;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 3628LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  v21 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v23, v3, Current, (struct DXGDEVICE **)&v21);
  v7 = (__int64)v21;
  if ( !*(_QWORD *)&v21 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3636;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified",
      v3,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v5) = -1073741811;
LABEL_24:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v23);
    return (unsigned int)v5;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v22,
    *(struct DXGDEVICE **)&v21);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v24, (struct _KTHREAD **)(v7 + 144));
  v8 = *(_QWORD *)(v7 + 1896);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3646;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DisableDWMVirtualModeOnVidPnSource function cannot be called on a render only device (0x%I64x)",
      v3,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v24);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v22);
    LODWORD(v5) = -1073741637;
    goto LABEL_24;
  }
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v28,
    *(struct ADAPTER_DISPLAY **)(v8 + 3160),
    (struct DXGPROCESS *)v5);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kDwmStateAndPDevLocks((MANAGEDPRIMARIESTRACKER *)v28);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v29, v7, 1, v9, 0);
  LODWORD(v5) = COREDEVICEACCESS::AcquireExclusive((__int64)v29, 2LL);
  if ( (int)v5 < 0 )
  {
LABEL_23:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v29);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v28);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v24);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v22);
    goto LABEL_24;
  }
  v21 = *(struct _LUID *)(v8 + 412);
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v29);
  v10 = 8;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v26, 8u, 0);
  v20 = 8;
  while ( CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v26, v10) >= v10 )
  {
    v11 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v26, 0, 0, 0, &v20);
    v5 = v11;
    if ( v11 != -1073741789 )
    {
      if ( v11 < 0 )
      {
        WdLogSingleEntry1(2LL);
        v12 = L"Failed to set active topology, Status = 0x%I64x)";
        WdLogGlobalForLineNumber = 3693;
        goto LABEL_14;
      }
      v13 = CCD_TOPOLOGY::DisableDWMCloneAndDWMVirtualMode((CCD_TOPOLOGY *)v26, &v21, a2);
      v5 = v13;
      if ( v13 < 0 )
      {
        WdLogSingleEntry1(2LL);
        v12 = L"Failed to set physical mode/IHV clone, (Status = 0x%I64x)";
        WdLogGlobalForLineNumber = 3703;
        goto LABEL_14;
      }
      v14 = (unsigned __int8)DxgkGetGlobalRawmodeFlag() != 0 ? 0x20000 : 0;
      v15 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v26, v14, 0);
      v5 = v15;
      if ( v15 >= 0 )
      {
        LOBYTE(v25[0]) = 0;
        CDisplayScenarioContextScope::ContextScopeConstructor(v25, 0LL, 0x39u, 0);
        v16 = CCD_TOPOLOGY::ApplyTopology((CCD_TOPOLOGY *)v26, v14, v25[1]);
        v5 = v16;
        if ( v16 >= 0 )
        {
          v17 = *(_QWORD *)(v27 + 48);
          if ( v17 )
          {
            for ( i = 0; i < *(_DWORD *)(v27 + 40); ++i )
            {
              v19 = 340LL * i;
              if ( *(_DWORD *)(v19 + v17 + 88) || *(_DWORD *)(v19 + v17 + 92) || *(_DWORD *)(v19 + v17 + 124) )
              {
                DxgkNotifyDisplayChange(0LL);
                break;
              }
            }
          }
        }
        else
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 3729;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to apply the new topology, (Status = 0x%I64x)",
            v5,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v25);
      }
      else
      {
        WdLogSingleEntry1(2LL);
        v12 = L"Failed to functionalize the new topology, (Status = 0x%I64x)";
        WdLogGlobalForLineNumber = 3718;
LABEL_14:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v12, v5, 0LL, 0LL, 0LL, 0LL);
      }
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v26);
      goto LABEL_23;
    }
    v10 = v20;
  }
  WdLogSingleEntry1(6LL);
  WdLogGlobalForLineNumber = 3684;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to reserve the memory for active topology. (RequiredPathsCount = %I64u)",
    v10,
    0LL,
    0LL,
    0LL,
    0LL);
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v26);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v29);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v28);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v24);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v22);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v23);
  return 3221225495LL;
}
