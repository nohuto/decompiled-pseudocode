/*
 * XREFs of ApiSetInputTransformOnInput @ 0x1401972D4
 * Callers:
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x140205ED0 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 * Callees:
 *     InputTransformOnInput @ 0x1401091C8 (InputTransformOnInput.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetInputTransformOnInput(_OWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int64 (*v7)(void); // rax
  int v8; // eax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  _OWORD v15[7]; // [rsp+20h] [rbp-78h] BYREF

  v6 = 0;
  v7 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 6184LL);
  if ( v7 )
    v8 = v7();
  else
    v8 = -1073741637;
  if ( v8 >= 0 )
  {
    v9 = a1[1];
    v15[0] = *a1;
    v15[2] = a1[2];
    v10 = a1[4];
    v15[1] = v9;
    v11 = a1[3];
    v15[4] = v10;
    v12 = a1[6];
    v15[3] = v11;
    v13 = a1[5];
    v15[6] = v12;
    v15[5] = v13;
    return (unsigned int)InputTransformOnInput(v15, a2, a3);
  }
  return v6;
}
