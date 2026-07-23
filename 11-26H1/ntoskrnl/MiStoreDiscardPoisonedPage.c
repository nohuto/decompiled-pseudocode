/*
 * XREFs of MiStoreDiscardPoisonedPage @ 0x14070F118
 * Callers:
 *     MiGetBadPageResources @ 0x1406F5D78 (MiGetBadPageResources.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiGetWsleContents @ 0x1402965D0 (MiGetWsleContents.c)
 *     MiDecommitHandleValidPte @ 0x14029EDAC (MiDecommitHandleValidPte.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiAreChargesNeededToLockPage @ 0x1402C7DC0 (MiAreChargesNeededToLockPage.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiLockTransitionLeafPageEx @ 0x1403400D0 (MiLockTransitionLeafPageEx.c)
 *     MiDeleteTransitionPte @ 0x140340870 (MiDeleteTransitionPte.c)
 *     MiDecommitInitializePacket @ 0x140363928 (MiDecommitInitializePacket.c)
 *     MiGetTopLevelPfn @ 0x1403FD790 (MiGetTopLevelPfn.c)
 *     MiIsStoreProcess @ 0x1403FD910 (MiIsStoreProcess.c)
 *     MiGetPageTablePfnBuddyRaw @ 0x1403FD950 (MiGetPageTablePfnBuddyRaw.c)
 *     MiDecommitPagesTail @ 0x1404438DC (MiDecommitPagesTail.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     MiStoreLogDiscardPoisonedPage @ 0x14070F668 (MiStoreLogDiscardPoisonedPage.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiStoreDiscardPoisonedPage(__int64 a1, ULONG_PTR a2, _BYTE *a3)
{
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r12
  __int64 TopLevelPfn; // rax
  PEPROCESS PageTablePfnBuddyRaw; // r15
  __int64 v10; // r8
  BOOL IsStoreProcess; // eax
  unsigned __int64 v12; // r10
  unsigned int v13; // r9d
  int v14; // ebx
  unsigned int v15; // edi
  unsigned __int64 v16; // rbx
  __int64 v17; // rbx
  ULONG_PTR v18; // rax
  ULONG_PTR v19; // r12
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int64 v22; // r10
  __int64 v23; // rcx
  char v24; // r10
  __int64 v25; // r11
  char v26; // al
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // r8
  int v31; // ecx
  int v32; // r8d
  KIRQL v34; // [rsp+50h] [rbp-178h]
  struct _LIST_ENTRY **p_Blink; // [rsp+58h] [rbp-170h] BYREF
  __int64 DemandZeroPte; // [rsp+60h] [rbp-168h] BYREF
  unsigned __int64 v37; // [rsp+68h] [rbp-160h]
  __int64 v38; // [rsp+70h] [rbp-158h]
  _OWORD v39[3]; // [rsp+78h] [rbp-150h] BYREF
  __int64 v40; // [rsp+A8h] [rbp-120h]
  _BYTE v41[48]; // [rsp+B0h] [rbp-118h] BYREF
  __int64 v42; // [rsp+E0h] [rbp-E8h]
  unsigned __int64 v43; // [rsp+F0h] [rbp-D8h]
  unsigned __int64 v44; // [rsp+100h] [rbp-C8h]
  unsigned int v45; // [rsp+114h] [rbp-B4h]
  _BYTE v46[48]; // [rsp+150h] [rbp-78h] BYREF

  LODWORD(p_Blink) = 0;
  memset(v39, 0, sizeof(v39));
  v40 = 0LL;
  memset(v46, 0, sizeof(v46));
  memset_0(v41, 0, 0x98uLL);
  v6 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v7 = (__int64)(v6 << 25) >> 16;
  v37 = v7;
  v38 = (__int64)(a2 + 0x220000000000LL) / 48;
  TopLevelPfn = MiGetTopLevelPfn(a2);
  if ( TopLevelPfn == a2 )
    return (unsigned int)-1073741198;
  PageTablePfnBuddyRaw = MiGetPageTablePfnBuddyRaw(TopLevelPfn);
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  IsStoreProcess = MiIsStoreProcess((__int64)PageTablePfnBuddyRaw);
  v13 = 0;
  if ( !IsStoreProcess )
    return (unsigned int)-1073741198;
  if ( !*(_WORD *)(a2 + 32) || MiAreChargesNeededToLockPage(a2) && (*(_BYTE *)(a2 + 34) & 8) == 0 )
  {
    v16 = (unsigned __int8)*a3;
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), v12);
    if ( (unsigned __int8)v16 < 2u )
    {
      if ( KiIrqlFlags != v13 )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v16);
      __writecr8(v16);
    }
    *a3 = 17;
    DemandZeroPte = MiMakeDemandZeroPte(24);
    v17 = DemandZeroPte;
    KiStackAttachProcess(PageTablePfnBuddyRaw, 0, (__int64)v46);
    v18 = MiObtainReferencedVadEx(v7, 8LL, (int *)&p_Blink);
    v15 = (unsigned int)p_Blink;
    v19 = v18;
    if ( (int)p_Blink < 0 )
    {
      if ( (_DWORD)p_Blink == -1073741664 || (_DWORD)p_Blink == -1073741558 )
      {
        v15 = -1073741431;
        v14 = 20;
      }
      else
      {
        v14 = 40;
        if ( (_DWORD)p_Blink == -1073740758 )
          v14 = 30;
      }
      goto LABEL_52;
    }
    if ( (*(unsigned int *)(v18 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 34) << 32)) != 0x7FFFFFFFELL )
    {
      v14 = 50;
      v15 = -1073741431;
LABEL_51:
      MiUnlockAndDereferenceVad((volatile signed __int32 *)v19);
LABEL_52:
      KiUnstackDetachProcess((__int64)v46, 0);
      LODWORD(v7) = v37;
      v13 = 0;
      goto LABEL_54;
    }
    MiDecommitInitializePacket(
      (__int64)v41,
      v6,
      1LL,
      0LL,
      (__int64)PageTablePfnBuddyRaw,
      v18,
      1,
      (unsigned __int64 *)&DemandZeroPte,
      (__int64)v39);
    p_Blink = &PageTablePfnBuddyRaw[2].ReadyListHead.Blink;
    v34 = MiLockWorkingSetShared((__int64)&PageTablePfnBuddyRaw[2].ReadyListHead.Blink, v20, v21);
    MiMakeSystemAddressValid(v6, (*(_DWORD *)(v19 + 48) >> 10) & 0x7F, v34, 0);
    DemandZeroPte = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v22 = *(_QWORD *)v6;
    if ( (*(_QWORD *)v6 & 1) != 0 )
    {
      if ( 48 * ((v22 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL != a2 )
      {
        v14 = 60;
LABEL_46:
        v15 = -1073741431;
        goto LABEL_47;
      }
      v15 = 0;
      if ( MiAreChargesNeededToLockPage(a2) )
      {
        v26 = *(_BYTE *)(a2 + 34);
        if ( (v26 & 8) == 0 )
        {
          if ( (v24 & 0x42) != 0 || (v26 & 0x10) != 0 || (MiGetWsleContents(v23, v37) & 0xF) == 8 )
          {
            v43 = v6;
            v44 = v6 + 8;
            v45 &= 0xFFE3FFFF;
            v42 = (__int64)((v6 << 25) - (v25 << 25)) >> 16;
            MiDecommitHandleValidPte((__int64)v41, v24);
            v45 = v45 & 0xFFFF00FF | 0x1100;
            MiDecommitPagesTail((__int64)v41, 0);
            v14 = 90;
            goto LABEL_47;
          }
          v14 = 80;
LABEL_29:
          v15 = 1075380276;
LABEL_47:
          v28 = DemandZeroPte;
          v29 = (__int64)p_Blink;
          if ( DemandZeroPte )
            MiUnlockPageTableInternal((__int64)p_Blink, DemandZeroPte);
          LOBYTE(v28) = v34;
          if ( v34 != 17 )
            MiUnlockWorkingSetShared(v29, v28);
          goto LABEL_51;
        }
      }
      v14 = 70;
    }
    else
    {
      if ( (v22 & 0x800) == 0 )
      {
        v14 = 150;
        goto LABEL_46;
      }
      v27 = MiLockTransitionLeafPageEx(v6, 0LL, 0);
      v15 = 0;
      if ( !v27 )
      {
        v14 = 100;
        goto LABEL_46;
      }
      if ( v27 != a2 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v14 = 110;
        goto LABEL_46;
      }
      if ( !*(_WORD *)(a2 + 32) || MiAreChargesNeededToLockPage(a2) && (*(_BYTE *)(a2 + 34) & 8) == 0 )
      {
        if ( (*(_BYTE *)(a2 + 34) & 7) != 2 )
        {
          MiDeleteTransitionPte(v6, a2, 0x11u, 0);
          *(_QWORD *)v6 = v17;
          v14 = 140;
          _InterlockedDecrement64((volatile signed __int64 *)PageTablePfnBuddyRaw[1].Padding);
          goto LABEL_47;
        }
        _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v14 = 130;
        goto LABEL_29;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v14 = 120;
    }
    v15 = -1073740024;
    goto LABEL_47;
  }
  v14 = 10;
  v15 = -1073740024;
LABEL_54:
  v30 = v38;
  if ( !v15 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 2072));
    *(_QWORD *)(a1 + 2080) = v30;
  }
  if ( stru_140E366D8.FirstArgument
    && *(_DWORD *)stru_140E366D8.FirstArgument > v13
    && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000000002LL) )
  {
    MiStoreLogDiscardPoisonedPage(v31, a1, v32, v7, v14, v15);
  }
  return v15;
}
