/*
 * XREFs of DxgkQueryClockCalibration @ 0x14038A9F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x14000F1D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x140016D70 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDXGADAPTER@@@Z @ 0x14038AB98 (-DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDX.c)
 */

__int64 __fastcall DxgkQueryClockCalibration(void *a1)
{
  struct _KTHREAD **Current; // rbx
  int v3; // ebx
  struct DXGADAPTER *v5; // [rsp+50h] [rbp-58h] BYREF
  DXGADAPTER *v6; // [rsp+58h] [rbp-50h] BYREF
  struct _D3DKMT_QUERYCLOCKCALIBRATION Src; // [rsp+68h] [rbp-40h] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)a1);
  if ( Current )
  {
    memset(&Src, 0, sizeof(Src));
    RtlCopyFromUser(&Src, a1, 0x28uLL);
    v5 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v6, Src.hAdapter, Current, &v5, 1);
    v3 = DxgkQueryClockCalibrationInternal((struct DXGPROCESS *)Current, &Src, v5);
    if ( v3 >= 0 )
      RtlCopyToUser(a1, &Src, 0x28uLL);
    if ( v6 )
      DXGADAPTER::ReleaseReference(v6);
    return (unsigned int)v3;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 10585;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 10585LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
}
