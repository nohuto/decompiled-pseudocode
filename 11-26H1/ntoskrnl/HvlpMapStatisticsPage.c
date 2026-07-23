/*
 * XREFs of HvlpMapStatisticsPage @ 0x1405BCD60
 * Callers:
 *     HvlPhase1Initialize @ 0x1405BB23C (HvlPhase1Initialize.c)
 *     HvlStartBootLogicalProcessors @ 0x1405BC1D8 (HvlStartBootLogicalProcessors.c)
 *     HvlpEnableNextLogicalProcessor @ 0x1405BC94C (HvlpEnableNextLogicalProcessor.c)
 *     HvlpInitializeBootProcessor @ 0x1405BCB5C (HvlpInitializeBootProcessor.c)
 *     HvlpEnableRootVirtualProcessor @ 0x140794748 (HvlpEnableRootVirtualProcessor.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlpMapStatisticsPage(int a1, _OWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int128 v17; // [rsp+28h] [rbp-49h] BYREF
  __int64 v18; // [rsp+38h] [rbp-39h]
  __int64 v19; // [rsp+40h] [rbp-31h]
  __int128 v20; // [rsp+48h] [rbp-29h] BYREF
  __int64 v21; // [rsp+58h] [rbp-19h]
  unsigned __int64 v22; // [rsp+60h] [rbp-11h]
  _BYTE v23[16]; // [rsp+68h] [rbp-9h] BYREF
  _BYTE v24[48]; // [rsp+78h] [rbp+7h] BYREF

  v21 = 0LL;
  LODWORD(v22) = 0;
  v18 = 0LL;
  LODWORD(v19) = 0;
  v20 = 0LL;
  v17 = 0LL;
  v6 = HvlpAcquireHypercallPage((__int64)&v20, 1, (__int64)v24, 24LL);
  v7 = HvlpAcquireHypercallPage((__int64)&v17, 2, (__int64)v23, 8LL);
  v8 = v22;
  v9 = v7;
  *(_OWORD *)(v6 + 1) = *a2;
  *(_DWORD *)v6 = a1;
  LOWORD(v6) = HvcallInitiateHypercall(108LL, v8);
  *a3 = *v9 << 12;
  HvlpReleaseHypercallPage((unsigned int *)&v17, v10, v11, v12);
  HvlpReleaseHypercallPage((unsigned int *)&v20, v13, v14, v15);
  return (_WORD)v6 != 0 ? 0xC0000001 : 0;
}
