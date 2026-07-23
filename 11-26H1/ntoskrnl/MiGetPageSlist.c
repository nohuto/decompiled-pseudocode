/*
 * XREFs of MiGetPageSlist @ 0x14028A870
 * Callers:
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiColorGetCache @ 0x140288F60 (MiColorGetCache.c)
 *     MiArePageContentsZero @ 0x140522A28 (MiArePageContentsZero.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall MiGetPageSlist(__int64 a1, unsigned int a2, char a3)
{
  __int64 v5; // rdx
  __int64 *v6; // rax
  int v7; // r12d
  __int64 v8; // r15
  unsigned int v9; // r13d
  unsigned int Cache; // eax
  unsigned int v11; // ecx
  _QWORD *v12; // r10
  unsigned int v13; // r11d
  int v14; // r9d
  unsigned int v15; // r14d
  unsigned __int64 v16; // rbp
  __int64 v17; // rdi
  __int64 v18; // r13
  unsigned int v19; // edi
  _QWORD *v20; // r13
  _QWORD *v21; // r8
  unsigned int v22; // r14d
  unsigned int v23; // ecx
  int v24; // r11d
  unsigned int v25; // eax
  unsigned __int64 v26; // rcx
  int v27; // r10d
  __int64 v28; // rdx
  __int64 v29; // rdx
  PSLIST_ENTRY v30; // r12
  _SLIST_ENTRY *Next; // rcx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rax
  unsigned __int64 v35; // r10
  __int64 v36; // r9
  volatile signed __int32 *v37; // r8
  unsigned int v38; // eax
  unsigned __int8 CurrentIrql; // r8
  unsigned __int64 v40; // rcx
  volatile signed __int32 *v41; // r9
  unsigned int v42; // eax
  unsigned int v43; // ecx
  char v44; // al
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rdx
  int v47; // [rsp+20h] [rbp-A8h]
  unsigned int v48; // [rsp+24h] [rbp-A4h]
  __int64 v49; // [rsp+28h] [rbp-A0h]
  __int64 v50; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v51; // [rsp+30h] [rbp-98h]
  unsigned int v52; // [rsp+38h] [rbp-90h]
  unsigned __int64 v53; // [rsp+40h] [rbp-88h]
  unsigned __int8 v54; // [rsp+48h] [rbp-80h]
  __int64 v55; // [rsp+50h] [rbp-78h]
  __int64 *v56; // [rsp+58h] [rbp-70h]
  __int64 v57; // [rsp+60h] [rbp-68h]
  _SLIST_HEADER *ListHead; // [rsp+68h] [rbp-60h]
  __int64 v59; // [rsp+78h] [rbp-50h]
  unsigned __int64 v60; // [rsp+80h] [rbp-48h]

  v5 = *(_QWORD *)(a1 + 13896);
  if ( (*(_DWORD *)(v5 + 4) & 0x10) != 0 )
    return 0LL;
  v6 = &MiZeroThenZero;
  v7 = a3 & 0x10;
  if ( (a3 & 0x10) == 0 )
    v6 = &MiFreeThenFree;
  v56 = v6;
  v8 = 0LL;
  v53 = 0LL;
  v49 = *(_QWORD *)(v5 + 16);
  v9 = dword_140E2D900[HIWORD(a2) & 3];
  v52 = v9;
  v48 = v9;
  Cache = MiColorGetCache(a2);
  v55 = 0LL;
  v14 = a3 & 0x40;
  v15 = Cache;
  v16 = 0LL;
  v17 = 0LL;
  if ( (a3 & 0x40) != 0 )
  {
    v43 = MiColorGetCache(v11) & 0xF;
    do
    {
      v44 = v43;
      v43 += 16;
      v17 |= 1LL << (v44 & 0x3F);
    }
    while ( v43 < 0x40 && v43 < v9 );
    v14 = a3 & 0x40;
    v55 = v17;
  }
  v18 = 13768LL;
  v19 = a2;
  if ( !v7 )
    v18 = 13784LL;
  v20 = (_QWORD *)(v49 + 56320LL * ((a2 >> 9) & 0x3F) + v18);
  while ( 1 )
  {
LABEL_8:
    v21 = (_QWORD *)(*v20 + 8 * ((unsigned __int64)v15 >> 6));
    if ( v12 != v21 )
    {
      v53 = *v20 + 8 * ((unsigned __int64)v15 >> 6);
      v12 = (_QWORD *)v53;
      v16 = ~((1LL << v15) - 1) & *v21;
      if ( v14 )
        v16 &= ~v55;
      if ( ((v15 ^ (unsigned __int64)v13) & 0xFFFFFFFFFFFFFFC0uLL) == 0 )
        v16 &= (1LL << v13) - 1;
    }
    v22 = v15 & 0xFFFFFFC0;
    if ( v16 )
      break;
    v15 = v22 + 64;
    if ( v15 >= v13 )
    {
      v53 = 0LL;
      if ( !(unsigned int)MiColorGetCache(a2) || v24 != v52 )
        return (PSLIST_ENTRY)v8;
      v25 = MiColorGetCache(v23);
      v14 = a3 & 0x40;
      v13 = v25;
      v48 = v25;
      v15 = 0;
    }
  }
  _BitScanForward64(&v26, v16);
  v15 = v26 + v22;
  v47 = *(_DWORD *)v56;
  v19 ^= (unsigned __int8)(v19 ^ v15);
  v16 &= ~(1LL << v26);
  v51 = (unsigned int)MiColorGetCache(v19);
  v28 = 16 * v51;
  while ( 1 )
  {
    ListHead = (_SLIST_HEADER *)(v28 + *(_QWORD *)(a1 + 8LL * v27 + 13856));
    v57 = a1 + 16 * (v27 + 860LL);
    v30 = RtlpInterlockedPopEntrySList(ListHead);
    if ( v30 )
      break;
    if ( a3 & 1 | ((a3 & 2) != 0) )
    {
      v54 = 17;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      v54 = CurrentIrql;
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v29) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v29);
      }
    }
    LOBYTE(v35) = 1;
    v36 = v51 & 0x1F;
    v50 = v36;
    v59 = 4 * (v51 >> 5);
    v37 = (volatile signed __int32 *)(v59 + *(_QWORD *)(v57 + 8));
    v60 = v36 + 1;
    if ( (unsigned __int64)(v36 + 1) <= 0x20 )
    {
      v38 = ~(1 << v36);
LABEL_36:
      _InterlockedAnd(v37, v38);
      goto LABEL_37;
    }
    if ( (v51 & 0x1F) == 0 )
      goto LABEL_51;
    _InterlockedAnd(v37, ~(((1 << (32 - (v51 & 0x1F))) - 1) << v36));
    v35 = 1LL - (32 - (unsigned int)(v51 & 0x1F));
    ++v37;
    if ( v35 >= 0x20 )
    {
      v45 = v35 >> 5;
      v35 += -32LL * (v35 >> 5);
      do
      {
        *v37++ = 0;
        --v45;
      }
      while ( v45 );
    }
    if ( v35 )
    {
LABEL_51:
      v38 = -1 << v35;
      goto LABEL_36;
    }
LABEL_37:
    v30 = RtlpInterlockedPopEntrySList(ListHead);
    if ( v30 )
    {
      LOBYTE(v40) = 1;
      v41 = (volatile signed __int32 *)(*(_QWORD *)(v57 + 8) + v59);
      if ( v60 <= 0x20 )
      {
        v42 = 1 << v50;
        goto LABEL_55;
      }
      if ( !v50 )
        goto LABEL_65;
      _InterlockedOr(v41++, ((1 << (32 - (v51 & 0x1F))) - 1) << (v51 & 0x1F));
      v40 = 1LL - (32 - (unsigned int)(v51 & 0x1F));
      if ( v40 >= 0x20 )
      {
        v46 = v40 >> 5;
        v40 += -32LL * (v40 >> 5);
        do
        {
          *v41++ = -1;
          --v46;
        }
        while ( v46 );
      }
      if ( v40 )
      {
LABEL_65:
        v42 = (1 << v40) - 1;
LABEL_55:
        _InterlockedOr(v41, v42);
      }
      if ( v54 != 17 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v54);
        __writecr8(v54);
      }
      break;
    }
    if ( v54 != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v54);
      __writecr8(v54);
    }
    v27 = *((_DWORD *)v56 + 1);
    if ( v47 == v27 )
    {
      v12 = (_QWORD *)v53;
      v13 = v48;
      v14 = a3 & 0x40;
      goto LABEL_8;
    }
    v28 = 16 * v51;
    v47 = *((_DWORD *)v56 + 1);
  }
  v30[1].Next = *(_SLIST_ENTRY **)&CLFS_LSN_NULL_EXT;
  if ( v47 )
  {
    Next = v30[1].Next;
    if ( Next )
    {
      v32 = (unsigned __int64)Next & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    }
    else
    {
      v32 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
      if ( qword_140E2D8C0 )
      {
        v33 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC0FuLL | 0x90;
        if ( (qword_140E2D8C0 & v32) == 0 )
          v33 = qword_140E2D8C0 | *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC9FuLL | 0x80;
        v32 = v33;
      }
    }
    v30[1].Next = (_SLIST_ENTRY *)v32;
  }
  else if ( (MiFlags & 0x80u) != 0LL
         && (++*(_DWORD *)&stru_140E2ED08.SavedApcStateFill[40] & MmPageValidationFrequency) == 0 )
  {
    MiArePageContentsZero((__int64)&v30[0x22000000000LL] / 48);
  }
  v30->Next = 0LL;
  return v30;
}
