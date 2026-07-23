/*
 * XREFs of HalpBuddyAllocatorReserveLogicalAddress @ 0x1405AE350
 * Callers:
 *     <none>
 * Callees:
 *     HalpBuddyAllocatorSplitNode @ 0x140359CA0 (HalpBuddyAllocatorSplitNode.c)
 *     HalpBuddyAllocatorBltAdd @ 0x14035AD20 (HalpBuddyAllocatorBltAdd.c)
 *     HalpBuddyAllocatorBltRemove @ 0x1405AE120 (HalpBuddyAllocatorBltRemove.c)
 */

__int64 __fastcall HalpBuddyAllocatorReserveLogicalAddress(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  unsigned __int64 v5; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  bool v17; // zf
  _QWORD *v18; // rcx
  __int64 v19; // rax

  v3 = *(_QWORD *)(a1 + 88);
  v4 = 0;
  v5 = a2 + (a3 << 12);
  v8 = *(_QWORD *)(v3 + 48) + *(_QWORD *)(v3 + 56);
  if ( !*(_BYTE *)(a1 + 120) )
    return (unsigned int)-1073741823;
  if ( (a2 & 0xFFF) != 0 )
    return (unsigned int)-1073741584;
  if ( v5 == a2 )
    return (unsigned int)-1073741583;
  if ( a2 >= v8 )
    return v4;
  if ( v5 > v8 )
    v5 = *(_QWORD *)(v3 + 48) + *(_QWORD *)(v3 + 56);
  while ( 1 )
  {
    v9 = *(_QWORD *)(v3 + 48);
    if ( v9 == a2 && *(_QWORD *)(v3 + 56) + v9 == v5 )
    {
LABEL_21:
      v12 = (_QWORD *)(v3 + 16);
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
LABEL_22:
              if ( v3 == *v12 )
                return v4;
              v13 = *(_QWORD *)(v3 + 24);
              if ( !v13 || a2 >= *(_QWORD *)(v13 + 48) + *(_QWORD *)(v13 + 56) )
                break;
              v3 = *(_QWORD *)(v3 + 24);
            }
            v14 = *(_QWORD *)(v3 + 32);
            if ( !v14 || v5 <= *(_QWORD *)(v14 + 48) )
              break;
            v3 = *(_QWORD *)(v3 + 32);
          }
          v15 = *(_QWORD *)(v3 + 48);
          if ( a2 <= v15 || a2 >= v15 + *(_QWORD *)(v3 + 56) )
          {
            v16 = *(_QWORD *)(v3 + 56);
            if ( v5 >= v16 + v15 || v5 <= v15 )
              break;
          }
          if ( *(_BYTE *)(v3 + 72) )
          {
            v17 = *(_QWORD *)(v3 + 40) == a1 + 80;
            goto LABEL_42;
          }
          HalpBuddyAllocatorBltRemove((_QWORD *)v3, a1);
          v4 = HalpBuddyAllocatorSplitNode(a1, v3);
          if ( (v4 & 0x80000000) != 0 )
            return v4;
          HalpBuddyAllocatorBltAdd(*(__int64 **)(v3 + 32), a1);
          HalpBuddyAllocatorBltAdd(*(__int64 **)(v3 + 24), a1);
          v3 = *(_QWORD *)(v3 + 24);
        }
        if ( a2 <= v15 && v5 >= v16 + v15 )
        {
          v18 = (_QWORD *)(a1 + 80);
          if ( !*(_BYTE *)(v3 + 72) )
          {
            *(_QWORD *)(v3 + 40) = v18;
            *(_BYTE *)(v3 + 72) = 1;
            *(_QWORD *)(v3 + 64) = v16;
            ++*v18;
            *(_QWORD *)(a1 + 72) += v16;
            HalpBuddyAllocatorBltRemove((_QWORD *)v3, a1);
            goto LABEL_43;
          }
          v17 = *(_QWORD *)(v3 + 40) == (_QWORD)v18;
LABEL_42:
          if ( v17 )
            goto LABEL_43;
          return (unsigned int)-1073741823;
        }
LABEL_43:
        while ( v3 != *v12 )
        {
          v19 = *(_QWORD *)(v3 + 16);
          if ( v19 && *(_QWORD *)(v19 + 24) == v3 )
          {
            v3 = *(_QWORD *)(v19 + 32);
            goto LABEL_22;
          }
          v3 = *(_QWORD *)(v3 + 16);
        }
      }
    }
    if ( !*(_QWORD *)(v3 + 24) )
      break;
LABEL_15:
    v10 = *(_QWORD *)(v3 + 24);
    if ( v5 > *(_QWORD *)(v10 + 48) + *(_QWORD *)(v10 + 56) )
    {
      v10 = *(_QWORD *)(v3 + 32);
      if ( a2 < *(_QWORD *)(v10 + 48) )
        goto LABEL_21;
    }
    v3 = v10;
  }
  if ( !*(_BYTE *)(v3 + 72) )
  {
    HalpBuddyAllocatorBltRemove((_QWORD *)v3, a1);
    v4 = HalpBuddyAllocatorSplitNode(a1, v3);
    if ( (v4 & 0x80000000) != 0 )
      return v4;
    HalpBuddyAllocatorBltAdd(*(__int64 **)(v3 + 32), a1);
    HalpBuddyAllocatorBltAdd(*(__int64 **)(v3 + 24), a1);
    goto LABEL_15;
  }
  if ( *(_QWORD *)(v3 + 40) != a1 + 80 )
    return (unsigned int)-1073741823;
  return v4;
}
