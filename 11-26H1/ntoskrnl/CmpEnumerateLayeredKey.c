/*
 * XREFs of CmpEnumerateLayeredKey @ 0x140944A98
 * Callers:
 *     CmEnumerateKey @ 0x1408C8770 (CmEnumerateKey.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14043F920 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140446F50 (CmpInitializeDelayDerefContext.c)
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x14048C128 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     CmpIsRegistryLockContended @ 0x1404CE9A4 (CmpIsRegistryLockContended.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpUnlockKcbStack @ 0x1408C29B0 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408C2A40 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1408C2C40 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 *     CmpQueryKeyDataFromNode @ 0x1408C8DC0 (CmpQueryKeyDataFromNode.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408CED20 (CmpDereferenceKeyControlBlock.c)
 *     CmpGetKeyNodeForKcb @ 0x1408DAEC0 (CmpGetKeyNodeForKcb.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     CmpFindSubKeyByNumber @ 0x1408E5360 (CmpFindSubKeyByNumber.c)
 *     CmpKeyEnumStackAdvance @ 0x140943FD8 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackInitialize @ 0x140944064 (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackCleanup @ 0x1409441A0 (CmpKeyEnumStackCleanup.c)
 *     CmpLockKcbStackShared @ 0x140946C60 (CmpLockKcbStackShared.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140946E1C (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x140AE1930 (CmpKeyEnumStackFreeResumeContext.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x140AEB544 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackVerifyResumeContext @ 0x140B1C084 (CmpKeyEnumStackVerifyResumeContext.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C5E7C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _PRIVILEGE_SET *v17; // rbx
  int started; // edi
  __int16 v19; // cx
  char v20; // dl
  signed __int64 v21; // r9
  PPRIVILEGE_SET *v22; // r8
  PPRIVILEGE_SET *v23; // rax
  __int64 v24; // r12
  ULONG Control; // r14d
  unsigned int i; // esi
  int v27; // r9d
  __int16 v28; // r13
  __int64 Pool; // rdi
  __int16 v30; // r14
  volatile signed __int64 **Privilege; // rcx
  _QWORD *v32; // r12
  __int16 *v33; // rsi
  volatile signed __int64 *v34; // rbx
  _DWORD *v35; // rcx
  signed __int64 v36; // rsi
  __int64 v37; // rdx
  _DWORD *KeyNodeForKcb; // r12
  __int64 v39; // rcx
  __int64 v40; // rcx
  ULONG_PTR *p_Attributes; // rbx
  __int64 v42; // rsi
  __int64 v43; // rcx
  ULONG_PTR v45; // rcx
  __int64 CellFlat; // rax
  int ResumeContext; // eax
  unsigned int v48; // edx
  char v49; // [rsp+40h] [rbp-C0h]
  struct _PRIVILEGE_SET *v50; // [rsp+50h] [rbp-B0h] BYREF
  PPRIVILEGE_SET v51; // [rsp+58h] [rbp-A8h]
  unsigned int v52; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v53; // [rsp+68h] [rbp-98h] BYREF
  __int64 v54; // [rsp+70h] [rbp-90h] BYREF
  __int128 v55; // [rsp+78h] [rbp-88h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+88h] [rbp-78h]
  unsigned int v57; // [rsp+98h] [rbp-68h]
  __int64 v58; // [rsp+A0h] [rbp-60h]
  _QWORD *v59; // [rsp+A8h] [rbp-58h]
  __int64 v60; // [rsp+B0h] [rbp-50h]
  __int64 v61; // [rsp+B8h] [rbp-48h]
  __int64 v62; // [rsp+C0h] [rbp-40h]
  __int128 v63; // [rsp+C8h] [rbp-38h] BYREF
  __int16 v64; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v65[168]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v66; // [rsp+238h] [rbp+138h]

  v57 = a3;
  v60 = a1;
  v61 = a6;
  v59 = a7;
  v62 = a4;
  memset_0(&v64, 0, 0x160uLL);
  v54 = 0LL;
  v52 = 0;
  v53 = 0LL;
  v55 = 0LL;
  WORD1(v55) = -1;
  v63 = 0LL;
  v49 = 0;
  *(_OWORD *)Privileges = 0LL;
  CmpKeyEnumStackInitialize((char *)&v64);
  v11 = 0LL;
  HvpGetCellContextInitialize(&v54);
  v58 = 0LL;
  HvpGetCellContextInitialize(&v53);
  v12 = 0LL;
  CmpInitializeDelayDerefContext(&v63);
  v17 = *a7;
  v50 = *a7;
  *a7 = 0LL;
  if ( a3 == 2 )
    CmpLockRegistryExclusive();
  else
    CmpLockRegistry(v14, v13, v15, v16);
  started = CmpStartKcbStackForTopLayerKcb((__int64)&v55, *(_QWORD *)(a1 + 8));
  if ( started < 0
    || (CmpLockKcbStackShared(&v55), v49 = 1, started = CmpPerformKeyBodyDeletionCheck(a1, 0LL), started < 0) )
  {
    KeyNodeForKcb = 0LL;
  }
  else
  {
    v19 = WORD1(v55);
    v20 = 0;
    if ( SWORD1(v55) <= 0 )
      goto LABEL_58;
    v21 = (char *)Privileges[1] - ((char *)&v55 + 8);
    v22 = &Privileges[SWORD1(v55) - 1];
    do
    {
      if ( (unsigned __int16)v19 >= 2u )
        v23 = (PPRIVILEGE_SET *)((char *)v22 + v21 - 16);
      else
        v23 = v22;
      v51 = *v23;
      if ( v51[2].PrivilegeCount != -1 )
        v20 = 1;
      --v19;
      --v22;
    }
    while ( v19 > 0 );
    v24 = v60;
    if ( v20 )
    {
      if ( v17
        || (v17 = (struct _PRIVILEGE_SET *)_InterlockedExchange64((volatile __int64 *)(v60 + 88), 0LL),
            (v50 = v17) != 0LL) )
      {
        if ( (unsigned int)CmpKeyEnumStackVerifyResumeContext(&v55, v17, v22, v21) == -1073741735 || v17->Control > a2 )
        {
          v12 = v17;
          v17 = 0LL;
          v50 = 0LL;
        }
      }
      started = CmpKeyEnumStackStartFromKcbStack(&v64, &v55, v24, v17);
      if ( started < 0
        || (!v17 ? (struct _PRIVILEGE_SET *)(Control = 0) : (Control = v17->Control, v12 = v17, v17 = 0LL, v50 = 0LL),
            started = CmpKeyEnumStackAdvance(&v64),
            started < 0) )
      {
        v11 = v51;
        KeyNodeForKcb = 0LL;
      }
      else
      {
        for ( i = Control; i < a2; ++i )
        {
          if ( CmpIsRegistryLockContended() && i - Control >= 0xA && a8 )
          {
            LOBYTE(v27) = 1;
            ResumeContext = CmpKeyEnumStackCreateResumeContext(
                              (unsigned int)&v55,
                              (unsigned int)&v64,
                              i,
                              v27,
                              (__int64)&v50);
            v11 = v51;
            started = ResumeContext;
            KeyNodeForKcb = 0LL;
            if ( ResumeContext < 0 )
            {
              v17 = v50;
            }
            else
            {
              v17 = 0LL;
              started = -1073741267;
              *v59 = v50;
            }
            goto LABEL_37;
          }
          started = CmpKeyEnumStackAdvance(&v64);
          if ( started < 0 )
          {
            v11 = v51;
            KeyNodeForKcb = 0LL;
            goto LABEL_37;
          }
        }
        v28 = WORD1(v55);
        Pool = CmpAllocatePool(0x100uLL);
        v59 = (_QWORD *)Pool;
        if ( Pool )
        {
          *(_DWORD *)(Pool + 4) = i;
          v30 = 0;
          *(_WORD *)Pool = v28;
          *(_BYTE *)(Pool + 2) = 0;
          if ( v28 >= 0 )
          {
            Privilege = (volatile signed __int64 **)&v55 + 1;
            v32 = (_QWORD *)(Pool + 8);
            v50 = (struct _PRIVILEGE_SET *)((char *)&v55 + 8);
            do
            {
              if ( v30 >= 2 )
              {
                v48 = v30 - 2;
                v33 = (__int16 *)(v66 + ((unsigned __int64)v48 << 7));
                Privilege = (volatile signed __int64 **)((char *)Privileges[1] + 8 * (int)v48);
              }
              else
              {
                v33 = &v65[64 * (unsigned __int64)(unsigned int)v30 + 40];
              }
              v34 = *Privilege;
              CmpReferenceKeyControlBlockUnsafe(*Privilege);
              v32[1] = v34;
              v35 = v32 + 2;
              v36 = (char *)v33 - (char *)v32;
              *v32 = *((_QWORD *)v34 + 38);
              v37 = 2LL;
              do
              {
                *v35 = *(_DWORD *)((char *)v35 + v36 + 8);
                ++v35;
                --v37;
              }
              while ( v37 );
              ++v30;
              Privilege = (volatile signed __int64 **)v50->Privilege;
              v32 += 3;
              v50 = (struct _PRIVILEGE_SET *)((char *)v50 + 8);
            }
            while ( v30 <= SWORD1(v55) );
            Pool = (__int64)v59;
            v24 = v60;
          }
          v17 = (struct _PRIVILEGE_SET *)_InterlockedExchange64((volatile __int64 *)(v24 + 88), Pool);
        }
        v11 = v51;
        started = CmpQueryKeyDataFromKeyNodeStack(v65, v57, v62, a5, v61);
        KeyNodeForKcb = 0LL;
        if ( started >= 0 )
          started = 0;
      }
    }
    else
    {
LABEL_58:
      v11 = (PPRIVILEGE_SET)*((_QWORD *)&v55 + 1);
      KeyNodeForKcb = (_DWORD *)CmpGetKeyNodeForKcb(*((__int64 *)&v55 + 1), (unsigned int *)&v54, 0);
      started = CmpFindSubKeyByNumber(*(_QWORD *)&v11[1].Privilege[0].Luid.HighPart, KeyNodeForKcb, a2, (int *)&v52);
      if ( started >= 0 )
      {
        if ( v52 == -1 )
        {
          started = -2147483622;
        }
        else
        {
          v45 = *(_QWORD *)&v11[1].Privilege[0].Luid.HighPart;
          if ( (*(_BYTE *)(v45 + 140) & 1) != 0 )
            CellFlat = HvpGetCellFlat(v45, v52, (unsigned int *)&v53);
          else
            CellFlat = HvpGetCellPaged(v45, v52);
          v58 = CellFlat;
          started = CmpQueryKeyDataFromNode(
                      *(_QWORD *)&v11[1].Privilege[0].Luid.HighPart,
                      CellFlat,
                      a3,
                      v62,
                      a5,
                      (_DWORD *)v61,
                      0LL,
                      0LL);
          if ( started >= 0 )
            started = 0;
        }
      }
    }
  }
LABEL_37:
  CmpKeyEnumStackCleanup((__int64)&v64);
  if ( v58 )
  {
    v39 = *(_QWORD *)&v11[1].Privilege[0].Luid.HighPart;
    if ( (*(_BYTE *)(v39 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v39, (__int64)&v53);
    else
      HvpReleaseCellPaged(v39, (unsigned int *)&v53);
  }
  if ( KeyNodeForKcb )
  {
    v40 = *(_QWORD *)&v11[1].Privilege[0].Luid.HighPart;
    if ( (*(_BYTE *)(v40 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v40, (__int64)&v54);
    else
      HvpReleaseCellPaged(v40, (unsigned int *)&v54);
  }
  if ( v49 )
    CmpUnlockKcbStack((__int64)&v55);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v17 )
    CmpKeyEnumStackFreeResumeContext(v17);
  if ( v12 )
  {
    if ( SLOWORD(v12->PrivilegeCount) >= 0 )
    {
      p_Attributes = (ULONG_PTR *)&v12->Privilege[0].Attributes;
      v42 = (unsigned __int16)(LOWORD(v12->PrivilegeCount) + 1);
      do
      {
        if ( *p_Attributes )
          CmpDereferenceKeyControlBlock(*p_Attributes);
        p_Attributes += 3;
        --v42;
      }
      while ( v42 );
    }
    CmSiFreeMemory(v12);
  }
  CmpDrainDelayDerefContext((_QWORD **)&v63);
  CmpUnlockRegistry(v43);
  return (unsigned int)started;
}
