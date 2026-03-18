/*
 * XREFs of ?ReportStates@VIDMM_RECYCLE_BLOCK@@QEAAXXZ @ 0x140112B4C
 * Callers:
 *     ?ReportBlockStates@VIDMM_RECYCLE_HEAP@@QEAAXXZ @ 0x140112AA0 (-ReportBlockStates@VIDMM_RECYCLE_HEAP@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x14001970C (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     McTemplateK0pppppppqq_EtwWriteTransfer @ 0x14003EA70 (McTemplateK0pppppppqq_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_RECYCLE_BLOCK::ReportStates(VIDMM_RECYCLE_BLOCK *this, __int64 a2, __int64 a3)
{
  char *v3; // r14
  char *i; // rsi
  char *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // [rsp+50h] [rbp-18h]
  __int64 v11; // [rsp+58h] [rbp-10h]

  v3 = (char *)this + 72;
  for ( i = (char *)*((_QWORD *)this + 9); i != v3; i = *(char **)i )
  {
    v6 = i - 120;
    if ( (*((_DWORD *)i - 14) == 1
       || *((_DWORD *)i - 14) == 2
       || *((_DWORD *)i - 14) == 3
       || (unsigned int)(*((_DWORD *)i - 14) - 4) < 2)
      && (byte_14008A201 & 0x10) != 0 )
    {
      v8 = *((_QWORD *)this + 4);
      if ( *(_DWORD *)v8 == 3 || (unsigned int)(*(_DWORD *)v8 - 4) <= 2 )
        v9 = *((_QWORD *)this + 7);
      else
        v9 = *((_QWORD *)v6 + 4);
      McTemplateK0qxxx_EtwWriteTransfer(
        *((_QWORD *)v6 + 5) - *((_QWORD *)v6 + 4),
        &EventCreateProcessAllocationDetails,
        v8,
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL) + 24LL),
        (_BYTE)i - 120,
        v6[40] - v6[32],
        v9);
    }
    if ( (byte_14008A202 & 0x40) != 0 )
    {
      v7 = *((_QWORD *)this + 4);
      LODWORD(v11) = *((_DWORD *)v6 + 16);
      LODWORD(v10) = *(_DWORD *)v7;
      McTemplateK0pppppppqq_EtwWriteTransfer(
        v7,
        a2,
        a3,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 8LL) + 16LL),
        i - 120,
        this,
        *((_QWORD *)this + 7),
        v7,
        *((_QWORD *)v6 + 4),
        *((_QWORD *)v6 + 5),
        v10,
        v11);
    }
  }
}
