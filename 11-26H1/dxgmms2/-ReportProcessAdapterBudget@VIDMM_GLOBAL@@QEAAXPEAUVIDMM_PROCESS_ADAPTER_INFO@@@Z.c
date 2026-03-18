/*
 * XREFs of ?ReportProcessAdapterBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x140112590
 * Callers:
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1400CB9E0 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x140112488 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0xxpqhu_EtwWriteTransfer @ 0x14003D780 (McTemplateK0xxpqhu_EtwWriteTransfer.c)
 *     McTemplateK0xxpqhuuuuu_EtwWriteTransfer @ 0x14003E3D4 (McTemplateK0xxpqhuuuuu_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_GLOBAL::ReportProcessAdapterBudget(VIDMM_GLOBAL *this, struct _KTHREAD **a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int16 i; // bx
  unsigned __int8 v7; // bp
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 *v10; // r15
  __int64 v11; // rcx
  unsigned __int8 v12; // bp
  _QWORD *v13; // r14
  __int64 v14; // [rsp+30h] [rbp-98h]
  __int64 v15; // [rsp+38h] [rbp-90h]
  __int64 v16; // [rsp+40h] [rbp-88h]
  _BYTE v17[88]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v18; // [rsp+E0h] [rbp+18h]
  __int64 v19; // [rsp+E8h] [rbp+20h]

  if ( (byte_14008A201 & 0x20) != 0 )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v17, a2 + 18);
    for ( i = 0; (unsigned int)i < *((_DWORD *)this + 1738); ++i )
    {
      v7 = 0;
      v8 = 0LL;
      v9 = (__int64)a2[1] + 304 * i;
      v10 = (__int64 *)(v9 + 144);
      do
      {
        v11 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * i);
        if ( (*(_BYTE *)(v11 + v8 + 632) & 2) != 0 )
        {
          v5 = *v10;
          LOBYTE(v11) = *((_BYTE *)a2 + 178);
          v18 = *v10;
          v19 = v10[8];
          if ( (byte_14008A201 & 0x20) != 0 )
          {
            LOBYTE(v4) = *((_BYTE *)a2 + 176);
            McTemplateK0xxpqhuuuuu_EtwWriteTransfer(v11, v4, v5);
            v5 = v18;
            if ( (byte_14008A201 & 0x20) != 0 )
            {
              LOBYTE(v16) = v7;
              LOWORD(v15) = i;
              LODWORD(v14) = *((_DWORD *)a2[2] + 6);
              McTemplateK0xxpqhu_EtwWriteTransfer(
                v11,
                &EventVidMmProcessUsageChange,
                v18,
                v18,
                v18,
                *((_QWORD *)this + 3),
                v14,
                v15,
                v16);
              if ( (byte_14008A201 & 0x20) != 0 )
              {
                LOBYTE(v16) = v7;
                LOWORD(v15) = i;
                LODWORD(v14) = *((_DWORD *)a2[2] + 6);
                McTemplateK0xxpqhu_EtwWriteTransfer(
                  v11,
                  &EventVidMmProcessCommitmentChange,
                  v5,
                  v19,
                  v19,
                  *((_QWORD *)this + 3),
                  v14,
                  v15,
                  v16);
              }
            }
          }
        }
        ++v7;
        ++v10;
        v8 += 24LL;
      }
      while ( v7 < 2u );
      if ( *(_QWORD *)(v9 + 160) && (byte_14008A201 & 0x20) != 0 )
        McTemplateK0xxpqhu_EtwWriteTransfer(v11, &EventVidMmProcessUsageChange, v5);
      v12 = 0;
      v13 = (_QWORD *)(v9 + 264);
      do
      {
        if ( *v13 )
        {
          if ( (byte_14008A201 & 0x20) != 0 )
            McTemplateK0xxpqhu_EtwWriteTransfer(v11, &EventVidMmProcessDemotedCommitmentChange, v5);
        }
        ++v12;
        ++v13;
      }
      while ( v12 < 5u );
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17);
  }
}
