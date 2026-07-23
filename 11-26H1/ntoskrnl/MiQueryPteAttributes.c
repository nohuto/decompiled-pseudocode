/*
 * XREFs of MiQueryPteAttributes @ 0x1402B4C40
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1402B4660 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiIsPageOnBadList @ 0x14028EF30 (MiIsPageOnBadList.c)
 *     MiLockLeafPage @ 0x140298370 (MiLockLeafPage.c)
 *     MiGetPrototypePteDirect @ 0x1402B2B80 (MiGetPrototypePteDirect.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiGetProtoPteAddress @ 0x1402B4300 (MiGetProtoPteAddress.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiInvalidPteConforms @ 0x1402D64B0 (MiInvalidPteConforms.c)
 *     MiLockProtoPoolPage @ 0x1402D7150 (MiLockProtoPoolPage.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiRotatedToFrameBuffer @ 0x1403145E4 (MiRotatedToFrameBuffer.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiIsPrototypePteVadLookup @ 0x14031E380 (MiIsPrototypePteVadLookup.c)
 *     MiLockTransitionLeafPageEx @ 0x1403400D0 (MiLockTransitionLeafPageEx.c)
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     MiQueryPfn @ 0x140462CE0 (MiQueryPfn.c)
 *     MiIsLazyStampedPte @ 0x140482EE8 (MiIsLazyStampedPte.c)
 *     MiQueryPteAddResidentAttributes @ 0x1404E2D34 (MiQueryPteAddResidentAttributes.c)
 */

__int64 __fastcall MiQueryPteAttributes(__int64 *a1, __int64 a2, ULONG_PTR a3)
{
  unsigned __int64 v3; // rbx
  __int64 v7; // r15
  unsigned int v8; // edi
  __int64 HasShadow; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r14
  int v15; // eax
  __int64 v16; // rbx
  __int64 PteShadow; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  __int64 ProtoPteAddress; // r8
  __int64 PrototypePteDirect; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // r13
  __int64 v30; // rdx
  unsigned int v31; // r8d
  unsigned int v32; // r8d
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  __int64 v39; // rdx
  unsigned int *v40; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_QWORD *)a3;
  if ( a3 >= 0xFFFFF6FB7DBED000uLL
    && a3 <= 0xFFFFF6FB7DBED7F8uLL
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    HasShadow = MiPteHasShadow(a1, a2, a3);
    if ( HasShadow )
    {
      v11 = *(_QWORD *)(HasShadow + 1288);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 8 * ((a3 >> 3) & 0x1FF));
        if ( (v12 & 0x20) != 0 )
          v3 |= 0x20uLL;
        v13 = v3;
        v3 |= 0x42uLL;
        if ( (v12 & 0x42) == 0 )
          v3 = v13;
      }
    }
  }
  *(_QWORD *)(a2 + 24) = v3;
  v7 = a1[4];
  v8 = *(_DWORD *)(v7 + 48);
  if ( !v3 )
  {
    if ( ((v8 >> 2) & 7) != 1 && (*(_BYTE *)(a2 + 32) == 1 || (v8 & 0x80000) == 0) )
    {
LABEL_30:
      v18 = *(_QWORD *)(a2 + 16);
      if ( *(_BYTE *)(a2 + 32) )
      {
        ProtoPteAddress = qword_140E2D7B0;
        v19 = v18 & 0xFFFFFFFFFFFFF000uLL;
        if ( v19 == 2147352576 )
          ProtoPteAddress = qword_140E2D7A8;
        PrototypePteDirect = ProtoPteAddress;
      }
      else if ( (v8 & 0x80000) != 0
             || (ProtoPteAddress = MiGetProtoPteAddress(a1[4], v18 >> 12, 8u, &v40), v3)
             && !(unsigned int)MiIsPrototypePteVadLookup(v3) )
      {
        PrototypePteDirect = MiGetPrototypePteDirect(v3);
      }
      else
      {
        PrototypePteDirect = ProtoPteAddress;
      }
      if ( !PrototypePteDirect )
        return 1LL;
      v22 = *(_QWORD *)(a2 + 8) | 0x8000LL;
      *(_QWORD *)(a2 + 8) = v22;
      if ( PrototypePteDirect == ProtoPteAddress )
        *(_QWORD *)(a2 + 8) = v22 | 0x40000000;
      if ( ((a1[13] ^ PrototypePteDirect) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      {
        v36 = a1[14];
        if ( v36 )
        {
          LOBYTE(v19) = 17;
          MiUnlockProtoPoolPage(v36, v19);
          a1[14] = 0LL;
          a1[13] = 0LL;
        }
        v37 = MiLockProtoPoolPage(PrototypePteDirect);
        a1[14] = v37;
        if ( !v37 )
        {
          v38 = a1[5];
          if ( v38 )
          {
            MiUnlockPageTableInternal(*a1, v38);
            a1[5] = 0LL;
          }
          v39 = *((unsigned __int8 *)a1 + 48);
          if ( (_BYTE)v39 != 17 )
          {
            MiUnlockWorkingSetShared(*a1, v39);
            *((_BYTE *)a1 + 48) = 17;
          }
          MmAccessFault(2uLL, PrototypePteDirect);
          return 0LL;
        }
        a1[13] = PrototypePteDirect;
      }
      v23 = MiLockLeafPage((unsigned __int64 *)PrototypePteDirect, 0);
      v24 = *(_QWORD *)PrototypePteDirect;
      v25 = v23;
      *(_QWORD *)(a2 + 24) = *(_QWORD *)PrototypePteDirect;
      if ( v23 )
      {
        MiQueryPfn((v23 + 0x220000000000LL) / 48, a2);
        _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else if ( (v24 & 0xC00) == 0 && (unsigned int)MiInvalidPteConforms(v24) )
      {
        if ( (v35 & 8) != 0 )
        {
          *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
        }
        else if ( !v35 )
        {
          *(_QWORD *)(a2 + 8) = 0LL;
        }
      }
    }
    return 1LL;
  }
  if ( (v3 & 1) != 0 )
  {
    *(_QWORD *)(a2 + 8) |= 1uLL;
    v14 = (v3 >> 12) & 0xFFFFFFFFFFLL;
    v15 = (v8 >> 2) & 7;
    if ( v15 != 1 && v15 != 4 )
    {
      MiQueryPteAddResidentAttributes(v3);
      return 1LL;
    }
    v27 = (unsigned int)MiPageToNode((v3 >> 12) & 0xFFFFFFFFFFLL);
    v29 = 48 * v14 - 0x220000000000LL;
    if ( v14 <= qword_140E2D920
      && (*(_QWORD *)(48 * v14 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0
      && ((*(_DWORD *)(v29 + 32) & 0x40000000) != 0 || MiIsPageOnBadList(48 * v14 - 0x220000000000LL)) )
    {
      *(_QWORD *)(a2 + 8) |= 0x80000000uLL;
    }
    *(_QWORD *)(a2 + 8) = (v27 << 16) ^ (*(_QWORD *)(a2 + 8) ^ (v27 << 16)) & 0xFFFFFFFFFFC0FFFFuLL;
    if ( (v8 & 0x1C) == 4 )
    {
      LODWORD(v30) = (*(_DWORD *)(v7 + 48) >> 5) & 0x1F;
      if ( (v3 & 0x18) == 8 )
      {
        LODWORD(v30) = (*(_DWORD *)(v7 + 48) >> 5) & 7 | 0x18;
      }
      else if ( (v3 & 0x10) != 0 )
      {
        LODWORD(v30) = (*(_DWORD *)(v7 + 48) >> 5) & 0x17 | 8;
      }
      *(_QWORD *)(a2 + 8) |= 0x400001uLL;
LABEL_51:
      *(_QWORD *)(a2 + 8) = (16LL * (unsigned int)MmProtectToValue[(unsigned int)v30]) ^ (*(_QWORD *)(a2 + 8) ^ (16LL * (unsigned int)MmProtectToValue[(unsigned int)v30])) & 0xFFFFFFFFFFFF800FuLL;
      return 1LL;
    }
    if ( (unsigned int)MiRotatedToFrameBuffer(a3, v26, v27, v28) )
    {
      LODWORD(v30) = 1;
      if ( (v3 & 0x800) != 0 )
        LODWORD(v30) = 4;
      if ( (*(_DWORD *)(v7 + 48) & 0x300) == 0x300 && (*(_DWORD *)(v7 + 48) & 0xE0) != 0 )
      {
        LODWORD(v30) = v30 | 0x18;
      }
      else if ( (*(_DWORD *)(v7 + 48) & 0x300) == 0x100 )
      {
        LODWORD(v30) = v30 | 8;
      }
      goto LABEL_51;
    }
    v31 = *(_DWORD *)(v29 + 32);
    if ( (*(_QWORD *)(v29 + 40) & 0x20000000000000LL) == 0 )
    {
      if ( (*(_DWORD *)(v29 + 32) & 0x8000000) == 0 )
        goto LABEL_60;
      if ( v29 >= 0xFFFFDE0000000000uLL
        && v29 < 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
        && !(unsigned int)MiIsDecayPfn((__int64)(48 * v14) / 48) )
      {
        if ( (v31 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(v29) == 9 )
        {
          v32 = 5;
          goto LABEL_61;
        }
LABEL_60:
        v32 = HIBYTE(v31);
LABEL_61:
        *(_QWORD *)(a2 + 8) = ((unsigned __int64)v32 << 24) ^ (*(_QWORD *)(a2 + 8) ^ ((unsigned __int64)v32 << 24)) & 0xFFFFFFFFF8FFFFFFuLL;
        v30 = (*(_DWORD *)(v29 + 16) >> 5) & 0x1F;
        if ( *(__int64 *)(v29 + 8) > 0 && (*(_QWORD *)(v29 + 40) & 0x10000000000LL) == 0 )
        {
          *(_QWORD *)(a2 + 8) |= 0x8000uLL;
          if ( (*(_QWORD *)(v29 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 7 )
            v33 = 7LL;
          else
            v33 = *(_QWORD *)(v29 + 24) & 0x3FFFFFFFFFFFFFFFLL;
          LODWORD(v30) = MmMakeProtectNotWriteCopy[v30];
          *(_QWORD *)(a2 + 8) = (2 * v33) ^ (*(_QWORD *)(a2 + 8) ^ (2 * v33)) & 0xFFFFFFFFFFFFFFF1uLL;
        }
        goto LABEL_51;
      }
    }
    v32 = 5;
    goto LABEL_61;
  }
  if ( (v3 & 0x400) != 0 )
    goto LABEL_30;
  if ( (v3 & 0x800) == 0 )
  {
    if ( *((_BYTE *)a1 + 50) && (unsigned int)MiIsLazyStampedPte(v3, a2, 0LL) )
    {
      *(_QWORD *)(a2 + 8) = v34;
    }
    else if ( (v3 & 8) != 0 )
    {
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
    }
    return 1LL;
  }
  v16 = MiLockTransitionLeafPageEx(a3);
  if ( v16 )
  {
    PteShadow = *(_QWORD *)a3;
    if ( a3 >= 0xFFFFF6FB7DBED000uLL && a3 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(a3, *(_QWORD *)a3);
    *(_QWORD *)(a2 + 24) = PteShadow;
    MiQueryPfn((v16 + 0x220000000000LL) / 48, a2);
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 1LL;
  }
  return 0LL;
}
