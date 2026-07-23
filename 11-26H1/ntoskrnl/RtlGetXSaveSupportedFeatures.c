/*
 * XREFs of RtlGetXSaveSupportedFeatures @ 0x140625C6C
 * Callers:
 *     KiInitializeXSaveConfiguration @ 0x140BFA4A0 (KiInitializeXSaveConfiguration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetXSaveSupportedFeatures(__int64 a1)
{
  __int64 result; // rax
  unsigned int v11; // r11d
  int v17; // r8d
  int v18; // r8d
  unsigned __int64 v19; // rcx
  unsigned int *v20; // rdi
  _DWORD *v21; // r14
  unsigned int v22; // esi
  unsigned int i; // r9d
  __int64 v24; // r8
  unsigned int v30; // eax
  _DWORD *v31; // r8

  _RAX = 1LL;
  __asm { cpuid }
  if ( (_RCX & 0x4000000) == 0 )
    goto LABEL_25;
  _RAX = 13LL;
  __asm { cpuid }
  result = (unsigned int)result;
  *(_QWORD *)a1 = (unsigned int)result | ((unsigned __int64)(unsigned int)_RDX << 32);
  if ( (result & 3) == 3 )
  {
    v11 = 0;
    _RAX = 13LL;
    __asm { cpuid }
    v17 = 0;
    if ( (_RAX & 0xA) == 0xA )
      v17 = 2;
    v18 = ((unsigned int)_RAX >> 2) & 4 | _RAX & 1 | *(_DWORD *)(a1 + 20) & 0xFFFFFFF8 | v17 & 0xFFFFFFFB;
    *(_DWORD *)(a1 + 20) = v18;
    if ( (v18 & 2) != 0 )
      v19 = (unsigned int)_RCX | ((unsigned __int64)(unsigned int)_RDX << 32);
    else
      v19 = 0LL;
    *(_QWORD *)(a1 + 536) = v19;
    v20 = (unsigned int *)(a1 + 28);
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 28) = 160;
    v21 = (_DWORD *)(a1 + 44);
    *(_DWORD *)(a1 + 32) = 160;
    v22 = 576;
    *(_DWORD *)(a1 + 36) = 256;
    for ( i = 2; i < 0x40; ++i )
    {
      v24 = 1LL << i;
      if ( ((1LL << i) & *(_QWORD *)a1) != 0 )
      {
        _RAX = 13LL;
        __asm { cpuid }
        *v21 = _RAX;
        v30 = _RBX + _RAX;
        *(v21 - 1) = _RBX;
        if ( v22 >= v30 )
          v30 = v22;
        v22 = v30;
        if ( (_RCX & 2) != 0 )
          *(_QWORD *)(a1 + 544) |= v24;
        if ( (_RCX & 4) != 0 )
          *(_QWORD *)(a1 + 824) |= v24;
      }
      v21 += 2;
    }
    result = *(unsigned int *)(a1 + 20);
    *(_DWORD *)(a1 + 16) = v22;
    if ( (result & 2) != 0 )
    {
      v31 = (_DWORD *)(a1 + 556);
      do
      {
        if ( ((1LL << v11) & *(_QWORD *)(a1 + 536)) != 0 )
        {
          _RAX = 13LL;
          __asm { cpuid }
          *v31 = result;
          if ( (_RCX & 2) != 0 )
            *(_QWORD *)(a1 + 544) |= 1LL << v11;
        }
        else
        {
          result = *v20;
          *v31 = result;
        }
        ++v11;
        ++v31;
        v20 += 2;
      }
      while ( v11 < 0x40 );
    }
  }
  else
  {
LABEL_25:
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 16) = 0;
  }
  return result;
}
