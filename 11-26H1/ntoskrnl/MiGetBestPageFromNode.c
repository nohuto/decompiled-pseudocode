/*
 * XREFs of MiGetBestPageFromNode @ 0x140287CB0
 * Callers:
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiColorGetCache @ 0x140288F60 (MiColorGetCache.c)
 *     MiGetPerfectColorHeadPage @ 0x140288F90 (MiGetPerfectColorHeadPage.c)
 *     MiRemovePageAnyColor @ 0x140289560 (MiRemovePageAnyColor.c)
 *     MiCheckZeroFreeRebalance @ 0x14049AF4C (MiCheckZeroFreeRebalance.c)
 *     MiArePageContentsZero @ 0x140522A28 (MiArePageContentsZero.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 */

unsigned __int64 __fastcall MiGetBestPageFromNode(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
  int v4; // r12d
  __int64 *v6; // r15
  int v7; // r14d
  unsigned __int64 Cache; // r12
  __int64 v11; // rdx
  PSLIST_ENTRY PerfectColorHeadPage; // rsi
  _SLIST_ENTRY *Next; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  volatile signed __int32 *v18; // r9
  unsigned int v19; // eax
  __int64 v20; // r15
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD *v23; // rdx
  unsigned int v24; // esi
  unsigned __int64 *v25; // r8
  unsigned __int64 v26; // rax
  unsigned int v27; // edx
  unsigned __int64 v28; // rcx
  __int64 *v29; // rcx
  unsigned __int64 v30; // rcx
  _SLIST_HEADER *v31; // rcx
  __int64 v32; // rdx
  volatile signed __int32 *v33; // r8
  unsigned __int64 v34; // r9
  PSLIST_ENTRY v35; // r14
  _SLIST_ENTRY *v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // r11
  unsigned __int64 v40; // r9
  volatile signed __int32 *v41; // r10
  unsigned int v42; // eax
  unsigned __int64 result; // rax
  unsigned int v44; // esi
  int v45; // ecx
  unsigned int v46; // r9d
  int v47; // edx
  unsigned int v48; // r8d
  unsigned int v49; // eax
  __int64 *v50; // rax
  unsigned __int64 v51; // rdx
  int v52; // r10d
  __int64 v53; // rdx
  _SLIST_ENTRY *v54; // rax
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // r8
  unsigned __int64 v57; // r11
  unsigned __int64 v58; // r9
  volatile signed __int32 *v59; // r10
  unsigned int v60; // eax
  __int64 CurrentIrql; // rcx
  unsigned __int8 v62; // r10
  unsigned __int8 v63; // r11
  unsigned __int64 v64; // r9
  volatile signed __int32 *v65; // r8
  unsigned int v66; // eax
  unsigned __int64 v67; // rcx
  unsigned int v68; // eax
  unsigned __int64 v69; // r9
  volatile signed __int32 *v70; // r8
  unsigned __int64 v71; // rcx
  unsigned int v72; // eax
  unsigned __int8 v73; // al
  unsigned __int64 v74; // rdx
  unsigned __int64 v75; // rcx
  unsigned __int64 v76; // rcx
  unsigned __int64 v77; // rcx
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // rcx
  const signed __int64 **v80; // [rsp+20h] [rbp-59h]
  unsigned __int8 v81; // [rsp+20h] [rbp-59h]
  unsigned __int8 v82; // [rsp+20h] [rbp-59h]
  unsigned __int64 v83; // [rsp+28h] [rbp-51h]
  unsigned __int64 v84; // [rsp+28h] [rbp-51h]
  _SLIST_HEADER *ListHead; // [rsp+30h] [rbp-49h]
  PSLIST_HEADER ListHeada; // [rsp+30h] [rbp-49h]
  PSLIST_HEADER ListHeadb; // [rsp+30h] [rbp-49h]
  __int64 v88; // [rsp+38h] [rbp-41h] BYREF
  __int64 v89; // [rsp+40h] [rbp-39h]
  __int64 *v90; // [rsp+48h] [rbp-31h]
  int v91; // [rsp+50h] [rbp-29h]
  unsigned int v92; // [rsp+54h] [rbp-25h]
  unsigned int v93; // [rsp+58h] [rbp-21h]
  int v94; // [rsp+5Ch] [rbp-1Dh]
  __int64 v95; // [rsp+60h] [rbp-19h]
  int v96; // [rsp+68h] [rbp-11h]
  unsigned __int64 v97; // [rsp+70h] [rbp-9h]
  __int64 v98; // [rsp+78h] [rbp-1h]
  __int64 *v99; // [rsp+80h] [rbp+7h]
  __int64 *v100; // [rsp+88h] [rbp+Fh]
  unsigned __int8 v101; // [rsp+E0h] [rbp+67h]
  unsigned __int64 v102; // [rsp+E0h] [rbp+67h]
  int v103; // [rsp+E0h] [rbp+67h]
  BOOL v104; // [rsp+E8h] [rbp+6Fh]
  unsigned int v106; // [rsp+F8h] [rbp+7Fh]

  v4 = 0;
  v88 = a1;
  v94 = 0;
  v95 = 0LL;
  v6 = &MiZeroThenZero;
  v91 = 1;
  v92 = a2;
  if ( (a4 & 0x10) == 0 )
    v6 = &MiFreeThenFree;
  v93 = a4;
  v7 = (a4 & 0x10) == 0;
  v89 = 0LL;
  v90 = v6;
  if ( (a2 & 0x30000) != 0x30000 || (a2 & 0xC0000) != 0x40000 )
  {
LABEL_28:
    PerfectColorHeadPage = (PSLIST_ENTRY)MiGetPerfectColorHeadPage(&v88);
    goto LABEL_29;
  }
  Cache = (unsigned int)MiColorGetCache(a2);
  while ( 1 )
  {
    v80 = (const signed __int64 **)(a1 + 16LL * v7 + 13768);
    if ( !_bittest64(*v80, Cache) )
      goto LABEL_26;
    ListHead = (_SLIST_HEADER *)(16 * Cache + *(_QWORD *)(a1 + 8LL * v7 + 13856));
    PerfectColorHeadPage = RtlpInterlockedPopEntrySList(ListHead);
    if ( PerfectColorHeadPage )
      goto LABEL_8;
    if ( a4 & 1 | ((a4 & 2) != 0) )
    {
      v101 = 17;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      v101 = CurrentIrql;
      if ( (_BYTE)CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v11) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v11);
      }
    }
    v16 = Cache & 0x1F;
    LOBYTE(v17) = 1;
    v83 = v16;
    v98 = 4 * (Cache >> 5);
    v18 = (volatile signed __int32 *)((char *)*v80 + v98);
    v97 = v16 + 1;
    if ( v16 + 1 <= 0x20 )
    {
      v19 = ~(1 << v16);
LABEL_20:
      _InterlockedAnd(v18, v19);
      goto LABEL_21;
    }
    if ( (Cache & 0x1F) == 0 )
      goto LABEL_129;
    _InterlockedAnd(v18++, ~(((1 << (32 - (Cache & 0x1F))) - 1) << v16));
    v17 = 1LL - (32 - (unsigned int)(Cache & 0x1F));
    if ( v17 >= 0x20 )
    {
      v74 = v17 >> 5;
      v17 += -32LL * (v17 >> 5);
      do
      {
        *v18++ = 0;
        --v74;
      }
      while ( v74 );
    }
    if ( v17 )
    {
LABEL_129:
      v19 = -1 << v17;
      goto LABEL_20;
    }
LABEL_21:
    PerfectColorHeadPage = RtlpInterlockedPopEntrySList(ListHead);
    if ( PerfectColorHeadPage )
      break;
    if ( v101 != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v101);
      __writecr8(v101);
    }
LABEL_26:
    if ( v7 == *((_DWORD *)v6 + 1) )
    {
      v4 = 0;
      goto LABEL_28;
    }
    v7 = *((_DWORD *)v6 + 1);
  }
  LOBYTE(v64) = 1;
  v65 = (volatile signed __int32 *)((char *)*v80 + v98);
  if ( v97 <= 0x20 )
  {
    v66 = 1 << v83;
    goto LABEL_149;
  }
  if ( !v83 )
    goto LABEL_169;
  _InterlockedOr(v65, ((1 << (32 - (Cache & 0x1F))) - 1) << (Cache & 0x1F));
  v64 = 1LL - (32 - (unsigned int)(Cache & 0x1F));
  ++v65;
  if ( v64 >= 0x20 )
  {
    v77 = v64 >> 5;
    v64 += -32LL * (v64 >> 5);
    do
    {
      *v65++ = -1;
      --v77;
    }
    while ( v77 );
  }
  if ( v64 )
  {
LABEL_169:
    v66 = (1 << v64) - 1;
LABEL_149:
    _InterlockedOr(v65, v66);
  }
  if ( v101 != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v101);
    __writecr8(v101);
  }
LABEL_8:
  PerfectColorHeadPage[1].Next = *(_SLIST_ENTRY **)&CLFS_LSN_NULL_EXT;
  if ( v7 )
  {
    Next = PerfectColorHeadPage[1].Next;
    if ( !Next )
    {
      v14 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
      if ( qword_140E2D8C0 )
      {
        v15 = qword_140E2D8C0 | *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC9FuLL | 0x80;
        if ( (qword_140E2D8C0 & v14) != 0 )
          v15 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC0FuLL | 0x90;
        v14 = v15;
      }
      PerfectColorHeadPage[1].Next = (_SLIST_ENTRY *)v14;
      goto LABEL_15;
    }
    PerfectColorHeadPage[1].Next = (_SLIST_ENTRY *)((unsigned __int64)Next & 0xFFFFFFFFFFFFFC1FuLL | 0x80);
    v4 = 0;
    PerfectColorHeadPage->Next = 0LL;
  }
  else
  {
    if ( (MiFlags & 0x80u) == 0LL
      || (++*(_DWORD *)&stru_140E2ED08.SavedApcStateFill[40],
          (*(_DWORD *)&stru_140E2ED08.SavedApcStateFill[40] & MmPageValidationFrequency) != 0) )
    {
LABEL_15:
      v4 = 0;
      PerfectColorHeadPage->Next = 0LL;
      goto LABEL_29;
    }
    MiArePageContentsZero((__int64)&PerfectColorHeadPage[0x22000000000LL] / 48);
    v4 = 0;
    PerfectColorHeadPage->Next = 0LL;
  }
LABEL_29:
  if ( (unsigned __int64)PerfectColorHeadPage >= 2 )
    return (unsigned __int64)PerfectColorHeadPage;
  v20 = HIWORD(a2) & 3;
  if ( (a4 & 4) != 0 && (unsigned int)(v20 - 1) <= 1 )
  {
    v44 = a2;
    v45 = MiColorGetCache(a2);
    v46 = MiPageColorDivisors[v20];
    LODWORD(v98) = v46;
    v47 = a4 & 0x10;
    LODWORD(v97) = 0x100 / v46;
    v48 = 0x100 / v46;
    v96 = v47;
    v49 = 1;
    while ( 1 )
    {
      v106 = v49;
      if ( v49 >= v48 )
      {
        v4 = 0;
        break;
      }
      v88 = a1;
      v103 = v46 + v45;
      v91 = 1;
      v44 ^= (unsigned __int8)((v46 + v45) ^ v44);
      v93 = a4;
      v92 = v44;
      v94 = 0;
      v95 = 0LL;
      v50 = &MiZeroThenZero;
      if ( !v47 )
        v50 = &MiFreeThenFree;
      v104 = v47 == 0;
      v100 = v50;
      v89 = 0LL;
      v90 = v50;
      if ( (v44 & 0x30000) != 0x30000 || (v44 & 0xC0000) != 0x40000 )
      {
LABEL_111:
        v35 = (PSLIST_ENTRY)MiGetPerfectColorHeadPage(&v88);
        goto LABEL_112;
      }
      v51 = (unsigned int)MiColorGetCache(v44);
      v84 = v51;
      while ( 1 )
      {
        ListHeadb = (PSLIST_HEADER)(a1 + 16 * (v52 + 860LL));
        if ( !_bittest64((const signed __int64 *)ListHeadb->Region, v51) )
          goto LABEL_110;
        v99 = *(__int64 **)(a1 + 8LL * v52 + 13856);
        v35 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&v99[2 * v51]);
        if ( v35 )
          goto LABEL_91;
        if ( a4 & 1 | ((a4 & 2) != 0) )
        {
          v82 = 17;
        }
        else
        {
          v63 = KeGetCurrentIrql();
          v82 = v63;
          if ( v63 != 2 )
            __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(v53) = 2;
            KiRaiseIrqlProcessIrqlFlags(v63, v53);
          }
        }
        LOBYTE(v57) = 1;
        v58 = v84 & 0x1F;
        v59 = (volatile signed __int32 *)(ListHeadb->Region + 4 * (v84 >> 5));
        if ( v58 + 1 <= 0x20 )
        {
          v60 = ~(1 << v58);
LABEL_103:
          _InterlockedAnd(v59, v60);
          goto LABEL_104;
        }
        if ( (v84 & 0x1F) == 0 )
          goto LABEL_144;
        _InterlockedAnd(v59, ~(((1 << (32 - (v84 & 0x1F))) - 1) << v58));
        v57 = 1LL - (32 - (unsigned int)(v84 & 0x1F));
        ++v59;
        if ( v57 >= 0x20 )
        {
          v76 = v57 >> 5;
          v57 += -32LL * (v57 >> 5);
          do
          {
            *v59++ = 0;
            --v76;
          }
          while ( v76 );
        }
        if ( v57 )
        {
LABEL_144:
          v60 = -1 << v57;
          goto LABEL_103;
        }
LABEL_104:
        v35 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&v99[2 * v84]);
        if ( v35 )
          break;
        if ( v82 != 17 )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v82);
          __writecr8(v82);
        }
        v51 = v84;
        v52 = v104;
LABEL_110:
        if ( v52 == *((_DWORD *)v100 + 1) )
          goto LABEL_111;
        v52 = *((_DWORD *)v100 + 1);
        v104 = v52;
      }
      LOBYTE(v69) = 1;
      v70 = (volatile signed __int32 *)(ListHeadb->Region + 4 * ((unsigned __int64)(unsigned int)v84 >> 5));
      v71 = v84 & 0x1F;
      if ( v71 + 1 <= 0x20 )
      {
        v72 = 1 << v71;
        goto LABEL_163;
      }
      if ( (v84 & 0x1F) == 0 )
        goto LABEL_174;
      _InterlockedOr(v70, ((1 << (32 - (v84 & 0x1F))) - 1) << (v84 & 0x1F));
      v69 = 1LL - (32 - (unsigned int)(v84 & 0x1F));
      ++v70;
      if ( v69 >= 0x20 )
      {
        v79 = v69 >> 5;
        v69 += -32LL * (v69 >> 5);
        do
        {
          *v70++ = -1;
          --v79;
        }
        while ( v79 );
      }
      if ( v69 )
      {
LABEL_174:
        v72 = (1 << v69) - 1;
LABEL_163:
        _InterlockedOr(v70, v72);
      }
      v73 = v82;
      if ( v82 != 17 )
      {
        if ( KiIrqlFlags )
        {
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v82);
          v73 = v82;
        }
        __writecr8(v73);
      }
LABEL_91:
      v35[1].Next = *(_SLIST_ENTRY **)&CLFS_LSN_NULL_EXT;
      if ( v104 )
      {
        v54 = v35[1].Next;
        if ( v54 )
        {
          v35[1].Next = (_SLIST_ENTRY *)((unsigned __int64)v54 & 0xFFFFFFFFFFFFFC1FuLL | 0x80);
          v35->Next = 0LL;
        }
        else
        {
          v55 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
          if ( qword_140E2D8C0 )
          {
            v56 = qword_140E2D8C0 | *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC9FuLL | 0x80;
            if ( (qword_140E2D8C0 & v55) != 0 )
              v56 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC0FuLL | 0x90;
            v55 = v56;
          }
          v35[1].Next = (_SLIST_ENTRY *)v55;
LABEL_98:
          v35->Next = 0LL;
        }
      }
      else
      {
        if ( (MiFlags & 0x80u) == 0LL )
          goto LABEL_98;
        if ( (++*(_DWORD *)&stru_140E2ED08.SavedApcStateFill[40] & MmPageValidationFrequency) != 0 )
          goto LABEL_98;
        MiArePageContentsZero((__int64)&v35[0x22000000000LL] / 48);
        v35->Next = 0LL;
      }
LABEL_112:
      if ( (unsigned __int64)v35 >= 2 )
        return (unsigned __int64)v35;
      v45 = v103;
      v49 = v106 + 1;
      v47 = v96;
      v48 = v97;
      v46 = v98;
    }
  }
  v21 = (a2 >> 15) & 1;
  v22 = a1 + ((unsigned __int64)(unsigned int)v20 << 10);
  if ( (a4 & 0x10) != 0 )
  {
    if ( (a4 & 0x20) != 0 )
      v23 = (_QWORD *)(v22 + 32 * (3 * v21 + a3 + 4LL));
    else
      v23 = 0LL;
    v24 = a4 & 0xFFFFFFEF;
  }
  else
  {
    v23 = (_QWORD *)(v22 + 32 * (a3 + 3 * v21) + 144);
    v24 = a4 | 0x10;
  }
  if ( v23 )
  {
    v25 = (unsigned __int64 *)v23[1];
    v26 = (unsigned __int64)(*v23 + 63LL) >> 6;
    v27 = 0;
    while ( v26 )
    {
      v28 = *v25++;
      v27 += __popcnt(v28);
      if ( v27 >= 8 )
      {
        result = MiRemovePageAnyColor(*(_QWORD *)(a1 + 13896), a2, a4, 0LL);
        if ( result >= 2 )
          return result;
        break;
      }
      --v26;
    }
  }
  v94 = 0;
  v29 = &MiZeroThenZero;
  v95 = 0LL;
  LOBYTE(v4) = (v24 & 0x10) == 0;
  v88 = a1;
  v91 = 1;
  if ( (v24 & 0x10) == 0 )
    v29 = &MiFreeThenFree;
  v92 = a2;
  v93 = v24;
  v99 = v29;
  v89 = 0LL;
  v90 = v29;
  if ( (a2 & 0x30000) != 0x30000 || (a2 & 0xC0000) != 0x40000 )
  {
LABEL_67:
    v35 = (PSLIST_ENTRY)MiGetPerfectColorHeadPage(&v88);
    goto LABEL_68;
  }
  v30 = (unsigned int)MiColorGetCache(a2);
  v102 = v30;
  while ( 2 )
  {
    ListHeada = (PSLIST_HEADER)(a1 + 16 * (v4 + 860LL));
    if ( !_bittest64((const signed __int64 *)ListHeada->Region, v30) )
    {
LABEL_66:
      if ( v4 == *((_DWORD *)v99 + 1) )
        goto LABEL_67;
      v4 = *((_DWORD *)v99 + 1);
      continue;
    }
    break;
  }
  v31 = (_SLIST_HEADER *)(*(_QWORD *)(a1 + 8LL * v4 + 13856) + 16 * v30);
  v100 = *(__int64 **)(a1 + 8LL * v4 + 13856);
  v35 = RtlpInterlockedPopEntrySList(v31);
  if ( v35 )
    goto LABEL_47;
  if ( v24 & 1 | ((v24 & 2) != 0) )
  {
    v81 = 17;
  }
  else
  {
    v62 = KeGetCurrentIrql();
    v81 = v62;
    if ( v62 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v32) = 2;
      KiRaiseIrqlProcessIrqlFlags(v62, v32);
    }
  }
  LOBYTE(v39) = 1;
  v40 = v102 & 0x1F;
  v41 = (volatile signed __int32 *)(ListHeada->Region + 4 * (v102 >> 5));
  if ( v40 + 1 <= 0x20 )
  {
    v42 = ~(1 << v40);
    goto LABEL_59;
  }
  if ( (v102 & 0x1F) == 0 )
    goto LABEL_136;
  _InterlockedAnd(v41, ~(((1 << (32 - (v102 & 0x1F))) - 1) << v40));
  v39 = 1LL - (32 - (unsigned int)(v102 & 0x1F));
  ++v41;
  if ( v39 >= 0x20 )
  {
    v75 = v39 >> 5;
    v39 += -32LL * (v39 >> 5);
    do
    {
      *v41++ = 0;
      --v75;
    }
    while ( v75 );
  }
  if ( v39 )
  {
LABEL_136:
    v42 = -1 << v39;
LABEL_59:
    _InterlockedAnd(v41, v42);
  }
  v35 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&v100[2 * v102]);
  if ( !v35 )
  {
    if ( v81 != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v81);
      __writecr8(v81);
    }
    v30 = v102;
    goto LABEL_66;
  }
  v34 = 1LL;
  v33 = (volatile signed __int32 *)(ListHeada->Region + 4 * ((unsigned __int64)(unsigned int)v102 >> 5));
  v67 = v102 & 0x1F;
  if ( v67 + 1 <= 0x20 )
  {
    v68 = 1 << v67;
    goto LABEL_156;
  }
  if ( (v102 & 0x1F) == 0 )
    goto LABEL_171;
  _InterlockedOr(v33, ((1 << (32 - (v102 & 0x1F))) - 1) << (v102 & 0x1F));
  v34 = 1LL - (32 - (unsigned int)(v102 & 0x1F));
  ++v33;
  if ( v34 >= 0x20 )
  {
    v78 = v34 >> 5;
    v34 += -32LL * (v34 >> 5);
    do
    {
      *v33++ = -1;
      --v78;
    }
    while ( v78 );
  }
  if ( v34 )
  {
LABEL_171:
    v68 = (1 << v34) - 1;
LABEL_156:
    _InterlockedOr(v33, v68);
  }
  if ( v81 != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v81);
    __writecr8(v81);
  }
LABEL_47:
  v35[1].Next = *(_SLIST_ENTRY **)&CLFS_LSN_NULL_EXT;
  if ( v4 )
  {
    v36 = v35[1].Next;
    if ( v36 )
    {
      v35[1].Next = (_SLIST_ENTRY *)((unsigned __int64)v36 & 0xFFFFFFFFFFFFFC1FuLL | 0x80);
      v35->Next = 0LL;
    }
    else
    {
      v34 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC9FuLL;
      v37 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
      if ( qword_140E2D8C0 )
      {
        v33 = (volatile signed __int32 *)(*(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC0FuLL | 0x90);
        v38 = v34 | qword_140E2D8C0 | 0x80;
        if ( (qword_140E2D8C0 & v37) != 0 )
          v38 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC0FuLL | 0x90;
        v37 = v38;
      }
      v35[1].Next = (_SLIST_ENTRY *)v37;
LABEL_54:
      v35->Next = 0LL;
    }
  }
  else
  {
    if ( (MiFlags & 0x80u) == 0LL )
      goto LABEL_54;
    if ( (++*(_DWORD *)&stru_140E2ED08.SavedApcStateFill[40] & MmPageValidationFrequency) != 0 )
      goto LABEL_54;
    MiArePageContentsZero((__int64)&v35[0x22000000000LL] / 48);
    v35->Next = 0LL;
  }
LABEL_68:
  if ( (unsigned __int64)v35 >= 2 )
    return (unsigned __int64)v35;
  if ( (_DWORD)v20 == 3 && (a4 & 1) == 0 && (a4 & 2) == 0 )
    MiCheckZeroFreeRebalance(*(_QWORD *)(a1 + 13896), a2, v33, v34);
  return 1LL;
}
