/*
 * XREFs of MiAddPageToHeatRanges @ 0x14048AFA8
 * Callers:
 *     MiGetPerfectColorHeadPage @ 0x140288F90 (MiGetPerfectColorHeadPage.c)
 *     MmSetPfnListInfo @ 0x1402D4250 (MmSetPfnListInfo.c)
 *     MiAddPageToHeatList @ 0x14048AF80 (MiAddPageToHeatList.c)
 *     MiMakeTransitionHeatBatch @ 0x140503EE0 (MiMakeTransitionHeatBatch.c)
 *     MiMarkZeroedPageCold @ 0x1407132E0 (MiMarkZeroedPageCold.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAddPageToHeatRanges(unsigned int *a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  unsigned int v4; // ebx
  unsigned __int64 *v7; // r11
  __int64 v8; // rdx
  unsigned int v9; // ecx
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx

  v3 = a1[1];
  v4 = 0;
  if ( (_DWORD)v3 )
    v7 = (unsigned __int64 *)&a1[2 * (unsigned int)(v3 - 1) + 4];
  else
    v7 = 0LL;
  if ( a3 == 3 )
  {
    if ( v7 )
    {
      v11 = *v7;
      if ( (*v7 & 0xC00) == 0 && (*v7 & 0x3FF) != 0x3FF )
      {
        v12 = (*v7 & 0x3FF) + 1;
        if ( a2 == (v11 >> 12) + v12 )
        {
          *v7 = v12 ^ (v12 ^ v11) & 0xFFFFFFFFFFFFFC00uLL;
          return 0LL;
        }
        if ( a2 == (v11 >> 12) - 1 )
        {
          *v7 = v12 & 0x3FF | (a2 << 12);
          return 0LL;
        }
      }
    }
  }
  v8 = a2 << 12;
  *(_QWORD *)&a1[2 * v3 + 4] = v8;
  if ( a3 != 3 )
  {
    if ( a3 == 2 )
    {
      v13 = v8 | 0xF;
    }
    else if ( a3 == 1 )
    {
      v13 = v8 | 0x400;
    }
    else
    {
      v13 = v8 | 0x800;
    }
    *(_QWORD *)&a1[2 * v3 + 4] = v13;
  }
  v9 = *a1;
  LOBYTE(v4) = ++a1[1] == v9 >> 3;
  return v4;
}
