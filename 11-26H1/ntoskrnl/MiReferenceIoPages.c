/*
 * XREFs of MiReferenceIoPages @ 0x1402D2018
 * Callers:
 *     MiMapContiguousMemoryLarge @ 0x1402A1EFC (MiMapContiguousMemoryLarge.c)
 *     MiProbeLockFrame @ 0x1402D0680 (MiProbeLockFrame.c)
 *     MiMapMdlCommon @ 0x140314C5C (MiMapMdlCommon.c)
 *     MiFillSystemPtes @ 0x1403611E8 (MiFillSystemPtes.c)
 *     MiMapViewOfPhysicalSection @ 0x140A0228C (MiMapViewOfPhysicalSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x140A02A08 (MiMapLockedPagesInUserSpace.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140AEF51C (MiRotateToFrameBufferNoCopy.c)
 *     MiRotateToFrameBuffer @ 0x140AEF750 (MiRotateToFrameBuffer.c)
 *     MiAddLoaderHalIoPte @ 0x140CF7890 (MiAddLoaderHalIoPte.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     MiSetIoPfnNodeCellsActive @ 0x140314080 (MiSetIoPfnNodeCellsActive.c)
 *     MiDereferenceIoPages @ 0x1403152FC (MiDereferenceIoPages.c)
 *     MiIoSpaceGetBounds @ 0x140315778 (MiIoSpaceGetBounds.c)
 *     MiIoRangeIsConstant @ 0x1404C2394 (MiIoRangeIsConstant.c)
 *     MiConvertIoPfnTreeLockExclusiveToShared @ 0x1404FB1A4 (MiConvertIoPfnTreeLockExclusiveToShared.c)
 *     MiCreateIoPfnNode @ 0x14050B570 (MiCreateIoPfnNode.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiLockIoPfnTree @ 0x1406F92D4 (MiLockIoPfnTree.c)
 *     MiUnlockIoPfnTree @ 0x1406F9AFC (MiUnlockIoPfnTree.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReferenceIoPages(unsigned int a1, __int64 a2, __int64 a3, int a4, _DWORD *a5, _QWORD *a6)
{
  __int64 v9; // rdx
  int v10; // edi
  __int64 *v11; // rcx
  __int64 v12; // r12
  unsigned __int8 CurrentIrql; // bl
  int v14; // r10d
  unsigned __int64 v15; // rsi
  __int64 v16; // rbx
  unsigned __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int IsConstant; // eax
  _QWORD *v21; // rax
  __int64 *v22; // r13
  unsigned int v23; // ebx
  _QWORD *v24; // rdx
  unsigned __int64 v25; // rax
  _QWORD *v26; // rax
  int v27; // eax
  unsigned __int64 v29; // rbx
  int v30; // eax
  unsigned int v31; // ebx
  __int64 v32; // rdx
  unsigned int v33; // ebx
  char v34; // al
  __int64 v35; // rcx
  unsigned int v36; // ebx
  _QWORD *v37; // rdi
  unsigned int v38; // esi
  unsigned int v39; // ebx
  __int64 *v40; // rcx
  __int64 *v41; // [rsp+20h] [rbp-60h] BYREF
  PVOID P; // [rsp+28h] [rbp-58h]
  unsigned __int8 v43; // [rsp+30h] [rbp-50h]
  char v44; // [rsp+31h] [rbp-4Fh]
  unsigned int v45; // [rsp+34h] [rbp-4Ch]
  unsigned int v46; // [rsp+38h] [rbp-48h]
  int v47; // [rsp+3Ch] [rbp-44h]
  unsigned __int64 v48; // [rsp+40h] [rbp-40h]
  __int64 v49; // [rsp+48h] [rbp-38h]
  char v50[8]; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v51; // [rsp+58h] [rbp-28h]
  int v52; // [rsp+60h] [rbp-20h]
  int v53; // [rsp+64h] [rbp-1Ch]
  int v54; // [rsp+68h] [rbp-18h]
  __int64 v55; // [rsp+70h] [rbp-10h]

  memset_0(&v41, 0, 0x58uLL);
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0LL;
  v10 = 0;
  v47 = a4;
  v46 = a1;
  v45 = 1;
  v11 = qword_140E35FC0;
  v12 = a2 & ((1LL << ((unsigned __int8)dword_140E2D878 - 12)) - 1);
  v48 = v12;
  v41 = &qword_140E35FC0[8 * (__int64)(int)a1];
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v9) = 2;
    LOBYTE(v11) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v11, v9);
  }
  v43 = CurrentIrql;
  if ( CurrentIrql == 2 )
  {
    v43 = 17;
    v45 = 5;
  }
  MiIoSpaceGetBounds(v50, v12);
  if ( v53 != 3 && v14 == 1 && v12 + a3 - 1 <= v51 )
  {
    v29 = v43;
    if ( v43 != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v43);
      __writecr8(v29);
    }
    if ( a5 )
      *a5 |= 1 << v52;
    return 0LL;
  }
  v15 = v48;
  v16 = v48 + a3;
  v49 = v48 + a3;
  MiLockIoPfnTree(v45 | 4);
  if ( v15 == v16 )
    goto LABEL_29;
  while ( 1 )
  {
    IsConstant = MiIoRangeIsConstant(&v41);
    v19 = 0LL;
    v10 = IsConstant;
    if ( IsConstant >= 0 )
    {
      v36 = v45;
      if ( (v45 & 2) != 0 )
      {
        LOBYTE(v17) = 17;
        MiUnlockIoPfnTree(v17, v45, v18, 0LL);
        v45 = v36 & 0xFFFFFFFC | 1;
        MiLockIoPfnTree(v36 & 0xFFFFFFF8 | 5);
      }
      v15 = v48;
      goto LABEL_28;
    }
    v21 = (_QWORD *)*((_QWORD *)&xmmword_140E36040 + 1);
    v17 = v49 - 1;
    v15 = v48;
    if ( *((_QWORD *)&xmmword_140E36040 + 1) )
    {
      do
      {
        if ( v17 < v21[3] )
        {
          v21 = (_QWORD *)*v21;
        }
        else
        {
          if ( v48 <= v21[4] )
            break;
          v21 = (_QWORD *)v21[1];
        }
      }
      while ( v21 );
      if ( v21 )
        break;
    }
    v22 = v41;
    v10 = 0;
    v23 = v45;
    LOBYTE(v18) = 0;
    v24 = (_QWORD *)*v41;
    if ( *v41 )
    {
      while ( 1 )
      {
        v25 = v24[3];
        if ( v48 < v25 )
        {
          v26 = (_QWORD *)*v24;
          if ( !*v24 )
            break;
        }
        else
        {
          if ( v48 < v25 + 512 )
          {
            v37 = v24;
            v38 = 0;
            goto LABEL_50;
          }
          v26 = (_QWORD *)v24[1];
          if ( !v26 )
          {
            LOBYTE(v18) = 1;
            break;
          }
        }
        v24 = v26;
      }
    }
    if ( !P )
    {
      v27 = MiCreateIoPfnNode(&v41, v24, v18, 0LL);
      v15 = v48;
      v10 = v27;
      if ( v27 < 0 )
        goto LABEL_29;
      goto LABEL_28;
    }
    if ( (v45 & 1) != 0 )
    {
      LOBYTE(v17) = 17;
      MiUnlockIoPfnTree(v17, v45, v18, 0LL);
      v45 = v23 & 0xFFFFFFFC | 2;
      v39 = v23 & 0xFFFFFFF8 | 6;
LABEL_75:
      MiLockIoPfnTree(v39);
      goto LABEL_28;
    }
    v37 = P;
    P = 0LL;
    v40 = v41;
    v37[3] = v48 & 0xFFFFFFFFFFFFFE00uLL;
    RtlAvlInsertNodeEx(v40, v24, v18, v37);
    _InterlockedAdd64(v22 + 3, 1uLL);
    v38 = 1;
LABEL_50:
    if ( (v23 & 2) != 0 )
    {
      MiConvertIoPfnTreeLockExclusiveToShared(v17, v24, v18, v19);
      v45 = v23 & 0xFFFFFFFC | 1;
    }
    v30 = MiSetIoPfnNodeCellsActive(&v41, v37, v38);
    v15 = v48;
    v10 = v30;
    if ( v48 == v49 || v30 < 0 )
      goto LABEL_29;
    v17 = *(unsigned int *)(*((_QWORD *)KeGetCurrentPrcb()->MmInternal + 41) + 640LL);
    if ( (v17 & 0x40000000) != 0 || v43 != 17 && KeShouldYieldProcessor() )
    {
      v31 = v45;
      LOBYTE(v17) = v43;
      MiUnlockIoPfnTree(v17, v45, v18, v19);
      v33 = v31 & 0xFFFFFFFD;
      v45 = v33 | 1;
      v34 = v44;
      if ( v43 != 17 )
        v34 = 1;
      v44 = v34;
      v35 = KeGetCurrentIrql();
      if ( (_BYTE)v35 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v32) = 2;
        KiRaiseIrqlProcessIrqlFlags(v35, v32);
      }
      v39 = v33 | 5;
      goto LABEL_75;
    }
LABEL_28:
    if ( v15 == v49 )
      goto LABEL_29;
  }
  _InterlockedAdd(&dword_140E36088, 1u);
  v10 = -1073741800;
LABEL_29:
  LOBYTE(v17) = v43;
  MiUnlockIoPfnTree(v17, v45, v18, v19);
  if ( v10 < 0 )
  {
    if ( v15 != v12 )
      MiDereferenceIoPages(a1, v12, v15 - v12);
  }
  else
  {
    if ( a5 )
      *a5 = v54;
    if ( a6 )
      *a6 = v55;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v10 == -1073741800 )
    _InterlockedAdd(&dword_140E36088, 1u);
  return (unsigned int)v10;
}
