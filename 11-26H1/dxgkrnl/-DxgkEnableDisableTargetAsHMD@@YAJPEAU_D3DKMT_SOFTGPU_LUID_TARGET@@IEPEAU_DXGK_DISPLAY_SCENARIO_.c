/*
 * XREFs of ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140430A30
 * Callers:
 *     DxgkEscape @ 0x14043CE60 (DxgkEscape.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002E4CC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?MonitorSetUsageClass@@YAJPEAXIW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140270178 (-MonitorSetUsageClass@@YAJPEAXIW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1402C2560 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkEnableDisableTargetAsHMD(
        struct _D3DKMT_SOFTGPU_LUID_TARGET *a1,
        unsigned int a2,
        char a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v5; // rsi
  int *v8; // rdi
  __int64 v9; // rbp
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v11; // rax
  DXGADAPTER *v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // [rsp+20h] [rbp-108h]
  __int64 v20; // [rsp+28h] [rbp-100h]
  __int64 v21; // [rsp+30h] [rbp-F8h]
  unsigned __int64 v22; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v23[144]; // [rsp+60h] [rbp-C8h] BYREF

  LODWORD(v5) = -1073741811;
  if ( a2 > 0x10 )
    return 3221225485LL;
  if ( a2 )
  {
    v8 = (int *)((char *)a1 + 4);
    v9 = a2;
    do
    {
      Global = DXGGLOBAL::GetGlobal();
      v11 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)(v8 - 1), &v22);
      v12 = v11;
      if ( v11 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v23, v11, 0LL);
        DXGADAPTER::ReleaseReference(v12);
        v13 = COREADAPTERACCESS::AcquireExclusive((__int64)v23, 2LL);
        v5 = v13;
        if ( v13 >= 0 )
        {
          if ( *((_QWORD *)v12 + 395) )
          {
            v16 = MonitorSetUsageClass((__int64)v12, v8[1], a3 != 0, a4);
            v5 = v16;
            if ( v16 < 0 )
            {
              WdLogSingleEntry4(2LL, (unsigned int)v8[1], *v8, (unsigned int)*(v8 - 1), v16);
              v17 = *v8;
              v18 = (unsigned int)v8[1];
              v21 = (unsigned int)*(v8 - 1);
              WdLogGlobalForLineNumber = 11847;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to enable/disable given targetID 0x%I64x as HMD on adapter 0x%I64x%08I64x, Status = 0x%I64x.",
                v18,
                v17,
                v21,
                v5,
                0LL);
            }
          }
        }
        else
        {
          WdLogSingleEntry3(2LL, *v8, (unsigned int)*(v8 - 1), v13);
          v14 = (unsigned int)*(v8 - 1);
          v15 = *v8;
          WdLogGlobalForLineNumber = 11829;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to acquire adapter core access on adapter 0x%I64x%08I64x, Status = 0x%I64x.",
            v15,
            v14,
            v5,
            0LL,
            0LL);
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v23);
      }
      else
      {
        LODWORD(v5) = -1073741811;
        WdLogSingleEntry3(2LL, *v8, (unsigned int)*(v8 - 1), -1073741811LL);
        v20 = (unsigned int)*(v8 - 1);
        v19 = *v8;
        WdLogGlobalForLineNumber = 11813;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to find adapter from LUID 0x%I64x%08I64x, returning 0x%I64x.",
          v19,
          v20,
          -1073741811LL,
          0LL,
          0LL);
      }
      v8 += 3;
      --v9;
    }
    while ( v9 );
  }
  return (unsigned int)v5;
}
