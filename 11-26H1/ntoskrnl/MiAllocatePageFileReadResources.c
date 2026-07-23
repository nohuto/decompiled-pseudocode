/*
 * XREFs of MiAllocatePageFileReadResources @ 0x1403737A8
 * Callers:
 *     MiResolvePageFileFault @ 0x140371F8C (MiResolvePageFileFault.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x14025A030 (PsReferencePartitionSafe.c)
 *     MiAssignDefaultChannel @ 0x140283900 (MiAssignDefaultChannel.c)
 *     MiGetPageChain @ 0x140285330 (MiGetPageChain.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiUpdatePageFileHighInPte @ 0x14028B570 (MiUpdatePageFileHighInPte.c)
 *     MiReleaseFreshPage @ 0x1402916F0 (MiReleaseFreshPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     MiObtainFaultCharges @ 0x1402D83D0 (MiObtainFaultCharges.c)
 *     MiFreeInPageSupportBlock @ 0x14031F608 (MiFreeInPageSupportBlock.c)
 *     MiReturnFaultCharges @ 0x14033AD8C (MiReturnFaultCharges.c)
 *     MiProtectionToCacheAttribute @ 0x140374020 (MiProtectionToCacheAttribute.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1403FFC10 (MiGetAvailablePagesBelowPriority.c)
 *     MiSplitPageChain @ 0x1404BDA6C (MiSplitPageChain.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiAllocatePageFileReadResources(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // r14
  __int64 v6; // rdi
  unsigned __int64 v7; // r12
  __int64 v8; // r13
  unsigned __int64 v9; // r15
  unsigned __int64 updated; // rbx
  int v11; // r8d
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __m128i *v16; // r12
  unsigned __int64 AvailablePagesBelowPriority; // r8
  struct _KTHREAD *CurrentThread; // rcx
  int v19; // ecx
  int v20; // eax
  int v21; // edi
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // r10
  __int64 v26; // rax
  int v27; // ecx
  struct _KTHREAD *v28; // rcx
  unsigned int IdealGlobalNode; // r9d
  unsigned __int8 v30; // al
  char v31; // r9
  __int64 v32; // r10
  __int64 v33; // r11
  int v34; // ecx
  __int64 v35; // r9
  __int64 result; // rax
  _SLIST_ENTRY *v37; // r14
  __int64 v38; // rdi
  int v39; // eax
  unsigned int v40; // edx
  __int64 v41; // r9
  __m128i v42; // xmm0
  _QWORD *v43; // rcx
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rdx
  unsigned int v46; // edx
  int v47; // ebx
  unsigned __int64 v48; // rdx
  __int64 v49; // rcx
  unsigned __int64 v50; // rdx
  unsigned int v51; // edx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rcx
  unsigned __int64 v55; // [rsp+20h] [rbp-E0h]
  _QWORD *v56; // [rsp+28h] [rbp-D8h]
  PSLIST_ENTRY ListEntry; // [rsp+30h] [rbp-D0h]
  __int64 v58; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD *v59; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v60; // [rsp+48h] [rbp-B8h]
  unsigned int v61; // [rsp+50h] [rbp-B0h]
  __int64 v62; // [rsp+58h] [rbp-A8h]
  __int64 v63; // [rsp+60h] [rbp-A0h]
  __m128i v64; // [rsp+68h] [rbp-98h]
  unsigned __int64 v65; // [rsp+78h] [rbp-88h]
  unsigned __int64 v66; // [rsp+80h] [rbp-80h]
  __int64 v67; // [rsp+88h] [rbp-78h]
  unsigned __int64 v68; // [rsp+90h] [rbp-70h]
  __int64 v69; // [rsp+98h] [rbp-68h]
  unsigned __int64 v70; // [rsp+A0h] [rbp-60h]
  __m128i v71; // [rsp+A8h] [rbp-58h]
  _QWORD v72[3]; // [rsp+C0h] [rbp-40h] BYREF
  int v73; // [rsp+D8h] [rbp-28h]
  unsigned int v74; // [rsp+DCh] [rbp-24h]
  int v75; // [rsp+E0h] [rbp-20h]
  __int64 v76; // [rsp+E8h] [rbp-18h]
  int v77; // [rsp+F0h] [rbp-10h]
  __int64 v78; // [rsp+F8h] [rbp-8h]
  __int64 v79; // [rsp+100h] [rbp+0h]
  __int64 *v80; // [rsp+108h] [rbp+8h]
  unsigned __int64 v81; // [rsp+110h] [rbp+10h]
  __m128i v82; // [rsp+118h] [rbp+18h]
  unsigned __int64 v83; // [rsp+128h] [rbp+28h]
  int v84; // [rsp+180h] [rbp+80h]
  __int64 v86; // [rsp+190h] [rbp+90h]
  int v87; // [rsp+190h] [rbp+90h]
  int v88; // [rsp+198h] [rbp+98h]

  v5 = *(unsigned int *)(a1 + 80);
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)a1;
  v8 = *(_QWORD *)(a1 + 32);
  v9 = *(_QWORD *)(a1 + 136);
  updated = *(_QWORD *)(a1 + 40);
  v11 = *(_DWORD *)(a1 + 64);
  v86 = *(_QWORD *)(a2 + 56);
  ListEntry = *(PSLIST_ENTRY *)(a1 + 128);
  v63 = *(_QWORD *)(a1 + 16);
  v62 = v6;
  v70 = v7;
  v12 = MiObtainFaultCharges((ULONG *)v8, v5, v11, a4);
  v66 = v12;
  if ( v5 > v12 )
  {
    v44 = updated;
    if ( qword_140E2D8C0 && (updated & 0x10) == 0 )
      v44 = updated & qword_140E2D8C8;
    v45 = HIDWORD(v44);
    if ( v9 + 8 * (v5 - v12) > v7 )
    {
      v52 = v7 - v9;
      v9 = v7;
      v46 = (v52 >> 3) + v45;
    }
    else
    {
      v46 = v5 - v12 + v45;
      v9 += 8 * (v5 - v12);
    }
    updated = MiUpdatePageFileHighInPte(updated, v46);
    *(_QWORD *)(a1 + 40) = updated;
    LODWORD(v5) = v15;
  }
  v16 = (__m128i *)(a1 + 104);
  *(_OWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  if ( v6 && *(_BYTE *)v6 == 1 )
  {
    AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v8, ((*(_DWORD *)(v6 + 80) >> 3) & 7u) + 1, v14, v15);
    v55 = AvailablePagesBelowPriority;
    if ( AvailablePagesBelowPriority > (unsigned int)v5 )
    {
      AvailablePagesBelowPriority = (unsigned int)v5;
      v55 = (unsigned int)v5;
    }
  }
  else
  {
    AvailablePagesBelowPriority = (unsigned int)v5;
    v55 = (unsigned int)v5;
  }
  if ( !AvailablePagesBelowPriority )
    goto LABEL_38;
  if ( (*(_DWORD *)(a1 + 48) & 0x100) != 0 )
  {
    if ( PsReferencePartitionSafe(*(_QWORD *)(v8 + 256)) )
    {
      *((_DWORD *)&ListEntry[11].Next + 3) |= 0x4000000u;
      goto LABEL_6;
    }
LABEL_38:
    v37 = ListEntry;
    goto LABEL_39;
  }
LABEL_6:
  v84 = 9;
  if ( (*(_DWORD *)(v86 + 184) & 0xF) != 0
    || v63
    || ((CurrentThread = KeGetCurrentThread(), CurrentThread[1].SavedApcStateFill[15] == 0xFF)
     || (BYTE2(CurrentThread[1].Queue) & 1) != 0)
    && BYTE6(CurrentThread->ApcState.Process[3].PerProcessorCycleTimes) == 0xFF )
  {
    v19 = *(_DWORD *)(a1 + 48);
    if ( ((v19 & 0xC0) == 0x80 || (v19 & 0xC0) == 0x40 && !v63) && (*(_DWORD *)(v8 + 4) & 8) != 0 )
    {
      v84 = 2;
    }
    else if ( (*(_BYTE *)(a1 + 68) & 0x20) != 0 )
    {
      v84 = 6;
    }
    else if ( v6 )
    {
      if ( *(_BYTE *)v6 == 1 )
      {
        if ( *(_QWORD *)(v6 + 104) )
        {
          v38 = *(_QWORD *)(v6 + 88);
          if ( !*(_DWORD *)(a1 + 56)
            && *(_QWORD *)a2 < 0x7FFFFFFF0000uLL
            && !v63
            && ((*(_QWORD *)(v38 + 40) >> 43) & 0x3FF) == *(_WORD *)v8
            && (unsigned int)MiPageToNode((v38 + 0x220000000000LL) / 48) == *(_DWORD *)(a1 + 60) - 1 )
          {
            v39 = MiProtectionToCacheAttribute(*(unsigned int *)(a1 + 72));
            if ( ((v40 >> 22) & 3) == v39 )
            {
              MiSplitPageChain(v62 + 88, v55, a1 + 104);
              if ( *(_QWORD *)(a1 + 120) )
                v55 = *(_QWORD *)(a1 + 120);
            }
          }
        }
      }
    }
  }
  else
  {
    v84 = 8;
  }
  if ( *(_QWORD *)(a1 + 120) )
  {
LABEL_32:
    v35 = *(_QWORD *)(a1 + 120);
    if ( v35 != (unsigned int)v5 )
    {
      if ( v9 + 8 * v35 <= v70 )
      {
        v48 = updated;
        if ( qword_140E2D8C0 && (updated & 0x10) == 0 )
          v48 = updated & qword_140E2D8C8;
        v49 = (unsigned int)v5 - v35;
        v50 = HIDWORD(v48);
        if ( v9 + 8 * v49 > v70 )
        {
          v53 = v70 - v9;
          v9 = v70;
          v51 = (v53 >> 3) + v50;
        }
        else
        {
          v9 += 8 * v49;
          v51 = v5 - v35 + v50;
        }
        *(_QWORD *)(a1 + 40) = MiUpdatePageFileHighInPte(updated, v51);
      }
      LODWORD(v5) = v35;
    }
    result = 0LL;
    *(_QWORD *)(a1 + 88) = v66;
    *(_QWORD *)(a1 + 96) = v35;
    *(_QWORD *)(a1 + 136) = v9;
    *(_DWORD *)(a1 + 80) = v5;
    return result;
  }
  v20 = MiProtectionToCacheAttribute(*(unsigned int *)(a1 + 72));
  v21 = *(_DWORD *)(a1 + 60);
  v87 = v20;
  v58 = 0LL;
  memset_0(v72, 0, 0x70uLL);
  v60 = 0LL;
  v71 = 0LL;
  v65 = 0LL;
  v64 = 0LL;
  v22 = a2;
  v23 = (__int64)(v9 << 25) >> 16;
  v24 = *(_DWORD *)(a1 + 56) | 8;
  v69 = v23;
  v88 = v24;
  v59 = (_QWORD *)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  v56 = 0LL;
  while ( 1 )
  {
    v25 = *(_QWORD *)(v22 + 56);
    v72[0] = v8;
    v26 = *(_QWORD *)(v22 + 96);
    v27 = *(_BYTE *)(v22 + 69) & 1;
    v67 = v26;
    v68 = v55 - v65;
    v72[1] = v25;
    v61 = v74 & 0xFFFFFFCF | (16 * v27);
    v72[2] = v23;
    v73 = v21;
    if ( v21 )
    {
      IdealGlobalNode = v21 - 1;
    }
    else
    {
      v28 = KeGetCurrentThread();
      if ( v25 && (*(_DWORD *)(v25 + 184) & 0xF) == 0 && v28->ApcStateIndex == 1 )
        IdealGlobalNode = v28->ApcState.Process->IdealGlobalNode;
      else
        IdealGlobalNode = *(_DWORD *)(KiProcessorBlock[v28->IdealProcessor] + 34644);
    }
    v30 = MiAssignDefaultChannel(IdealGlobalNode);
    if ( !v32 || (*(_DWORD *)(v32 + 184) & 0xF) != 0 )
      v76 = v33 + 34640;
    else
      v76 = v32;
    v78 = -1LL;
    v58 = 0LL;
    v34 = ((2 * (v31 & 0x3F | 0x380)) | v30 & 1) << 8;
    v77 = v34 ^ (v34 ^ (v87 << 18)) & 0xC0000;
    v75 = v88;
    v80 = &v58;
    v79 = v67;
    v74 = v84 | v61 & 0xFFFFFFF0;
    v81 = v68;
    v83 = 0LL;
    v82 = 0LL;
    MiGetPageChain(v72);
    if ( v83 )
    {
      if ( v56 )
      {
        v41 = v82.m128i_i64[1];
        AvailablePagesBelowPriority = v83 + v60;
        v64.m128i_i64[1] = v82.m128i_i64[1];
        v42 = v64;
        *v59 = v82.m128i_i64[0];
        v59 = (_QWORD *)v41;
        v71 = v42;
        v60 = AvailablePagesBelowPriority;
        v65 = AvailablePagesBelowPriority;
      }
      else
      {
        v65 = v83;
        v59 = (_QWORD *)_mm_srli_si128(v82, 8).m128i_u64[0];
        v71 = v82;
        v60 = v83;
        v64 = v82;
        v56 = (_QWORD *)v82.m128i_i64[0];
      }
    }
    if ( v65 || v84 == 9 )
      break;
    v13 = v58;
    if ( v58 )
    {
      if ( v8 != *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a2 + 56) + 174LL)) )
      {
        *(_QWORD *)(a2 + 136) = v8;
        ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v8 + 22152));
        v13 = v58;
      }
      *(_QWORD *)(a2 + 144) = v55;
      *(_QWORD *)(a2 + 128) = v13;
      break;
    }
    if ( v84 == 6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 18052));
    }
    else if ( v84 == 8 )
    {
      v22 = a2;
      *(_DWORD *)(a2 + 80) |= 0x10u;
      goto LABEL_90;
    }
    v22 = a2;
LABEL_90:
    v23 = v69;
    v84 = 9;
  }
  if ( v65 )
  {
    if ( v16->m128i_i64[0] )
    {
      **(_QWORD **)(a1 + 112) = v56;
      v43 = v59;
      *(_QWORD *)(a1 + 120) += v60;
      *(_QWORD *)(a1 + 112) = v43;
    }
    else
    {
      *v16 = v71;
      *(_QWORD *)(a1 + 120) = v65;
    }
  }
  else
  {
    while ( 1 )
    {
      v54 = (__int64)v56;
      if ( !v56 )
        break;
      v56 = (_QWORD *)*v56;
      MiReleaseFreshPage(v54, v13, AvailablePagesBelowPriority);
    }
  }
  if ( *(_QWORD *)(a1 + 120) )
    goto LABEL_32;
  v37 = ListEntry;
  if ( (*(_DWORD *)(a1 + 48) & 0x100) != 0 )
  {
    v47 = *((_DWORD *)&ListEntry[11].Next + 3);
    PsDereferencePartition(*(_QWORD *)(v8 + 256), 1883860301LL);
    *((_DWORD *)&ListEntry[11].Next + 3) = v47 & 0xFBFFFFFF;
  }
  v6 = v62;
LABEL_39:
  if ( v63 )
  {
    LOBYTE(v13) = 17;
    MiUnlockProtoPoolPage(v63, v13, AvailablePagesBelowPriority);
  }
  MiFreeInPageSupportBlock(v37);
  if ( v6 )
    *(_BYTE *)(v6 + 1) = 2 - (*(_QWORD *)(a2 + 128) != 0LL);
  MiReturnFaultCharges(v8, v66);
  return 3221225495LL;
}
