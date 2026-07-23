/*
 * XREFs of KiGetIptInfo @ 0x1405EF4C8
 * Callers:
 *     KiInitializeXSaveConfiguration @ 0x140BFA4A0 (KiInitializeXSaveConfiguration.c)
 * Callees:
 *     HviGetIptFeatures @ 0x1406E0B48 (HviGetIptFeatures.c)
 *     KiGetCpuVendor @ 0x140C10708 (KiGetCpuVendor.c)
 */

__int64 __fastcall KiGetIptInfo(_DWORD *a1, int *a2)
{
  __int64 result; // rax
  int v14; // r8d
  int v20; // r9d
  int v21; // r10d
  char v27; // r10
  __int128 v28; // [rsp+30h] [rbp-10h] BYREF

  *a1 = 0;
  v28 = 0LL;
  *a2 = 0;
  result = KiGetCpuVendor();
  if ( (_DWORD)result == 2 )
  {
    _RAX = 0LL;
    __asm { cpuid }
    if ( (unsigned int)result >= 0x14 )
    {
      _RAX = 7LL;
      __asm { cpuid }
      if ( (_RBX & 0x2000000) != 0 || (result = HviGetIptFeatures(&v28, _RDX), (v28 & 0xFFFFF000) != 0) )
      {
        v14 = *a2 | 9;
        _RAX = 20LL;
        __asm { cpuid }
        *a2 = v14;
        if ( (_RCX & 1) != 0 || (v20 = 16, (_RCX & 4) != 0) )
        {
          v14 |= 6u;
          v20 = 32;
          *a2 = v14;
        }
        if ( (_RBX & 1) != 0 )
        {
          v14 |= 0x10u;
          *a2 = v14;
          v20 += 8;
        }
        v21 = v20;
        if ( (_RBX & 4) != 0 && (_DWORD)_RAX )
        {
          _RAX = 20LL;
          __asm { cpuid }
          v27 = _RAX;
          if ( ((unsigned __int8)_RAX & 7u) > 4 )
            v27 = -4;
          *a2 = v14 | ((32 << (v27 & 7)) - 32);
          v21 = v20 + 16 * (v27 & 7);
        }
        result = (v21 + 63) & 0xFFFFFFC0;
        *a1 = result;
      }
    }
  }
  return result;
}
