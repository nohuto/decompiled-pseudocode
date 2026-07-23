/*
 * XREFs of MiCreateSharedZeroPages @ 0x140282EF0
 * Callers:
 *     MiResolveDemandZeroFault @ 0x1402B6900 (MiResolveDemandZeroFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiSharedVaToPartition @ 0x140282C7C (MiSharedVaToPartition.c)
 *     MiAssignDefaultChannel @ 0x140283900 (MiAssignDefaultChannel.c)
 *     MiGetPageChain @ 0x140285330 (MiGetPageChain.c)
 *     MiReleaseFreshPage @ 0x1402916F0 (MiReleaseFreshPage.c)
 *     MiUserPdeOrAbove @ 0x1402A0990 (MiUserPdeOrAbove.c)
 *     MiInitializePfn @ 0x1402B9440 (MiInitializePfn.c)
 *     MiBadShareCount @ 0x1402BE4D0 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402BE530 (MiPfnShareCountIsZero.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiAdvanceFaultList @ 0x140371250 (MiAdvanceFaultList.c)
 *     MiIsAddressGlobal @ 0x140376AA0 (MiIsAddressGlobal.c)
 *     MiGetClusterPage @ 0x140508040 (MiGetClusterPage.c)
 *     MiArePageContentsZero @ 0x140522A28 (MiArePageContentsZero.c)
 */

__int64 __fastcall MiCreateSharedZeroPages(__int64 a1, _QWORD *a2, __int64 a3)
{
  ULONG_PTR v3; // r13
  __int64 v4; // r12
  _QWORD *v5; // r15
  __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 *v10; // rdx
  __int64 v11; // rax
  ULONG *v12; // rax
  int v13; // r8d
  int v14; // ecx
  ULONG *v15; // r9
  int v16; // r15d
  int v17; // ebx
  __int64 v18; // rcx
  unsigned int v19; // edi
  int v20; // r15d
  __int64 v21; // r11
  int v22; // ecx
  bool v23; // zf
  unsigned int v24; // edi
  struct _KTHREAD *CurrentThread; // rcx
  struct _KPRCB *CurrentPrcb; // r13
  unsigned int IdealGlobalNode; // r9d
  char v28; // al
  char v29; // r9
  unsigned int *v30; // r11
  _QWORD *v31; // r13
  __int64 v32; // rdi
  _QWORD *v33; // r12
  int v34; // r9d
  ULONG_PTR v35; // rsi
  ULONG_PTR v36; // r15
  __int64 v37; // rdi
  int v38; // edi
  __int64 v39; // r8
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // rbx
  __int64 v42; // rax
  unsigned __int64 v43; // rax
  int ClusterPage; // eax
  unsigned __int64 v45; // rcx
  int IsAddressGlobal; // eax
  unsigned __int64 v47; // rdx
  __int64 v49; // rax
  unsigned __int64 v50; // rdi
  unsigned __int64 v51; // rdx
  __int64 v52; // rdx
  _QWORD *v53; // rcx
  struct _EX_RUNDOWN_REF *v54; // rcx
  unsigned __int16 v55; // cx
  unsigned __int64 v56; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v57; // [rsp+40h] [rbp-C0h]
  __int128 v58; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v59; // [rsp+58h] [rbp-A8h]
  _QWORD *v60; // [rsp+60h] [rbp-A0h]
  __int64 v61; // [rsp+68h] [rbp-98h]
  __int64 v62; // [rsp+70h] [rbp-90h]
  __m128i v63; // [rsp+78h] [rbp-88h]
  __int64 v64; // [rsp+88h] [rbp-78h]
  ULONG *v65; // [rsp+90h] [rbp-70h]
  __int64 v66; // [rsp+98h] [rbp-68h]
  ULONG_PTR BugCheckParameter4; // [rsp+A0h] [rbp-60h]
  __int64 v68; // [rsp+A8h] [rbp-58h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+B0h] [rbp-50h]
  _QWORD v70[3]; // [rsp+C0h] [rbp-40h] BYREF
  int v71; // [rsp+D8h] [rbp-28h]
  unsigned int v72; // [rsp+DCh] [rbp-24h]
  int v73; // [rsp+E0h] [rbp-20h]
  int v74; // [rsp+E4h] [rbp-1Ch]
  unsigned int *p_PageColor; // [rsp+E8h] [rbp-18h]
  unsigned int v76; // [rsp+F0h] [rbp-10h]
  int v77; // [rsp+F4h] [rbp-Ch]
  __int64 v78; // [rsp+F8h] [rbp-8h]
  __int64 v79; // [rsp+100h] [rbp+0h]
  __int64 *v80; // [rsp+108h] [rbp+8h]
  __int64 v81; // [rsp+110h] [rbp+10h]
  __m128i v82; // [rsp+118h] [rbp+18h]
  __int64 v83; // [rsp+128h] [rbp+28h]
  int v84; // [rsp+180h] [rbp+80h]
  int v85; // [rsp+180h] [rbp+80h]
  __int64 v87; // [rsp+190h] [rbp+90h]
  int v88; // [rsp+190h] [rbp+90h]
  __int64 v89; // [rsp+198h] [rbp+98h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = a2;
  BugCheckParameter4 = v3;
  v59 = 0LL;
  v7 = *(_QWORD *)(a1 + 56);
  v8 = *(_QWORD *)(a1 + 16);
  v9 = (*(_QWORD *)v3 >> 5) & 0x1FLL;
  v56 = v8;
  v58 = 0LL;
  if ( v7 )
  {
    v43 = *(unsigned int *)(v7 + 48);
    if ( (v43 & 0x80000) == 0 && MiVadPageSizes[(v43 >> 17) & 3] == 16 )
    {
      ClusterPage = MiGetClusterPage(
                      v7,
                      v8,
                      (*(_BYTE *)(v4 + 69) & 1) != 0,
                      *a2,
                      *(_DWORD *)(a1 + 32),
                      *(_DWORD *)(a1 + 36),
                      *(_QWORD *)(v4 + 96),
                      (__int64)&v58);
      if ( v59 )
      {
        if ( v59 == 1 )
        {
          *v5 = 1LL;
          if ( ClusterPage )
            *(_DWORD *)a1 |= 0x10u;
        }
        else
        {
          v55 = v8;
          *v5 = 16LL;
          v8 &= 0xFFFFFFFFFFFF0000uLL;
          v56 = v8;
          *(_QWORD *)(a1 + 16) = v8;
          v3 -= 8LL * (v55 >> 12);
          BugCheckParameter4 = v3;
        }
      }
      else
      {
        *v5 = 1LL;
      }
    }
  }
  if ( v59 )
  {
    v33 = (_QWORD *)v58;
  }
  else
  {
    v10 = *(__int64 **)(a1 + 24);
    v11 = *v10;
    if ( (unsigned __int64)v10 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)v10 <= 0xFFFFF6FB7DBED7F8uLL
      && (v11 & 1) != 0
      && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
    {
      MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v10, a3);
    }
    v12 = MiSharedVaToPartition(*(_QWORD *)(v4 + 56), v8, *(__int64 **)(a1 + 24));
    v13 = 9;
    v14 = *(_DWORD *)a1 & 0xC0000;
    v65 = v12;
    v84 = 9;
    v15 = v12;
    if ( v14 == 0x80000 )
    {
      if ( (v12[1] & 8) != 0 )
        v13 = 2;
      v84 = v13;
    }
    v16 = 1;
    if ( (_DWORD)v9 )
    {
      if ( (_DWORD)v9 != 31 )
      {
        if ( (unsigned int)v9 >> 3 == 3 )
        {
          if ( (v9 & 7) != 0 )
            v16 = 2;
        }
        else
        {
          v16 = (unsigned int)v9 >> 3 != 1;
        }
      }
    }
    else
    {
      v16 = 3;
    }
    v17 = *(_DWORD *)(a1 + 40);
    v89 = 0LL;
    v82 = 0LL;
    v18 = *a2;
    v19 = 0;
    v74 = 0;
    v77 = 0;
    v83 = 0LL;
    v20 = v16 << 18;
    v66 = v18;
    *(_OWORD *)BugCheckParameter2 = 0LL;
    v87 = 0LL;
    v63 = 0LL;
    v64 = 0LL;
    v60 = (_QWORD *)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    v61 = 0LL;
    while ( 1 )
    {
      v21 = *(_QWORD *)(v4 + 56);
      v62 = v18 - v64;
      v22 = 0;
      v70[0] = v15;
      v23 = (*(_BYTE *)(v4 + 69) & 1) == 0;
      v70[1] = v21;
      if ( !v23 )
        v22 = 16;
      v71 = v17;
      v68 = *(_QWORD *)(v4 + 96);
      v24 = v22 | v19 & 0xFFFFFFCF;
      v70[2] = v56;
      if ( v17 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        IdealGlobalNode = v17 - 1;
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        if ( v21 && (*(_DWORD *)(v21 + 184) & 0xF) == 0 && CurrentThread->ApcStateIndex == 1 )
        {
          IdealGlobalNode = CurrentThread->ApcState.Process->IdealGlobalNode;
          CurrentPrcb = KeGetCurrentPrcb();
        }
        else
        {
          CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[CurrentThread->IdealProcessor];
          IdealGlobalNode = CurrentPrcb->NodeColor;
        }
      }
      v28 = MiAssignDefaultChannel(IdealGlobalNode);
      if ( !v30 || (v30[46] & 0xF) != 0 )
        p_PageColor = &CurrentPrcb->PageColor;
      else
        p_PageColor = v30;
      v73 = 57;
      v80 = &v89;
      v79 = v68;
      v81 = v62;
      v83 = 0LL;
      v76 = v20 | (((2 * (v29 & 0x3F | 0x380)) | v28 & 1) << 8) & 0xFFF3FFFF;
      v78 = -1LL;
      v89 = 0LL;
      v72 = v84 | v24 & 0xFFFFFFF0;
      v82 = 0LL;
      MiGetPageChain(v70);
      v31 = (_QWORD *)v61;
      if ( v83 )
      {
        if ( v61 )
        {
          v32 = v83 + v87;
          *v60 = v82.m128i_i64[0];
          v63.m128i_i64[1] = v82.m128i_i64[1];
          v60 = (_QWORD *)v82.m128i_i64[1];
          v87 = v32;
          *(__m128i *)BugCheckParameter2 = v63;
          v64 = v32;
        }
        else
        {
          v64 = v83;
          v32 = v83;
          v31 = (_QWORD *)v82.m128i_i64[0];
          v60 = (_QWORD *)_mm_srli_si128(v82, 8).m128i_u64[0];
          *(__m128i *)BugCheckParameter2 = v82;
          v87 = v83;
          v63 = v82;
          v61 = v82.m128i_i64[0];
        }
      }
      else
      {
        v32 = v87;
      }
      if ( v64 || v84 == 9 )
        break;
      v52 = v89;
      if ( v89 )
      {
        if ( v65 != *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v4 + 56) + 174LL)) )
        {
          v54 = (struct _EX_RUNDOWN_REF *)(v65 + 5538);
          *(_QWORD *)(v4 + 136) = v65;
          ExAcquireRundownProtection_0(v54);
          v52 = v89;
        }
        *(_QWORD *)(v4 + 144) = v66;
        *(_QWORD *)(v4 + 128) = v52;
        break;
      }
      v19 = v72;
      v15 = v65;
      v18 = v66;
      v84 = 9;
    }
    if ( v64 )
    {
      v33 = (_QWORD *)v58;
      if ( (_QWORD)v58 )
      {
        v59 += v32;
        **((_QWORD **)&v58 + 1) = v31;
      }
      else
      {
        v33 = (_QWORD *)BugCheckParameter2[0];
        v59 = v64;
      }
    }
    else
    {
      while ( 1 )
      {
        v53 = v31;
        if ( !v31 )
          break;
        v31 = (_QWORD *)*v31;
        MiReleaseFreshPage(v53);
      }
      v33 = (_QWORD *)v58;
    }
    if ( !v59 )
      return 3221225495LL;
    v3 = BugCheckParameter4;
    v8 = v56;
    v5 = a2;
  }
  v34 = 8466;
  v62 = *(_QWORD *)(a1 + 48);
  *v5 = v59;
  v85 = 8466;
  if ( v7 )
  {
    if ( (*(unsigned int *)(v7 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 34) << 32)) == 0x7FFFFFFFELL )
      v34 = 8530;
    v85 = v34;
  }
  v88 = 0;
  v57 = v8 & 0xFFFFFFFFFFFFF000uLL;
  while ( 1 )
  {
    v35 = (ULONG_PTR)v33;
    if ( v33 )
      v33 = (_QWORD *)*v33;
    v36 = (__int64)(v35 + 0x220000000000LL) / 48;
    if ( (MiFlags & 0x80u) != 0LL
      && (++*(_DWORD *)&stru_140E2ED08.SavedApcStateFill[40] & MmPageValidationFrequency) == 0 )
    {
      MiArePageContentsZero(v36);
      v34 = v85;
    }
    v37 = (*(_QWORD *)v3 >> 5) & 0x1FLL;
    if ( (_DWORD)v37 == 24 )
      LODWORD(v37) = 1;
    if ( (*(_DWORD *)a1 & 2) != 0 || (((_DWORD)v37 - 4) & 0xFFFFFFFD) != 0 )
      v85 = v34 | 0x20;
    MiInitializePfn(v35, v3);
    v38 = v37 | 0x20000000;
    v39 = v38 & 0x1F;
    v89 = v39;
    v40 = ((v36 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v39] & 0xFFF0000000000E7FuLL | 0x21;
    if ( v3 < 0xFFFFF68000000000uLL || v3 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v41 = ((v36 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v39] & 0xFFF0000000000E7FuLL | 0x121;
    }
    else
    {
      if ( v3 >= 0xFFFFF6FB40000000uLL && v3 <= 0xFFFFF6FB7FFFFFFFuLL )
      {
        v40 = v3 == 0xFFFFF6FB7DBEDF68uLL
            ? ((v36 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v39] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL
            : ((v36 & 0xFFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v39] & 0x7FF0000000000E7FLL | 0x21;
        if ( (unsigned int)MiUserPdeOrAbove(v3) )
          v40 |= 4uLL;
      }
      v45 = (__int64)(v3 << 25) >> 16;
      if ( v45 < 0x7FFFFFFF0000LL )
        v40 |= 4uLL;
      IsAddressGlobal = MiIsAddressGlobal(v45, v40);
      v41 = v40 | 0x100;
      if ( !IsAddressGlobal )
        v41 = v47;
    }
    v42 = v41 | 0x42;
    if ( v38 >= 0 || (v39 & 5) != 4 )
      v42 = v41;
    *(_QWORD *)v3 = (unsigned __int16)(BYTE4(stru_140E2DAB0.Header.WaitListHead.Blink) << 8) ^ (((unsigned __int64)BYTE4(stru_140E2DAB0.Header.WaitListHead.Blink) << 8) ^ v42) & 0xFAFFFFFFFFFFFEFFuLL | 0xA00000000000000LL;
    if ( (*(_DWORD *)a1 & 0x10) != 0 )
    {
      LODWORD(v89) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v89);
        while ( *(__int64 *)(v35 + 24) < 0 );
      }
      if ( (*(_BYTE *)(v35 + 34) & 7) != 6 )
        MiBadShareCount(v35);
      v49 = *(_QWORD *)(v35 + 24);
      *(_QWORD *)(v35 + 24) = ((v49 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ (v49 ^ ((v49 & 0x3FFFFFFFFFFFFFFFLL) - 1)) & 0xC000000000000000uLL;
      if ( (v49 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        MiPfnShareCountIsZero(v35);
      _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( v62 && *(_BYTE *)v62 == 1 )
    {
      v51 = *(_QWORD *)(v62 + 24);
      v50 = v57;
      if ( v51 < *(_QWORD *)(v62 + 16)
        && v57 == *(_QWORD *)(*(_QWORD *)(v62 + 8) + 16 * v51) + (*(_QWORD *)(v62 + 32) << 12) )
      {
        MiAdvanceFaultList(v62);
      }
    }
    else
    {
      v50 = v57;
    }
    v57 = v50 + 4096;
    v3 += 8LL;
    if ( (unsigned __int64)(unsigned int)++v88 >= *a2 )
      break;
    v34 = v85;
  }
  return 273LL;
}
