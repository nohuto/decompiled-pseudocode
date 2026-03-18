/*
 * XREFs of ??4CPreComputeSubTreeContext@@QEAAAEAV0@$$QEAV0@@Z @ 0x18022CD88
 * Callers:
 *     ??$move@V?$move_iterator@PEAVCPreComputeSubTreeContext@@@std@@V?$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@V?$move_iterator@PEAVCPreComputeSubTreeContext@@@0@0V12@@Z @ 0x1802296C0 (--$move@V-$move_iterator@PEAVCPreComputeSubTreeContext@@@std@@V-$checked_array_iterator@PEAVCPre.c)
 *     ??$move_backward@V?$move_iterator@PEAVCPreComputeSubTreeContext@@@std@@V?$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@V?$move_iterator@PEAVCPreComputeSubTreeContext@@@0@0V12@@Z @ 0x18022C904 (--$move_backward@V-$move_iterator@PEAVCPreComputeSubTreeContext@@@std@@V-$checked_array_iterator.c)
 *     ??0CPreComputeSubTreeContext@@QEAA@$$QEAV0@@Z @ 0x18022CA4C (--0CPreComputeSubTreeContext@@QEAA@$$QEAV0@@Z.c)
 * Callees:
 *     ??4CBspPreComputeHelper@@QEAAAEAV0@$$QEAV0@@Z @ 0x18022CAB4 (--4CBspPreComputeHelper@@QEAAAEAV0@$$QEAV0@@Z.c)
 */

__int64 __fastcall CPreComputeSubTreeContext::operator=(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // r11
  _QWORD *v4; // r8

  if ( a1 != a2 )
  {
    CBspPreComputeHelper::operator=(a1, a2);
    v3 = (_QWORD *)(v2 + 272);
    if ( a1 + 272 != v2 + 272 )
    {
      *(_DWORD *)(a1 + 280) = *(_DWORD *)(v2 + 280);
      *(_DWORD *)(a1 + 284) = *(_DWORD *)(v2 + 284);
      *(_DWORD *)(a1 + 288) = *(_DWORD *)(v2 + 288);
      *(_QWORD *)(a1 + 272) = *v3;
      *(_DWORD *)(a1 + 292) = *(_DWORD *)(v2 + 292);
      *(_QWORD *)(v2 + 280) = 0LL;
      *v3 = 0LL;
      *(_QWORD *)(v2 + 288) = 0LL;
    }
    v4 = (_QWORD *)(v2 + 296);
    if ( a1 + 296 != v2 + 296 )
    {
      *(_DWORD *)(a1 + 304) = *(_DWORD *)(v2 + 304);
      *(_DWORD *)(a1 + 308) = *(_DWORD *)(v2 + 308);
      *(_DWORD *)(a1 + 312) = *(_DWORD *)(v2 + 312);
      *(_QWORD *)(a1 + 296) = *v4;
      *(_DWORD *)(a1 + 316) = *(_DWORD *)(v2 + 316);
      *(_QWORD *)(v2 + 304) = 0LL;
      *v4 = 0LL;
      *(_QWORD *)(v2 + 312) = 0LL;
    }
    *(_QWORD *)(a1 + 320) = *(_QWORD *)(v2 + 320);
    *(_QWORD *)(a1 + 328) = *(_QWORD *)(v2 + 328);
    *(_DWORD *)(a1 + 336) = *(_DWORD *)(v2 + 336);
    *(_DWORD *)(a1 + 340) = *(_DWORD *)(v2 + 340);
    *(_BYTE *)(a1 + 344) = *(_BYTE *)(v2 + 344);
    *(_BYTE *)(v2 + 344) = 0;
  }
  return a1;
}
