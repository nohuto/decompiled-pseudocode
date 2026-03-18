/*
 * XREFs of ?GlobalVmBusStatChangeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x140220D60
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?NotifyGlobalVmBusStatusChange@DXGDODPRESENT@@QEAAXE@Z @ 0x14028369C (-NotifyGlobalVmBusStatusChange@DXGDODPRESENT@@QEAAXE@Z.c)
 */

__int64 __fastcall GlobalVmBusStatChangeCallback(struct DXGADAPTER *a1, unsigned __int8 *a2)
{
  DXGDODPRESENT *v4; // rcx
  _BYTE v6[40]; // [rsp+50h] [rbp-28h] BYREF

  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 13756;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDxgAdapter != NULL", 13756LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v6, a1, 1);
  if ( *((_DWORD *)a1 + 50) == 1 && !*((_QWORD *)a1 + 396) )
  {
    v4 = *(DXGDODPRESENT **)(*((_QWORD *)a1 + 395) + 464LL);
    if ( v4 )
      DXGDODPRESENT::NotifyGlobalVmBusStatusChange(v4, *a2);
  }
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v6);
  return 0LL;
}
