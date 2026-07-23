/*
 * XREFs of MiMapParametersInitialize @ 0x1409EE0D0
 * Callers:
 *     MiMapViewOfSectionExCommon @ 0x1409EDD40 (MiMapViewOfSectionExCommon.c)
 * Callees:
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 */

__int64 __fastcall MiMapParametersInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        int a9)
{
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r10
  unsigned __int64 v14; // r11
  unsigned int v15; // ecx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r8
  unsigned __int64 v19; // rax

  v11 = MiSectionControlArea(a2);
  *(_OWORD *)v13 = 0LL;
  v14 = v11;
  *(_OWORD *)(v13 + 16) = 0LL;
  *(_OWORD *)(v13 + 32) = 0LL;
  *(_OWORD *)(v13 + 48) = 0LL;
  *(_OWORD *)(v13 + 64) = 0LL;
  *(_OWORD *)(v13 + 80) = 0LL;
  *(_OWORD *)(v13 + 96) = 0LL;
  *(_OWORD *)(v13 + 112) = 0LL;
  *(_QWORD *)(v13 + 96) = KeGetCurrentThread()->ApcState.Process;
  *(_QWORD *)(v13 + 88) = v12;
  LODWORD(v11) = (unsigned __int16)KeNumberNodes;
  *(_BYTE *)(v13 + 53) = KeGetCurrentThread()->PreviousMode;
  v15 = a6 & 0x7F;
  *(_DWORD *)(v13 + 48) = v15;
  if ( v15 > (unsigned int)v11 )
    return 3221225485LL;
  *(_DWORD *)(v13 + 60) = a9;
  *(_DWORD *)(v13 + 40) = a6 & 0xFFFFFF80;
  *(_DWORD *)(v13 + 44) = a7;
  if ( a4 )
    *(_DWORD *)(v13 + 56) |= 1u;
  *(_QWORD *)(v13 + 24) = a5;
  if ( (*(_DWORD *)(v14 + 56) & 0x20) == 0 && (*(_DWORD *)(v13 + 56) & 1) != 0 )
  {
    v16 = 0x7FFFFFFEFFFFLL;
    if ( (a9 & 8) == 0 )
    {
      v19 = *(_QWORD *)(v12 + 872) - 1LL;
      if ( v19 >= 0x7FFFFFFEFFFFLL )
        v19 = 0x7FFFFFFEFFFFLL;
      v16 = v19;
    }
  }
  else
  {
    v16 = 0x7FFFFFFEFFFFLL;
    if ( (a9 & 8) == 0 )
    {
      v17 = 0x7FFFFFFEFFFFLL;
      if ( a8 )
      {
        v17 = 0xFFFFFFFFFFFFFFFFuLL >> a8;
        if ( 0xFFFFFFFFFFFFFFFFuLL >> a8 > 0x7FFFFFFEFFFFLL )
          v17 = 0x7FFFFFFEFFFFLL;
      }
      v16 = *(_QWORD *)(a3 + 872) - 1LL;
      if ( v17 <= v16 )
        v16 = v17;
    }
  }
  *(_QWORD *)(v13 + 8) = v16;
  *(_QWORD *)(v13 + 16) = 0x10000LL;
  if ( (*(_DWORD *)(v14 + 56) & 0x420) == 0 )
  {
    if ( (a6 & 0x20000000) != 0 )
    {
      *(_QWORD *)(v13 + 16) = 0x200000LL;
    }
    else if ( (a6 & 0x40000000) != 0 )
    {
      *(_QWORD *)(v13 + 16) = 4096LL;
    }
  }
  return 0LL;
}
