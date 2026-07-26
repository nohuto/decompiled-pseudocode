/*
 * XREFs of ndisInitHypervisorInfo @ 0x1400D95A0
 * Callers:
 *     NdisGetHypervisorInfo @ 0x1400D9660 (NdisGetHypervisorInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisInitHypervisorInfo(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = 786816LL;
  *(_DWORD *)(a1 + 8) = 0;
  _RAX = 1LL;
  __asm { cpuid }
  if ( (int)_RCX < 0 )
  {
    *(_DWORD *)(a1 + 4) = 1;
    _RAX = 1073741825LL;
    __asm { cpuid }
    if ( (_DWORD)result == 824407624 )
    {
      _RAX = 1073741827LL;
      __asm { cpuid }
      result = 2 - (unsigned int)((__PAIR64__(_RBX, _RAX) & 0x100000000000LL) != 0);
      *(_DWORD *)(a1 + 8) = result;
    }
  }
  return result;
}
