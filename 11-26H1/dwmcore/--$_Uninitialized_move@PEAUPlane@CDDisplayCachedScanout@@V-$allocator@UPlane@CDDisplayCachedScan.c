/*
 * XREFs of ??$_Uninitialized_move@PEAUPlane@CDDisplayCachedScanout@@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@YAPEAUPlane@CDDisplayCachedScanout@@QEAU12@0PEAU12@AEAV?$allocator@UPlane@CDDisplayCachedScanout@@@0@@Z @ 0x1800FAC58
 * Callers:
 *     ??$_Emplace_reallocate@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@?$vector@UPlane@CDDisplayCachedScanout@@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@AEAAPEAUPlane@CDDisplayCachedScanout@@QEAU23@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1801C3964 (--$_Emplace_reallocate@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@-$vector@UPlane@CDDisplayCachedScano.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@YAXPEAUPlane@CDDisplayCachedScanout@@QEAU12@AEAV?$allocator@UPlane@CDDisplayCachedScanout@@@0@@Z @ 0x1800FAF30 (--$_Destroy_range@V-$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@YAXPEAUPlane@CDDisplay.c)
 */

_DWORD *__fastcall std::_Uninitialized_move<CDDisplayCachedScanout::Plane *>(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v5; // r8
  char *v6; // r9
  __int64 v7; // rax
  __int128 v8; // xmm0

  if ( a1 != a2 )
  {
    v5 = a1 + 8;
    v6 = (char *)a3 - a1;
    do
    {
      *a3 = *(_DWORD *)(v5 - 8);
      a3 += 22;
      v6[v5 - 4] = *(_BYTE *)(v5 - 4);
      v7 = *(_QWORD *)v5;
      *(_QWORD *)v5 = 0LL;
      *(_QWORD *)&v6[v5] = v7;
      *(_DWORD *)&v6[v5 + 8] = *(_DWORD *)(v5 + 8);
      v8 = *(_OWORD *)(v5 + 12);
      v5 += 88LL;
      *(_OWORD *)&v6[v5 - 76] = v8;
      *(_OWORD *)&v6[v5 - 60] = *(_OWORD *)(v5 - 60);
      *(_OWORD *)&v6[v5 - 44] = *(_OWORD *)(v5 - 44);
      *(_DWORD *)&v6[v5 - 28] = *(_DWORD *)(v5 - 28);
      *(_DWORD *)&v6[v5 - 24] = *(_DWORD *)(v5 - 24);
      *(_DWORD *)&v6[v5 - 20] = *(_DWORD *)(v5 - 20);
      *(_DWORD *)&v6[v5 - 16] = *(_DWORD *)(v5 - 16);
    }
    while ( v5 - 8 != a2 );
  }
  std::_Destroy_range<std::allocator<CDDisplayCachedScanout::Plane>>(a3, a3);
  return a3;
}
