/*
 * XREFs of MiCountSharedPages @ 0x1402B2BD0
 * Callers:
 *     MiPerformVadSplitting @ 0x140317B74 (MiPerformVadSplitting.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140701500 (MiPrepareImagePagesForHotPatch.c)
 *     MiSectionProtectGetCharges @ 0x140997FC0 (MiSectionProtectGetCharges.c)
 * Callees:
 *     MiGetPrototypePteDirect @ 0x1402B2B80 (MiGetPrototypePteDirect.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiGetProtoPteAddress @ 0x1402B4300 (MiGetProtoPteAddress.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiFastLockLeafPageTable @ 0x1402CF2D0 (MiFastLockLeafPageTable.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 *     MiWalkPageTables @ 0x140328AB0 (MiWalkPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     MiPteNeedsCommitCharge @ 0x1404821EC (MiPteNeedsCommitCharge.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiCountSharedPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  int v3; // ebx
  struct _LIST_ENTRY **p_Blink; // r12
  unsigned __int64 v7; // r14
  unsigned __int64 LeafVa; // rax
  __int64 v9; // rdx
  struct _LIST_ENTRY **AnyMultiplexedVm; // rsi
  int v11; // eax
  __int64 v12; // r8
  unsigned __int64 v13; // rbp
  __int64 v14; // r14
  unsigned __int64 v15; // rcx
  __int64 v16; // r15
  __int64 v17; // r12
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rsi
  __int64 ProtoPteAddress; // rax
  __int64 PrototypePteDirect; // rsi
  unsigned __int8 v24; // al
  __int64 *v25; // rax
  __int64 v26; // rdx
  unsigned int *MmInternal; // rcx
  __int64 v28; // rax
  __int64 HasShadow; // rax
  __int64 v31; // rax
  bool v32; // zf
  __int64 v33; // rsi
  struct _LIST_ENTRY **v34; // [rsp+20h] [rbp-128h]
  __int128 v35; // [rsp+28h] [rbp-120h] BYREF
  int v36; // [rsp+40h] [rbp-108h] BYREF
  unsigned int v37; // [rsp+44h] [rbp-104h] BYREF
  unsigned __int8 v38; // [rsp+49h] [rbp-FFh]
  struct _LIST_ENTRY **v39; // [rsp+60h] [rbp-E8h]
  __int64 v40; // [rsp+68h] [rbp-E0h]
  __int64 v41; // [rsp+70h] [rbp-D8h]
  __int64 (__fastcall *v42)(); // [rsp+F0h] [rbp-58h]
  __int128 *v43; // [rsp+F8h] [rbp-50h]
  unsigned __int8 v45; // [rsp+158h] [rbp+10h]
  __int64 v46; // [rsp+160h] [rbp+18h] BYREF
  __int64 v47; // [rsp+168h] [rbp+20h]

  v3 = *(_DWORD *)(a1 + 48);
  v46 = 0LL;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v34 = p_Blink;
LABEL_2:
  v45 = MiLockWorkingSetShared(p_Blink);
LABEL_3:
  if ( a2 > a3 )
  {
    v16 = v46;
  }
  else
  {
    v35 = 0LL;
    memset_0(&v37, 0, 0xBCuLL);
    v7 = (__int64)(a2 << 25) >> 16;
    v36 = 4145;
    LeafVa = MiGetLeafVa(v7);
    if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_140E2DFC0 && LeafVa <= qword_140E2DFD0 )
      AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
    else
      AnyMultiplexedVm = (struct _LIST_ENTRY **)MiGetAnyMultiplexedVm(2LL, v9);
    v36 = 4149;
    v11 = MiFastLockLeafPageTable(AnyMultiplexedVm, v7, 0LL);
    if ( v11 )
    {
      LODWORD(v35) = v11 - 1;
      v13 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)&v35 + 1) = v13;
    }
    else
    {
      v13 = *((_QWORD *)&v35 + 1);
    }
    if ( v13 )
      goto LABEL_9;
    v39 = AnyMultiplexedVm;
    v43 = &v35;
    v40 = (__int64)(a2 << 25) >> 16;
    v41 = (__int64)(a3 << 25) >> 16;
    v37 = v37 & 0xFFFFFE3F | 0x40;
    v42 = MiGetNextPageTableTail;
    v38 = v45;
    MiWalkPageTables(&v36);
    v13 = *((_QWORD *)&v35 + 1);
    if ( *((_QWORD *)&v35 + 1) )
    {
LABEL_9:
      v14 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v15 = a3 + 8;
    }
    else
    {
      v13 = a3 + 8;
      v14 = 0LL;
      v15 = a3 + 8;
    }
    v47 = v14;
    if ( (v3 & 0x1C) != 8 || (v3 & 0x3E0) == 0x20 )
    {
      v16 = v46;
      if ( (v3 & 0xA0) != 0xA0 )
      {
        v16 = ((__int64)(v13 - a2) >> 3) + v46;
        v46 = v16;
      }
      a2 = v13;
    }
    else
    {
      v16 = v46;
      if ( a2 < v13 )
      {
        do
        {
          v33 = v16++;
          if ( !(unsigned int)MiPteNeedsCommitCharge(a1, a2) )
            v16 = v33;
          a2 += 8LL;
        }
        while ( a2 < v13 );
        p_Blink = v34;
        v15 = a3 + 8;
        v46 = v16;
      }
    }
    if ( a2 != v15 )
    {
      v17 = v46;
      v18 = (__int64)(a2 << 25) >> 16;
      while ( 1 )
      {
        v19 = *(_QWORD *)a2;
        if ( a2 >= 0xFFFFF6FB7DBED000uLL
          && a2 <= 0xFFFFF6FB7DBED7F8uLL
          && (v19 & 1) != 0
          && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
        {
          HasShadow = MiPteHasShadow(v15, v19, v12);
          if ( HasShadow )
          {
            v15 = *(_QWORD *)(HasShadow + 1288);
            if ( v15 )
            {
              v31 = *(_QWORD *)(v15 + 8 * ((a2 >> 3) & 0x1FF));
              if ( (v31 & 0x20) != 0 )
                v19 |= 0x20uLL;
              v15 = v19;
              v19 |= 0x42uLL;
              if ( (v31 & 0x42) == 0 )
                v19 = v15;
            }
          }
        }
        if ( v19 )
        {
          if ( (v19 & 1) != 0 )
          {
            if ( (v19 & 0x200) != 0 )
              goto LABEL_27;
            v20 = 48 * ((v19 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
            if ( *(__int64 *)(v20 + 40) >= 0 )
              goto LABEL_27;
            v21 = *(_QWORD *)(v20 + 8);
            ProtoPteAddress = MiGetProtoPteAddress(a1, v18 >> 12, 0LL, &v46);
            v15 = 0x8000000000000000uLL;
            if ( (v21 | 0x8000000000000000uLL) != ProtoPteAddress )
              goto LABEL_27;
            goto LABEL_26;
          }
          if ( (v19 & 0x400) == 0 )
            goto LABEL_27;
          v15 = 0x3FFFFFFFFFF000LL;
          LOBYTE(v15) = (v19 & 0x3FFFFFFFFFF000LL) == 0x3FFFFFFFFFF000LL;
          if ( ((unsigned __int8)v15 & ((v19 & 0x400) != 0)) == 0 )
          {
            PrototypePteDirect = MiGetPrototypePteDirect(v19);
            if ( PrototypePteDirect != MiGetProtoPteAddress(a1, v18 >> 12, 0LL, &v46)
              || (v3 & 0x1C) == 8 && !(unsigned int)MiPteNeedsCommitCharge(a1, a2) )
            {
              goto LABEL_27;
            }
LABEL_26:
            ++v17;
            goto LABEL_27;
          }
          v32 = (v19 & 0xA0) == 0xA0;
        }
        else
        {
          v32 = (unsigned int)MiPteNeedsCommitCharge(a1, a2) == 0;
        }
        if ( !v32 )
          goto LABEL_26;
LABEL_27:
        a2 += 8LL;
        v18 += 4096LL;
        if ( (a2 & 0xFFF) == 0 || a2 > a3 )
        {
          v46 = v17;
          p_Blink = v34;
          MiUnlockPageTableInternal(v34, v47);
          v24 = (_DWORD)v34[23] & 0xF;
          if ( (v24 == 5 || v24 <= 4u)
            && (((_DWORD)v34[23] & 0xF) != 1 ? (v25 = (__int64 *)(v34 + 24)) : (v25 = &qword_140E37980),
                (v26 = *v25, (MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal) == 0LL)
              ? (v28 = 0LL)
              : (v28 = MmInternal[81]),
                (*(_DWORD *)((v28 << 6) + v26) & 0x40000000) != 0)
            || KeShouldYieldProcessor() )
          {
            MiUnlockWorkingSetShared(v34, v45);
            goto LABEL_2;
          }
          goto LABEL_3;
        }
      }
    }
    if ( v14 )
      MiUnlockPageTableInternal(p_Blink, v14);
  }
  MiUnlockWorkingSetShared(p_Blink, v45);
  return v16;
}
