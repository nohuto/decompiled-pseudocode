/*
 * XREFs of KiComputeTopologyConstantsAmd @ 0x1405FE5CC
 * Callers:
 *     KiComputeTopologyConstants @ 0x1405FE4E8 (KiComputeTopologyConstants.c)
 * Callees:
 *     <none>
 */

void __fastcall KiComputeTopologyConstantsAmd(unsigned int a1, _DWORD *a2, __int64 a3, int *a4)
{
  unsigned __int8 v11; // r10
  int v13; // r8d
  int v14; // ecx
  unsigned int v15; // r11d
  int v21; // edi
  unsigned int v27; // eax
  unsigned int v28; // eax
  int v36; // esi
  unsigned int v37; // eax
  unsigned int v38; // r11d
  int v39; // edx
  int v40; // r8d
  int i; // edi
  unsigned int v47; // ecx
  int v53; // ecx
  int v54; // eax
  unsigned int v55; // ecx
  unsigned int v56; // edx
  unsigned int v57; // eax
  int v58; // eax

  if ( a1 < 0x80000008 )
    return;
  _RAX = 2147483656LL;
  __asm { cpuid }
  v11 = _RCX;
  v13 = *a4;
  v14 = (unsigned __int16)_RCX >> 12;
  if ( !v14 )
    _BitScanReverse((unsigned int *)&v14, 2 * v11 + 1);
  v15 = 1 << v14;
  *a4 = v13 | 2;
  a4[3] = 1 << v14;
  if ( a1 < 0x80000026 )
  {
    if ( a1 < 0x8000001E )
      return;
LABEL_19:
    if ( (*(_DWORD *)(a3 + 8) & 0x400000) == 0 )
      return;
    _RAX = 2147483678LL;
    __asm { cpuid }
    v36 = _RAX;
    LODWORD(_RBX) = BYTE1(_RBX) + 1;
    v37 = v15 / (unsigned int)_RBX;
    a4[2] = _RBX;
    a4[3] = v15 / (unsigned int)_RBX;
    v38 = v15 / (unsigned int)_RBX;
    *a4 = v13 | 3;
    v39 = (*a2 >> 8) & 0xF;
    if ( v39 == 15 )
      v39 = (unsigned __int8)(*a2 >> 20) + 15;
    if ( v39 == 23 || v39 == 25 )
    {
      a4[4] = 8;
      if ( v38 < 8 )
        a4[4] = v38;
    }
    else
    {
      a4[4] = v37 / ((((unsigned int)_RCX >> 8) & 7) + 1);
    }
    a4[6] = v36;
    v40 = v13 | 0x17;
    _RAX = 2147483649LL;
    __asm { cpuid }
    *a4 = v40;
    if ( (_RCX & 0x400000) != 0 )
    {
      for ( i = 0; ; ++i )
      {
        _RAX = 2147483677LL;
        __asm { cpuid }
        v53 = (int)((_DWORD)_RAX << 27) >> 27;
        if ( !v53 )
          break;
        if ( v53 == 3 && ((unsigned __int8)_RAX & 0xE0u) <= 0x60 )
        {
          _BitScanReverse(&v47, 2 * (((unsigned int)_RAX >> 14) & 0xFFF) + 1);
          *a4 |= 0x20u;
          a4[7] = 1 << v47;
        }
      }
      v40 = *a4;
      if ( (*a4 & 0x20) == 0 )
      {
LABEL_40:
        v58 = a4[2] * a4[4];
        *a4 = v40 | 0x20;
        a4[7] = v58;
        return;
      }
      v54 = a4[2];
      v55 = a4[4] * v54;
      v56 = a4[7];
      if ( v56 > v55 )
      {
        a4[7] = v55;
        v56 = v55;
      }
      v57 = v38 * v54;
      if ( v56 > v57 )
        a4[7] = v57;
    }
    if ( (v40 & 0x20) != 0 )
      return;
    goto LABEL_40;
  }
  _RAX = 2147483686LL;
  __asm { cpuid }
  if ( !(_WORD)_RBX )
    goto LABEL_19;
  v21 = 0;
  _RAX = 2147483686LL;
  __asm { cpuid }
  a4[6] = _RDX;
  *a4 = v13 | 0x12;
  while ( (_WORD)_RBX )
  {
    switch ( BYTE1(_RCX) )
    {
      case 1u:
        *a4 |= 1u;
        a4[2] = 1 << _RAX;
        break;
      case 2u:
        *a4 |= 0x20u;
        a4[7] = 1 << _RAX;
        break;
      case 3u:
        v28 = (1 << _RAX) / (unsigned int)a4[2];
        *a4 |= 4u;
        a4[4] = v28;
        break;
      case 4u:
        v27 = (1 << _RAX) / (unsigned int)a4[2];
        *a4 |= 2u;
        a4[3] = v27;
        break;
    }
    ++v21;
    _RAX = 2147483686LL;
    __asm { cpuid }
  }
}
