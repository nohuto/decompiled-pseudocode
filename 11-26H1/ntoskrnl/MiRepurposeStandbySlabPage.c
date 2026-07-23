/*
 * XREFs of MiRepurposeStandbySlabPage @ 0x1402AB348
 * Callers:
 *     MiGetPageFromSlabAllocator @ 0x14033C53C (MiGetPageFromSlabAllocator.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiLockLowestPrioritySecondaryStandbyPage @ 0x1402AB6D8 (MiLockLowestPrioritySecondaryStandbyPage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiReInitializeFreeSlabPfn @ 0x14036BA38 (MiReInitializeFreeSlabPfn.c)
 *     MiDiscardTransitionPfnEx @ 0x14036BD80 (MiDiscardTransitionPfnEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiRepurposeStandbySlabPage(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned __int8 v3; // bp
  __int64 v4; // r8
  unsigned int v5; // edi
  unsigned __int8 v6; // r13
  __int64 v7; // r15
  unsigned __int8 CurrentIrql; // si
  unsigned int v10; // eax
  bool v11; // al
  __int64 v12; // rcx
  __int64 v13; // r14
  ULONG_PTR v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // r8
  unsigned int v18; // r9d
  unsigned int *v19; // r10
  unsigned int *i; // rax
  bool v21; // zf
  unsigned int v22; // r9d
  volatile signed __int32 *v23; // r8
  int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // r9d
  volatile signed __int32 *v27; // r8
  unsigned int v28; // eax
  unsigned __int64 v29; // rax
  int v30; // eax
  unsigned __int64 v31; // rax
  __int64 v32; // [rsp+60h] [rbp+8h] BYREF
  char v33; // [rsp+68h] [rbp+10h]
  __int64 v34; // [rsp+70h] [rbp+18h]

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 56320LL * *(unsigned int *)(a1 + 132);
  if ( (_BYTE)a2 == 0xFF )
  {
    v5 = *(_DWORD *)(a1 + 128);
    v3 = 0;
    if ( v5 == 8 )
    {
      a1 = *(_QWORD *)(v4 + 56112);
      v5 = 0;
      v6 = 64;
      v33 = 64;
      v7 = a1 + 314096;
      v10 = *(_DWORD *)(a1 + 314096);
      a2 = v10;
      if ( v10 )
      {
        if ( v10 > 1 )
        {
          a1 = *(_QWORD *)(a1 + 314104);
          v17 = v10 - 1;
          v18 = *(_DWORD *)a1;
          v19 = (unsigned int *)(a1 + 4 * ((unsigned __int64)(v10 - 1) >> 5));
          if ( (unsigned int *)a1 == v19 )
          {
            a1 = 32 - v10;
            v21 = ((0xFFFFFFFF >> (32 - v10)) & v18) == 0;
          }
          else
          {
            if ( v18 )
              goto LABEL_4;
            for ( i = (unsigned int *)(a1 + 4); ; ++i )
            {
              a2 = *i;
              if ( i == v19 )
                break;
              if ( (_DWORD)a2 )
                goto LABEL_4;
            }
            v21 = ((0xFFFFFFFF >> ~v17) & (unsigned int)a2) == 0;
          }
          v11 = v21;
        }
        else
        {
          v11 = !_bittest(*(const signed __int32 **)(a1 + 314104), 0);
        }
        if ( v11 )
          return -1LL;
      }
    }
    else
    {
      v6 = 0;
      v7 = v4 + 56088;
      v33 = 0;
    }
  }
  else
  {
    v6 = a2;
    v7 = *(_QWORD *)(v4 + 56112) + 314096LL;
    v33 = a2;
    v5 = (unsigned __int8)a2;
  }
LABEL_4:
  v32 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, a2);
  }
  while ( v3 <= v6 )
  {
    if ( !_bittest64(*(const signed __int64 **)(v7 + 8), v5) )
      goto LABEL_10;
    v12 = *(_QWORD *)(v2 + 24);
    v34 = 704LL * v3 + *(_QWORD *)(v2 + 72);
    v13 = MiLockLowestPrioritySecondaryStandbyPage(v12, v34, &v32, 0LL);
    if ( v13 != -1 )
      goto LABEL_20;
    LOBYTE(v22) = 1;
    v23 = (volatile signed __int32 *)(*(_QWORD *)(v7 + 8) + 4 * ((unsigned __int64)v5 >> 5));
    if ( (unsigned __int64)(v5 & 0x1F) + 1 <= 0x20 )
    {
      v25 = ~(1 << (v5 & 0x1F));
      goto LABEL_38;
    }
    v24 = v5 & 0x1F;
    if ( (v5 & 0x1F) == 0 )
      goto LABEL_37;
    _InterlockedAnd(v23, ~(((1 << (32 - v24)) - 1) << (v5 & 0x1F)));
    v22 = 1 - (32 - v24);
    ++v23;
    if ( v22 >= 0x20 )
    {
      v29 = (unsigned __int64)v22 >> 5;
      do
      {
        *v23 = 0;
        v22 -= 32;
        ++v23;
        --v29;
      }
      while ( v29 );
    }
    if ( v22 )
    {
LABEL_37:
      v25 = -1 << v22;
LABEL_38:
      _InterlockedAnd(v23, v25);
    }
    v13 = MiLockLowestPrioritySecondaryStandbyPage(*(_QWORD *)(v2 + 24), v34, &v32, 0LL);
    if ( v13 != -1 )
    {
      LOBYTE(v26) = 1;
      v27 = (volatile signed __int32 *)(*(_QWORD *)(v7 + 8) + 4 * ((unsigned __int64)v5 >> 5));
      if ( (unsigned __int64)(v5 & 0x1F) + 1 <= 0x20 )
      {
        v28 = 1 << (v5 & 0x1F);
        goto LABEL_49;
      }
      v30 = v5 & 0x1F;
      if ( (v5 & 0x1F) == 0 )
        goto LABEL_48;
      _InterlockedOr(v27, ((1 << (32 - v30)) - 1) << (v5 & 0x1F));
      v26 = 1 - (32 - v30);
      ++v27;
      if ( v26 >= 0x20 )
      {
        v31 = (unsigned __int64)v26 >> 5;
        do
        {
          *v27 = -1;
          v26 -= 32;
          ++v27;
          --v31;
        }
        while ( v31 );
      }
      if ( v26 )
      {
LABEL_48:
        v28 = (1 << v26) - 1;
LABEL_49:
        _InterlockedOr(v27, v28);
      }
LABEL_20:
      v14 = 48 * v13 - 0x220000000000LL;
      MiUnlinkPageFromListEx(v14);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v32 + 32));
      MiDiscardTransitionPfnEx(v14, 2048LL, v15, v16);
      *(_DWORD *)(v14 + 32) = *(_DWORD *)(v14 + 32) & 0xFFF8FFFF | 0x10000;
      MiReInitializeFreeSlabPfn(v14, v2);
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      return v13;
    }
LABEL_10:
    v6 = v33;
    ++v3;
    ++v5;
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return -1LL;
}
