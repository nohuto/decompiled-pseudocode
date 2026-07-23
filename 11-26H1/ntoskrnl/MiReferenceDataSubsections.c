/*
 * XREFs of MiReferenceDataSubsections @ 0x14034125C
 * Callers:
 *     MiInsertInSystemSpace @ 0x1404E7024 (MiInsertInSystemSpace.c)
 * Callees:
 *     MiAddViewsForSection @ 0x1402C51E0 (MiAddViewsForSection.c)
 *     MiLocateSubsectionNode @ 0x1402C68F0 (MiLocateSubsectionNode.c)
 *     MiOffsetToProtos @ 0x1403422D4 (MiOffsetToProtos.c)
 *     MiDecrementLargeSubsections @ 0x1404FF5B8 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1406FF0D4 (MiIncrementLargeSubsections.c)
 */

__int64 __fastcall MiReferenceDataSubsections(__int64 a1, __int64 *a2, unsigned __int64 a3, _DWORD *a4)
{
  __int64 v4; // rdx
  int v6; // ebx
  __int64 v9; // rbp
  struct _KLOCK_ENTRIES *v10; // r9
  __int16 v11; // si
  unsigned __int64 v12; // r12
  int v13; // eax
  struct _KLOCK_ENTRIES *v14; // r9
  unsigned int v15; // edi
  int v16; // eax
  int v18; // r8d
  _DWORD *SubsectionNode; // rax
  _QWORD v20[8]; // [rsp+28h] [rbp-40h] BYREF
  int v22; // [rsp+88h] [rbp+20h]

  v4 = *a2;
  v6 = 0;
  *a4 = 3;
  v20[0] = 0LL;
  v22 = 0;
  v9 = MiOffsetToProtos(a1, v4, v20);
  if ( v9 )
  {
    v11 = 70;
    v12 = v20[0] + a3;
    if ( !v20[0] && (a3 & 0x1FF) == 0 )
    {
      if ( *(_QWORD *)(a1 + 64) )
      {
        if ( (*(_DWORD *)(a1 + 56) & 0x30000000) == 0x10000000 )
        {
          v22 = 1;
          if ( a3 == *(_DWORD *)(v9 + 44) && !*(_QWORD *)(v9 + 8) )
            v11 = 326;
        }
      }
    }
    v13 = MiAddViewsForSection((volatile LONG **)v9, v20[0] + a3, v11, v10);
    v15 = v13;
    if ( (v11 & 0x100) != 0 )
    {
      if ( v13 >= 0 )
      {
        v16 = 1;
        goto LABEL_6;
      }
      v15 = MiAddViewsForSection((volatile LONG **)v9, v12, v11 & 0xFEFF, v14);
    }
    if ( (v15 & 0x80000000) != 0 )
      return v15;
    v16 = 0;
LABEL_6:
    if ( v22 )
    {
      if ( v16 )
      {
        LOBYTE(v6) = (*(_DWORD *)(v9 + 48) & 0xC0000000) == 0x40000000;
        *a4 = v6;
      }
      else
      {
        v18 = MiIncrementLargeSubsections(v9, v12);
        if ( v18 != -1 )
        {
          while ( a3 % MiPageSizes[v18] )
          {
            if ( (unsigned int)++v18 > 1 )
            {
              SubsectionNode = MiLocateSubsectionNode(a1, (a3 << 12) + *a2 - 1, 0);
              MiDecrementLargeSubsections(v9, SubsectionNode);
              return v15;
            }
          }
          *a4 = v18;
        }
      }
    }
    return v15;
  }
  return 3221225503LL;
}
