/*
 * XREFs of CmpEnumerateLayeredKey @ 0x140982A88
 * Callers:
 *     CmEnumerateKey @ 0x1408C21A0 (CmEnumerateKey.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x140446E30 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14044EE20 (CmpInitializeDelayDerefContext.c)
 *     CmpAllocatePool @ 0x140474870 (CmpAllocatePool.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1404925D8 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     CmpIsRegistryLockContended @ 0x1404D5134 (CmpIsRegistryLockContended.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     CmpUnlockKcbStack @ 0x1408BC3E0 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408BC470 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1408BC670 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpLockRegistryExclusive @ 0x1408C2148 (CmpLockRegistryExclusive.c)
 *     CmpQueryKeyDataFromNode @ 0x1408C27F0 (CmpQueryKeyDataFromNode.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408C8770 (CmpDereferenceKeyControlBlock.c)
 *     CmpGetKeyNodeForKcb @ 0x1408D4900 (CmpGetKeyNodeForKcb.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408D9320 (HvpGetCellContextInitialize.c)
 *     CmpFindSubKeyByNumber @ 0x1408DEDA0 (CmpFindSubKeyByNumber.c)
 *     CmpKeyEnumStackAdvance @ 0x140981FC8 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackInitialize @ 0x140982054 (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackCleanup @ 0x140982190 (CmpKeyEnumStackCleanup.c)
 *     CmpLockKcbStackShared @ 0x140984C50 (CmpLockKcbStackShared.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140984E0C (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x140AE3E28 (CmpKeyEnumStackFreeResumeContext.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x140AE9194 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackVerifyResumeContext @ 0x140B19C34 (CmpKeyEnumStackVerifyResumeContext.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C587C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpEnumerateLayeredKey(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        struct _PRIVILEGE_SET **a7,
        char a8)
{
  PPRIVILEGE_SET v11; // rsi
  struct _PRIVILEGE_SET *v12; // r15
  __int64 v13; // rcx
  struct _PRIVILEGE_SET *v14; // rbx
  int started; // edi
  __int16 v16; // cx
  char v17; // dl
  signed __int64 v18; // r9
  PPRIVILEGE_SET *v19; // r8
  PPRIVILEGE_SET *v20; // rax
  __int64 v21; // r12
  ULONG Control; // r14d
  unsigned int i; // esi
  int v24; // r9d
  __int16 v25; // r13
  __int64 Pool; // rdi
  __int16 v27; // r14
  volatile signed __int64 **Privilege; // rcx
  _QWORD *v29; // r12
  __int16 *v30; // rsi
  volatile signed __int64 *v31; // rbx
  _DWORD *v32; // rcx
  signed __int64 v33; // rsi
  __int64 v34; // rdx
  _DWORD *KeyNodeForKcb; // r12
  __int64 v36; // rcx
  __int64 v37; // rcx
  ULONG_PTR *p_Attributes; // rbx
  __int64 v39; // rsi
  __int64 v40; // rcx
  ULONG_PTR v42; // rcx
  __int64 CellFlat; // rax
  int ResumeContext; // eax
  unsigned int v45; // edx
  char v46; // [rsp+40h] [rbp-C0h]
  struct _PRIVILEGE_SET *v47; // [rsp+50h] [rbp-B0h] BYREF
  PPRIVILEGE_SET v48; // [rsp+58h] [rbp-A8h]
  unsigned int v49; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v50; // [rsp+68h] [rbp-98h] BYREF
  __int64 v51; // [rsp+70h] [rbp-90h] BYREF
  __int128 v52; // [rsp+78h] [rbp-88h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+88h] [rbp-78h]
  unsigned int v54; // [rsp+98h] [rbp-68h]
  __int64 v55; // [rsp+A0h] [rbp-60h]
  _QWORD *v56; // [rsp+A8h] [rbp-58h]
  __int64 v57; // [rsp+B0h] [rbp-50h]
  __int64 v58; // [rsp+B8h] [rbp-48h]
  __int64 v59; // [rsp+C0h] [rbp-40h]
  __int128 v60; // [rsp+C8h] [rbp-38h] BYREF
  __int16 v61; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v62[168]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v63; // [rsp+238h] [rbp+138h]

  v54 = a3;
  v57 = a1;
  v58 = a6;
  v56 = a7;
  v59 = a4;
  memset_0(&v61, 0, 0x160uLL);
  v51 = 0LL;
  v49 = 0;
  v50 = 0LL;
  v52 = 0LL;
  WORD1(v52) = -1;
  v60 = 0LL;
  v46 = 0;
  *(_OWORD *)Privileges = 0LL;
  CmpKeyEnumStackInitialize((char *)&v61);
  v11 = 0LL;
  HvpGetCellContextInitialize(&v51);
  v55 = 0LL;
  HvpGetCellContextInitialize(&v50);
  v12 = 0LL;
  CmpInitializeDelayDerefContext(&v60);
  v14 = *a7;
  v47 = *a7;
  *a7 = 0LL;
  if ( a3 == 2 )
    CmpLockRegistryExclusive();
  else
    CmpLockRegistry(v13);
  started = CmpStartKcbStackForTopLayerKcb((__int64)&v52, *(_QWORD *)(a1 + 8));
  if ( started < 0
    || (CmpLockKcbStackShared(&v52), v46 = 1, started = CmpPerformKeyBodyDeletionCheck(a1, 0LL), started < 0) )
  {
    KeyNodeForKcb = 0LL;
  }
  else
  {
    v16 = WORD1(v52);
    v17 = 0;
    if ( SWORD1(v52) <= 0 )
      goto LABEL_58;
    v18 = (char *)Privileges[1] - ((char *)&v52 + 8);
    v19 = &Privileges[SWORD1(v52) - 1];
    do
    {
      if ( (unsigned __int16)v16 >= 2u )
        v20 = (PPRIVILEGE_SET *)((char *)v19 + v18 - 16);
      else
        v20 = v19;
      v48 = *v20;
      if ( v48[2].PrivilegeCount != -1 )
        v17 = 1;
      --v16;
      --v19;
    }
    while ( v16 > 0 );
    v21 = v57;
    if ( v17 )
    {
      if ( v14
        || (v14 = (struct _PRIVILEGE_SET *)_InterlockedExchange64((volatile __int64 *)(v57 + 88), 0LL),
            (v47 = v14) != 0LL) )
      {
        if ( (unsigned int)CmpKeyEnumStackVerifyResumeContext(&v52, v14, v19, v18) == -1073741735 || v14->Control > a2 )
        {
          v12 = v14;
          v14 = 0LL;
          v47 = 0LL;
        }
      }
      started = CmpKeyEnumStackStartFromKcbStack(&v61, &v52, v21, v14);
      if ( started < 0
        || (!v14 ? (struct _PRIVILEGE_SET *)(Control = 0) : (Control = v14->Control, v12 = v14, v14 = 0LL, v47 = 0LL),
            started = CmpKeyEnumStackAdvance(&v61),
            started < 0) )
      {
        v11 = v48;
        KeyNodeForKcb = 0LL;
      }
      else
      {
        for ( i = Control; i < a2; ++i )
        {
          if ( CmpIsRegistryLockContended() && i - Control >= 0xA && a8 )
          {
            LOBYTE(v24) = 1;
            ResumeContext = CmpKeyEnumStackCreateResumeContext(
                              (unsigned int)&v52,
                              (unsigned int)&v61,
                              i,
                              v24,
                              (__int64)&v47);
            v11 = v48;
            started = ResumeContext;
            KeyNodeForKcb = 0LL;
            if ( ResumeContext < 0 )
            {
              v14 = v47;
            }
            else
            {
              v14 = 0LL;
              started = -1073741267;
              *v56 = v47;
            }
            goto LABEL_37;
          }
          started = CmpKeyEnumStackAdvance(&v61);
          if ( started < 0 )
          {
            v11 = v48;
            KeyNodeForKcb = 0LL;
            goto LABEL_37;
          }
        }
        v25 = WORD1(v52);
        Pool = CmpAllocatePool(0x100uLL);
        v56 = (_QWORD *)Pool;
        if ( Pool )
        {
          *(_DWORD *)(Pool + 4) = i;
          v27 = 0;
          *(_WORD *)Pool = v25;
          *(_BYTE *)(Pool + 2) = 0;
          if ( v25 >= 0 )
          {
            Privilege = (volatile signed __int64 **)&v52 + 1;
            v29 = (_QWORD *)(Pool + 8);
            v47 = (struct _PRIVILEGE_SET *)((char *)&v52 + 8);
            do
            {
              if ( v27 >= 2 )
              {
                v45 = v27 - 2;
                v30 = (__int16 *)(v63 + ((unsigned __int64)v45 << 7));
                Privilege = (volatile signed __int64 **)((char *)Privileges[1] + 8 * (int)v45);
              }
              else
              {
                v30 = &v62[64 * (unsigned __int64)(unsigned int)v27 + 40];
              }
              v31 = *Privilege;
              CmpReferenceKeyControlBlockUnsafe(*Privilege);
              v29[1] = v31;
              v32 = v29 + 2;
              v33 = (char *)v30 - (char *)v29;
              *v29 = *((_QWORD *)v31 + 38);
              v34 = 2LL;
              do
              {
                *v32 = *(_DWORD *)((char *)v32 + v33 + 8);
                ++v32;
                --v34;
              }
              while ( v34 );
              ++v27;
              Privilege = (volatile signed __int64 **)v47->Privilege;
              v29 += 3;
              v47 = (struct _PRIVILEGE_SET *)((char *)v47 + 8);
            }
            while ( v27 <= SWORD1(v52) );
            Pool = (__int64)v56;
            v21 = v57;
          }
          v14 = (struct _PRIVILEGE_SET *)_InterlockedExchange64((volatile __int64 *)(v21 + 88), Pool);
        }
        v11 = v48;
        started = CmpQueryKeyDataFromKeyNodeStack(v62, v54, v59, a5, v58);
        KeyNodeForKcb = 0LL;
        if ( started >= 0 )
          started = 0;
      }
    }
    else
    {
LABEL_58:
      v11 = (PPRIVILEGE_SET)*((_QWORD *)&v52 + 1);
      KeyNodeForKcb = (_DWORD *)CmpGetKeyNodeForKcb(*((__int64 *)&v52 + 1), (unsigned int *)&v51, 0);
      started = CmpFindSubKeyByNumber(*(_QWORD *)&v11[1].Privilege[0].Luid.HighPart, KeyNodeForKcb, a2, (int *)&v49);
      if ( started >= 0 )
      {
        if ( v49 == -1 )
        {
          started = -2147483622;
        }
        else
        {
          v42 = *(_QWORD *)&v11[1].Privilege[0].Luid.HighPart;
          if ( (*(_BYTE *)(v42 + 140) & 1) != 0 )
            CellFlat = HvpGetCellFlat(v42, v49, (unsigned int *)&v50);
          else
            CellFlat = HvpGetCellPaged(v42, v49);
          v55 = CellFlat;
          started = CmpQueryKeyDataFromNode(
                      *(_QWORD *)&v11[1].Privilege[0].Luid.HighPart,
                      CellFlat,
                      a3,
                      v59,
                      a5,
                      (_DWORD *)v58,
                      0LL,
                      0LL);
          if ( started >= 0 )
            started = 0;
        }
      }
    }
  }
LABEL_37:
  CmpKeyEnumStackCleanup((__int64)&v61);
  if ( v55 )
  {
    v36 = *(_QWORD *)&v11[1].Privilege[0].Luid.HighPart;
    if ( (*(_BYTE *)(v36 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v36, (__int64)&v50);
    else
      HvpReleaseCellPaged(v36, (unsigned int *)&v50);
  }
  if ( KeyNodeForKcb )
  {
    v37 = *(_QWORD *)&v11[1].Privilege[0].Luid.HighPart;
    if ( (*(_BYTE *)(v37 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v37, (__int64)&v51);
    else
      HvpReleaseCellPaged(v37, (unsigned int *)&v51);
  }
  if ( v46 )
    CmpUnlockKcbStack((__int64)&v52);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v14 )
    CmpKeyEnumStackFreeResumeContext(v14);
  if ( v12 )
  {
    if ( SLOWORD(v12->PrivilegeCount) >= 0 )
    {
      p_Attributes = (ULONG_PTR *)&v12->Privilege[0].Attributes;
      v39 = (unsigned __int16)(LOWORD(v12->PrivilegeCount) + 1);
      do
      {
        if ( *p_Attributes )
          CmpDereferenceKeyControlBlock(*p_Attributes);
        p_Attributes += 3;
        --v39;
      }
      while ( v39 );
    }
    CmSiFreeMemory(v12);
  }
  CmpDrainDelayDerefContext((_QWORD **)&v60);
  CmpUnlockRegistry(v40);
  return (unsigned int)started;
}
