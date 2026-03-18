/*
 * XREFs of MiAllocatePageFileReadResources @ 0x1403719F8
 * Callers:
 *     MiResolvePageFileFault @ 0x1403701DC (MiResolvePageFileFault.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x140258850 (PsReferencePartitionSafe.c)
 *     MiAssignDefaultChannel @ 0x140284390 (MiAssignDefaultChannel.c)
 *     MiGetPageChain @ 0x140285DD0 (MiGetPageChain.c)
 *     MiPageToNode @ 0x140289710 (MiPageToNode.c)
 *     MiUpdatePageFileHighInPte @ 0x14028C010 (MiUpdatePageFileHighInPte.c)
 *     MiReleaseFreshPage @ 0x140292190 (MiReleaseFreshPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     MiObtainFaultCharges @ 0x1402F6350 (MiObtainFaultCharges.c)
 *     MiFreeInPageSupportBlock @ 0x14031D5D8 (MiFreeInPageSupportBlock.c)
 *     MiReturnFaultCharges @ 0x140338D0C (MiReturnFaultCharges.c)
 *     MiProtectionToCacheAttribute @ 0x140372270 (MiProtectionToCacheAttribute.c)
 *     PsDereferencePartition @ 0x140381940 (PsDereferencePartition.c)
 *     MiGetAvailablePagesBelowPriority @ 0x140406B20 (MiGetAvailablePagesBelowPriority.c)
 *     MiSplitPageChain @ 0x1404C418C (MiSplitPageChain.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
  __int64 v13; // r8
  __int64 v14; // r9
  __m128i *v15; // r12
  unsigned __int64 AvailablePagesBelowPriority; // r8
  struct _KTHREAD *CurrentThread; // rcx
  int v18; // ecx
  int v19; // eax
  int v20; // edi
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // r10
  __int64 v25; // rax
  int v26; // ecx
  struct _KTHREAD *v27; // rcx
  unsigned int IdealGlobalNode; // r9d
  unsigned __int8 v29; // al
  char v30; // r9
  __int64 v31; // r10
  __int64 v32; // r11
  int v33; // ecx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 result; // rax
  struct _SLIST_ENTRY *v38; // r14
  __int64 v39; // rdi
  int v40; // eax
  unsigned int v41; // edx
  __int64 v42; // r9
  __m128i v43; // xmm0
  _QWORD *v44; // rcx
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rdx
  unsigned int v47; // edx
  int v48; // ebx
  unsigned __int64 v49; // rdx
  __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  unsigned int v52; // edx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  unsigned __int64 v56; // [rsp+20h] [rbp-E0h]
  _QWORD *v57; // [rsp+28h] [rbp-D8h]
  PSLIST_ENTRY ListEntry; // [rsp+30h] [rbp-D0h]
  __int64 v59; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD *v60; // [rsp+40h] [rbp-C0h]
  __int64 v61; // [rsp+48h] [rbp-B8h]
  unsigned int v62; // [rsp+50h] [rbp-B0h]
  __int64 v63; // [rsp+58h] [rbp-A8h]
  __int64 v64; // [rsp+60h] [rbp-A0h]
  __m128i v65; // [rsp+68h] [rbp-98h]
  __int64 v66; // [rsp+78h] [rbp-88h]
  unsigned __int64 v67; // [rsp+80h] [rbp-80h]
  __int64 v68; // [rsp+88h] [rbp-78h]
  unsigned __int64 v69; // [rsp+90h] [rbp-70h]
  __int64 v70; // [rsp+98h] [rbp-68h]
  unsigned __int64 v71; // [rsp+A0h] [rbp-60h]
  __m128i v72; // [rsp+A8h] [rbp-58h]
  _QWORD v73[3]; // [rsp+C0h] [rbp-40h] BYREF
  int v74; // [rsp+D8h] [rbp-28h]
  unsigned int v75; // [rsp+DCh] [rbp-24h]
  int v76; // [rsp+E0h] [rbp-20h]
  __int64 v77; // [rsp+E8h] [rbp-18h]
  int v78; // [rsp+F0h] [rbp-10h]
  __int64 v79; // [rsp+F8h] [rbp-8h]
  __int64 v80; // [rsp+100h] [rbp+0h]
  __int64 *v81; // [rsp+108h] [rbp+8h]
  unsigned __int64 v82; // [rsp+110h] [rbp+10h]
  __m128i v83; // [rsp+118h] [rbp+18h]
  __int64 v84; // [rsp+128h] [rbp+28h]
  int v85; // [rsp+180h] [rbp+80h]
  __int64 v87; // [rsp+190h] [rbp+90h]
  int v88; // [rsp+190h] [rbp+90h]
  int v89; // [rsp+198h] [rbp+98h]

  v5 = *(unsigned int *)(a1 + 80);
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)a1;
  v8 = *(_QWORD *)(a1 + 32);
  v9 = *(_QWORD *)(a1 + 136);
  updated = *(_QWORD *)(a1 + 40);
  v11 = *(_DWORD *)(a1 + 64);
  v87 = *(_QWORD *)(a2 + 56);
  ListEntry = *(PSLIST_ENTRY *)(a1 + 128);
  v64 = *(_QWORD *)(a1 + 16);
  v63 = v6;
  v71 = v7;
  v12 = MiObtainFaultCharges((ULONG *)v8, v5, v11, a4);
  v67 = v12;
  if ( v5 > v12 )
  {
    v45 = updated;
    if ( qword_140E2D740 && (updated & 0x10) == 0 )
      v45 = updated & qword_140E2D748;
    v46 = HIDWORD(v45);
    if ( v9 + 8 * (v5 - v12) > v7 )
    {
      v53 = v7 - v9;
      v9 = v7;
      v47 = (v53 >> 3) + v46;
    }
    else
    {
      v47 = v5 - v12 + v46;
      v9 += 8 * (v5 - v12);
    }
    updated = MiUpdatePageFileHighInPte(updated, v47);
    *(_QWORD *)(a1 + 40) = updated;
    LODWORD(v5) = v14;
  }
  v15 = (__m128i *)(a1 + 104);
  *(_OWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  if ( v6 && *(_BYTE *)v6 == 1 )
  {
    AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v8, ((*(_DWORD *)(v6 + 80) >> 3) & 7u) + 1, v13, v14);
    v56 = AvailablePagesBelowPriority;
    if ( AvailablePagesBelowPriority > (unsigned int)v5 )
    {
      AvailablePagesBelowPriority = (unsigned int)v5;
      v56 = (unsigned int)v5;
    }
  }
  else
  {
    AvailablePagesBelowPriority = (unsigned int)v5;
    v56 = (unsigned int)v5;
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
    v38 = ListEntry;
    goto LABEL_39;
  }
LABEL_6:
  v85 = 9;
  if ( (*(_DWORD *)(v87 + 184) & 0xF) != 0
    || v64
    || ((CurrentThread = KeGetCurrentThread(), CurrentThread[1].SavedApcStateFill[15] == 0xFF)
     || (BYTE2(CurrentThread[1].Queue) & 1) != 0)
    && BYTE6(CurrentThread->ApcState.Process[3].PerProcessorCycleTimes) == 0xFF )
  {
    v18 = *(_DWORD *)(a1 + 48);
    if ( ((v18 & 0xC0) == 0x80 || (v18 & 0xC0) == 0x40 && !v64) && (*(_DWORD *)(v8 + 4) & 8) != 0 )
    {
      v85 = 2;
    }
    else if ( (*(_BYTE *)(a1 + 68) & 0x20) != 0 )
    {
      v85 = 6;
    }
    else if ( v6 )
    {
      if ( *(_BYTE *)v6 == 1 )
      {
        if ( *(_QWORD *)(v6 + 104) )
        {
          v39 = *(_QWORD *)(v6 + 88);
          if ( !*(_DWORD *)(a1 + 56)
            && *(_QWORD *)a2 < 0x7FFFFFFF0000uLL
            && !v64
            && ((*(_QWORD *)(v39 + 40) >> 43) & 0x3FF) == *(_WORD *)v8
            && (unsigned int)MiPageToNode((v39 + 0x220000000000LL) / 48) == *(_DWORD *)(a1 + 60) - 1 )
          {
            v40 = MiProtectionToCacheAttribute(*(unsigned int *)(a1 + 72));
            if ( ((v41 >> 22) & 3) == v40 )
            {
              MiSplitPageChain(v63 + 88, v56, a1 + 104);
              if ( *(_QWORD *)(a1 + 120) )
                v56 = *(_QWORD *)(a1 + 120);
            }
          }
        }
      }
    }
  }
  else
  {
    v85 = 8;
  }
  if ( *(_QWORD *)(a1 + 120) )
  {
LABEL_32:
    v36 = *(_QWORD *)(a1 + 120);
    if ( v36 != (unsigned int)v5 )
    {
      if ( v9 + 8 * v36 <= v71 )
      {
        v49 = updated;
        if ( qword_140E2D740 && (updated & 0x10) == 0 )
          v49 = updated & qword_140E2D748;
        v50 = (unsigned int)v5 - v36;
        v51 = HIDWORD(v49);
        if ( v9 + 8 * v50 > v71 )
        {
          v54 = v71 - v9;
          v9 = v71;
          v52 = (v54 >> 3) + v51;
        }
        else
        {
          v9 += 8 * v50;
          v52 = v5 - v36 + v51;
        }
        *(_QWORD *)(a1 + 40) = MiUpdatePageFileHighInPte(updated, v52);
      }
      LODWORD(v5) = v36;
    }
    result = 0LL;
    *(_QWORD *)(a1 + 88) = v67;
    *(_QWORD *)(a1 + 96) = v36;
    *(_QWORD *)(a1 + 136) = v9;
    *(_DWORD *)(a1 + 80) = v5;
    return result;
  }
  v19 = MiProtectionToCacheAttribute(*(unsigned int *)(a1 + 72));
  v20 = *(_DWORD *)(a1 + 60);
  v88 = v19;
  v59 = 0LL;
  memset_0(v73, 0, 0x70uLL);
  v61 = 0LL;
  v72 = 0LL;
  v66 = 0LL;
  v65 = 0LL;
  v21 = a2;
  v22 = (__int64)(v9 << 25) >> 16;
  v23 = *(_DWORD *)(a1 + 56) | 8;
  v70 = v22;
  v89 = v23;
  v60 = (_QWORD *)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  v57 = 0LL;
  while ( 1 )
  {
    v24 = *(_QWORD *)(v21 + 56);
    v73[0] = v8;
    v25 = *(_QWORD *)(v21 + 96);
    v26 = *(_BYTE *)(v21 + 69) & 1;
    v68 = v25;
    v69 = v56 - v66;
    v73[1] = v24;
    v62 = v75 & 0xFFFFFFCF | (16 * v26);
    v73[2] = v22;
    v74 = v20;
    if ( v20 )
    {
      IdealGlobalNode = v20 - 1;
    }
    else
    {
      v27 = KeGetCurrentThread();
      if ( v24 && (*(_DWORD *)(v24 + 184) & 0xF) == 0 && v27->ApcStateIndex == 1 )
        IdealGlobalNode = v27->ApcState.Process->IdealGlobalNode;
      else
        IdealGlobalNode = *(_DWORD *)(KiProcessorBlock[v27->IdealProcessor] + 34644);
    }
    v29 = MiAssignDefaultChannel(IdealGlobalNode);
    if ( !v31 || (*(_DWORD *)(v31 + 184) & 0xF) != 0 )
      v77 = v32 + 34640;
    else
      v77 = v31;
    v79 = -1LL;
    v59 = 0LL;
    v33 = ((2 * (v30 & 0x3F | 0x380)) | v29 & 1) << 8;
    v78 = v33 ^ (v33 ^ (v88 << 18)) & 0xC0000;
    v76 = v89;
    v81 = &v59;
    v80 = v68;
    v75 = v85 | v62 & 0xFFFFFFF0;
    v82 = v69;
    v84 = 0LL;
    v83 = 0LL;
    MiGetPageChain(v73);
    if ( v84 )
    {
      if ( v57 )
      {
        v42 = v83.m128i_i64[1];
        v35 = v84 + v61;
        v65.m128i_i64[1] = v83.m128i_i64[1];
        v43 = v65;
        *v60 = v83.m128i_i64[0];
        v60 = (_QWORD *)v42;
        v72 = v43;
        v61 = v35;
        v66 = v35;
      }
      else
      {
        v66 = v84;
        v60 = (_QWORD *)_mm_srli_si128(v83, 8).m128i_u64[0];
        v72 = v83;
        v61 = v84;
        v65 = v83;
        v57 = (_QWORD *)v83.m128i_i64[0];
      }
    }
    if ( v66 || v85 == 9 )
      break;
    v34 = v59;
    if ( v59 )
    {
      if ( v8 != *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a2 + 56) + 174LL)) )
      {
        *(_QWORD *)(a2 + 136) = v8;
        ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v8 + 22152));
        v34 = v59;
      }
      *(_QWORD *)(a2 + 144) = v56;
      *(_QWORD *)(a2 + 128) = v34;
      break;
    }
    if ( v85 == 6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 18052));
    }
    else if ( v85 == 8 )
    {
      v21 = a2;
      *(_DWORD *)(a2 + 80) |= 0x10u;
      goto LABEL_90;
    }
    v21 = a2;
LABEL_90:
    v22 = v70;
    v85 = 9;
  }
  if ( v66 )
  {
    if ( v15->m128i_i64[0] )
    {
      **(_QWORD **)(a1 + 112) = v57;
      v44 = v60;
      *(_QWORD *)(a1 + 120) += v61;
      *(_QWORD *)(a1 + 112) = v44;
    }
    else
    {
      *v15 = v72;
      *(_QWORD *)(a1 + 120) = v66;
    }
  }
  else
  {
    while ( 1 )
    {
      v55 = (__int64)v57;
      if ( !v57 )
        break;
      v57 = (_QWORD *)*v57;
      MiReleaseFreshPage(v55, v34, v35);
    }
  }
  if ( *(_QWORD *)(a1 + 120) )
    goto LABEL_32;
  v38 = ListEntry;
  if ( (*(_DWORD *)(a1 + 48) & 0x100) != 0 )
  {
    v48 = *((_DWORD *)&ListEntry[11].Next + 3);
    PsDereferencePartition(*(_QWORD *)(v8 + 256), 1883860301LL);
    *((_DWORD *)&ListEntry[11].Next + 3) = v48 & 0xFBFFFFFF;
  }
  v6 = v63;
LABEL_39:
  if ( v64 )
    MiUnlockProtoPoolPage(v64, 0x11u);
  MiFreeInPageSupportBlock(v38);
  if ( v6 )
    *(_BYTE *)(v6 + 1) = 2 - (*(_QWORD *)(a2 + 128) != 0LL);
  MiReturnFaultCharges(v8, v67);
  return 3221225495LL;
}
