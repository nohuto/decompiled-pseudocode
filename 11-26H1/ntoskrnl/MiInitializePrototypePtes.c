/*
 * XREFs of MiInitializePrototypePtes @ 0x140988FE0
 * Callers:
 *     MiAllocateSubsectionProtos @ 0x1404503C4 (MiAllocateSubsectionProtos.c)
 *     MiCreatePrototypePtes @ 0x14048DBBC (MiCreatePrototypePtes.c)
 *     MiCreatePagingFileFinish @ 0x140988DEC (MiCreatePagingFileFinish.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     MiInitializeFaultVaListCore @ 0x1404616F0 (MiInitializeFaultVaListCore.c)
 *     MiFillMemoryPtes @ 0x14047D2D0 (MiFillMemoryPtes.c)
 *     MiEncodeProtoFill @ 0x1404939D0 (MiEncodeProtoFill.c)
 *     MiMakeSubsectionPte @ 0x1404AF348 (MiMakeSubsectionPte.c)
 *     MiMakeDemandFillProtoPte @ 0x1404BF540 (MiMakeDemandFillProtoPte.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall MiInitializePrototypePtes(_QWORD *BugCheckParameter1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // r15
  unsigned __int64 SubsectionPte; // rax
  unsigned __int64 v10; // rbx
  __int64 DemandFillProtoPte; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  __int128 v14; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v15[40]; // [rsp+30h] [rbp-98h] BYREF
  int v16; // [rsp+58h] [rbp-70h]

  memset_0(v15, 0, 0x78uLL);
  v8 = *(_QWORD *)a3;
  v14 = 0LL;
  if ( *(_QWORD *)(v8 + 64) )
  {
    SubsectionPte = MiMakeSubsectionPte(a3);
LABEL_3:
    v10 = SubsectionPte;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(v8 + 56) & 0x1000) == 0 )
  {
    SubsectionPte = MiMakeDemandZeroPte((*(_DWORD *)(a3 + 32) >> 1) & 0x1F);
    goto LABEL_3;
  }
  v10 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
LABEL_4:
  if ( a2 < 0x200 )
    goto LABEL_5;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)BugCheckParameter1) != 4 )
  {
    if ( a4 )
    {
      DemandFillProtoPte = MiMakeDemandFillProtoPte(v10);
      v12 = MiEncodeProtoFill((unsigned __int64)BugCheckParameter1, a2, DemandFillProtoPte);
      a2 -= v12;
      BugCheckParameter1 += v12;
LABEL_5:
      if ( !a2 )
        return;
      goto LABEL_6;
    }
    *(_QWORD *)&v14 = BugCheckParameter1;
    *((_QWORD *)&v14 + 1) = 8 * a2;
    MiInitializeFaultVaListCore((__int64)v15, (__int64)&v14, 1LL, 2);
    v16 = (*(_DWORD *)(v8 + 56) >> 20) & 0x7F;
    MmAccessFault(2uLL, (signed __int64)BugCheckParameter1, 0, v13 | (unsigned __int64)v15);
  }
LABEL_6:
  MiFillMemoryPtes(BugCheckParameter1, a2, v10);
}
