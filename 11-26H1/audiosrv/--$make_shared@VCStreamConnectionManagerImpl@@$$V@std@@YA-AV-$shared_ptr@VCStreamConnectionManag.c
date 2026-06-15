/*
 * XREFs of ??$make_shared@VCStreamConnectionManagerImpl@@$$V@std@@YA?AV?$shared_ptr@VCStreamConnectionManagerImpl@@@0@XZ @ 0x18011B478
 * Callers:
 *     ?GetInstance@CStreamConnectionManagerImpl@@SA?AV?$shared_ptr@VCStreamConnectionManager@@@std@@XZ @ 0x18011D520 (-GetInstance@CStreamConnectionManagerImpl@@SA-AV-$shared_ptr@VCStreamConnectionManager@@@std@@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     ??0CMonitorManager@@QEAA@XZ @ 0x18011B684 (--0CMonitorManager@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<CStreamConnectionManagerImpl,>(_QWORD *a1)
{
  CMonitorManager *v2; // rdi
  _DWORD *v3; // rax
  _DWORD *v4; // rbx
  CMonitorManager *v5; // rax
  CMonitorManager *v6; // rbp

  v2 = 0LL;
  v3 = operator new(0x20uLL);
  v4 = v3;
  if ( v3 )
  {
    *(_OWORD *)v3 = 0LL;
    v3[2] = 1;
    v3[3] = 1;
    *(_QWORD *)v3 = &std::_Ref_count_obj2<CStreamConnectionManagerImpl>::`vftable';
    *((_QWORD *)v3 + 2) = &CStreamConnectionManagerImpl::`vftable';
    *((_QWORD *)v3 + 3) = 0LL;
    v5 = (CMonitorManager *)operator new[](0x178uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = v5;
    if ( v5 )
    {
      memset_0(v5, 0, 0x178uLL);
      v2 = CMonitorManager::CMonitorManager(v6);
    }
    *((_QWORD *)v4 + 3) = v2;
  }
  else
  {
    v4 = 0LL;
  }
  *a1 = v4 + 4;
  a1[1] = v4;
  return a1;
}
