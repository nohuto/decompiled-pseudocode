/*
 * XREFs of FsepInitializeOverridesViewForGovernedFeatures @ 0x140B2C938
 * Callers:
 *     FseInitializeGovernedFeaturesEffectiveStates @ 0x1408AB1E8 (FseInitializeGovernedFeaturesEffectiveStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FsepInitializeOverridesViewForGovernedFeatures(unsigned int *a1, unsigned int *a2, __int64 a3)
{
  unsigned int v3; // r10d
  char *v4; // r11
  unsigned int v7; // r9d
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // edx
  unsigned int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  __int64 result; // rax

  v3 = 0;
  v4 = (char *)a1 + *((_QWORD *)a1 + 1);
  v7 = 0;
  while ( v3 < *a2 )
  {
    if ( v7 >= (unsigned __int16)*a1 )
      break;
    v8 = *(_DWORD *)&v4[16 * v7];
    if ( a2[4 * v3 + 1] < v8 )
    {
      ++v3;
    }
    else
    {
      if ( a2[4 * v3 + 1] > v8 )
      {
        *(_DWORD *)(a3 + 4LL * v7) &= 0xFFFFFF81;
        *(_DWORD *)&v4[16 * v7 + 12] = *(_DWORD *)&v4[16 * v7 + 12] & 0xFF000000 | 0x7FFF80;
      }
      else
      {
        *(_DWORD *)(a3 + 4LL * v7) |= 1u;
        v9 = *(_DWORD *)(a3 + 4LL * v7) ^ ((unsigned __int8)*(_DWORD *)(a3 + 4LL * v7) ^ (unsigned __int8)(2 * a2[4 * v3 + 2])) & 0x1E;
        *(_DWORD *)(a3 + 4LL * v7) = v9;
        v10 = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(2 * a2[4 * v3 + 2])) & 0x60;
        *(_DWORD *)(a3 + 4LL * v7) = v10;
        *(_DWORD *)(a3 + 4LL * v7) = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(2 * a2[4 * v3 + 2])) & 0x80;
        v11 = a2[4 * v3 + 2];
        v12 = *(_DWORD *)&v4[16 * v7 + 12] | 1;
        v13 = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)(8 * v11)) & 0x78;
        v14 = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(v11 >> 3)) & 6;
        *(_DWORD *)&v4[16 * v7 + 12] = v14 ^ (v14 ^ (v7 << 7)) & 0x7FFF80 ^ (v14 ^ (v14 ^ (v7 << 7)) & 0x7FFF80 ^ (v11 << 17)) & 0x800000;
        ++v3;
      }
      ++v7;
    }
  }
  while ( 1 )
  {
    result = *a1;
    if ( v7 >= (unsigned __int16)result )
      break;
    *(_DWORD *)(a3 + 4LL * v7) &= 0xFFFFFF81;
    *(_DWORD *)&v4[16 * v7 + 12] = *(_DWORD *)&v4[16 * v7 + 12] & 0xFF000000 | 0x7FFF80;
    ++v7;
  }
  return result;
}
