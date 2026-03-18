/*
 * XREFs of ?FindVirtualGpuByLuid@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@PEAU_LUID@@@Z @ 0x140424260
 * Callers:
 *     ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z @ 0x140193C68 (-FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUI.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 */

struct DXGK_VIRTUAL_GPU *__fastcall DXGVIRTUALGPUMANAGER::FindVirtualGpuByLuid(
        struct _KTHREAD **this,
        struct _LUID *a2)
{
  struct _KTHREAD *v4; // rdx
  struct _KTHREAD *i; // rcx
  _QWORD *v6; // rbx
  __int64 HighPart; // [rsp+20h] [rbp-58h]
  __int64 LowPart; // [rsp+28h] [rbp-50h]
  _BYTE v10[40]; // [rsp+50h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v10, this + 9);
  v4 = (struct _KTHREAD *)(this + 13);
  for ( i = this[13]; i != v4; i = *(struct _KTHREAD **)i )
  {
    v6 = (_QWORD *)((char *)i - 120);
    if ( *a2 == *(_QWORD *)((char *)i - 92) )
      goto LABEL_6;
  }
  WdLogSingleEntry2(2LL, a2->HighPart, a2->LowPart);
  v6 = 0LL;
  LowPart = a2->LowPart;
  HighPart = a2->HighPart;
  WdLogGlobalForLineNumber = 2930;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"A virtual GPU with given LUID is not found: 0x%I64x 0x%I64x",
    HighPart,
    LowPart,
    0LL,
    0LL,
    0LL);
LABEL_6:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
  return (struct DXGK_VIRTUAL_GPU *)v6;
}
