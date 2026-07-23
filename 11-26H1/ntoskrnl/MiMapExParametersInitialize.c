/*
 * XREFs of MiMapExParametersInitialize @ 0x1409EDB10
 * Callers:
 *     MiMapViewOfSectionExCommon @ 0x1409EDD40 (MiMapViewOfSectionExCommon.c)
 * Callees:
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 */

__int64 __fastcall MiMapExParametersInitialize(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned int v6; // ebx
  _QWORD *v7; // r8
  unsigned __int64 v8; // r13
  unsigned __int64 *v9; // rdx
  unsigned __int64 *v10; // r14
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  int v15; // ecx
  __int64 v16; // rcx

  v6 = 0;
  v8 = MiSectionControlArea(a2[4]);
  if ( v7[2] )
    return (unsigned int)-1073741811;
  if ( (*(_DWORD *)(a1 + 40) & 0x4000) != 0 )
  {
    if ( *v7 )
      return (unsigned int)-1073741811;
    v9 = v7 + 1;
    if ( v7[1] )
      return (unsigned int)-1073741811;
    *(_DWORD *)(a1 + 60) |= 0x4000000u;
    *(_DWORD *)(a1 + 56) |= 2u;
    *(_QWORD *)(a1 + 16) = 4096LL;
  }
  else
  {
    v9 = v7 + 1;
  }
  if ( ((*(_QWORD *)(a1 + 16) - 1LL) & *v7) != 0 )
    return (unsigned int)-1073741811;
  if ( *a2 )
  {
    if ( *v7 || *v9 || v7[2] )
      return (unsigned int)-1073741811;
    v10 = v7 + 1;
  }
  else
  {
    v10 = v9;
  }
  v11 = *v9;
  if ( !*v9 )
  {
    if ( (*(_DWORD *)(a1 + 60) & 8) != 0 )
    {
      v13 = 0x7FFFFFFEFFFFLL;
    }
    else
    {
      v12 = *(_QWORD *)(a2[5] + 872LL) - 1LL;
      if ( v12 >= 0x7FFFFFFEFFFFLL )
        v12 = 0x7FFFFFFEFFFFLL;
      v13 = v12;
    }
    *v9 = v13;
    goto LABEL_13;
  }
  if ( !MmIsUserAddress(*v9) || ((*(_DWORD *)v10 + 1) & 0xFFF) != 0 )
    return (unsigned int)-1073741811;
  v13 = 0x7FFFFFFEFFFFLL;
  if ( v11 > 0x7FFFFFFEFFFFLL )
  {
    *v10 = 0x7FFFFFFEFFFFLL;
LABEL_13:
    v11 = v13;
  }
  if ( *(_QWORD *)a3 >= v11 )
    return (unsigned int)-1073741811;
  v14 = a2[1];
  if ( v14 )
  {
    if ( v11 - *(_QWORD *)a3 + 1 < v14 )
      return (unsigned int)-1073741811;
  }
  v15 = *(_DWORD *)(a1 + 40);
  if ( (v15 & 0x7F) != 0
    || *(_DWORD *)(a1 + 48)
    || *(_DWORD *)(a3 + 32) > (unsigned int)(unsigned __int16)KeNumberNodes
    || (v15 & 0x40000000) != 0 && (*(_DWORD *)(v8 + 56) & 0x420) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  if ( (v15 & 0x20000000) != 0 && (*(_DWORD *)(v8 + 56) & 0x20) != 0 && (*(_DWORD *)(a1 + 56) & 1) != 0 )
    return (unsigned int)-1073741811;
  if ( (*(_BYTE *)(a3 + 56) & 0x20) != 0 )
    *(_DWORD *)(a1 + 60) |= 2u;
  if ( (*(_BYTE *)(a3 + 56) & 0x40) != 0 )
    *(_DWORD *)(a1 + 120) |= 8u;
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a3 + 32);
  *(_QWORD *)a1 = *(_QWORD *)a3;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a3 + 8);
  *(_WORD *)(a1 + 54) = *(_WORD *)(a3 + 50);
  v16 = *(_QWORD *)(a3 + 56);
  *(_DWORD *)(a1 + 40) &= ~0x4000u;
  *(_QWORD *)(a1 + 112) = v16;
  return v6;
}
