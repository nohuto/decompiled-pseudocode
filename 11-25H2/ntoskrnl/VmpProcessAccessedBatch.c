/*
 * XREFs of VmpProcessAccessedBatch @ 0x14042C004
 * Callers:
 *     VmpQueryAccessedState @ 0x14042B094 (VmpQueryAccessedState.c)
 * Callees:
 *     HvlGetSparseGpaPagesAccessState @ 0x14026CB84 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlGetGpaPagesAccessState @ 0x14042C0FC (HvlGetGpaPagesAccessState.c)
 */

void __fastcall VmpProcessAccessedBatch(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        unsigned __int64 *a4,
        __int64 a5,
        int a6,
        int a7)
{
  __int64 v8; // r14
  __int64 v10; // rbp
  __int64 v12; // rcx
  int v13; // r9d
  _BYTE *v14; // rdx
  _BOOL8 v15; // rdx
  int GpaPagesAccessState; // eax
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = 0LL;
  v8 = *(_QWORD *)(a1 + 104);
  v10 = a5;
  while ( 1 )
  {
    if ( v8 == -1 )
    {
      v12 = 0LL;
      v13 = -1073741823;
      v17 = 0LL;
    }
    else
    {
      v15 = a6 != 0;
      if ( a7 )
        GpaPagesAccessState = HvlGetGpaPagesAccessState(v8, v15, a3, *a2, (__int64)&v17, v10);
      else
        GpaPagesAccessState = HvlGetSparseGpaPagesAccessState(v8, v15, a3, (__int64)a2, &v17, v10);
      v12 = v17;
      v13 = GpaPagesAccessState;
    }
    v14 = (_BYTE *)v10;
    if ( v10 < (unsigned __int64)(v12 + v10) )
    {
      do
      {
        if ( (*v14 & 1) != 0 )
          *a4 |= 1uLL;
        ++v14;
        *a4 = *a4 & 0xFFFFFFFFFFFFFFF9uLL | 4;
        ++a4;
      }
      while ( (unsigned __int64)v14 < v12 + v10 );
    }
    a2 += v12;
    a3 -= v12;
    if ( !a3 )
      break;
    if ( v13 < 0 )
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
