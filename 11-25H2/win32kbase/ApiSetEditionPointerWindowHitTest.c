/*
 * XREFs of ApiSetEditionPointerWindowHitTest @ 0x140196430
 * Callers:
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1401FDDC8 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 * Callees:
 *     EditionPointerWindowHitTest @ 0x14012B50C (EditionPointerWindowHitTest.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 */

_OWORD *__fastcall ApiSetEditionPointerWindowHitTest(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 (*v18)(void); // rax
  int v19; // eax
  _OWORD *v20; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  _OWORD v28[7]; // [rsp+60h] [rbp-88h] BYREF

  memset(a1, 0, 0x70uLL);
  v18 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v17, v16) + 48) + 6104LL);
  if ( v18 )
    v19 = v18();
  else
    v19 = -1073741637;
  if ( v19 >= 0 )
  {
    v20 = EditionPointerWindowHitTest(v28, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    v21 = v20[1];
    *a1 = *v20;
    v22 = v20[2];
    a1[1] = v21;
    v23 = v20[3];
    a1[2] = v22;
    v24 = v20[4];
    a1[3] = v23;
    v25 = v20[5];
    a1[4] = v24;
    v26 = v20[6];
    a1[5] = v25;
    a1[6] = v26;
  }
  return a1;
}
