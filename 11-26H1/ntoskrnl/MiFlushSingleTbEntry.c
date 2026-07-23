/*
 * XREFs of MiFlushSingleTbEntry @ 0x1402845B0
 * Callers:
 *     MiGetPageChain @ 0x140285330 (MiGetPageChain.c)
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiGetPageChainSmallPageProcess @ 0x140287000 (MiGetPageChainSmallPageProcess.c)
 *     MiFillPhysicalPages @ 0x140288AC0 (MiFillPhysicalPages.c)
 *     MiMakeTradeVaReadOnly @ 0x140292D94 (MiMakeTradeVaReadOnly.c)
 *     MiTradeActivePage @ 0x140294DF8 (MiTradeActivePage.c)
 *     MiTradePageWritePte @ 0x14029EE3C (MiTradePageWritePte.c)
 *     MiZeroAndConvertPage @ 0x1402A0A00 (MiZeroAndConvertPage.c)
 *     MiZeroPhysicalPage @ 0x1402BA8E0 (MiZeroPhysicalPage.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiPrepareToTradeUsingAccessedBit @ 0x140316C84 (MiPrepareToTradeUsingAccessedBit.c)
 *     MiWsleFlush @ 0x14032C540 (MiWsleFlush.c)
 *     MiAbortCombineScan @ 0x14036AF70 (MiAbortCombineScan.c)
 *     MiMapSinglePage @ 0x14036C61C (MiMapSinglePage.c)
 *     MiCopyOnWriteUpdatePte @ 0x14036D080 (MiCopyOnWriteUpdatePte.c)
 *     MiValidateInPageEntries @ 0x14038E1C0 (MiValidateInPageEntries.c)
 *     MiNoFaultFound @ 0x1403A85F8 (MiNoFaultFound.c)
 *     MiValidFault @ 0x1403A9098 (MiValidFault.c)
 *     MiLargePageFault @ 0x1403A95C0 (MiLargePageFault.c)
 *     MiTradeStackPageFast @ 0x14040A528 (MiTradeStackPageFast.c)
 *     MiUpdateImagePfnImportRelocations @ 0x14047A5B0 (MiUpdateImagePfnImportRelocations.c)
 *     MmStealTopLevelPage @ 0x1404BC7D4 (MmStealTopLevelPage.c)
 *     MiMakeProtoPoolReadOnly @ 0x1404BF168 (MiMakeProtoPoolReadOnly.c)
 *     MiCopyKstack @ 0x14050CEF4 (MiCopyKstack.c)
 *     MiPrivateFixup @ 0x14051FCB0 (MiPrivateFixup.c)
 *     MiReleaseFaultPte @ 0x14052849C (MiReleaseFaultPte.c)
 *     MiFillPhysicalPagesWithPtes @ 0x1406EBF70 (MiFillPhysicalPagesWithPtes.c)
 *     MiDbgUnmapPhysicalAddress @ 0x14070393C (MiDbgUnmapPhysicalAddress.c)
 *     MiMarkBootGuardPage @ 0x140703ED4 (MiMarkBootGuardPage.c)
 *     MiShareValidPage @ 0x1407096FC (MiShareValidPage.c)
 *     MiRelocateImagePfn @ 0x14099FA2C (MiRelocateImagePfn.c)
 *     MmInvalidateDumpAddresses @ 0x140C07760 (MmInvalidateDumpAddresses.c)
 *     MiProtectSharedUserPage @ 0x140CFA190 (MiProtectSharedUserPage.c)
 *     MxCopyPage @ 0x140CFBAF4 (MxCopyPage.c)
 *     MiInitializeBootShadowStackPage @ 0x140D02594 (MiInitializeBootShadowStackPage.c)
 *     MiTradeBootImagePage @ 0x140D071EC (MiTradeBootImagePage.c)
 * Callees:
 *     MiSystemVaTypeToVm @ 0x14028521C (MiSystemVaTypeToVm.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiCompressTbFlushList @ 0x1404D427C (MiCompressTbFlushList.c)
 *     qsort @ 0x140539380 (qsort.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiFlushSingleTbEntry(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // r10d
  int v7; // r8d
  struct _LIST_ENTRY **v8; // rdx
  int v9; // r9d
  int v10; // r8d
  BOOL v11; // ecx
  unsigned int v12; // r10d
  __int64 v13; // r11
  unsigned int v14; // r8d
  unsigned __int64 v15; // rbx
  __int64 v16; // rdi
  int j; // r14d
  __int64 v18; // rax
  unsigned __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  unsigned __int64 v24; // rcx
  struct _LIST_ENTRY **v25; // [rsp+20h] [rbp-99h] BYREF
  BOOL v26; // [rsp+28h] [rbp-91h]
  int v27; // [rsp+2Ch] [rbp-8Dh]
  int v28; // [rsp+30h] [rbp-89h]
  int v29; // [rsp+34h] [rbp-85h]
  bool v30; // [rsp+38h] [rbp-81h]
  __int16 v31; // [rsp+39h] [rbp-80h]
  char v32; // [rsp+3Bh] [rbp-7Eh]
  unsigned int v33; // [rsp+3Ch] [rbp-7Dh]
  __int64 v34; // [rsp+40h] [rbp-79h]
  __int64 Base; // [rsp+48h] [rbp-71h] BYREF
  __int128 v36; // [rsp+50h] [rbp-69h]
  __int128 v37; // [rsp+60h] [rbp-59h]
  __int128 v38; // [rsp+70h] [rbp-49h]
  __int128 v39; // [rsp+80h] [rbp-39h]
  __int128 v40; // [rsp+90h] [rbp-29h]
  __int128 v41; // [rsp+A0h] [rbp-19h]
  __int128 v42; // [rsp+B0h] [rbp-9h]
  __int128 v43; // [rsp+C0h] [rbp+7h]
  __int128 i; // [rsp+D0h] [rbp+17h]
  __int64 v45; // [rsp+E0h] [rbp+27h]

  v36 = 0LL;
  v32 = 0;
  v45 = 0LL;
  v3 = a1;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  for ( i = 0LL; v3 >= 0xFFFFF68000000000uLL; v3 = (__int64)(v3 << 25) >> 16 )
  {
    if ( v3 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
  }
  if ( v3 >= 0xFFFF800000000000uLL )
  {
    if ( v3 > qword_140E2DFD0 || v3 < qword_140E2DFC0 )
      v4 = (unsigned __int8)byte_140E37BF0[((v3 >> 39) & 0x1FF) - 256];
    else
      v4 = 1LL;
  }
  else
  {
    v4 = 1LL;
  }
  v5 = MiSystemVaTypeToVm(v4, a2);
  v27 = 20;
  v29 = v7;
  v8 = (struct _LIST_ENTRY **)&unk_140E37340;
  if ( v5 )
    v8 = (struct _LIST_ENTRY **)v5;
  v25 = v8;
  v9 = ((v6 == -1) + 8) | 4;
  if ( v6 != 2 )
    v9 = (v6 == -1) + 8;
  v28 = v9;
  v30 = ((_DWORD)v8[23] & 0x40) != 0;
  if ( ((_DWORD)v8[23] & 0xF) != 0 || v8 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
  {
    v10 = v28;
    v11 = ((_DWORD)v8[23] & 0xF) == 0;
  }
  else
  {
    v11 = 0;
    v10 = v28 | 9;
  }
  v12 = 0;
  v26 = v11;
  v13 = 0LL;
  v31 = 0;
  v14 = v10 & 0xFFFFFFDB;
  v33 = 0;
  v34 = 0LL;
  v28 = v14;
  if ( (v9 & 4) != 0 )
  {
    v14 |= 4u;
    v28 = v14;
  }
  v15 = a1 & 0xFFFFFFFFFFFFF000uLL;
  Base = 0LL;
  v16 = 1LL;
  if ( !v11 && (v14 & 4) == 0 && v15 >= 0xFFFFF68000000000uLL && v15 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v14 |= 4u;
    v28 = v14;
  }
LABEL_16:
  for ( j = 0; ; j = 1 )
  {
    if ( v12 )
    {
      if ( (v14 & 2) == 0 )
      {
        v18 = *(&Base + v12 - 1);
        if ( (v18 & 0xC00) == 0 )
        {
          v19 = *(&Base + v12 - 1) & 0x3FF;
          if ( (v18 & 0xFFFFFFFFFFFFF000uLL) + ((v19 + 1) << 12) == v15 && v19 + v16 <= 0x3FF && v19 + v16 > v19 )
          {
            v34 = v16 + v13;
            *(&Base + v12 - 1) = (v18 + v16) ^ (v18 ^ (v18 + v16)) & 0xFFFFFFFFFFFFFC00uLL;
            return MiFlushTbList(&v25);
          }
        }
      }
      if ( (v14 & 2) == 0 )
      {
        v20 = *(&Base + v12 - 1);
        if ( (v20 & 0xC00) == 0 && (v20 & 0xFFFFFFFFFFFFF000uLL) == (v16 << 12) + v15 )
        {
          v24 = *(&Base + v12 - 1) & 0x3FF;
          if ( v24 + v16 <= 0x3FF && v24 + v16 > v24 )
          {
            v34 = v16 + v13;
            *(&Base + v12 - 1) = (v20 - (v16 << 12) + v16) ^ ((v20 - (v16 << 12) + v16) ^ (v20 - (v16 << 12))) & 0xFFFFFFFFFFFFFC00uLL;
            return MiFlushTbList(&v25);
          }
        }
      }
    }
    if ( v12 != v27 )
      break;
    if ( j )
    {
      if ( !(_BYTE)v31 )
        LOBYTE(v31) = 1;
      return MiFlushTbList(&v25);
    }
    if ( (_BYTE)v31 )
      return MiFlushTbList(&v25);
    qsort(&Base, v12, 8uLL, MiTbFlushSort);
    MiCompressTbFlushList(&v25);
    v13 = v34;
    v12 = v33;
    LOBYTE(v14) = v28;
  }
  while ( v16 )
  {
    v21 = 1024LL;
    if ( (unsigned __int64)(v16 - 1) <= 0x3FF )
      v21 = v16;
    v22 = v15 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v21 - 1) & 0x3FF;
    v15 += v21 << 12;
    *(&Base + v12) = v22;
    v12 = v33 + 1;
    v13 = v21 + v34;
    ++v33;
    v34 += v21;
    v16 -= v21;
    if ( v16 && v12 == v27 )
    {
      LOBYTE(v14) = v28;
      goto LABEL_16;
    }
  }
  return MiFlushTbList(&v25);
}
