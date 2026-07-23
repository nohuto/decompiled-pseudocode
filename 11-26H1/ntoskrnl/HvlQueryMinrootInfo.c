/*
 * XREFs of HvlQueryMinrootInfo @ 0x14052F3BC
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HvlQueryMinrootInfo(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v5; // esi
  int v7; // eax
  unsigned int v8; // r15d
  unsigned int i; // edi
  __int64 v10; // rcx

  if ( a2 >= 0x4298 )
  {
    v5 = 0;
    memset_0(a1, 0, 0x4298uLL);
    *a1 = KeHypervisorNumprocSpecified;
    a1[1] = KeRootProcSpecified;
    v7 = KeRootProcNumaNodesSpecified;
    a1[2] = KeRootProcNumaNodesSpecified;
    if ( v7 )
    {
      *(_OWORD *)(a1 + 3) = KeRootProcNumaNodes;
      *(_OWORD *)(a1 + 7) = xmmword_140FC1810;
      *(_OWORD *)(a1 + 11) = xmmword_140FC1820;
      *(_OWORD *)(a1 + 15) = xmmword_140FC1830;
      *(_OWORD *)(a1 + 19) = xmmword_140FC1840;
      *(_OWORD *)(a1 + 23) = xmmword_140FC1850;
      *(_OWORD *)(a1 + 27) = xmmword_140FC1860;
      *(_OWORD *)(a1 + 31) = xmmword_140FC1870;
    }
    a1[35] = KeRootProcPerCoreSpecified;
    a1[36] = KeRootProcPerNodeSpecified;
    if ( KeRootProcNumaNodeLpsSpecified )
    {
      v8 = 0;
      for ( i = 0; i < 0x40; ++i )
      {
        if ( KeRootProcNumaNodeLps[2 * i] )
        {
          v10 = 66LL * v8;
          a1[v10 + 38] = i;
          memmove(
            &a1[v10 + 40],
            (const void *)KeRootProcNumaNodeLps[2 * i + 1],
            (unsigned __int64)KeRootProcNumaNodeLps[2 * i] >> 3);
          ++v8;
        }
      }
      a1[37] = v8;
    }
    *a3 = 17048;
  }
  else
  {
    v5 = -1073741584;
    *a3 = 0;
  }
  return v5;
}
