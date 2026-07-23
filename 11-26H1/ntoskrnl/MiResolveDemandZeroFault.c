/*
 * XREFs of MiResolveDemandZeroFault @ 0x1402B6900
 * Callers:
 *     MiUserFault @ 0x1403A4EA0 (MiUserFault.c)
 *     MiDispatchFault @ 0x1403A5BC0 (MiDispatchFault.c)
 *     MiSystemFault @ 0x1403A6268 (MiSystemFault.c)
 *     MiResolveProtoPteFault @ 0x1403A7B0C (MiResolveProtoPteFault.c)
 * Callees:
 *     MiCreateSharedZeroPages @ 0x140282EF0 (MiCreateSharedZeroPages.c)
 *     MiCheckUserVirtualAddress @ 0x1402B36E0 (MiCheckUserVirtualAddress.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiInitializeZeroFaultPacket @ 0x1402B6EB0 (MiInitializeZeroFaultPacket.c)
 *     MiResolvePrivateZeroFault @ 0x1402B71E0 (MiResolvePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x1402BAC10 (MiCompleteProtoPteFault.c)
 *     MiObtainProtoReference @ 0x1402C7BB0 (MiObtainProtoReference.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiIsPrototypePteVadLookup @ 0x14031E380 (MiIsPrototypePteVadLookup.c)
 *     MiReturnPfnReferenceCountAtDpc @ 0x140320354 (MiReturnPfnReferenceCountAtDpc.c)
 *     MiExpandSharedZeroCluster @ 0x1403DCAFC (MiExpandSharedZeroCluster.c)
 *     MiMarkVirtualizationFaultPageInfoFailed @ 0x1404F2794 (MiMarkVirtualizationFaultPageInfoFailed.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiResolveDemandZeroFault(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5)
{
  __int64 *v5; // rdi
  unsigned __int64 v6; // r15
  __int64 v7; // r12
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  __int64 result; // rax
  __int64 HasShadow; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  char v20; // al
  char v21; // r10
  unsigned int v22; // r9d
  __int64 v23; // r11
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  unsigned int v29; // ebx
  __int64 v30; // rdx
  unsigned __int64 v31; // rbx
  unsigned __int64 *v32; // r9
  char v33; // r14
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  unsigned __int64 v36; // r13
  unsigned __int64 v37; // r14
  __int64 *v38; // r13
  unsigned __int64 *v39; // r12
  __int64 v40; // rdx
  int v41; // r8d
  int v42; // eax
  __int64 v43; // rcx
  __int64 *v44; // rcx
  __int64 PteShadow; // r8
  int IsPrototypePteVadLookup; // eax
  unsigned __int64 v47; // r8
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // rbx
  __int64 v50; // [rsp+20h] [rbp-E0h]
  char v51; // [rsp+30h] [rbp-D0h]
  unsigned int v52; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v53; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v54; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v55; // [rsp+50h] [rbp-B0h]
  __int128 v56; // [rsp+60h] [rbp-A0h]
  __int128 v57; // [rsp+70h] [rbp-90h]
  __int64 v58; // [rsp+80h] [rbp-80h]
  __int64 v59; // [rsp+88h] [rbp-78h]
  unsigned __int64 *v60; // [rsp+90h] [rbp-70h]
  __int64 *v61; // [rsp+98h] [rbp-68h]
  unsigned __int64 v62; // [rsp+A0h] [rbp-60h]
  __int64 v63; // [rsp+A8h] [rbp-58h]
  __int64 v64; // [rsp+B0h] [rbp-50h]
  _QWORD v65[16]; // [rsp+C0h] [rbp-40h] BYREF

  v5 = a5;
  v63 = a4;
  v6 = 0LL;
  v64 = a3;
  v61 = a5;
  v7 = a3;
  v58 = 0LL;
  LODWORD(v59) = 0;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  MiInitializeZeroFaultPacket(a1, 0LL, &v54);
  if ( (v54 & 0x20) != 0 )
  {
    v43 = v57;
    if ( (*(_DWORD *)(v57 + 56) & 8) != 0 )
    {
      if ( v7 )
      {
        LOBYTE(v10) = 17;
        MiUnlockProtoPoolPage(v7, v10, v11);
        v43 = v57;
      }
      MiMarkVirtualizationFaultPageInfoFailed(v43, v55);
      return 3221225495LL;
    }
  }
  v12 = *(_QWORD *)a2;
  v13 = *a1;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v10 = *(_QWORD *)a2;
    if ( (v12 & 1) != 0 && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
    {
      HasShadow = MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v12, v11);
      if ( HasShadow )
      {
        v18 = *(_QWORD *)(HasShadow + 1288);
        if ( v18 )
        {
          v19 = *(_QWORD *)(v18 + 8 * ((a2 >> 3) & 0x1FF));
          if ( (v19 & 0x20) != 0 )
            v10 |= 0x20uLL;
          v12 = v10 | 0x42;
          if ( (v19 & 0x42) == 0 )
            v12 = v10;
        }
      }
    }
  }
  if ( !v7 )
  {
    v14 = a1[2];
    v15 = (v12 >> 5) & 0x1F;
    if ( (v14 & 1) != 0 && *(_BYTE *)(v14 & 0xFFFFFFFFFFFFFFFEuLL) == 4 || (v12 & 0x400) != 0 )
      LODWORD(v15) = 4;
    LODWORD(v56) = v15;
    DWORD1(v56) = v15;
    result = MiResolvePrivateZeroFault(&v54);
    if ( a5 )
      *a5 = v59;
    return result;
  }
  v20 = v54;
  v21 = 0;
  *((_QWORD *)&v55 + 1) = a2;
  v22 = 24;
  v53 = 1LL;
  v23 = 0LL;
  v52 = 24;
  if ( (((unsigned int)v54 >> 1) & 1) != 0 && (v54 & 0xC) == 0 )
    goto LABEL_61;
  if ( (v54 & 1) == 0 && (((unsigned int)v54 >> 1) & 1) == 0 && (v54 & 0x40) == 0 || (v54 & 0x100) == 0 )
  {
    if ( !*((_QWORD *)&v57 + 1) )
      goto LABEL_36;
    v24 = *(unsigned int *)(*((_QWORD *)&v57 + 1) + 48LL);
    if ( (v24 & 0x80000) != 0 || MiVadPageSizes[(v24 >> 17) & 3] != 16 )
      goto LABEL_35;
    v25 = *((_QWORD *)&v57 + 1);
LABEL_34:
    v26 = MiCheckUserVirtualAddress(v13, v25, 0, (int *)&v52);
    v22 = v52;
    v21 = 1;
    v23 = v26;
LABEL_35:
    v20 = v54;
    goto LABEL_36;
  }
  if ( *((_QWORD *)&v57 + 1) )
  {
    v25 = *((_QWORD *)&v57 + 1);
    goto LABEL_34;
  }
LABEL_36:
  LODWORD(v56) = v22;
  v11 = 0x7FFFFFFFF8LL;
  DWORD1(v56) = v22;
  v10 = 0xFFFFF68000000000uLL;
  if ( (v20 & 8) != 0 )
  {
    v44 = (__int64 *)(((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    PteShadow = *v44;
    if ( (unsigned __int64)v44 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v44 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v44, *v44);
    IsPrototypePteVadLookup = MiIsPrototypePteVadLookup(PteShadow);
    v48 = v47 >> 5;
    v49 = v12 >> 5;
    if ( !IsPrototypePteVadLookup )
      LOBYTE(v48) = v49;
    v11 = v48 & 0x1F;
    if ( (v22 & 0xFFFFFFF8) == 0x10 )
      goto LABEL_61;
    v11 = (unsigned int)v11 & 0xFFFFFFF8;
    if ( (_DWORD)v11 == 16 )
      goto LABEL_61;
    v20 = v54;
  }
  if ( (v20 & 4) != 0 && v22 >> 3 != 1 && (v22 >> 3 != 3 || (v22 & 7) == 0) )
  {
LABEL_61:
    LOBYTE(v10) = 17;
    MiUnlockProtoPoolPage(v7, v10, v11);
    return 0LL;
  }
  if ( v21 && v23 && v22 != 24 && *((_QWORD *)&v57 + 1) && (v22 & 0xFFFFFFF8) != 0x10 )
    v53 = MiExpandSharedZeroCluster(&v54, v10, v11);
  v52 = MiCreateSharedZeroPages((__int64)&v54, &v53, v11);
  v29 = v52;
  if ( (v52 & 0x80000000) != 0 || (v54 & 0x10) != 0 )
  {
    LOBYTE(v27) = 17;
    MiUnlockProtoPoolPage(v7, v27, v28);
    return v29;
  }
  else
  {
    v30 = 0LL;
    v31 = v53;
    v62 = v55;
    v32 = (unsigned __int64 *)(a2 - 8LL * (unsigned int)((v13 - (unsigned __int64)v55) >> 12));
    v60 = v32;
    if ( v53 >= 0x10 )
    {
      v33 = 1;
      v51 = 1;
      MiObtainProtoReference(v7, 0LL);
    }
    else
    {
      v33 = 0;
      v51 = 0;
      if ( v53 )
      {
        v28 = v53;
        do
        {
          v34 = *v32++;
          v35 = (unsigned int)v30;
          v30 = (unsigned int)(v30 + 1);
          v65[v35] = (v34 >> 12) & 0xFFFFFFFFFFLL;
          --v28;
        }
        while ( v28 );
        v5 = v61;
        v60 = v32;
      }
    }
    LOBYTE(v30) = 17;
    MiUnlockProtoPoolPage(v7, v30, v28);
    v36 = *a1;
    v53 = *a1;
    if ( v31 )
    {
      v37 = v62;
      v38 = v65;
      v39 = v60;
      do
      {
        if ( v51 )
          v40 = (*v39++ >> 12) & 0xFFFFFFFFFFLL;
        else
          v40 = *v38++;
        v41 = v63;
        v50 = a1[2];
        *a1 = v37;
        v42 = MiCompleteProtoPteFault((_DWORD)a1, v40, v41, 1, v50);
        if ( v42 < 0 )
        {
          if ( !v6 )
            v52 = v42;
        }
        else
        {
          v59 = ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        }
        v37 += 4096LL;
        ++v6;
      }
      while ( v6 < v31 );
      v5 = v61;
      v7 = v64;
      v33 = v51;
      v36 = v53;
    }
    if ( v33 )
      MiReturnPfnReferenceCountAtDpc(v7);
    __addgsdword(0x2E9Cu, v31);
    *a1 = v36;
    if ( v5 )
      *v5 = v59;
    return v52;
  }
}
