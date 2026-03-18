/*
 * XREFs of ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14004B768
 * Callers:
 *     xxxSetWindowData @ 0x14004C92C (xxxSetWindowData.c)
 *     xxxGetSystemMenu @ 0x140121614 (xxxGetSystemMenu.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     xxxSetMenu @ 0x1402224F0 (xxxSetMenu.c)
 *     xxxSetDialogSystemMenu @ 0x14022E75C (xxxSetDialogSystemMenu.c)
 *     xxxSetSystemMenu @ 0x14023E21C (xxxSetSystemMenu.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 */

__int64 __fastcall LockWndMenuWorker(_QWORD *a1, unsigned __int8 a2, _QWORD **a3)
{
  __int64 v5; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v16; // [rsp+28h] [rbp-10h]

  v5 = 0LL;
  v7 = a1[(a2 ^ 1LL) + 20];
  if ( v7 )
  {
    v14 = (_QWORD *)(v7 + 80);
    if ( (_QWORD *)*v14 == a1 )
      HMAssignmentUnlock(v14);
  }
  if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(a3) && !*(_QWORD *)(**a3 + 80LL) )
  {
    v13 = *a3;
    v16 = a1;
    v15 = *v13 + 80LL;
    HMAssignmentLock(&v15, 0LL);
  }
  v8 = a3[2];
  if ( a2 )
  {
    if ( !v8 )
      v8 = (_QWORD *)**a3;
    v12 = a1[5];
    v10 = (__int64)(a1 + 20);
    if ( v8 )
      v5 = v8[6];
    *(_QWORD *)(v12 + 160) = v5;
  }
  else
  {
    if ( !v8 )
      v8 = (_QWORD *)**a3;
    v9 = a1[5];
    v10 = (__int64)(a1 + 21);
    if ( v8 )
      v5 = v8[6];
    *(_QWORD *)(v9 + 152) = v5;
  }
  v15 = v10;
  v16 = v8;
  return HMAssignmentLock(&v15, 0LL);
}
