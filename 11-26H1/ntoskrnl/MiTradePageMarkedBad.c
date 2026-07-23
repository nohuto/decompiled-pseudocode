/*
 * XREFs of MiTradePageMarkedBad @ 0x14028DD80
 * Callers:
 *     MiTradePage @ 0x140290ED0 (MiTradePage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x14028D4F0 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiIsPageOnBadList @ 0x14028EF30 (MiIsPageOnBadList.c)
 *     MiInvalidPteConforms @ 0x1402D64B0 (MiInvalidPteConforms.c)
 *     MiSnapPageMoveInProgress @ 0x1403D24D0 (MiSnapPageMoveInProgress.c)
 *     MiWaitForPageMoveComplete @ 0x1403D2500 (MiWaitForPageMoveComplete.c)
 *     MiColorHasSlists @ 0x14041CE00 (MiColorHasSlists.c)
 *     MiDrainZeroLookasides @ 0x140457D20 (MiDrainZeroLookasides.c)
 */

__int64 __fastcall MiTradePageMarkedBad(__int64 a1, _QWORD *a2)
{
  ULONG_PTR v2; // rax
  unsigned int v4; // ebx
  __int64 v6; // r8
  __int64 v7; // r14
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // esi
  unsigned int v13; // eax
  __int64 v14; // r8
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r15
  int v18; // ecx
  unsigned int v19; // eax
  _BYTE *v20; // r9
  __int64 v21; // r8
  __int64 v22; // r15
  __int64 v23; // rax
  int v24; // r8d
  __int64 *v25; // r9
  unsigned __int64 v26; // rbx
  _QWORD *v27; // rbx
  _BYTE v28[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)a1;
  v4 = *(_DWORD *)(a1 + 32);
  v6 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 56) = 1;
  v7 = 48 * v2 - 0x220000000000LL;
  result = MiIsPageOnBadList(v7, a2, v6);
  v12 = 0;
  if ( (_DWORD)result )
  {
    _InterlockedIncrement(&dword_140EF9108);
    return result;
  }
  result = *(_QWORD *)(v7 + 8);
  if ( result == -8 )
  {
    _InterlockedIncrement(&dword_140EF910C);
    return result;
  }
  if ( *(_DWORD *)(a1 + 20) == 3 )
  {
    v13 = MI_PAGE_TO_FULL_COLOR(*(_QWORD *)a1);
    v10 = *(_QWORD *)(v7 + 16);
    v4 = v13;
  }
  if ( (unsigned int)MiColorHasSlists(v4, v9, v10, v11) )
  {
    result = MiInvalidPteConforms(v14);
    if ( !(_DWORD)result )
      goto LABEL_25;
    v16 = v15;
    if ( qword_140E2D8C0 && (v15 & 0x10) == 0 )
      v16 = v15 & qword_140E2D8C8;
    result = HIDWORD(v16);
    if ( (_DWORD)result != -2 )
    {
LABEL_25:
      _InterlockedIncrement(&dword_140EF9110);
      return result;
    }
    if ( *(_QWORD *)(a1 + 24) == v7 )
    {
      result = (unsigned __int16)v15 >> 12;
      if ( *(_DWORD *)(a1 + 16) == (_DWORD)result )
      {
        _InterlockedIncrement(&dword_140EF9114);
        return result;
      }
      _InterlockedIncrement(&dword_140EF90D8);
    }
    v17 = *(unsigned __int8 *)(a1 + 8);
    *(_QWORD *)(a1 + 24) = v7;
    *(_DWORD *)(a1 + 16) = (unsigned __int16)v15 >> 12;
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v17 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v17);
      __writecr8(v17);
    }
    *(_BYTE *)(a1 + 8) = 17;
    _InterlockedIncrement(&dword_140EF90D4);
    result = MiDrainZeroLookasides(*a2, v7, a2[2], v4);
    goto LABEL_17;
  }
  result = *(unsigned int *)(a1 + 20);
  if ( (_DWORD)result != 3 )
  {
    v18 = *((_DWORD *)a2 + 6);
    if ( ((v18 & 0x2000000) == 0 || (unsigned int)result > 1) && ((v18 & 0x1000000) == 0 || (_DWORD)result != 2) )
    {
      v19 = MiPageToNode(*(_QWORD *)a1);
      v20 = v28;
      v21 = 0LL;
      v22 = *(_QWORD *)(*a2 + 16LL) + 56320LL * v19;
      do
      {
        v23 = MiSnapPageMoveInProgress(v22, 2 - (unsigned int)((_DWORD)v21 != 0), v21, v20);
        v21 = (unsigned int)(v24 + 1);
        *v25 = v23;
        v20 = v25 + 1;
      }
      while ( (unsigned int)v21 < 2 );
      v26 = *(unsigned __int8 *)(a1 + 8);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (unsigned __int8)v26 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v26);
        __writecr8(v26);
      }
      *(_BYTE *)(a1 + 8) = 17;
      v27 = v28;
      while ( 1 )
      {
        result = *v27 ^ MiWaitForPageMoveComplete(v22, 2 - (unsigned int)(v12 != 0), v21, v20);
        if ( (result & 0xFFFFFFFFFFFF0000uLL) != 0 )
          break;
        ++v12;
        ++v27;
        if ( v12 >= 2 )
        {
          if ( v12 != 2 )
            break;
          result = MiPageSizes[*(unsigned int *)(a1 + 20)];
          a2[5] = result;
          _InterlockedIncrement(&dword_140EF9100);
          return result;
        }
      }
LABEL_17:
      *(_DWORD *)(a1 + 56) = 2;
    }
  }
  return result;
}
