/*
 * XREFs of ?ReportSegmentState@VIDMM_SEGMENT@@QEBAXXZ @ 0x1400ECD00
 * Callers:
 *     ReportState @ 0x14012524C (ReportState.c)
 * Callees:
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x14002B940 (McTemplateK0pqx_EtwWriteTransfer.c)
 *     McTemplateK0pppttxqx_EtwWriteTransfer @ 0x14004216C (McTemplateK0pppttxqx_EtwWriteTransfer.c)
 *     LogLockAllocationBackingStoreToEtw @ 0x1400ED0F4 (LogLockAllocationBackingStoreToEtw.c)
 */

void __fastcall VIDMM_SEGMENT::ReportSegmentState(VIDMM_SEGMENT *this)
{
  char *v1; // r12
  char *v3; // rsi
  char *v4; // r14
  _QWORD *v5; // rbx
  _QWORD *i; // r15
  __int64 v7; // rax
  VIDMM_SEGMENT **v8; // rdx
  __int64 v9; // rcx
  _QWORD **v10; // rbp
  _QWORD *j; // rbx
  __int64 v12; // [rsp+30h] [rbp-58h]
  __int64 v13; // [rsp+38h] [rbp-50h]
  __int64 v14; // [rsp+48h] [rbp-40h]

  v1 = (char *)this + 112;
  v3 = (char *)*((_QWORD *)this + 14);
  if ( v3 != (char *)this + 112 )
  {
    do
    {
      v4 = (char *)*((_QWORD *)v3 + 2);
      if ( v4 != v3 + 16 )
      {
        do
        {
          v5 = v4 + 16;
          for ( i = (_QWORD *)*((_QWORD *)v4 + 2); i != v5; i = (_QWORD *)*i )
          {
            v7 = *(i - 7);
            v8 = (VIDMM_SEGMENT **)(**(_QWORD **)v7 + 216LL);
            if ( (*(VIDMM_SEGMENT **)(**(_QWORD **)v7 + 64LL) == this || *v8 == this) && (byte_14008A201 & 1) != 0 )
            {
              LODWORD(v14) = (unsigned __int16)(*((_WORD *)this + 35) + 1);
              v9 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)v7 + 368LL) + 16LL);
              LODWORD(v13) = *v8 == this;
              LODWORD(v12) = v9 != 0;
              McTemplateK0pppttxqx_EtwWriteTransfer(
                v9,
                *(i - 6),
                *v8 == this,
                *(_QWORD *)(*(_QWORD *)(*(i - 7) + 8LL) + 24LL),
                *(_QWORD *)(*(i - 6) + 24LL),
                i - 7,
                v12,
                v13,
                *(_QWORD *)(**(_QWORD **)v7 + 16LL),
                v14,
                *(_QWORD *)(**(_QWORD **)v7 + 72LL));
              v5 = v4 + 16;
            }
            if ( *((_DWORD *)this + 27) != 1 )
              LogLockAllocationBackingStoreToEtw();
          }
          v4 = *(char **)v4;
        }
        while ( v4 != v3 + 16 );
        v1 = (char *)this + 112;
      }
      v3 = *(char **)v3;
    }
    while ( v3 != v1 );
  }
  v10 = (_QWORD **)((char *)this + 264);
  for ( j = *v10; j != v10; j = (_QWORD *)*j )
  {
    if ( (byte_14008A201 & 1) != 0 )
      McTemplateK0pqx_EtwWriteTransfer(
        (unsigned __int16)(*(_WORD *)(*(_QWORD *)(*(j - 30) + 64LL) + 70LL) + 1),
        &EventReportMarkedGlobalAllocation,
        *(j - 30));
  }
}
