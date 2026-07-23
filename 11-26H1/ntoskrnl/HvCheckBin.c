/*
 * XREFs of HvCheckBin @ 0x140A5D8F0
 * Callers:
 *     HvCheckHive @ 0x140A5D6B0 (HvCheckHive.c)
 * Callees:
 *     RtlSetBits @ 0x14035AAB0 (RtlSetBits.c)
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     HvMoveLayoutStats @ 0x140A5DBE0 (HvMoveLayoutStats.c)
 *     HvAddToLayoutStats @ 0x140A5DBFC (HvAddToLayoutStats.c)
 */

__int64 __fastcall HvCheckBin(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        _DWORD *a4,
        PRTL_BITMAP BitMapHeader,
        __int64 a6,
        __int64 a7)
{
  unsigned int v7; // r12d
  unsigned int v9; // r9d
  unsigned int v10; // r14d
  int v11; // r15d
  int *v12; // rbx
  __int16 v13; // r10
  __int64 v14; // rcx
  int *v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rax
  int *v18; // rdi
  char v19; // al
  unsigned int v21; // [rsp+80h] [rbp+18h]

  v7 = 0;
  v21 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( a7 )
    *(_QWORD *)(a7 + 328) = a2;
  v12 = a2 + 8;
  v13 = 27502;
  while ( 1 )
  {
    v14 = (unsigned int)a2[2];
    v15 = (_DWORD *)((char *)a2 + v14);
    if ( v12 >= (_DWORD *)((char *)a2 + v14) )
      break;
    v16 = *v12;
    if ( (int)v16 >= 0 )
    {
      if ( (unsigned int)v16 > (unsigned int)v14 || (int *)((char *)v12 + v16) > v15 || !(_DWORD)v16 )
      {
        v7 = -1073741492;
        if ( !a7 )
          return v7;
        SetFailureLocation(a7, 0, 17, -1073741492, 64);
LABEL_45:
        *(_QWORD *)(a7 + 336) = v12;
        return v7;
      }
      v9 += v16;
      v21 = v9;
      if ( v9 > (unsigned int)v14 )
      {
        v7 = -1073741492;
        if ( !a7 )
          return v7;
        SetFailureLocation(a7, 0, 17, -1073741492, 80);
        goto LABEL_45;
      }
      if ( a6 )
      {
        HvAddToLayoutStats(a6);
        ((void (*)(void))HvMoveLayoutStats)();
      }
      v12 = (int *)((char *)v12 + *v12);
    }
    else
    {
      v17 = (unsigned int)-(int)v16;
      if ( (unsigned int)v17 > (unsigned int)v14 || (v18 = (int *)((char *)v12 + v17), (int *)((char *)v12 + v17) > v15) )
      {
        v7 = -1073741492;
        if ( !a7 )
          return v7;
        SetFailureLocation(a7, 0, 17, -1073741492, 32);
        goto LABEL_45;
      }
      v10 -= v16;
      v11 += -4 - v16;
      if ( v10 > (unsigned int)v14 )
      {
        v7 = -1073741492;
        if ( !a7 )
          return v7;
        SetFailureLocation(a7, 0, 17, -1073741492, 48);
        goto LABEL_45;
      }
      if ( a6 && (unsigned int)v17 >= 0x54uLL && *((_WORD *)v12 + 2) == v13 )
      {
        v19 = *((_BYTE *)v12 + 16);
        if ( (v19 & 2) != 0 )
        {
          HvMoveLayoutStats(a6 + 32);
          HvMoveLayoutStats(a6 + 16);
          *(_QWORD *)(a6 + 48) = 0LL;
        }
        else if ( (v19 & 1) != 0 )
        {
          HvAddToLayoutStats(a6 + 32);
          HvMoveLayoutStats(a6 + 16);
          if ( !*(_DWORD *)(a6 + 48) )
            *(_DWORD *)(a6 + 48) = a2[1];
          *(_DWORD *)(a6 + 52) = 0;
        }
        else
        {
          HvAddToLayoutStats(a6 + 16);
          if ( !*(_DWORD *)(a6 + 52) )
            *(_DWORD *)(a6 + 52) = a2[1];
        }
      }
      if ( BitMapHeader )
      {
        RtlSetBits(BitMapHeader, (unsigned int)((_DWORD)v12 + a2[1] - (_DWORD)a2) >> 3, 1u);
        v13 = 27502;
      }
      v9 = v21;
      v12 = v18;
    }
  }
  if ( v10 + v9 + 32LL == v14 )
  {
    if ( v12 == v15 )
    {
      if ( a4 )
        *a4 += v11;
    }
    else
    {
      v7 = -1073741492;
      SetFailureLocation(a7, 0, 17, -1073741492, 112);
    }
  }
  else
  {
    v7 = -1073741492;
    SetFailureLocation(a7, 0, 17, -1073741492, 96);
  }
  return v7;
}
