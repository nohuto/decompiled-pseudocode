/*
 * XREFs of ApiSetEditionNonDwmSpeedHitTest @ 0x1401960A0
 * Callers:
 *     ?MouseSpeedHitTest@CMouseProcessor@@CA?AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x14019045C (-MouseSpeedHitTest@CMouseProcessor@@CA-AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4.c)
 * Callees:
 *     EditionNonDwmSpeedHitTest @ 0x14012BFE0 (EditionNonDwmSpeedHitTest.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 */

_OWORD *__fastcall ApiSetEditionNonDwmSpeedHitTest(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 (*v10)(void); // rax
  int v11; // eax
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  _OWORD v20[7]; // [rsp+20h] [rbp-78h] BYREF

  memset(a1, 0, 0x70uLL);
  v10 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v9, v8) + 48) + 6040LL);
  if ( v10 )
    v11 = v10();
  else
    v11 = -1073741637;
  if ( v11 >= 0 )
  {
    v12 = EditionNonDwmSpeedHitTest(v20, a2, a3, a4);
    v13 = v12[1];
    *a1 = *v12;
    v14 = v12[2];
    a1[1] = v13;
    v15 = v12[3];
    a1[2] = v14;
    v16 = v12[4];
    a1[3] = v15;
    v17 = v12[5];
    a1[4] = v16;
    v18 = v12[6];
    a1[5] = v17;
    a1[6] = v18;
  }
  return a1;
}
