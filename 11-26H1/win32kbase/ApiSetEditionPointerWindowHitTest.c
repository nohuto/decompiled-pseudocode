/*
 * XREFs of ApiSetEditionPointerWindowHitTest @ 0x1400CB2F4
 * Callers:
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1400CAD6C (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 * Callees:
 *     EditionPointerWindowHitTest @ 0x140164928 (EditionPointerWindowHitTest.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

_OWORD *__fastcall ApiSetEditionPointerWindowHitTest(
        _OWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v16; // rcx
  __int64 (*v17)(void); // rax
  int v18; // eax
  _OWORD *v19; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  char v27; // [rsp+60h] [rbp-88h] BYREF

  memset(a1, 0, 0x70uLL);
  v17 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v16) + 48) + 5664LL);
  if ( v17 )
    v18 = v17();
  else
    v18 = -1073741637;
  if ( v18 >= 0 )
  {
    v19 = (_OWORD *)EditionPointerWindowHitTest((unsigned int)&v27, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    v20 = v19[1];
    *a1 = *v19;
    v21 = v19[2];
    a1[1] = v20;
    v22 = v19[3];
    a1[2] = v21;
    v23 = v19[4];
    a1[3] = v22;
    v24 = v19[5];
    a1[4] = v23;
    v25 = v19[6];
    a1[5] = v24;
    a1[6] = v25;
  }
  return a1;
}
