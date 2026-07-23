/*
 * XREFs of VmpProcessAccessedBatch @ 0x1406C5368
 * Callers:
 *     VmpQueryAccessedState @ 0x14045D8F4 (VmpQueryAccessedState.c)
 * Callees:
 *     HvlGetGpaPagesAccessState @ 0x1402F3708 (HvlGetGpaPagesAccessState.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x1402F3EAC (HvlGetSparseGpaPagesAccessState.c)
 */

void __fastcall VmpProcessAccessedBatch(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        unsigned __int64 *a4,
        __int64 a5,
        int a6,
        int a7)
{
  __int64 v7; // r14
  __int64 v9; // rbp
  _BOOL8 v12; // rdx
  int GpaPagesAccessState; // eax
  __int64 v14; // rcx
  int v15; // r9d
  _BYTE *v16; // rdx
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v7 = *(_QWORD *)(a1 + 120);
  v9 = a5;
  v17 = 0LL;
  while ( 1 )
  {
    if ( v7 == -1 )
    {
      v14 = 0LL;
      v15 = -1073741823;
      v17 = 0LL;
    }
    else
    {
      v12 = a6 != 0;
      if ( a7 )
        GpaPagesAccessState = HvlGetGpaPagesAccessState(v7, v12, a3, *a2, &v17, v9);
      else
        GpaPagesAccessState = HvlGetSparseGpaPagesAccessState(v7, v12, a3, (__int64)a2, &v17, v9);
      v14 = v17;
      v15 = GpaPagesAccessState;
    }
    v16 = (_BYTE *)v9;
    if ( v9 < (unsigned __int64)(v14 + v9) )
    {
      do
      {
        if ( (*v16 & 1) != 0 )
          *a4 |= 1uLL;
        ++v16;
        *a4 = *a4 & 0xFFFFFFFFFFFFFFF9uLL | 4;
        ++a4;
      }
      while ( (unsigned __int64)v16 < v14 + v9 );
    }
    a2 += v14;
    a3 -= v14;
    if ( !a3 )
      break;
    if ( v15 < 0 )
    {
      if ( (*a4 & 4) == 0 )
        *a4 |= 6uLL;
      ++a2;
      ++a4;
      if ( !--a3 )
        break;
    }
  }
}
