/*
 * XREFs of ?LiveMigrationGetTransferSize@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEA_K@Z @ 0x140195910
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DdiQueryDirtyBitData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYDIRTYBITDATA@@@Z @ 0x1404253AC (-DdiQueryDirtyBitData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYDIRTYBITDATA@@@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::LiveMigrationGetTransferSize(struct _KTHREAD **this, unsigned __int64 *a2)
{
  __int64 v4; // rbp
  __int64 v5; // r13
  unsigned int i; // esi
  __int64 v7; // rbx
  ULONG v8; // eax
  ADAPTER_RENDER *v9; // rcx
  int DirtyBitData; // eax
  _BYTE v12[24]; // [rsp+50h] [rbp-68h] BYREF
  _OWORD v13[2]; // [rsp+68h] [rbp-50h] BYREF
  __int128 v14; // [rsp+88h] [rbp-30h]
  __int64 v15; // [rsp+98h] [rbp-20h]

  v13[0] = 0LL;
  *a2 = 0LL;
  v13[1] = 0LL;
  v15 = 0LL;
  LODWORD(v4) = 0;
  v5 = 0LL;
  v14 = 0LL;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v12, this + 25);
  for ( i = 0; i < *((_DWORD *)this + 42); ++i )
  {
    v7 = (__int64)this[23] + 112 * i;
    if ( *(_DWORD *)(v7 + 104) )
    {
      if ( *(_DWORD *)(v7 + 88) )
      {
        RtlClearAllBits((PRTL_BITMAP)(v7 + 32));
        v9 = this[1];
        *(_QWORD *)&v13[0] = *(_QWORD *)(v7 + 96);
        *(_QWORD *)&v14 = *(_QWORD *)(v7 + 40);
        *((_QWORD *)&v14 + 1) = *(unsigned int *)(v7 + 48);
        DirtyBitData = ADAPTER_RENDER::DdiQueryDirtyBitData(v9, (struct _DXGKARG_QUERYDIRTYBITDATA *)v13);
        v4 = DirtyBitData;
        if ( DirtyBitData < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 695;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"LiveMigrationGetDirtyBitplane DDI call failed with status 0x%I64x",
            v4,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_12;
        }
        v8 = RtlNumberOfSetBits((PRTL_BITMAP)(v7 + 32));
      }
      else
      {
        v8 = *(_DWORD *)(v7 + 32);
      }
      *a2 += *(_QWORD *)(v7 + 56) * v8;
      v5 += *(unsigned int *)(v7 + 48);
    }
  }
  *a2 += (v5 + 0x1FFFFFF) & 0xFFFFFFFFFE000000uLL;
LABEL_12:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
  return (unsigned int)v4;
}
