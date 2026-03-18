/*
 * XREFs of ApiSetEditionDoPointerDPITransforms @ 0x140143260
 * Callers:
 *     ?UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z @ 0x14004A560 (-UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z.c)
 * Callees:
 *     EditionDoPointerDPITransforms @ 0x140143314 (EditionDoPointerDPITransforms.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionDoPointerDPITransforms(_OWORD *a1, __int64 a2, __int64 a3)
{
  __int64 (*v6)(void); // rax
  __int64 result; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  _OWORD v13[7]; // [rsp+20h] [rbp-78h] BYREF

  v6 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 5936LL);
  if ( v6 )
    result = v6();
  else
    result = 3221225659LL;
  if ( (int)result >= 0 )
  {
    v8 = a1[1];
    v13[0] = *a1;
    v13[2] = a1[2];
    v9 = a1[4];
    v13[1] = v8;
    v10 = a1[3];
    v13[4] = v9;
    v11 = a1[6];
    v13[3] = v10;
    v12 = a1[5];
    v13[6] = v11;
    v13[5] = v12;
    return EditionDoPointerDPITransforms(v13, a2, a3);
  }
  return result;
}
