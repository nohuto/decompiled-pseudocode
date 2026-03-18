/*
 * XREFs of ApiSetEditionFindNodeQueuedMessage @ 0x140163C00
 * Callers:
 *     ?FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z @ 0x140163A1C (-FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z.c)
 * Callees:
 *     EditionFindNodeQueuedMessage @ 0x14015DD0C (EditionFindNodeQueuedMessage.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall ApiSetEditionFindNodeQueuedMessage(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4))(_OWORD *, __int64, __int64, __int64)
{
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 (*v9)(void); // rax
  int v10; // eax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  _OWORD v17[7]; // [rsp+20h] [rbp-78h] BYREF

  v7 = 0LL;
  v8 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48);
  v9 = *(__int64 (**)(void))(v8 + 6160);
  if ( v9 )
    v10 = v9();
  else
    v10 = -1073741637;
  if ( v10 >= 0 )
  {
    v11 = a1[1];
    v17[0] = *a1;
    v17[2] = a1[2];
    v12 = a1[4];
    v17[1] = v11;
    v13 = a1[3];
    v17[4] = v12;
    v14 = a1[6];
    v17[3] = v13;
    v15 = a1[5];
    v17[6] = v14;
    v17[5] = v15;
    return EditionFindNodeQueuedMessage(v17, a2, v8, a4);
  }
  return (__int64 (__fastcall *)(_OWORD *, __int64, __int64, __int64))v7;
}
