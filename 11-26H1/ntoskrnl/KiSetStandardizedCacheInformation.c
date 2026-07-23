/*
 * XREFs of KiSetStandardizedCacheInformation @ 0x140BFDE14
 * Callers:
 *     KiSetCacheInformation @ 0x140BFCFC0 (KiSetCacheInformation.c)
 *     KiSetCacheInformationAmd @ 0x140BFD0E8 (KiSetCacheInformationAmd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSetStandardizedCacheInformation(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebp
  __int64 v3; // r10
  __int64 result; // rax
  int v11; // r11d
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  unsigned int v16; // r8d
  char v17; // cl
  __int64 v18; // rbx
  __int64 v19; // r8
  _WORD *v20; // rdx
  unsigned int v21; // ecx
  __int64 v22; // rdi
  int v23; // ebx
  int i; // esi
  __int64 v25; // r11
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // r14
  __int64 v30; // rcx

  v2 = 0;
  v3 = a1 + 35736;
  do
  {
    _RAX = a2;
    __asm { cpuid }
    v11 = _RCX;
    v12 = (int)((_DWORD)result << 27) >> 27;
    if ( !v12 )
      break;
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 != 2 )
            goto LABEL_31;
          *(_DWORD *)(v3 + 8) = 3;
        }
        else
        {
          *(_DWORD *)(v3 + 8) = 0;
        }
      }
      else
      {
        *(_DWORD *)(v3 + 8) = 1;
      }
    }
    else
    {
      *(_DWORD *)(v3 + 8) = 2;
    }
    v16 = (unsigned int)_RBX >> 22;
    if ( (result & 0x200) != 0 )
      v17 = -1;
    else
      v17 = v16 + 1;
    *(_BYTE *)(v3 + 1) = v17;
    *(_BYTE *)v3 = ((unsigned int)result >> 5) & 7;
    *(_WORD *)(v3 + 2) = (_RBX & 0xFFF) + 1;
    *(_DWORD *)(v3 + 4) = (v11 + 1) * (v16 + 1) * ((_RBX & 0xFFF) + 1) * ((((unsigned int)_RBX >> 12) & 0x3FF) + 1);
    v18 = *(unsigned __int8 *)(a1 + 208);
    v19 = *(_QWORD *)(a1 + 200);
    v20 = (_WORD *)(a1 + 264LL * v2 + 44800);
    if ( *v20 <= (unsigned __int16)v18 )
    {
      if ( v20[1] <= (unsigned __int16)v18 )
        goto LABEL_18;
      *v20 = v18 + 1;
    }
    *(_QWORD *)&v20[4 * v18 + 4] |= v19;
LABEL_18:
    result = ((unsigned int)result >> 14) & 0xFFF;
    if ( (_DWORD)result )
    {
      _BitScanReverse(&v21, 2 * result + 1);
      result = (unsigned int)KeNumberProcessors_0;
      v22 = 0LL;
      v23 = ~((1 << v21) - 1);
      for ( i = v23 & *(_DWORD *)(a1 + 212);
            (unsigned int)v22 < (unsigned int)KeNumberProcessors_0;
            v22 = (unsigned int)(v22 + 1) )
      {
        v25 = KiProcessorBlock[v22];
        if ( (v23 & *(_DWORD *)(v25 + 212)) != i )
          goto LABEL_29;
        v26 = *(unsigned __int8 *)(v25 + 208);
        v27 = *(_QWORD *)(v25 + 200);
        if ( *v20 <= (unsigned __int16)v26 )
        {
          if ( v20[1] <= (unsigned __int16)v26 )
            goto LABEL_25;
          *v20 = v26 + 1;
        }
        *(_QWORD *)&v20[4 * v26 + 4] |= v27;
LABEL_25:
        v28 = *(unsigned __int8 *)(a1 + 208);
        v29 = *(_QWORD *)(a1 + 200);
        v30 = v25 + 264LL * v2;
        if ( *(_WORD *)(v30 + 44800) > (unsigned __int16)v28 )
          goto LABEL_28;
        if ( *(_WORD *)(v30 + 44802) > (unsigned __int16)v28 )
        {
          *(_WORD *)(v30 + 44800) = v28 + 1;
LABEL_28:
          *(_QWORD *)(v30 + 8 * v28 + 44808) |= v29;
        }
LABEL_29:
        result = (unsigned int)KeNumberProcessors_0;
      }
    }
    v3 += 12LL;
    ++*(_DWORD *)(a1 + 35796);
LABEL_31:
    ++v2;
  }
  while ( *(_DWORD *)(a1 + 35796) < 5u );
  return result;
}
