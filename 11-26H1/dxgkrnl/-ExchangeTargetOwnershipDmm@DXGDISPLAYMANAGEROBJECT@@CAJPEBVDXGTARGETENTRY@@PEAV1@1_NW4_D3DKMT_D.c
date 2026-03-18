/*
 * XREFs of ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1403CD840
 * Callers:
 *     ?ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1401D0D28 (-ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z.c)
 *     ?TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z @ 0x1401D0EB8 (-TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z.c)
 *     ?Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ @ 0x1403CD468 (-Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ.c)
 *     ?AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1403CD620 (-AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@.c)
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1400174D0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14002ED30 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x14003DB88 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z @ 0x14032032C (-DmmGetTargetUsage@@YA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z.c)
 *     DmmDoForSpecifiedTarget__lambda_533853168684940ab58800475a78e255___ @ 0x1403F2FF8 (DmmDoForSpecifiedTarget__lambda_533853168684940ab58800475a78e255___.c)
 *     ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x14040977C (-AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm(
        struct _LUID *a1,
        struct _LUID a2,
        __int64 a3,
        char a4,
        int a5)
{
  struct _LUID v5; // rbx
  struct DXGADAPTER *v10; // rsi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  int v14; // edi
  int LowPart; // edx
  unsigned int TargetUsage; // eax
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rdx
  _BYTE v20[8]; // [rsp+30h] [rbp-61h] BYREF
  struct _LUID v21; // [rsp+38h] [rbp-59h] BYREF
  struct DXGADAPTER *v22[2]; // [rsp+40h] [rbp-51h] BYREF
  __int64 v23; // [rsp+50h] [rbp-41h] BYREF
  _QWORD v24[2]; // [rsp+60h] [rbp-31h] BYREF
  _BYTE v25[64]; // [rsp+70h] [rbp-21h] BYREF

  v5 = a1[3];
  v21 = v5;
  v22[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v22, &v21);
  v10 = v22[0];
  if ( !v22[0] )
  {
    WdLogSingleEntry2(3LL, v21.HighPart, v5.LowPart);
    WdLogGlobalForLineNumber = 644;
LABEL_3:
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v22, 0LL);
    return 3221226021LL;
  }
  COREACCESS::COREACCESS((COREACCESS *)v25, v22[0]);
  COREACCESS::AcquireShared((COREACCESS *)v25, 0LL);
  if ( *(_QWORD *)&a2 && *((_DWORD *)v10 + 50) != 1 )
  {
    WdLogSingleEntry2(3LL, v21.HighPart, v5.LowPart);
    WdLogGlobalForLineNumber = 655;
    COREACCESS::~COREACCESS((COREACCESS *)v25, v12);
    goto LABEL_3;
  }
  if ( *((_QWORD *)v10 + 395) )
  {
    if ( a4 && *(_QWORD *)&a2 )
    {
      LowPart = a1[4].LowPart;
      v20[0] = 0;
      TargetUsage = DmmGetTargetUsage((__int64)v10, LowPart, v20);
      if ( TargetUsage != a5 )
      {
        WdLogSingleEntry4(3LL, v21.HighPart, v5.LowPart, a1[4].LowPart, a5);
        WdLogGlobalForLineNumber = 675;
        v14 = -1073741267;
        goto LABEL_18;
      }
      LOBYTE(v17) = v20[0];
      v18 = DXGDISPLAYMANAGEROBJECT::AccessCheckTargetPolicy(TargetUsage, v17);
      v14 = v18;
      if ( v18 < 0 )
      {
        WdLogSingleEntry4(3LL, v21.HighPart, v5.LowPart, a1[4].LowPart, v18);
        WdLogGlobalForLineNumber = 682;
        goto LABEL_18;
      }
    }
    v19 = a1[4].LowPart;
    v24[0] = &v21;
    v23 = a3;
    v24[1] = &v23;
    v21 = a2;
    v14 = DmmDoForSpecifiedTarget__lambda_533853168684940ab58800475a78e255_(v10, v19, v24);
    if ( v14 >= 0 )
    {
      v14 = 0;
    }
    else
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 690;
    }
    goto LABEL_18;
  }
  WdLogSingleEntry2(3LL, v21.HighPart, v5.LowPart);
  WdLogGlobalForLineNumber = 661;
  v14 = -1073741275;
LABEL_18:
  COREACCESS::~COREACCESS((COREACCESS *)v25, v13);
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v22, 0LL);
  return (unsigned int)v14;
}
