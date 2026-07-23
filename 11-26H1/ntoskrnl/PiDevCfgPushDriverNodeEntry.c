/*
 * XREFs of PiDevCfgPushDriverNodeEntry @ 0x1405DDCD0
 * Callers:
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140AEA96C (PiDevCfgQueryIncludedDriverConfigurations.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDevCfgPushDriverNodeEntry(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  _QWORD *Pool2; // rax
  _QWORD *v6; // rcx

  v4 = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    Pool2[2] = a2;
    v6 = *(_QWORD **)(a1 + 8);
    if ( *v6 != a1 )
      __fastfail(3u);
    *Pool2 = a1;
    Pool2[1] = v6;
    *v6 = Pool2;
    *(_QWORD *)(a1 + 8) = Pool2;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
