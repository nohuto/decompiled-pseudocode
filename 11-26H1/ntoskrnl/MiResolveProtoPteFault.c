/*
 * XREFs of MiResolveProtoPteFault @ 0x1403A7B0C
 * Callers:
 *     MiDispatchFault @ 0x1403A5BC0 (MiDispatchFault.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiLockLeafPage @ 0x140298370 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiResolveDemandZeroFault @ 0x1402B6900 (MiResolveDemandZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x1402BAC10 (MiCompleteProtoPteFault.c)
 *     MiLockProtoPoolPage @ 0x1402D7150 (MiLockProtoPoolPage.c)
 *     MiImagePageOk @ 0x1402D91C0 (MiImagePageOk.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14031E2BC (MiWritePteShadow.c)
 *     MiIsPrototypePteVadLookup @ 0x14031E380 (MiIsPrototypePteVadLookup.c)
 *     MiSanitizeShadowPxe @ 0x140344188 (MiSanitizeShadowPxe.c)
 *     MiResolveMappedFileFault @ 0x140371380 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x140371F8C (MiResolvePageFileFault.c)
 *     MiAccessCheck @ 0x1403A8730 (MiAccessCheck.c)
 *     KeInvalidAccessAllowed @ 0x1403A8A70 (KeInvalidAccessAllowed.c)
 *     MiResolveTransitionFault @ 0x1403A8C64 (MiResolveTransitionFault.c)
 */

__int64 __fastcall MiResolveProtoPteFault(__int64 a1, __int64 a2, _SLIST_ENTRY **a3, __int64 *a4)
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
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  __int64 result; // rax
  unsigned __int64 v17; // r14
  int v18; // eax
  __int64 v19; // r9
  unsigned int v20; // ecx
  __int16 v21; // ax
  __int64 v22; // rdx
  unsigned __int64 v23; // rbx
  bool v24; // zf
  int v25; // eax
  char v26; // cl
  int v27; // esi
  char v28; // cl
  unsigned __int64 DemandZeroPte; // rax
  int v30; // edx
  __int64 v31; // r8
  unsigned __int64 v32; // rdx
  unsigned int v33; // r8d
  unsigned int v34; // r9d
  bool v35; // zf
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // [rsp+30h] [rbp-68h]
  __int64 v40; // [rsp+40h] [rbp-58h]
  unsigned __int64 v41; // [rsp+A0h] [rbp+8h]
  unsigned __int64 v44; // [rsp+B0h] [rbp+18h]

  v4 = 0;
  *a3 = 0LL;
  *a4 = 0LL;
  v40 = *(_QWORD *)(a1 + 56);
  v41 = *(_QWORD *)a1;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = (__int64 *)(((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (v6 & 1) == 0 || (v8 = v6 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
    v8 = 0LL;
  v9 = *(unsigned __int64 **)(a1 + 104);
  v39 = MiLockProtoPoolPage((ULONG_PTR)v9, 0LL);
  if ( !v39 )
    return 3221225494LL;
  v10 = MiLockLeafPage(v9, 2);
  PteShadow = *v9;
  v13 = v10;
  v14 = 0xFFFFF6FB7DBED000uLL;
  if ( (unsigned __int64)v9 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v9 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    PteShadow = MiReadPteShadow((unsigned __int64)v9, *v9);
    v14 = 0xFFFFF6FB7DBED000uLL;
  }
  if ( (PteShadow & 1) == 0 )
  {
    if ( !PteShadow )
    {
      v4 = -1073741819;
      goto LABEL_44;
    }
    v17 = *v7;
    if ( (unsigned __int64)v7 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v7 <= 0xFFFFF6FB7DBED7F8uLL )
      v17 = MiReadPteShadow((unsigned __int64)v7, *v7);
    LOBYTE(v18) = MiIsPrototypePteVadLookup(v17);
    if ( v18 )
    {
      v19 = (v17 >> 5) & 0x1F;
      if ( ((v17 >> 5) & 0x18) == 0x10 && (*(_BYTE *)(a1 + 69) & 0x10) != 0 )
        goto LABEL_54;
    }
    else if ( (v17 & 8) == 0 )
    {
      if ( ((PteShadow >> 5) & 0x18) == 0x10 && (*(_BYTE *)(a1 + 69) & 0x10) != 0 )
      {
LABEL_54:
        v4 = -1073740748;
        goto LABEL_44;
      }
      v20 = MiAccessCheck((ULONG_PTR)v9, v6, 1);
      if ( v20 )
      {
        if ( v13 )
          _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v4 = v20;
        goto LABEL_44;
      }
      LOBYTE(v19) = (PteShadow >> 5) & 0x1F;
    }
    v21 = PteShadow;
    if ( qword_140E2D8C0 && (PteShadow & 0x10) == 0 )
      v21 = PteShadow & qword_140E2D8C8;
    v22 = a2;
    if ( (v21 & 0x400) != 0
      || (v21 & 0x800) != 0
      || (v21 & 8) != 0
      || (v19 & 5) != 5
      || !a2 && (((unsigned __int8)PteShadow >> 5) & 5) == 4
      || (*(_DWORD *)(v40 + 184) & 0xF) == 0 && KeGetCurrentThread()->ApcState.Process[1].IdealProcessorAssignmentBlock )
    {
      v23 = v41;
    }
    else
    {
      v23 = v41;
      if ( (MiFlags & 0x20000) == 0 || v41 < 0xFFFF800000000000uLL || (v19 & 2) == 0 )
      {
        LOBYTE(v22) = 17;
        MiUnlockProtoPoolPage(v39, v22, 5LL);
        if ( (v6 & 1) != 0 )
        {
          if ( *(_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL) != 1
            && *(_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL) != 3
            && *(_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
          {
LABEL_31:
            LOBYTE(v25) = MiIsPrototypePteVadLookup(v17);
            if ( v25 )
              PteShadow = v17;
            v26 = PteShadow >> 5;
            v27 = v26 & 0x18;
            v28 = v26 & 2 | 4;
            if ( v27 == 8 )
            {
              v28 |= 8u;
            }
            else if ( v27 == 24 )
            {
              v28 |= 0x18u;
            }
            DemandZeroPte = MiMakeDemandZeroPte(v28);
            v44 = DemandZeroPte;
            v30 = 0;
            if ( (unsigned __int64)v7 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v7 <= 0xFFFFF6FB7DBED7F8uLL )
            {
              v30 = MiSanitizeShadowPxe();
              DemandZeroPte = v44;
            }
            *v7 = DemandZeroPte;
            if ( v30 )
              MiWritePteShadow();
            v31 = 0LL;
            v32 = (unsigned __int64)v7;
            return MiResolveDemandZeroFault((unsigned __int64 *)a1, v32, v31, a2, a4);
          }
          v24 = *(_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL) == 6;
        }
        else
        {
          v24 = (unsigned __int8)KeInvalidAccessAllowed(v6, 0LL) == 0;
        }
        if ( !v24 && v41 >= 0xFFFF800000000000uLL )
          return 3221225477LL;
        goto LABEL_31;
      }
    }
    if ( (PteShadow & 0x400) != 0 )
      return MiResolveMappedFileFault(a1, (_SLIST_ENTRY *)v9, v39, a3);
    if ( (PteShadow & 0x800) != 0 )
      return MiResolveTransitionFault(a1, v9, v39, a2, a3);
    if ( (PteShadow & 8) != 0 )
      return MiResolvePageFileFault(a1, (__int64 *)v9, v39, a3);
    if ( (v6 & 1) != 0 )
    {
      if ( *(_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL) != 1
        && *(_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL) != 3
        && *(_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
      {
LABEL_82:
        v31 = v39;
        v32 = (unsigned __int64)v9;
        return MiResolveDemandZeroFault((unsigned __int64 *)a1, v32, v31, a2, a4);
      }
      v35 = *(_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL) == 6;
    }
    else
    {
      v35 = (unsigned __int8)KeInvalidAccessAllowed(v6, 0LL) == 0;
    }
    if ( !v35 && v23 >= 0xFFFF800000000000uLL )
    {
      LOBYTE(v36) = MiIsPrototypePteVadLookup(v17);
      if ( !v36 )
        v17 = PteShadow;
      if ( ((v17 >> 5) & 0x18) == 0x10 )
      {
        LOBYTE(v37) = 17;
        MiUnlockProtoPoolPage(v39, v37, v38);
        return 3221225477LL;
      }
    }
    goto LABEL_82;
  }
  if ( v8 )
  {
    v33 = *(_DWORD *)(v13 + 32);
    v34 = *(_DWORD *)(v8 + 80) & 7;
    if ( (*(_QWORD *)(v13 + 40) & 0x20000000000000LL) != 0
      || (*(_DWORD *)(v13 + 32) & 0x8000000) != 0
      && ((v14 = 0xFFFFDE0000000000uLL, v13 < 0xFFFFDE0000000000uLL)
       || v13 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
       || MiIsDecayPfn((__int64)(v13 + 0x220000000000LL) / 48)
       || (v33 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(v13) == 9) )
    {
      v11 = 5LL;
    }
    else
    {
      v11 = HIBYTE(v33) & 7;
    }
    if ( v34 > (unsigned int)v11 && (*(_QWORD *)(v13 + 40) & 0x20000000000000LL) == 0 )
      *(_DWORD *)(v13 + 32) = *(_DWORD *)(v13 + 32) & 0xF8FFFFFF | (v34 << 24);
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_44;
  }
  if ( !MiImagePageOk(v41, v13, v11, 0LL) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v4 = -1073740760;
LABEL_44:
    LOBYTE(v14) = 17;
    MiUnlockProtoPoolPage(v39, v14, v11);
    return v4;
  }
  v15 = (*(_QWORD *)(v13 + 24) + 1LL) ^ (*(_QWORD *)(v13 + 24) ^ (*(_QWORD *)(v13 + 24) + 1LL)) & 0xC000000000000000uLL;
  *(_QWORD *)(v13 + 24) = v15;
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v15) = 17;
  MiUnlockProtoPoolPage(v39, v15, v11);
  __incgsdword(0x2E98u);
  result = MiCompleteProtoPteFault((__int64 *)a1, (__int64)(v13 + 0x220000000000LL) / 48, a2, 0, v6);
  if ( (int)result >= 0 )
    return 272LL;
  return result;
}
