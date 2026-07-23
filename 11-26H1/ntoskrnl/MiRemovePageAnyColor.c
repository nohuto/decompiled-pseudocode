/*
 * XREFs of MiRemovePageAnyColor @ 0x140289560
 * Callers:
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiGetBestPageFromNode @ 0x140287CB0 (MiGetBestPageFromNode.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiColorGetCache @ 0x140288F60 (MiColorGetCache.c)
 *     MiGetPerfectColorHeadPage @ 0x140288F90 (MiGetPerfectColorHeadPage.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiArePageContentsZero @ 0x140522A28 (MiArePageContentsZero.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall MiRemovePageAnyColor(__int64 a1, unsigned int a2, int a3, int a4)
{
  __int64 v4; // r15
  __int64 *v6; // r12
  char v7; // si
  __int64 v8; // r11
  __int64 v9; // r14
  unsigned __int64 v10; // r10
  _BOOL8 v11; // rcx
  PSLIST_ENTRY *v12; // rax
  PSLIST_ENTRY result; // rax
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned __int64 v16; // r13
  unsigned int v17; // edi
  unsigned int v18; // ecx
  unsigned int v19; // r10d
  unsigned __int64 v20; // r11
  unsigned int Cache; // r14d
  unsigned __int64 v22; // rbp
  __int64 v23; // r9
  unsigned int v24; // edi
  _QWORD *v25; // r8
  unsigned int v26; // r14d
  unsigned int v27; // ecx
  int v28; // r10d
  unsigned int v29; // eax
  unsigned __int64 v30; // rcx
  unsigned int v31; // eax
  int v32; // r10d
  __int64 v33; // r8
  unsigned __int64 v34; // rcx
  __int64 v35; // rdx
  PSLIST_ENTRY v36; // r12
  _SLIST_ENTRY *Next; // rax
  unsigned __int64 DemandZeroPte; // rax
  unsigned __int64 v39; // r10
  unsigned __int64 v40; // r8
  volatile signed __int32 *v41; // r9
  unsigned int v42; // eax
  __int64 PerfectColorHeadPage; // rax
  unsigned __int8 CurrentIrql; // r8
  unsigned __int64 v45; // r8
  volatile signed __int32 *v46; // r9
  unsigned int v47; // eax
  unsigned __int8 v48; // al
  char v49; // al
  unsigned int v50; // ecx
  char v51; // al
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // [rsp+20h] [rbp-D8h]
  unsigned __int8 v55; // [rsp+28h] [rbp-D0h]
  __int64 v56; // [rsp+30h] [rbp-C8h]
  __int64 *v57; // [rsp+38h] [rbp-C0h]
  unsigned int v58; // [rsp+40h] [rbp-B8h]
  __int64 v59; // [rsp+48h] [rbp-B0h]
  const signed __int64 **v60; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v61; // [rsp+58h] [rbp-A0h]
  __int64 v62[2]; // [rsp+60h] [rbp-98h] BYREF
  __int64 *v63; // [rsp+70h] [rbp-88h]
  int v64; // [rsp+78h] [rbp-80h]
  unsigned int v65; // [rsp+7Ch] [rbp-7Ch]
  int v66; // [rsp+80h] [rbp-78h]
  int v67; // [rsp+84h] [rbp-74h]
  __int64 v68; // [rsp+88h] [rbp-70h]
  PSLIST_HEADER ListHead; // [rsp+90h] [rbp-68h]
  __int64 v70; // [rsp+98h] [rbp-60h]
  unsigned __int64 v71; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v72; // [rsp+A8h] [rbp-50h]
  int v73; // [rsp+100h] [rbp+8h]
  int v74; // [rsp+108h] [rbp+10h]
  unsigned int v75; // [rsp+110h] [rbp+18h]
  int v76; // [rsp+118h] [rbp+20h]

  v76 = a4;
  v4 = 0LL;
  v67 = 0;
  v6 = &MiZeroThenZero;
  v68 = 0LL;
  v7 = a3;
  v8 = (a2 >> 15) & 1;
  if ( (a3 & 0x10) == 0 )
    v6 = &MiFreeThenFree;
  v57 = v6;
  v63 = v6;
  v9 = *(_QWORD *)(a1 + 16) + 56320LL * ((a2 >> 9) & 0x3F);
  v10 = v9 + ((unsigned __int64)(HIWORD(a2) & 3) << 10);
  v56 = v9;
  v11 = (a3 & 0x10) == 0;
  if ( (unsigned __int8)byte_140E2D898 > 1u )
    v12 = (PSLIST_ENTRY *)(v9 + 8 * (v11 + 2 * ((BYTE1(a2) & 1) + 879LL)));
  else
    v12 = (PSLIST_ENTRY *)(v10 + 8 * (v11 + 1));
  result = *v12;
  if ( !result )
    return result;
  v64 = a4;
  v14 = *(int *)v6;
  v15 = 0LL;
  if ( (unsigned __int8)byte_140E2D898 > 1u )
    v15 = (a2 >> 8) & 1;
  v62[0] = v9;
  v66 = a3;
  v65 = a2;
  v16 = 0LL;
  v62[1] = *(_QWORD *)(v9
                     + 8
                     * (((unsigned __int64)(HIWORD(a2) & 3) << 7) + ((a2 >> 18) & 3) + 3 * (v15 + 2 * (v14 + 2 * v8)))
                     + 800);
  v17 = dword_140E2D900[((unsigned __int64)a2 >> 16) & 3];
  v58 = v17;
  v75 = v17;
  v72 = v10 + 16 * (v14 + 8 + 2 * (3LL * (unsigned int)v8 + (((unsigned __int64)a2 >> 18) & 3)));
  Cache = MiColorGetCache(a2);
  v59 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v73 = v7 & 0x40;
  if ( (v7 & 0x40) != 0 )
  {
    v49 = MiColorGetCache(v18);
    v23 = 0LL;
    v50 = v49 & 0xF;
    do
    {
      v51 = v50;
      v50 += 16;
      v23 |= 1LL << (v51 & 0x3F);
    }
    while ( v50 < 0x40 && v50 < v17 );
    v59 = v23;
  }
  v24 = a2;
LABEL_10:
  while ( 2 )
  {
    while ( 2 )
    {
      v25 = (_QWORD *)(*(_QWORD *)(v20 + 8) + 8 * ((unsigned __int64)Cache >> 6));
      if ( (_QWORD *)v16 != v25 )
      {
        v16 = *(_QWORD *)(v20 + 8) + 8 * ((unsigned __int64)Cache >> 6);
        v22 = ~((1LL << Cache) - 1) & *v25;
        if ( v73 )
          v22 &= ~v23;
        if ( ((v19 ^ (unsigned __int64)Cache) & 0xFFFFFFFFFFFFFFC0uLL) == 0 )
          v22 &= (1LL << v19) - 1;
      }
      v26 = Cache & 0xFFFFFFC0;
      if ( v22 )
      {
        _BitScanForward64(&v30, v22);
        Cache = v30 + v26;
        v24 ^= (unsigned __int8)(v24 ^ Cache);
        v22 &= ~(1LL << v30);
        v65 = v24;
        if ( v76 || (v24 & 0x30000) != 0x30000 || (v24 & 0xC0000) != 0x40000 )
        {
LABEL_43:
          PerfectColorHeadPage = MiGetPerfectColorHeadPage(v62);
          v7 = v66;
          v36 = (PSLIST_ENTRY)PerfectColorHeadPage;
          v76 = v64;
          v57 = v63;
          v56 = v62[0];
          goto LABEL_44;
        }
        v74 = *(_DWORD *)v6;
        v31 = MiColorGetCache(v24);
        v33 = v56;
        v34 = v31;
        v54 = v31;
        while ( 1 )
        {
          v60 = (const signed __int64 **)(v33 + 16LL * v32 + 13768);
          if ( !_bittest64(*v60, v34) )
            goto LABEL_42;
          ListHead = (PSLIST_HEADER)(16 * v34 + *(_QWORD *)(v33 + 8LL * v32 + 13856));
          v36 = RtlpInterlockedPopEntrySList(ListHead);
          if ( v36 )
            goto LABEL_26;
          if ( v7 & 1 | ((v7 & 2) != 0) )
          {
            v55 = 17;
          }
          else
          {
            CurrentIrql = KeGetCurrentIrql();
            v55 = CurrentIrql;
            if ( CurrentIrql != 2 )
              __writecr8(2uLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v35) = 2;
              KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v35);
            }
          }
          LOBYTE(v39) = 1;
          v40 = v54 & 0x1F;
          v61 = v40;
          v70 = 4 * (v54 >> 5);
          v41 = (volatile signed __int32 *)((char *)*v60 + v70);
          v71 = v40 + 1;
          if ( v40 + 1 > 0x20 )
          {
            if ( (v54 & 0x1F) != 0 )
            {
              _InterlockedAnd(v41, ~(((1 << (32 - (v54 & 0x1F))) - 1) << v40));
              v39 = 1LL - (32 - (unsigned int)(v54 & 0x1F));
              ++v41;
              if ( v39 >= 0x20 )
              {
                v52 = v39 >> 5;
                v39 += -32LL * (v39 >> 5);
                do
                {
                  *v41++ = 0;
                  --v52;
                }
                while ( v52 );
              }
              if ( !v39 )
                goto LABEL_36;
            }
            v42 = -1 << v39;
          }
          else
          {
            v42 = ~(1 << v40);
          }
          _InterlockedAnd(v41, v42);
LABEL_36:
          v36 = RtlpInterlockedPopEntrySList(ListHead);
          if ( v36 )
          {
            LOBYTE(v45) = 1;
            v46 = (volatile signed __int32 *)((char *)*v60 + v70);
            if ( v71 <= 0x20 )
            {
              v47 = 1 << v61;
              goto LABEL_62;
            }
            if ( !v61 )
              goto LABEL_73;
            _InterlockedOr(v46++, ((1 << (32 - (v54 & 0x1F))) - 1) << (v54 & 0x1F));
            v45 = 1LL - (32 - (unsigned int)(v54 & 0x1F));
            if ( v45 >= 0x20 )
            {
              v53 = v45 >> 5;
              v45 += -32LL * (v45 >> 5);
              do
              {
                *v46++ = -1;
                --v53;
              }
              while ( v53 );
            }
            if ( v45 )
            {
LABEL_73:
              v47 = (1 << v45) - 1;
LABEL_62:
              _InterlockedOr(v46, v47);
            }
            v48 = v55;
            if ( v55 != 17 )
            {
              if ( KiIrqlFlags )
              {
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v55);
                v48 = v55;
              }
              __writecr8(v48);
            }
LABEL_26:
            v36[1].Next = *(_SLIST_ENTRY **)&CLFS_LSN_NULL_EXT;
            if ( v74 )
            {
              Next = v36[1].Next;
              if ( Next )
                DemandZeroPte = (unsigned __int64)Next & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
              else
                DemandZeroPte = MiMakeDemandZeroPte(4LL);
              v36[1].Next = (_SLIST_ENTRY *)DemandZeroPte;
LABEL_30:
              v36->Next = 0LL;
            }
            else
            {
              if ( (MiFlags & 0x80u) == 0LL )
                goto LABEL_30;
              if ( (++*(_DWORD *)&stru_140E2ED08.SavedApcStateFill[40] & MmPageValidationFrequency) != 0 )
                goto LABEL_30;
              MiArePageContentsZero((__int64)&v36[0x22000000000LL] / 48);
              v36->Next = 0LL;
            }
LABEL_44:
            if ( v36 )
              return v36;
            v19 = v75;
            v6 = v57;
            v20 = v72;
            v23 = v59;
            goto LABEL_10;
          }
          if ( v55 != 17 )
          {
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v55);
            __writecr8(v55);
          }
          v33 = v56;
          v6 = v57;
          v34 = v54;
          v32 = v74;
LABEL_42:
          if ( v32 == *((_DWORD *)v6 + 1) )
            goto LABEL_43;
          v32 = *((_DWORD *)v6 + 1);
          v74 = v32;
        }
      }
      Cache = v26 + 64;
      if ( Cache < v19 )
        continue;
      break;
    }
    v16 = 0LL;
    if ( (unsigned int)MiColorGetCache(a2) && v28 == v58 )
    {
      v29 = MiColorGetCache(v27);
      v23 = v59;
      v19 = v29;
      v75 = v29;
      Cache = 0;
      continue;
    }
    return (PSLIST_ENTRY)v4;
  }
}
