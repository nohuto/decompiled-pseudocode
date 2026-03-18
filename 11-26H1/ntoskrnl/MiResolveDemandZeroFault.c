/*
 * XREFs of MiResolveDemandZeroFault @ 0x1402D4B40
 * Callers:
 *     MiUserFault @ 0x1403A3140 (MiUserFault.c)
 *     MiDispatchFault @ 0x1403A3E60 (MiDispatchFault.c)
 *     MiSystemFault @ 0x1403A4508 (MiSystemFault.c)
 *     MiResolveProtoPteFault @ 0x1403A5DAC (MiResolveProtoPteFault.c)
 * Callees:
 *     MiCreateSharedZeroPages @ 0x140283980 (MiCreateSharedZeroPages.c)
 *     MiCheckUserVirtualAddress @ 0x1402D1920 (MiCheckUserVirtualAddress.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiInitializeZeroFaultPacket @ 0x1402D50F0 (MiInitializeZeroFaultPacket.c)
 *     MiResolvePrivateZeroFault @ 0x1402D5420 (MiResolvePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x1402D8E50 (MiCompleteProtoPteFault.c)
 *     MiObtainProtoReference @ 0x1402E5B70 (MiObtainProtoReference.c)
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140314FF0 (MiReadPteShadow.c)
 *     MiIsPrototypePteVadLookup @ 0x14031C350 (MiIsPrototypePteVadLookup.c)
 *     MiReturnPfnReferenceCountAtDpc @ 0x14031E324 (MiReturnPfnReferenceCountAtDpc.c)
 *     MiExpandSharedZeroCluster @ 0x1403D9910 (MiExpandSharedZeroCluster.c)
 *     MiMarkVirtualizationFaultPageInfoFailed @ 0x1404F9184 (MiMarkVirtualizationFaultPageInfoFailed.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
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
  __int64 v10; // r8
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  __int64 result; // rax
  __int64 HasShadow; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  char v20; // al
  char v21; // r10
  unsigned int v22; // r9d
  __int64 v23; // r11
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r8
  unsigned __int64 v28; // rdx
  unsigned int v29; // ebx
  unsigned int v30; // edx
  unsigned __int64 v31; // rbx
  unsigned __int64 *v32; // r9
  char v33; // r14
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // r13
  unsigned __int64 v38; // r14
  __int64 *v39; // r13
  unsigned __int64 *v40; // r12
  __int64 v41; // rdx
  int v42; // r8d
  int v43; // eax
  __int64 v44; // rcx
  __int64 *v45; // rcx
  __int64 PteShadow; // r8
  int IsPrototypePteVadLookup; // eax
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // r8
  unsigned __int64 v50; // rbx
  int v51; // r8d
  __int64 v52; // [rsp+20h] [rbp-E0h]
  char v53; // [rsp+30h] [rbp-D0h]
  unsigned int v54; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v55; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v56; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v57; // [rsp+50h] [rbp-B0h]
  __int128 v58; // [rsp+60h] [rbp-A0h]
  __int128 v59; // [rsp+70h] [rbp-90h]
  __int64 v60; // [rsp+80h] [rbp-80h]
  __int64 v61; // [rsp+88h] [rbp-78h]
  unsigned __int64 *v62; // [rsp+90h] [rbp-70h]
  __int64 *v63; // [rsp+98h] [rbp-68h]
  unsigned __int64 v64; // [rsp+A0h] [rbp-60h]
  __int64 v65; // [rsp+A8h] [rbp-58h]
  __int64 v66; // [rsp+B0h] [rbp-50h]
  _QWORD v67[16]; // [rsp+C0h] [rbp-40h] BYREF

  v5 = a5;
  v65 = a4;
  v6 = 0LL;
  v66 = a3;
  v63 = a5;
  v7 = a3;
  v60 = 0LL;
  LODWORD(v61) = 0;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  MiInitializeZeroFaultPacket(a1, 0LL, &v56);
  if ( (v56 & 0x20) != 0 )
  {
    v44 = v59;
    if ( (*(_DWORD *)(v59 + 56) & 8) != 0 )
    {
      if ( v7 )
      {
        MiUnlockProtoPoolPage(v7, 0x11u);
        v44 = v59;
      }
      MiMarkVirtualizationFaultPageInfoFailed(v44, v57);
      return 3221225495LL;
    }
  }
  v11 = *(_QWORD *)a2;
  v12 = *a1;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (v11 & 1) != 0
    && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
  {
    HasShadow = MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v11, v10);
    if ( HasShadow )
    {
      v18 = *(_QWORD *)(HasShadow + 1288);
      if ( v18 )
      {
        v19 = *(_QWORD *)(v18 + 8 * ((a2 >> 3) & 0x1FF));
        if ( (v19 & 0x20) != 0 )
          v17 |= 0x20uLL;
        v11 = v17 | 0x42;
        if ( (v19 & 0x42) == 0 )
          v11 = v17;
      }
    }
  }
  if ( !v7 )
  {
    v13 = a1[2];
    v14 = (v11 >> 5) & 0x1F;
    if ( (v13 & 1) != 0 && *(_BYTE *)(v13 & 0xFFFFFFFFFFFFFFFEuLL) == 4 || (v11 & 0x400) != 0 )
      LODWORD(v14) = 4;
    LODWORD(v58) = v14;
    DWORD1(v58) = v14;
    result = MiResolvePrivateZeroFault(&v56);
    if ( a5 )
      *a5 = v61;
    return result;
  }
  v20 = v56;
  v21 = 0;
  *((_QWORD *)&v57 + 1) = a2;
  v22 = 24;
  v55 = 1LL;
  v23 = 0LL;
  v54 = 24;
  if ( (((unsigned int)v56 >> 1) & 1) != 0 && (v56 & 0xC) == 0 )
    goto LABEL_61;
  if ( (v56 & 1) == 0 && (((unsigned int)v56 >> 1) & 1) == 0 && (v56 & 0x40) == 0 || (v56 & 0x100) == 0 )
  {
    if ( !*((_QWORD *)&v59 + 1) )
      goto LABEL_36;
    v24 = *(unsigned int *)(*((_QWORD *)&v59 + 1) + 48LL);
    if ( (v24 & 0x80000) != 0 || MiVadPageSizes[(v24 >> 17) & 3] != 16 )
      goto LABEL_35;
    v25 = *((_QWORD *)&v59 + 1);
LABEL_34:
    v26 = MiCheckUserVirtualAddress(v12, v25, 0, (int *)&v54);
    v22 = v54;
    v21 = 1;
    v23 = v26;
LABEL_35:
    v20 = v56;
    goto LABEL_36;
  }
  if ( *((_QWORD *)&v59 + 1) )
  {
    v25 = *((_QWORD *)&v59 + 1);
    goto LABEL_34;
  }
LABEL_36:
  LODWORD(v58) = v22;
  v27 = 0x7FFFFFFFF8LL;
  DWORD1(v58) = v22;
  v28 = 0xFFFFF68000000000uLL;
  if ( (v20 & 8) != 0 )
  {
    v45 = (__int64 *)(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    PteShadow = *v45;
    if ( (unsigned __int64)v45 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v45 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v45, *v45);
    IsPrototypePteVadLookup = MiIsPrototypePteVadLookup(PteShadow);
    v49 = v48 >> 5;
    v50 = v11 >> 5;
    if ( !IsPrototypePteVadLookup )
      LOBYTE(v49) = v50;
    v51 = v49 & 0x1F;
    if ( (v22 & 0xFFFFFFF8) == 0x10 )
      goto LABEL_61;
    v27 = v51 & 0xFFFFFFF8;
    if ( (_DWORD)v27 == 16 )
      goto LABEL_61;
    v20 = v56;
  }
  if ( (v20 & 4) != 0 && v22 >> 3 != 1 && (v22 >> 3 != 3 || (v22 & 7) == 0) )
  {
LABEL_61:
    MiUnlockProtoPoolPage(v7, 0x11u);
    return 0LL;
  }
  if ( v21 && v23 && v22 != 24 && *((_QWORD *)&v59 + 1) && (v22 & 0xFFFFFFF8) != 0x10 )
    v55 = MiExpandSharedZeroCluster(&v56, v28, v27);
  v54 = MiCreateSharedZeroPages((__int64)&v56, &v55, v27);
  v29 = v54;
  if ( (v54 & 0x80000000) != 0 || (v56 & 0x10) != 0 )
  {
    MiUnlockProtoPoolPage(v7, 0x11u);
    return v29;
  }
  else
  {
    v30 = 0;
    v31 = v55;
    v64 = v57;
    v32 = (unsigned __int64 *)(a2 - 8LL * (unsigned int)((v12 - (unsigned __int64)v57) >> 12));
    v62 = v32;
    if ( v55 >= 0x10 )
    {
      v33 = 1;
      v53 = 1;
      MiObtainProtoReference(v7, 0LL);
    }
    else
    {
      v33 = 0;
      v53 = 0;
      if ( v55 )
      {
        v34 = v55;
        do
        {
          v35 = *v32++;
          v36 = v30++;
          v67[v36] = (v35 >> 12) & 0xFFFFFFFFFFLL;
          --v34;
        }
        while ( v34 );
        v5 = v63;
        v62 = v32;
      }
    }
    MiUnlockProtoPoolPage(v7, 0x11u);
    v37 = *a1;
    v55 = *a1;
    if ( v31 )
    {
      v38 = v64;
      v39 = v67;
      v40 = v62;
      do
      {
        if ( v53 )
          v41 = (*v40++ >> 12) & 0xFFFFFFFFFFLL;
        else
          v41 = *v39++;
        v42 = v65;
        v52 = a1[2];
        *a1 = v38;
        v43 = MiCompleteProtoPteFault((_DWORD)a1, v41, v42, 1, v52);
        if ( v43 < 0 )
        {
          if ( !v6 )
            v54 = v43;
        }
        else
        {
          v61 = ((v38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        }
        v38 += 4096LL;
        ++v6;
      }
      while ( v6 < v31 );
      v5 = v63;
      v7 = v66;
      v33 = v53;
      v37 = v55;
    }
    if ( v33 )
      MiReturnPfnReferenceCountAtDpc(v7);
    __addgsdword(0x2E9Cu, v31);
    *a1 = v37;
    if ( v5 )
      *v5 = v61;
    return v54;
  }
}
