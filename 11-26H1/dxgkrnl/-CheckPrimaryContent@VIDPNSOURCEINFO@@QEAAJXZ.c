/*
 * XREFs of ?CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ @ 0x1401C9424
 * Callers:
 *     ?CheckPrimaryContentState@DISPLAYSTATECHECKER@@QEAAJXZ @ 0x1401C9674 (-CheckPrimaryContentState@DISPLAYSTATECHECKER@@QEAAJXZ.c)
 * Callees:
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x140010BA4 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1400508E4 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1401C9700 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x140310550 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall VIDPNSOURCEINFO::CheckPrimaryContent(VIDPNSOURCEINFO *this)
{
  __int64 v3; // rcx
  __int64 CurrentProcess; // rax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  struct DXGALLOCATION *DisplayedPrimary; // rax
  struct _EX_RUNDOWN_REF *v9; // rdi
  __int64 Count; // rsi
  int v11; // ebp
  __int64 v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+28h] [rbp-50h]
  __int64 v14; // [rsp+50h] [rbp-28h] BYREF
  int v15; // [rsp+58h] [rbp-20h]
  _BYTE v16[16]; // [rsp+60h] [rbp-18h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+80h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 12) )
    return 0LL;
  if ( DXGPROCESS::GetCurrent() )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v16,
      *(struct DXGDEVICE **)this);
    DisplayedPrimary = DXGDEVICE::GetDisplayedPrimary(*(struct _KTHREAD ***)this, *((_DWORD *)this + 2));
    v9 = (struct _EX_RUNDOWN_REF *)DisplayedPrimary;
    if ( DisplayedPrimary )
    {
      DxgkReferenceDxgAllocation(DisplayedPrimary);
      Count = v9[1].Count;
      v14 = Count;
      v15 = 0;
      if ( Count != *(_QWORD *)this )
      {
        v11 = 0;
        while ( !(unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v14) )
        {
          Interval.QuadPart = -160000LL;
          KeDelayExecutionThread(0, 0, &Interval);
          if ( (unsigned int)++v11 >= 0xA )
          {
            v5 = -2147483631;
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 1958;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Device access lock for rendering device (0x%I64x) couldn't acquired within reasonable time",
              Count,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_13;
          }
        }
      }
      v5 = VIDPNSOURCEINFO::CheckPrimaryContentWorker(this, (struct DXGALLOCATION *)v9);
LABEL_13:
      ExReleaseRundownProtection(v9 + 11);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v14);
    }
    else
    {
      WdLogSingleEntry3(2LL, *((unsigned int *)this + 2), *((int *)this + 5), *((int *)this + 5));
      v13 = *((int *)this + 5);
      v12 = *((unsigned int *)this + 2);
      WdLogGlobalForLineNumber = 1909;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"There is no primary allocation for VidPnSource (0x%I64x) on Adapter with LUID (0x%I64x : 0x%I64x)",
        v12,
        v13,
        v13,
        0LL,
        0LL);
      v5 = -1071775482;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v16);
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v3);
    v5 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 1891;
    v7 = PsGetCurrentProcess(v6);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x 0x%I64x encountered exception",
      -1073741811LL,
      v7,
      0LL,
      0LL,
      0LL);
  }
  return v5;
}
