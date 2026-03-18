/*
 * XREFs of ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVCVirtualAddressAllocator@@_K2E@Z @ 0x140105CBC
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D09E8 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400292B0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x140105EC4 (-CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x140105F78 (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1401061D4 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?RecordVaPagingHistoryFreeGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z @ 0x1401064A4 (-RecordVaPagingHistoryFreeGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::FreeGpuVirtualAddressSystemCommand(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct _KTHREAD **a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int8 a6)
{
  struct _KTHREAD *v10; // rsi
  int started; // eax
  unsigned int i; // r15d
  _QWORD *v13; // rdi
  _QWORD *j; // rcx
  __int64 result; // rax
  int v16; // eax
  VIDMM_GLOBAL *v17; // rcx
  _QWORD **v18; // rcx
  _QWORD *v19; // rax
  _QWORD *k; // rcx
  _BYTE v21[24]; // [rsp+28h] [rbp-69h] BYREF
  _BYTE v22[24]; // [rsp+40h] [rbp-51h] BYREF
  _QWORD v23[12]; // [rsp+58h] [rbp-39h] BYREF
  __int64 v24; // [rsp+F8h] [rbp+67h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v21, a3 + 8);
  v10 = a3[7];
  v24 = a4;
  while ( v10 )
  {
    started = CompareVadByStartAddressAvl(&v24, (struct _RTL_BALANCED_NODE *)v10);
    if ( started >= 0 )
    {
      if ( started <= 0 )
        break;
      v10 = (struct _KTHREAD *)*((_QWORD *)v10 + 1);
    }
    else
    {
      v10 = *(struct _KTHREAD **)v10;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21);
  if ( v10 )
  {
    if ( (*((_DWORD *)v10 + 18) & 0x800) == 0 || a6 )
    {
      VIDMM_GLOBAL::RecordVaPagingHistoryFreeGpuVa(
        this,
        a2,
        *((_QWORD *)v10 + 3),
        *((_QWORD *)v10 + 4) - *((_QWORD *)v10 + 3));
      for ( i = 0; i < *((_DWORD *)this + 1738); ++i )
      {
        v13 = 0LL;
        for ( j = (_QWORD *)*((_QWORD *)v10 + 3 * i + 12); j; j = (_QWORD *)*j )
          v13 = j;
        while ( v13 )
        {
          memset(v23, 0, 0x58uLL);
          v16 = (*((_DWORD *)v13 + 16) >> 4) & 0x3F;
          LODWORD(v23[0]) = 114;
          HIDWORD(v23[0]) = v16;
          v23[7] = v13 - 1;
          v23[6] = a3;
          v23[8] = 0LL;
          VIDMM_GLOBAL::UncommitVirtualAddressRangeSystemCommand(v17, (struct _VIDMM_SYSTEM_COMMAND *)v23);
          v18 = (_QWORD **)v13[1];
          v19 = v13;
          if ( v18 )
          {
            v13 = (_QWORD *)v13[1];
            for ( k = *v18; k; k = (_QWORD *)*k )
              v13 = k;
          }
          else
          {
            while ( 1 )
            {
              v13 = (_QWORD *)(v13[2] & 0xFFFFFFFFFFFFFFFCuLL);
              if ( !v13 || (_QWORD *)*v13 == v19 )
                break;
              v19 = v13;
            }
          }
        }
      }
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v22, a3 + 8);
      CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)a3, v10);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22);
    }
    else
    {
      WdLogSingleEntry2(3LL, a3, a4);
      WdLogGlobalForLineNumber = 19645;
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(3LL, a3, a4);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 19678;
  }
  return result;
}
