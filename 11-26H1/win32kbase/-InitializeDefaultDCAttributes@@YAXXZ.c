/*
 * XREFs of ?InitializeDefaultDCAttributes@@YAXXZ @ 0x1401A3E30
 * Callers:
 *     InitializeGre @ 0x1402F3768 (InitializeGre.c)
 * Callees:
 *     <none>
 */

void __fastcall InitializeDefaultDCAttributes(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  *(_DWORD *)(v1 + 408) = 0xFFFFFF;
  *(_DWORD *)(v1 + 412) = 0xFFFFFF;
  *(_DWORD *)(v1 + 424) = 0xFFFFFF;
  *(_DWORD *)(v1 + 428) = 0xFFFFFF;
  *(_DWORD *)(v1 + 488) = -1;
  *(_DWORD *)(v1 + 492) = -1;
  *(_DWORD *)(v1 + 384) = 16;
  *(_DWORD *)(v1 + 440) = 1;
  *(_DWORD *)(v1 + 444) = 16843277;
  *(_DWORD *)(v1 + 456) = 2;
  *(_DWORD *)(v1 + 460) = 1;
  *(_DWORD *)(v1 + 464) = 1;
  *(_DWORD *)(v1 + 472) = 0;
  *(_QWORD *)(v1 + 504) = 0LL;
  *(_DWORD *)(v1 + 584) = 1;
  *(_QWORD *)(v1 + 264) = 1098907648LL;
  *(_DWORD *)(v1 + 272) = 0;
  *(_QWORD *)(v1 + 276) = 1098907648LL;
  *(_QWORD *)(v1 + 284) = 0LL;
  *(_DWORD *)(v1 + 292) = 0;
  *(_DWORD *)(v1 + 296) = 75;
  *(_QWORD *)(v1 + 300) = 1031798784LL;
  *(_DWORD *)(v1 + 308) = 0;
  *(_QWORD *)(v1 + 312) = 1031798784LL;
  *(_QWORD *)(v1 + 320) = 0LL;
  *(_DWORD *)(v1 + 328) = 0;
  *(_DWORD *)(v1 + 332) = 83;
  *(_QWORD *)(v1 + 588) = 1065353216LL;
  *(_DWORD *)(v1 + 596) = 0;
  *(_QWORD *)(v1 + 600) = 1065353216LL;
  *(_QWORD *)(v1 + 608) = 0LL;
  *(_DWORD *)(v1 + 616) = 0;
  *(_DWORD *)(v1 + 620) = 99;
  *(_DWORD *)(v1 + 624) = 1098907648;
  *(_QWORD *)(v1 + 628) = 1098907648LL;
  *(_DWORD *)(v1 + 636) = 0;
  *(_DWORD *)(v1 + 336) = 1;
  *(_QWORD *)(v1 + 548) = 0x100000001LL;
  *(_QWORD *)(v1 + 564) = 0x100000001LL;
  *(_DWORD *)(v1 + 572) = 6146;
  *(_DWORD *)(v1 + 368) = 1;
}
