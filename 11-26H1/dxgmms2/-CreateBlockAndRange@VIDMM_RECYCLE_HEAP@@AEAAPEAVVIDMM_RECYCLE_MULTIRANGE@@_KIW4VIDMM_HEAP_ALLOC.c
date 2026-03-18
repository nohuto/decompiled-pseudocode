/*
 * XREFs of ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIW4VIDMM_HEAP_ALLOCATE_FLAGS@@K@Z @ 0x1400AD454
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAEKW4VIDMM_HEAP_ALLOCATE_FLAGS@@@Z @ 0x1400ACA7C (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAEKW4VIDMM_HEAP_ALLOCATE.c)
 * Callees:
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1400047C8 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x14003B5A4 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x14003B5E0 (-GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     McTemplateK0pppppppqq_EtwWriteTransfer @ 0x14003EA70 (McTemplateK0pppppppqq_EtwWriteTransfer.c)
 *     ?CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KW4VIDMM_HEAP_ALLOCATE_FLAGS@@K@Z @ 0x1400AD5D8 (-CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KW4VIDMM_HEAP_ALLOCATE_FLA.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400EFC60 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1400F0AA8 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400F2134 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?CreateRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_RANGE@@PEAVVIDMM_RECYCLE_BLOCK@@_K1@Z @ 0x14010B648 (-CreateRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_RANGE@@PEAVVIDMM_RECYCLE_BLOCK@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP::CreateBlockAndRange(
        VIDMM_RECYCLE_HEAP_MGR **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned __int8 v6; // dl
  unsigned __int64 SmallAllocationSize; // rax
  char v8; // dl
  VIDMM_RECYCLE_HEAP_MGR *v9; // rcx
  unsigned __int64 SmallAllocationBlockSize; // r10
  unsigned int v11; // r11d
  unsigned __int64 *BlockForType; // rax
  unsigned __int64 *v13; // rdi
  struct VIDMM_RECYCLE_RANGE *Range; // rbx
  int v16; // ecx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rax
  __int64 Multirange; // rax
  __int64 v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8

  v6 = *(_DWORD *)a1 == 5 || *(_DWORD *)a1 == 6;
  SmallAllocationSize = VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize((VIDMM_RECYCLE_HEAP_MGR *)a1, v6);
  if ( SmallAllocationSize > SmallAllocationBlockSize )
    SmallAllocationBlockSize = VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationBlockSize(v9, v8);
  BlockForType = (unsigned __int64 *)VIDMM_RECYCLE_HEAP::CreateBlockForType(v9, SmallAllocationBlockSize, v11, a5);
  v13 = BlockForType;
  if ( !BlockForType )
    return 0LL;
  Range = VIDMM_RECYCLE_HEAP_MGR::CreateRange(
            a1[1],
            (struct VIDMM_RECYCLE_BLOCK *)BlockForType,
            BlockForType[5],
            BlockForType[6]);
  if ( !Range )
  {
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'((VIDMM_RECYCLE_BLOCK *)v13);
    return 0LL;
  }
  v16 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 == 3 || (unsigned int)(v16 - 4) <= 2 || (unsigned int)(v16 - 9) <= 1 )
    *((_DWORD *)Range + 20) = 1;
  *((_QWORD *)Range + 16) = v13 + 9;
  *((_QWORD *)Range + 15) = v13 + 9;
  v17 = v13[5];
  v13[9] = (unsigned __int64)Range + 120;
  v18 = v13[6];
  v13[10] = (unsigned __int64)Range + 120;
  Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(a1[1], 0LL, v13, v17, v18);
  v20 = Multirange;
  if ( !Multirange )
  {
    VIDMM_RECYCLE_HEAP_MGR::DestroyRange(a1[1], Range);
    return 0LL;
  }
  *(_QWORD *)(Multirange + 64) = Range;
  *(_QWORD *)(Multirange + 72) = Range;
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree(v13[4], 2LL, Multirange);
  *((_QWORD *)Range + 17) = v20;
  if ( (byte_14008A202 & 0x40) != 0 )
    McTemplateK0pppppppqq_EtwWriteTransfer(
      v22,
      v21,
      v23,
      *(_QWORD *)(*((_QWORD *)a1[1] + 1) + 16LL),
      Range,
      v13,
      v13[7],
      a1,
      *((_QWORD *)Range + 4),
      *((_QWORD *)Range + 5),
      *(_DWORD *)a1,
      *((_DWORD *)Range + 16));
  return v20;
}
