/*
 * XREFs of MiResolveProtoPteFault @ 0x1403A5DAC
 * Callers:
 *     MiDispatchFault @ 0x1403A3E60 (MiDispatchFault.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14028B2D0 (MiMakeDemandZeroPte.c)
 *     MiLockLeafPage @ 0x140298E10 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiResolveDemandZeroFault @ 0x1402D4B40 (MiResolveDemandZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x1402D8E50 (MiCompleteProtoPteFault.c)
 *     MiLockProtoPoolPage @ 0x1402F50D0 (MiLockProtoPoolPage.c)
 *     MiImagePageOk @ 0x1402F7140 (MiImagePageOk.c)
 *     MiIsDecayPfn @ 0x1402F9850 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402FDC40 (MiGetPfnSlabType.c)
 *     MiReadPteShadow @ 0x140314FF0 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14031C28C (MiWritePteShadow.c)
 *     MiIsPrototypePteVadLookup @ 0x14031C350 (MiIsPrototypePteVadLookup.c)
 *     MiSanitizeShadowPxe @ 0x140342108 (MiSanitizeShadowPxe.c)
 *     MiResolveMappedFileFault @ 0x14036F5D0 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x1403701DC (MiResolvePageFileFault.c)
 *     MiAccessCheck @ 0x1403A69D0 (MiAccessCheck.c)
 *     KeInvalidAccessAllowed @ 0x1403A6D10 (KeInvalidAccessAllowed.c)
 *     MiResolveTransitionFault @ 0x1403A6F04 (MiResolveTransitionFault.c)
 */

__int64 __fastcall MiResolveProtoPteFault(__int64 a1, __int64 a2, struct _SLIST_ENTRY **a3, __int64 *a4)
{
  unsigned int v4; // edi
  __int64 v6; // rbp
  __int64 *v7; // r15
  unsigned __int64 v8; // r14
  unsigned __int64 *v9; // r12
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 PteShadow; // rsi
  unsigned __int64 v13; // rbx
  __int64 result; // rax
  unsigned __int64 v15; // r14
  int v16; // eax
  __int64 v17; // r9
  unsigned int v18; // ecx
  __int16 v19; // ax
  unsigned __int64 v20; // rbx
  bool v21; // zf
  int v22; // eax
  char v23; // cl
  int v24; // esi
  char v25; // cl
  unsigned __int64 DemandZeroPte; // rax
  int v27; // edx
  __int64 v28; // r8
  unsigned __int64 v29; // rdx
  unsigned int v30; // r8d
  unsigned int v31; // r9d
  unsigned int v32; // r8d
  bool v33; // zf
  int v34; // eax
  __int64 v35; // [rsp+30h] [rbp-68h]
  __int64 v36; // [rsp+40h] [rbp-58h]
  unsigned __int64 v37; // [rsp+A0h] [rbp+8h]
  unsigned __int64 v40; // [rsp+B0h] [rbp+18h]

  v4 = 0;
  *a3 = 0LL;
  *a4 = 0LL;
  v36 = *(_QWORD *)(a1 + 56);
  v37 = *(_QWORD *)a1;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = (__int64 *)(((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (v6 & 1) == 0 || (v8 = v6 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
    v8 = 0LL;
  v9 = *(unsigned __int64 **)(a1 + 104);
  v35 = MiLockProtoPoolPage((ULONG_PTR)v9, 0LL);
  if ( !v35 )
    return 3221225494LL;
  v10 = MiLockLeafPage(v9, 2);
  PteShadow = *v9;
  v13 = v10;
  if ( (unsigned __int64)v9 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v9 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow((unsigned __int64)v9, *v9);
  if ( (PteShadow & 1) == 0 )
  {
    if ( !PteShadow )
    {
      v4 = -1073741819;
      goto LABEL_44;
    }
    v15 = *v7;
    if ( (unsigned __int64)v7 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v7 <= 0xFFFFF6FB7DBED7F8uLL )
      v15 = MiReadPteShadow((unsigned __int64)v7, *v7);
    LOBYTE(v16) = MiIsPrototypePteVadLookup(v15);
    if ( v16 )
    {
      v17 = (v15 >> 5) & 0x1F;
      if ( ((v15 >> 5) & 0x18) == 0x10 && (*(_BYTE *)(a1 + 69) & 0x10) != 0 )
        goto LABEL_54;
    }
    else if ( (v15 & 8) == 0 )
    {
      if ( ((PteShadow >> 5) & 0x18) == 0x10 && (*(_BYTE *)(a1 + 69) & 0x10) != 0 )
      {
LABEL_54:
        v4 = -1073740748;
        goto LABEL_44;
      }
      v18 = MiAccessCheck((ULONG_PTR)v9, v6, 1);
      if ( v18 )
      {
        if ( v13 )
          _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v4 = v18;
        goto LABEL_44;
      }
      LOBYTE(v17) = (PteShadow >> 5) & 0x1F;
    }
    v19 = PteShadow;
    if ( qword_140E2D740 && (PteShadow & 0x10) == 0 )
      v19 = PteShadow & qword_140E2D748;
    if ( (v19 & 0x400) != 0
      || (v19 & 0x800) != 0
      || (v19 & 8) != 0
      || (v17 & 5) != 5
      || !a2 && (((unsigned __int8)PteShadow >> 5) & 5) == 4
      || (*(_DWORD *)(v36 + 184) & 0xF) == 0 && KeGetCurrentThread()->ApcState.Process[1].IdealProcessorAssignmentBlock )
    {
      v20 = v37;
    }
    else
    {
      v20 = v37;
      if ( (MiFlags & 0x20000) == 0 || v37 < 0xFFFF800000000000uLL || (v17 & 2) == 0 )
      {
        MiUnlockProtoPoolPage(v35, 0x11u);
        if ( (v6 & 1) != 0 )
        {
          if ( *(_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL) != 1
            && *(_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL) != 3
            && *(_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
          {
LABEL_31:
            LOBYTE(v22) = MiIsPrototypePteVadLookup(v15);
            if ( v22 )
              PteShadow = v15;
            v23 = PteShadow >> 5;
            v24 = v23 & 0x18;
            v25 = v23 & 2 | 4;
            if ( v24 == 8 )
            {
              v25 |= 8u;
            }
            else if ( v24 == 24 )
            {
              v25 |= 0x18u;
            }
            DemandZeroPte = MiMakeDemandZeroPte(v25);
            v40 = DemandZeroPte;
            v27 = 0;
            if ( (unsigned __int64)v7 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v7 <= 0xFFFFF6FB7DBED7F8uLL )
            {
              v27 = MiSanitizeShadowPxe();
              DemandZeroPte = v40;
            }
            *v7 = DemandZeroPte;
            if ( v27 )
              MiWritePteShadow();
            v28 = 0LL;
            v29 = (unsigned __int64)v7;
            return MiResolveDemandZeroFault((unsigned __int64 *)a1, v29, v28, a2, a4);
          }
          v21 = *(_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL) == 6;
        }
        else
        {
          v21 = (unsigned __int8)KeInvalidAccessAllowed(v6, 0LL) == 0;
        }
        if ( !v21 && v37 >= 0xFFFF800000000000uLL )
          return 3221225477LL;
        goto LABEL_31;
      }
    }
    if ( (PteShadow & 0x400) != 0 )
      return MiResolveMappedFileFault(a1, (_SLIST_ENTRY *)v9, v35, a3);
    if ( (PteShadow & 0x800) != 0 )
      return MiResolveTransitionFault(a1, v9, v35, a2, a3);
    if ( (PteShadow & 8) != 0 )
      return MiResolvePageFileFault(a1, (__int64 *)v9, v35, a3);
    if ( (v6 & 1) != 0 )
    {
      if ( *(_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL) != 1
        && *(_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL) != 3
        && *(_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
      {
LABEL_82:
        v28 = v35;
        v29 = (unsigned __int64)v9;
        return MiResolveDemandZeroFault((unsigned __int64 *)a1, v29, v28, a2, a4);
      }
      v33 = *(_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL) == 6;
    }
    else
    {
      v33 = (unsigned __int8)KeInvalidAccessAllowed(v6, 0LL) == 0;
    }
    if ( !v33 && v20 >= 0xFFFF800000000000uLL )
    {
      LOBYTE(v34) = MiIsPrototypePteVadLookup(v15);
      if ( !v34 )
        v15 = PteShadow;
      if ( ((v15 >> 5) & 0x18) == 0x10 )
      {
        MiUnlockProtoPoolPage(v35, 0x11u);
        return 3221225477LL;
      }
    }
    goto LABEL_82;
  }
  if ( v8 )
  {
    v30 = *(_DWORD *)(v13 + 32);
    v31 = *(_DWORD *)(v8 + 80) & 7;
    if ( (*(_QWORD *)(v13 + 40) & 0x20000000000000LL) != 0
      || (*(_DWORD *)(v13 + 32) & 0x8000000) != 0
      && (v13 < 0xFFFFDE0000000000uLL
       || v13 >= 48 * qword_140E2D7A0 - 0x21FFFFFFFFD0LL
       || MiIsDecayPfn((__int64)(v13 + 0x220000000000LL) / 48)
       || (v30 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(v13) == 9) )
    {
      v32 = 5;
    }
    else
    {
      v32 = HIBYTE(v30) & 7;
    }
    if ( v31 > v32 && (*(_QWORD *)(v13 + 40) & 0x20000000000000LL) == 0 )
      *(_DWORD *)(v13 + 32) = *(_DWORD *)(v13 + 32) & 0xF8FFFFFF | (v31 << 24);
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_44;
  }
  if ( !MiImagePageOk(v37, v13, v11, 0LL) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v4 = -1073740760;
LABEL_44:
    MiUnlockProtoPoolPage(v35, 0x11u);
    return v4;
  }
  *(_QWORD *)(v13 + 24) = (*(_QWORD *)(v13 + 24) + 1LL) ^ (*(_QWORD *)(v13 + 24) ^ (*(_QWORD *)(v13 + 24) + 1LL)) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockProtoPoolPage(v35, 0x11u);
  __incgsdword(0x2E98u);
  result = MiCompleteProtoPteFault((__int64 *)a1, (__int64)(v13 + 0x220000000000LL) / 48, a2, 0, v6);
  if ( (int)result >= 0 )
    return 272LL;
  return result;
}
