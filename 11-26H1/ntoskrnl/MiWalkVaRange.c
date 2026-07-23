/*
 * XREFs of MiWalkVaRange @ 0x1402B5320
 * Callers:
 *     MiResetVirtualMemory @ 0x140AAF5F0 (MiResetVirtualMemory.c)
 *     MiProcessVaRangesInfoClass @ 0x140B6E518 (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     MiGetPrototypePteDirect @ 0x1402B2B80 (MiGetPrototypePteDirect.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiGetProtoPteAddress @ 0x1402B4300 (MiGetProtoPteAddress.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiActOnPte @ 0x1402B61E0 (MiActOnPte.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockProtoPoolPage @ 0x1402D7150 (MiLockProtoPoolPage.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiGetNextPageTable @ 0x14031A080 (MiGetNextPageTable.c)
 *     MiWorkingSetIsContended @ 0x14031A300 (MiWorkingSetIsContended.c)
 *     MiIsPrototypePteVadLookup @ 0x14031E380 (MiIsPrototypePteVadLookup.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiCopyOnWrite @ 0x14036CAD8 (MiCopyOnWrite.c)
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403A4B6C (MiCopyOnWriteCheckConditions.c)
 *     MiMakeProtoLeafValid @ 0x1404B9358 (MiMakeProtoLeafValid.c)
 */

__int64 __fastcall MiWalkVaRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // rbp
  unsigned int v6; // edi
  _QWORD *v7; // r14
  ULONG_PTR v8; // r12
  ULONG_PTR v9; // rsi
  unsigned __int64 v10; // rbx
  unsigned __int8 v11; // r15
  __int64 v12; // rcx
  unsigned __int64 NextPageTable; // rbx
  __int64 v14; // r8
  int v15; // r13d
  unsigned __int64 v16; // r9
  ULONG_PTR ProtoPteAddress; // rdi
  int v18; // ebp
  int v19; // r15d
  unsigned __int64 v20; // rbx
  int v21; // ebx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rbx
  bool v25; // zf
  ULONG_PTR v26; // rdx
  __int64 v27; // rbp
  __int16 v28; // cx
  __int64 v29; // rdi
  __int64 HasShadow; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 ProcessorFlushList; // rax
  __int64 v37; // r8
  BOOL v38; // ecx
  int v39; // r8d
  __int64 v40; // r9
  unsigned __int64 v41; // rax
  int v42; // r8d
  unsigned __int8 v43; // [rsp+40h] [rbp-98h]
  int ProtoLeafValid; // [rsp+44h] [rbp-94h]
  __int64 v45; // [rsp+48h] [rbp-90h]
  unsigned int *v46; // [rsp+50h] [rbp-88h] BYREF
  struct _LIST_ENTRY **p_Blink; // [rsp+58h] [rbp-80h]
  unsigned __int64 v48; // [rsp+60h] [rbp-78h]
  __int64 v49; // [rsp+68h] [rbp-70h] BYREF
  __int64 v50; // [rsp+70h] [rbp-68h] BYREF
  __int64 v51; // [rsp+78h] [rbp-60h] BYREF
  _KPROCESS *Process; // [rsp+80h] [rbp-58h]
  unsigned __int64 v53; // [rsp+E8h] [rbp+10h]

  v5 = a3;
  v50 = 0LL;
  v6 = 0;
  v51 = 0LL;
  v7 = 0LL;
  v49 = 0LL;
  v8 = 0LL;
  ProtoLeafValid = 0;
  v45 = 0LL;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v48 = 0LL;
  v53 = v10;
  Process = KeGetCurrentThread()->ApcState.Process;
  p_Blink = &Process[2].ReadyListHead.Blink;
  v43 = MiLockWorkingSetShared(&Process[2].ReadyListHead.Blink);
  v11 = v43;
  if ( v9 <= v10 )
  {
    while ( 1 )
    {
      NextPageTable = MiGetNextPageTable(v9, v10, v11, 0, (__int64)&v46);
      v15 = 1;
      if ( NextPageTable != v9 )
      {
        if ( (*(_DWORD *)(v5 + 48) & 0x80000) != 0
          || !*(_QWORD *)(v5 + 88)
          || !MiGetProtoPteAddress(v5, (unsigned __int64)((__int64)(v9 << 25) >> 16) >> 12, 8u, &v46) )
        {
          v6 = -1073740748;
          ProtoLeafValid = -1073740748;
          if ( !NextPageTable )
            goto LABEL_34;
          v9 = NextPageTable;
LABEL_4:
          v16 = 0xFFFFF68000000000uLL;
          v48 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          goto LABEL_6;
        }
        v15 = 0;
      }
      if ( NextPageTable )
        goto LABEL_4;
      while ( 1 )
      {
        v16 = 0xFFFFF68000000000uLL;
LABEL_6:
        LODWORD(ProtoPteAddress) = 0;
        v18 = 0;
        v19 = 0;
        v49 = 0LL;
        if ( v15 )
        {
          v20 = *(_QWORD *)v9;
          if ( v9 >= 0xFFFFF6FB7DBED000uLL
            && v9 <= 0xFFFFF6FB7DBED7F8uLL
            && (v20 & 1) != 0
            && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
          {
            HasShadow = MiPteHasShadow(v12, *(_QWORD *)v9, v14);
            if ( HasShadow )
            {
              v33 = *(_QWORD *)(HasShadow + 1288);
              if ( v33 )
              {
                v34 = *(_QWORD *)(v33 + 8 * ((v9 >> 3) & 0x1FF));
                if ( (v34 & 0x20) != 0 )
                  v32 |= 0x20uLL;
                v20 = v32 | 0x42;
                if ( (v34 & 0x42) == 0 )
                  v20 = v32;
              }
            }
          }
        }
        else
        {
          v20 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        }
        if ( v20 )
          break;
        v21 = a3;
        if ( (*(_DWORD *)(a3 + 48) & 0x80000) == 0 && *(_QWORD *)(a3 + 88) )
        {
          ProtoPteAddress = MiGetProtoPteAddress(
                              a3,
                              (unsigned __int64)((__int64)((v9 << 25) - (v16 << 25)) >> 16) >> 12,
                              8u,
                              &v46);
          if ( ProtoPteAddress )
            goto LABEL_38;
          if ( !v15 )
          {
            v27 = v45;
LABEL_55:
            v10 = v53;
LABEL_56:
            if ( v7 )
            {
LABEL_24:
              MiUnlockProtoPoolPage(v7, 17LL);
              v10 = v53;
              v7 = 0LL;
              v8 = 0LL;
            }
            if ( v27 )
            {
              MiFlushTbList(v27);
              MiReleaseProcessorFlushList();
              v45 = 0LL;
            }
            v29 = (__int64)p_Blink;
            if ( v48 )
            {
              MiUnlockPageTableInternal((__int64)p_Blink, v48);
              v48 = 0LL;
            }
            MiUnlockWorkingSetShared(v29, v43);
            if ( v19 < 0 )
              MiCopyOnWriteCheckConditions(v29, (unsigned int)v19, v49);
            v11 = v43;
            goto LABEL_32;
          }
        }
LABEL_12:
        if ( v7 )
        {
          MiUnlockProtoPoolPage(v7, 17LL);
          v7 = 0LL;
          v8 = 0LL;
        }
LABEL_14:
        v22 = MiActOnPte(v21, v15, v9, ProtoPteAddress, a4, a5, (__int64)&v51, (__int64)&v50);
        if ( v22 )
        {
          if ( v22 == 274 )
          {
            v19 = MiCopyOnWrite((__int64)(v9 << 25) >> 16, v9, -1, 0, (__int64)&v49);
            v9 -= 8LL;
            v18 = 1;
          }
          else if ( v22 == -1073741791 )
          {
            v35 = v45;
            if ( !v45 )
            {
              ProcessorFlushList = MiGetProcessorFlushList(0LL, v23);
              v37 = (__int64)p_Blink;
              v45 = ProcessorFlushList;
              *(_DWORD *)(ProcessorFlushList + 16) = 0;
              *(_DWORD *)(ProcessorFlushList + 20) = 10;
              *(_QWORD *)ProcessorFlushList = v37;
              *(_BYTE *)(ProcessorFlushList + 24) = (*(_DWORD *)(v37 + 184) & 0x40) != 0;
              if ( (*(_DWORD *)(v37 + 184) & 0xF) != 0
                || (struct _LIST_ENTRY **)v37 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
              {
                v38 = (*(_DWORD *)(v37 + 184) & 0xF) == 0;
              }
              else
              {
                *(_DWORD *)(ProcessorFlushList + 16) |= 9u;
                v38 = 0;
              }
              *(_DWORD *)(ProcessorFlushList + 16) &= 0xFFFFFFDB;
              *(_DWORD *)(ProcessorFlushList + 8) = v38;
              v35 = ProcessorFlushList;
              *(_WORD *)(ProcessorFlushList + 25) = 0;
              *(_DWORD *)(ProcessorFlushList + 28) = 0;
              *(_QWORD *)(ProcessorFlushList + 32) = 0LL;
              *(_QWORD *)(ProcessorFlushList + 40) = 0LL;
            }
            MiInsertTbFlushEntry(v35, (__int64)(v9 << 25) >> 16, 1LL);
          }
          else
          {
            ProtoLeafValid = v22;
          }
        }
        v24 = v50;
        if ( v50 )
        {
          if ( v7 )
          {
            MiUnlockProtoPoolPage(v7, 17LL);
            v7 = 0LL;
            v8 = 0LL;
          }
          MiReleasePageFileInfo(v51, v24, 1LL);
        }
        v9 += 8LL;
        v25 = v18 == 0;
        v26 = v9;
        v27 = v45;
        v28 = v9;
        if ( !v25 || v19 < 0 )
          goto LABEL_55;
LABEL_18:
        v10 = v53;
        if ( v26 > v53
          || (v28 & 0xFFF) == 0
          || (v28 & 0x78) == 0 && (unsigned int)MiWorkingSetIsContended(p_Blink)
          || KeShouldYieldProcessor() )
        {
          goto LABEL_56;
        }
        if ( v7 )
        {
          v12 = 0xFFFFFFFFFFELL;
          if ( (*v7 & 0xFFFFFFFFFFELL) != 0 )
            goto LABEL_24;
        }
      }
      if ( (v20 & 1) != 0 || (v20 & 0x400) == 0 )
        break;
      if ( a4 == 2 && !(unsigned int)MiIsPrototypePteVadLookup(v20) && (v20 & 0x800) != 0 )
      {
        ProtoPteAddress = MiGetPrototypePteDirect(v20);
      }
      else
      {
        if ( !(unsigned int)MiIsPrototypePteVadLookup(v20) && (v20 & 0x800) != 0 )
        {
          if ( v39 == 1 )
          {
            v27 = v45;
            ProtoLeafValid = -1073740748;
          }
          else
          {
            if ( v7 )
            {
              MiUnlockProtoPoolPage(v7, 17LL);
              v7 = 0LL;
              v8 = 0LL;
            }
            v27 = v45;
            if ( v45 )
            {
              MiFlushTbList(v45);
              MiReleaseProcessorFlushList();
              v27 = 0LL;
              v45 = 0LL;
            }
            ProtoLeafValid = MiMakeProtoLeafValid(v9);
            if ( ProtoLeafValid >= 0 )
              v9 -= 8LL;
            else
              ProtoLeafValid = -1073740748;
          }
          v9 += 8LL;
          v26 = v9;
          v28 = v9;
          goto LABEL_18;
        }
        v41 = ((__int64)((v9 << 25) - (v40 << 25)) >> 16) & 0xFFFFFFFFFFFFF000uLL;
        if ( (v41 == 2147352576 || v41 == qword_140E2D7B8 && qword_140E2D7B8)
          && (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) == 0
          || ((*(_DWORD *)(a3 + 48) & 0x80000) != 0
           || !*(_QWORD *)(a3 + 88)
           || (ProtoPteAddress = MiGetProtoPteAddress(
                                   a3,
                                   (unsigned __int64)((__int64)((v9 << 25) - (v40 << 25)) >> 16) >> 12,
                                   8u,
                                   &v46),
               !(unsigned int)MiIsPrototypePteVadLookup(v20))
           && ProtoPteAddress != MiGetPrototypePteDirect(v20))
          && (ProtoPteAddress = MiGetPrototypePteDirect(v20), v42 != 2) )
        {
          v27 = v45;
          v9 += 8LL;
          v26 = v9;
          ProtoLeafValid = -1073740748;
          v28 = v9;
          goto LABEL_18;
        }
      }
      v21 = a3;
      if ( !ProtoPteAddress )
        goto LABEL_12;
LABEL_38:
      if ( ((ProtoPteAddress ^ v8) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        goto LABEL_14;
      if ( v7 )
      {
        MiUnlockProtoPoolPage(v7, 17LL);
        v8 = 0LL;
      }
      v7 = (_QWORD *)MiLockProtoPoolPage(ProtoPteAddress);
      if ( v7 )
      {
        v8 = ProtoPteAddress;
        goto LABEL_14;
      }
      if ( v45 )
      {
        MiFlushTbList(v45);
        MiReleaseProcessorFlushList();
        v45 = 0LL;
      }
      if ( v48 )
      {
        MiUnlockPageTableInternal((__int64)p_Blink, v48);
        v48 = 0LL;
      }
      v11 = v43;
      MiUnlockWorkingSetShared(p_Blink, v43);
      MmAccessFault(2uLL, ProtoPteAddress);
      v10 = v53;
      v29 = (__int64)p_Blink;
LABEL_32:
      MiLockWorkingSetShared(v29);
      v5 = a3;
      if ( v9 > v10 )
      {
        v6 = ProtoLeafValid;
        goto LABEL_34;
      }
    }
    v21 = a3;
    goto LABEL_12;
  }
LABEL_34:
  MiUnlockWorkingSetShared(p_Blink, v11);
  return v6;
}
