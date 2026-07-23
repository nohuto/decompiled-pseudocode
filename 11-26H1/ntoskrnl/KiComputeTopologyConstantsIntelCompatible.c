/*
 * XREFs of KiComputeTopologyConstantsIntelCompatible @ 0x1405FE85C
 * Callers:
 *     KiComputeTopologyConstants @ 0x1405FE4E8 (KiComputeTopologyConstants.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall KiComputeTopologyConstantsIntelCompatible(int a1, unsigned int a2, __int64 a3, int *a4)
{
  unsigned int v7; // esi
  int v17; // r14d
  unsigned int v18; // r11d
  unsigned int v24; // ecx
  char v25; // r8
  char v26; // r8
  int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  int v30; // ebx
  int v36; // eax
  unsigned int v37; // ecx
  char v38; // r8
  int v39; // ecx
  unsigned int v40; // edx
  unsigned __int64 v41; // rax
  unsigned int v42; // eax
  int i; // r11d
  unsigned int v49; // r8d
  int v50; // eax
  unsigned int v51; // ecx
  __int64 result; // rax
  int j; // r11d
  unsigned int v54; // ecx
  int v59; // ecx
  int v60; // ecx
  __int128 v61; // [rsp+18h] [rbp-28h]
  __int64 v62; // [rsp+28h] [rbp-18h]

  v62 = 0LL;
  v61 = 0LL;
  v7 = 11;
  if ( a2 < 0x1F )
  {
    if ( a2 < 0xB )
    {
      if ( a2 < 4 )
        goto LABEL_23;
      goto LABEL_22;
    }
  }
  else
  {
    _RAX = 31LL;
    __asm { cpuid }
    if ( (_DWORD)_RBX )
    {
      v7 = 31;
      goto LABEL_6;
    }
  }
  _RAX = 11LL;
  __asm { cpuid }
  if ( !(_DWORD)_RBX )
  {
LABEL_22:
    _RAX = 4LL;
    __asm { cpuid }
    _BitScanReverse((unsigned int *)&_RCX, 2 * ((unsigned int)_RAX >> 26) + 1);
    *a4 |= 2u;
    a4[3] = 1 << _RCX;
LABEL_23:
    v36 = *(_DWORD *)(a3 + 12);
    v30 = *a4 | 1;
    *a4 = v30;
    if ( (v36 & 0x10000000) != 0 )
    {
      _BitScanReverse(&v37, 2 * *(unsigned __int8 *)(a3 + 6) - 1);
      a4[2] = (1 << v37) / (unsigned int)a4[3];
    }
    else
    {
      a4[2] = 1;
    }
    goto LABEL_26;
  }
LABEL_6:
  *a4 |= 0x10u;
  v17 = 0;
  v18 = 0;
  a4[6] = _RDX;
  do
  {
    _RAX = v7;
    __asm { cpuid }
    v24 = (unsigned int)_RCX >> 8;
    ++v17;
    v25 = _RAX;
    if ( (_BYTE)v24 )
    {
      switch ( (unsigned __int8)v24 )
      {
        case 1u:
          v18 = 1;
          *a4 |= 1u;
          a4[2] = 1 << (_RAX & 0x1F);
          DWORD1(v61) = 1 << (_RAX & 0x1F);
          break;
        case 2u:
          v18 = 2;
          DWORD2(v61) = 1 << (_RAX & 0x1F);
          break;
        case 3u:
          *a4 |= 8u;
          v28 = v18;
          v18 = 3;
          a4[5] = *((_DWORD *)&v61 + v28);
          HIDWORD(v61) = 1 << (v25 & 0x1F);
          break;
        case 4u:
          v18 = 4;
          LODWORD(v62) = 1 << (_RAX & 0x1F);
          break;
        default:
          v26 = _RAX & 0x1F;
          if ( (unsigned __int8)v24 == 5 )
          {
            v27 = *((_DWORD *)&v61 + v18) / (unsigned int)a4[2];
            *a4 |= 4u;
            v18 = 5;
            a4[4] = v27;
            HIDWORD(v62) = 1 << v26;
          }
          else
          {
            *((_DWORD *)&v61 + v18) = 1 << v26;
          }
          break;
      }
    }
  }
  while ( (_WORD)_RBX );
  v29 = *((_DWORD *)&v61 + v18) / (unsigned int)a4[2];
  *a4 |= 2u;
  v30 = *a4;
  a4[3] = v29;
LABEL_26:
  v38 = v30;
  if ( a1 == 2 && (v30 & 4) == 0 )
  {
    v39 = BYTE1(*(_DWORD *)a3) & 0xF;
    if ( v39 == 15 )
    {
      v40 = (*(_DWORD *)a3 & 0xF0 | (*(_DWORD *)a3 >> 8) & 0xF00u) >> 4;
      if ( (unsigned __int8)(*(_DWORD *)a3 >> 20) != -9 )
        goto LABEL_37;
    }
    else
    {
      if ( v39 != 6 )
        goto LABEL_37;
      v40 = (*(_DWORD *)a3 & 0xF0 | (*(_DWORD *)a3 >> 8) & 0xF00u) >> 4;
    }
    v38 = v30;
    if ( v40 == 173 )
    {
      v41 = __readmsr(0x17u);
      if ( (((((unsigned __int64)HIDWORD(v41) << 32) | (unsigned int)v41) >> 50) & 7) == 1 )
      {
        v42 = a4[3];
        v38 = v30 | 4;
        a4[4] = 64;
        *a4 = v30 | 4;
        if ( v42 < 0x40 )
          a4[4] = v42;
      }
    }
  }
LABEL_37:
  if ( (v38 & 8) == 0 && a1 == 2 && a2 >= 4 )
  {
    for ( i = 0; ; ++i )
    {
      _RAX = 4LL;
      __asm { cpuid }
      v49 = _RAX;
      v50 = (int)((_DWORD)_RAX << 27) >> 27;
      if ( !v50 )
        break;
      if ( v50 == 3 && (v49 & 0xE0) == 0x40 )
      {
        _BitScanReverse(&v51, 2 * ((v49 >> 14) & 0xFFF) + 1);
        *a4 |= 8u;
        a4[5] = 1 << v51;
        break;
      }
    }
  }
  result = (unsigned int)*a4;
  if ( (result & 0x20) == 0 && a2 >= 4 )
  {
    for ( j = 0; ; ++j )
    {
      _RAX = 4LL;
      __asm { cpuid }
      v59 = (int)((_DWORD)result << 27) >> 27;
      if ( !v59 )
        break;
      if ( v59 == 3 && ((unsigned __int8)result & 0xE0u) <= 0x60 )
      {
        _BitScanReverse(&v54, 2 * (((unsigned int)result >> 14) & 0xFFF) + 1);
        *a4 |= 0x20u;
        a4[7] = 1 << v54;
      }
    }
    v60 = *a4;
    if ( (*a4 & 0x20) != 0 )
    {
      result = v60 & 5;
      if ( (_BYTE)result == 5 )
      {
        result = (unsigned int)(a4[2] * a4[4]);
        if ( a4[7] > (unsigned int)result )
          a4[7] = result;
      }
      if ( (v60 & 3) == 3 )
      {
        result = (unsigned int)(a4[2] * a4[3]);
        if ( a4[7] > (unsigned int)result )
          a4[7] = result;
      }
    }
  }
  return result;
}
