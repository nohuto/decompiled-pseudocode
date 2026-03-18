/*
 * XREFs of ApiSetEditionPointerActivate @ 0x1401BC0C0
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x14006AA00 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1400CBA8C (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z @ 0x140214BA0 (-DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z.c)
 * Callees:
 *     EditionPointerActivate @ 0x14017B4AC (EditionPointerActivate.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionPointerActivate(_OWORD *a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  __int64 (*v8)(void); // rax
  __int64 result; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  _OWORD v15[7]; // [rsp+30h] [rbp-78h] BYREF

  v8 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 4712LL);
  if ( v8 )
    result = v8();
  else
    result = 3221225659LL;
  if ( (int)result >= 0 )
  {
    v10 = a1[1];
    v15[0] = *a1;
    v15[2] = a1[2];
    v11 = a1[4];
    v15[1] = v10;
    v12 = a1[3];
    v15[4] = v11;
    v13 = a1[6];
    v15[3] = v12;
    v14 = a1[5];
    v15[6] = v13;
    v15[5] = v14;
    return (__int64)EditionPointerActivate(v15, a2, a3, a4);
  }
  return result;
}
