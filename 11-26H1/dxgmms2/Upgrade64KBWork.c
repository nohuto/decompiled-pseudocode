/*
 * XREFs of Upgrade64KBWork @ 0x1400A8034
 * Callers:
 *     ?VidMmUpgrade64KBWork@@YAXPEAX@Z @ 0x1400A8650 (-VidMmUpgrade64KBWork@@YAXPEAX@Z.c)
 * Callees:
 *     McTemplateK0pp_EtwWriteTransfer @ 0x14001BA24 (McTemplateK0pp_EtwWriteTransfer.c)
 *     McTemplateK0x_EtwWriteTransfer @ 0x140031A48 (McTemplateK0x_EtwWriteTransfer.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1400417C8 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x140044EC8 (McTemplateK0dq_EtwWriteTransfer.c)
 *     McTemplateK0qxx_EtwWriteTransfer @ 0x14004EF7C (McTemplateK0qxx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     ?GetNumAvailable64KPages@@YA_KXZ @ 0x1400A78C8 (-GetNumAvailable64KPages@@YA_KXZ.c)
 */

LONG __fastcall Upgrade64KBWork(PRKEVENT *a1)
{
  PRKEVENT v1; // r14
  unsigned __int64 v3; // rsi
  unsigned __int64 NumAvailable64KPages; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned __int64 v7; // rbx
  int v8; // edi
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v12; // [rsp+20h] [rbp-40h]
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v14[2]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-18h]
  __int64 v16; // [rsp+50h] [rbp-10h]

  v1 = *a1;
  v3 = (__int64)(*a1)[1862].Header.WaitListHead.Blink * *(_QWORD *)&(*a1)[1865].Header.Lock;
  NumAvailable64KPages = GetNumAvailable64KPages();
  v7 = NumAvailable64KPages;
  if ( (byte_14008A201 & 1) != 0 )
    McTemplateK0pp_EtwWriteTransfer(
      v5,
      &VidMmUpgradeAllocationStartPageCreation,
      v6,
      v1[1862].Header.WaitListHead.Blink,
      NumAvailable64KPages);
  if ( v3 > v7 )
  {
    while ( 1 )
    {
      if ( (byte_14008A201 & 1) != 0 )
        McTemplateK0_EtwWriteTransfer(v5, &LargePageUpgrade_CreatePagesStart, v6);
      v14[0] = 0LL;
      v16 = 0LL;
      v15 = v3 - v7;
      v14[1] = 0x10000LL;
      if ( (byte_14008A201 & 1) != 0 )
        McTemplateK0x_EtwWriteTransfer(v5, &VidMmUpgradeAskMmForPages, v6, v3 - v7);
      v8 = ZwManagePartition(-2LL, 0LL, 8LL, v14, 32);
      if ( v8 < 0 )
      {
        WdLogSingleEntry1(3LL, v15);
        WdLogGlobalForLineNumber = 374;
        v15 = 0LL;
        v16 = 0LL;
      }
      v9 = GetNumAvailable64KPages();
      v7 = v9;
      if ( (byte_14008A201 & 1) != 0 )
      {
        McTemplateK0qxx_EtwWriteTransfer(v5, v10, v6, v8, v16, v9);
        if ( (byte_14008A201 & 1) != 0 )
        {
          LODWORD(v12) = v16;
          McTemplateK0dq_EtwWriteTransfer(v5, &LargePageUpgrade_CreatePagesEnd, v6, v15, v12);
        }
      }
      if ( v3 <= v7 )
        break;
      Interval.QuadPart = -170000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
  }
  if ( (byte_14008A201 & 1) != 0 )
    McTemplateK0x_EtwWriteTransfer(v5, &VidMmUpgradeAllocationPagesCreated, v6, v7);
  *(_QWORD *)&v1[1863].Header.Lock = v7;
  LOBYTE(v1[1862].Header.WaitListHead.Flink) = 0;
  return KeSetEvent(a1[3], 0, 0);
}
