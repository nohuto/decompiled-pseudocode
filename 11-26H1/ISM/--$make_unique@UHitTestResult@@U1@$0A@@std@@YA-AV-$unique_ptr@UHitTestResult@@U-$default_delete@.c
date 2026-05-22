/*
 * XREFs of ??$make_unique@UHitTestResult@@U1@$0A@@std@@YA?AV?$unique_ptr@UHitTestResult@@U?$default_delete@UHitTestResult@@@std@@@0@$$QEAUHitTestResult@@@Z @ 0x180046FD0
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x1801A33B0 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<HitTestResult,HitTestResult,0>(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *result; // rax

  v4 = operator new(0x78uLL);
  *(_BYTE *)v4 = *(_BYTE *)a2;
  v4[1] = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  *((_OWORD *)v4 + 1) = *(_OWORD *)(a2 + 16);
  *((_OWORD *)v4 + 2) = *(_OWORD *)(a2 + 32);
  *((_OWORD *)v4 + 3) = *(_OWORD *)(a2 + 48);
  *((_OWORD *)v4 + 4) = *(_OWORD *)(a2 + 64);
  v4[10] = *(_QWORD *)(a2 + 80);
  *((_BYTE *)v4 + 88) = *(_BYTE *)(a2 + 88);
  *((_DWORD *)v4 + 23) = *(_DWORD *)(a2 + 92);
  v5 = *(_QWORD *)(a2 + 112);
  *(_QWORD *)(a2 + 112) = 0LL;
  v6 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a2 + 104) = 0LL;
  v7 = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(a2 + 96) = 0LL;
  v4[12] = v7;
  result = a1;
  v4[13] = v6;
  v4[14] = v5;
  *a1 = v4;
  return result;
}
