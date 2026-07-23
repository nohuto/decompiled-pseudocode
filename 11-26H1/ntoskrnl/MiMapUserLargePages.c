/*
 * XREFs of MiMapUserLargePages @ 0x1402F1DE0
 * Callers:
 *     MiCopyLargeVad @ 0x14088621C (MiCopyLargeVad.c)
 *     MiHandleInsertedImageVad @ 0x14099EF84 (MiHandleInsertedImageVad.c)
 *     MiReserveUserMemoryFinishVad @ 0x140A01EA0 (MiReserveUserMemoryFinishVad.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 *     MiSimpleUnlinkPageEx @ 0x14028D6D0 (MiSimpleUnlinkPageEx.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiComputePreferredNode @ 0x1402F0B60 (MiComputePreferredNode.c)
 *     MiCreateLargePfnList @ 0x1402F23FC (MiCreateLargePfnList.c)
 *     MiWorkingSetIsContended @ 0x14031A300 (MiWorkingSetIsContended.c)
 *     MiSimpleInsertPage @ 0x1403CF00C (MiSimpleInsertPage.c)
 *     MiInsertLargeUserMapping @ 0x14042D264 (MiInsertLargeUserMapping.c)
 *     MiLogPerfMemoryRangeEvent @ 0x140501C70 (MiLogPerfMemoryRangeEvent.c)
 *     MiLockWorkingSetForLargeMapping @ 0x14050B9D8 (MiLockWorkingSetForLargeMapping.c)
 *     MiDemotePfnListChain @ 0x1407164C4 (MiDemotePfnListChain.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiMapUserLargePages(__int64 a1, int a2, char a3, __int64 a4)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // r10
  _KPROCESS *Process; // rax
  __int64 p_Blink; // r12
  unsigned int v11; // esi
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  int v17; // r13d
  __int64 v18; // r9
  __int64 v19; // rcx
  char *v20; // rax
  __int64 result; // rax
  unsigned __int64 v22; // rcx
  KIRQL v23; // r15
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // r8
  unsigned int i; // r14d
  unsigned __int64 v27; // rcx
  unsigned int v28; // edx
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // r8
  ULONG_PTR v32; // rbx
  __int64 v33; // rcx
  int v34; // ecx
  KIRQL v35; // al
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // r9
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // r8
  char v41; // cl
  unsigned __int64 v42; // r8
  __int64 *v43; // rsi
  unsigned __int64 v44; // r12
  __int64 v45; // rdx
  int v46; // [rsp+50h] [rbp-B0h]
  int v47; // [rsp+54h] [rbp-ACh]
  unsigned int v48; // [rsp+58h] [rbp-A8h]
  unsigned int v49; // [rsp+5Ch] [rbp-A4h]
  ULONG_PTR v51; // [rsp+60h] [rbp-A0h]
  int v52; // [rsp+68h] [rbp-98h]
  unsigned __int64 v53; // [rsp+70h] [rbp-90h]
  unsigned __int64 v54; // [rsp+70h] [rbp-90h]
  int v55; // [rsp+78h] [rbp-88h]
  unsigned __int64 v56; // [rsp+80h] [rbp-80h]
  unsigned __int64 v57; // [rsp+88h] [rbp-78h]
  int v58; // [rsp+90h] [rbp-70h]
  ULONG_PTR BugCheckParameter4; // [rsp+98h] [rbp-68h]
  unsigned __int64 v60; // [rsp+A0h] [rbp-60h]
  __int64 v61; // [rsp+A8h] [rbp-58h]
  __int64 v63; // [rsp+B8h] [rbp-48h]
  struct _LIST_ENTRY **v64; // [rsp+C0h] [rbp-40h]
  _KPROCESS *v65; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v66; // [rsp+D0h] [rbp-30h]
  __int64 v67; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v68; // [rsp+E0h] [rbp-20h]
  __int64 v69; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v70; // [rsp+F8h] [rbp-8h]
  __int64 v71; // [rsp+100h] [rbp+0h]
  __int64 v72; // [rsp+110h] [rbp+10h] BYREF
  char v73; // [rsp+118h] [rbp+18h] BYREF

  memset_0(&v72, 0, 0x60uLL);
  v7 = *(unsigned int *)(a1 + 48);
  v8 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v68 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v65 = Process;
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  v64 = &Process[2].ReadyListHead.Blink;
  if ( a2 )
    v11 = a2 - 1;
  else
    v11 = MiComputePreferredNode((__int64)&Process[2].ReadyListHead.Blink, a1);
  v12 = ((unsigned int)v7 >> 17) & 3;
  v13 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
  v49 = v11;
  v14 = (((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF) + 1;
  v57 = v13;
  v60 = v14;
  v15 = (v14 - v13) >> 12;
  v66 = v15;
  if ( LODWORD(MiVadPageSizes[v12]) == 16 )
  {
    v16 = 2LL;
    v17 = 2;
  }
  else if ( (v7 & 0x80000) != 0 && (v7 & 0x200000) != 0 )
  {
    v16 = (unsigned int)MiVadPageIndices[v12];
    v17 = v16;
  }
  else
  {
    v16 = 1LL;
    v17 = (KeFeatureBits & 0x2000000000LL) == 0;
  }
  v18 = MiPageSizes[v16];
  v19 = 4LL;
  v48 = v16;
  v20 = &v73;
  v55 = v17;
  do
  {
    *((_QWORD *)v20 + 1) = v8;
    *((_QWORD *)v20 - 1) = 0x3FFFFFFFFFLL;
    *(_QWORD *)v20 = 0x3FFFFFFFFFLL;
    v20 += 24;
    --v19;
  }
  while ( v19 );
  v67 = a1;
  result = MiCreateLargePfnList((unsigned int)&v67, v13, v15, v18, a2, a3, a4, v8, (__int64)&v72);
  if ( (int)result < 0 )
    return result;
  v22 = v57;
  v71 = 0LL;
  v23 = 17;
  v52 = 0;
  v24 = v57;
  v47 = 0;
  v58 = MmMakeProtectNotWriteCopy[(v7 >> 5) & 0x1F];
  v69 = 0x3FFFFFFFFFLL;
  v46 = 0;
  v56 = 0LL;
  v51 = 0LL;
  v70 = 0x3FFFFFFFFFLL;
  v53 = v57;
  BugCheckParameter4 = ((v57 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v57 >= v14 )
    goto LABEL_77;
  v25 = v14;
  do
  {
    for ( i = v17; i <= v48; ++i )
    {
      v27 = MiPageSizes[i] << 12;
      if ( !(v24 % v27) && v25 - v24 >= v27 )
      {
        v28 = i;
        while ( *(&v72 + 3 * v28) == 0x3FFFFFFFFFLL )
        {
          if ( ++v28 > v48 )
          {
            MiDemotePfnListChain(&v72, i);
            goto LABEL_25;
          }
        }
        i = v28;
        break;
      }
    }
LABEL_25:
    v29 = *(&v72 + 3 * i);
    MiSimpleUnlinkPageEx((__int64)(&v72 + 3 * i), v29);
    v63 = MiPageSizes[i];
    MiSimpleInsertPage(&v69, v29, 2LL);
    v32 = BugCheckParameter4;
    if ( i < 2 )
    {
      v33 = 2 - i;
      do
      {
        v32 = ((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v33;
      }
      while ( v33 );
      v11 = v49;
      v17 = v55;
    }
    if ( v47 || ((v32 ^ v51) & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      if ( v56 )
      {
        MiUnlockPageTableInternal(p_Blink, v56);
        v56 = 0LL;
      }
      v34 = v46;
      if ( v47 )
        goto LABEL_36;
      if ( v46 == 1 )
      {
        if ( i )
          goto LABEL_36;
      }
      else if ( !i )
      {
LABEL_36:
        v47 = 0;
        if ( v23 != 17 )
        {
          LOBYTE(v30) = v23;
          if ( v46 == 1 )
            MiUnlockWorkingSetExclusive(p_Blink, v23);
          else
            MiUnlockWorkingSetShared(p_Blink, v30);
          v23 = 17;
        }
LABEL_44:
        if ( !i )
        {
          v46 = 1;
          v23 = MiLockWorkingSetForLargeMapping(p_Blink, v30, v11);
        }
        if ( v23 == 17 )
        {
          v46 = 0;
          v35 = MiLockWorkingSetShared(p_Blink, v30, v31);
          LOBYTE(v34) = 0;
          v23 = v35;
          goto LABEL_50;
        }
        v34 = v46;
LABEL_49:
        if ( v34 )
        {
LABEL_51:
          MiMakeSystemAddressValid(v32, v11 + 1, v23, v34);
          goto LABEL_52;
        }
LABEL_50:
        v56 = ((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        goto LABEL_51;
      }
      if ( v23 != 17 )
        goto LABEL_49;
      goto LABEL_44;
    }
LABEL_52:
    v36 = 0LL;
    v37 = v63 << 12;
    v38 = (v63 << 12) + v53;
    v54 = v38;
    if ( v38 < v60 )
    {
      v39 = v60 - v38;
      if ( ((v32 + 8) & 0xFFF) != 0 )
        v40 = 512LL - (((unsigned int)(v32 + 8) >> 3) & 0x1FF);
      else
        v40 = 0LL;
      v41 = 4;
      if ( i != 2 )
        v41 = 0;
      v42 = (v63 * (v40 >> v41)) << 12;
      if ( v42 > v39 )
        v42 = v39;
      if ( v42 / v37 )
      {
        v43 = &v72 + 3 * i;
        v44 = v42 / v37;
        do
        {
          v61 = *v43;
          if ( *v43 == 0x3FFFFFFFFFLL )
            break;
          MiSimpleUnlinkPageEx((__int64)v43, *v43);
          MiSimpleInsertPage(&v69, v61, 2LL);
          ++v36;
        }
        while ( v36 < v44 );
        v11 = v49;
        p_Blink = (__int64)v64;
        v17 = v55;
      }
    }
    MiInsertLargeUserMapping(a1, BugCheckParameter4, (unsigned int)&v69, i, v58);
    v53 = ((v63 * v36) << 12) + v54;
    BugCheckParameter4 += 8 * v63 * (v36 + 1);
    v52 += v36 + 1;
    if ( (v52 & 0xF) == 0 && (unsigned int)MiWorkingSetIsContended(p_Blink) || KeShouldYieldProcessor() )
      v47 = 1;
    v25 = v60;
    v24 = v53;
    v51 = v32;
  }
  while ( v53 < v60 );
  if ( v56 )
    MiUnlockPageTableInternal(p_Blink, v56);
  if ( v23 != 17 )
  {
    LOBYTE(v45) = v23;
    if ( v46 == 1 )
      MiUnlockWorkingSetExclusive(p_Blink, v23);
    else
      MiUnlockWorkingSetShared(p_Blink, v45);
  }
  v22 = v57;
LABEL_77:
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogPerfMemoryRangeEvent(v22, LODWORD(v65[1].Header.WaitListHead.Flink), 27LL, v66);
  return 0LL;
}
