/*
 * XREFs of ?InitializeDefaultDCAttributes@@YAXXZ @ 0x14015F67C
 * Callers:
 *     InitializeGre @ 0x1402EC79C (InitializeGre.c)
 * Callees:
 *     <none>
 */

void __fastcall InitializeDefaultDCAttributes(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  *(_DWORD *)(v1 + 320) = 0xFFFFFF;
  *(_DWORD *)(v1 + 324) = 0xFFFFFF;
  *(_DWORD *)(v1 + 336) = 0xFFFFFF;
  *(_DWORD *)(v1 + 340) = 0xFFFFFF;
  *(_DWORD *)(v1 + 400) = -1;
  *(_DWORD *)(v1 + 404) = -1;
  *(_DWORD *)(v1 + 296) = 16;
  *(_DWORD *)(v1 + 352) = 1;
  *(_DWORD *)(v1 + 356) = 16843277;
  *(_DWORD *)(v1 + 368) = 2;
  *(_DWORD *)(v1 + 372) = 1;
  *(_DWORD *)(v1 + 376) = 1;
  *(_DWORD *)(v1 + 384) = 0;
  *(_QWORD *)(v1 + 416) = 0LL;
  *(_DWORD *)(v1 + 496) = 1;
  *(_QWORD *)(v1 + 176) = 1098907648LL;
  *(_DWORD *)(v1 + 184) = 0;
  *(_QWORD *)(v1 + 188) = 1098907648LL;
  *(_QWORD *)(v1 + 196) = 0LL;
  *(_DWORD *)(v1 + 204) = 0;
  *(_DWORD *)(v1 + 208) = 75;
  *(_OWORD *)(v1 + 212) = _xmm;
  *(_OWORD *)(v1 + 228) = 0uLL;
  *(_DWORD *)(v1 + 536) = 1098907648;
  *(_QWORD *)(v1 + 540) = 1098907648LL;
  *(_OWORD *)(v1 + 500) = _xmm;
  *(_DWORD *)(v1 + 244) = 83;
  *(_OWORD *)(v1 + 516) = 0u;
  *(_DWORD *)(v1 + 532) = 99;
  *(_DWORD *)(v1 + 548) = 0;
  *(_DWORD *)(v1 + 248) = 1;
  *(_QWORD *)(v1 + 460) = 0x100000001LL;
  *(_QWORD *)(v1 + 476) = 0x100000001LL;
  *(_DWORD *)(v1 + 484) = 6146;
  *(_DWORD *)(v1 + 280) = 1;
}
