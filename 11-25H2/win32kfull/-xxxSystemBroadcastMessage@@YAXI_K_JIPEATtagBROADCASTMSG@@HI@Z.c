/*
 * XREFs of ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x140128C2C
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1401293EC (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x14012B560 (xxxSendNotifyMessage.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x14002C740 (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ExchangeW32ThreadLock @ 0x140128FC4 (ExchangeW32ThreadLock.c)
 *     xxxBroadcastMessageEx @ 0x1401293EC (xxxBroadcastMessageEx.c)
 */

void __fastcall xxxSystemBroadcastMessage(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        union tagBROADCASTMSG *a5,
        int a6,
        unsigned int a7)
{
  unsigned int v7; // r14d
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rdx
  struct tagTHREADINFO *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  struct tagWND *v13; // rcx
  _QWORD *v14; // rbx
  struct tagTHREADINFO *v15; // rax
  unsigned int v16; // esi
  _QWORD *v17; // rdi
  _QWORD *i; // [rsp+48h] [rbp-41h]
  _QWORD v19[2]; // [rsp+50h] [rbp-39h] BYREF
  __int64 v20; // [rsp+60h] [rbp-29h]
  _QWORD v21[2]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v22; // [rsp+78h] [rbp-11h]
  unsigned int v23; // [rsp+D8h] [rbp+4Fh]

  v23 = a1;
  v7 = a4;
  v8 = PtiCurrent(a1, a2);
  v21[0] = *((_QWORD *)v8 + 48);
  *((_QWORD *)v8 + 48) = v21;
  v21[1] = 0LL;
  v22 = UserDereferenceObject;
  v10 = PtiCurrent((__int64)v21, v9);
  v19[0] = *((_QWORD *)v10 + 48);
  *((_QWORD *)v10 + 48) = v19;
  v19[1] = 0LL;
  v20 = UserDereferenceObject;
  v14 = *(_QWORD **)(W32GetUserSessionState(v19, v11) + 63520);
  for ( i = v14; v14; i = v14 )
  {
    v15 = PtiCurrent((__int64)v13, v12);
    if ( v7 || (v16 = 1, v14 == *(_QWORD **)(*((_QWORD *)v15 + 62) + 40LL)) )
      v16 = v7;
    ObfReferenceObject(v14);
    ExchangeW32ThreadLock(v14, v21);
    v17 = (_QWORD *)v14[2];
    if ( v17 )
    {
      do
      {
        ObfReferenceObject(v17);
        ExchangeW32ThreadLock(v17, v19);
        v13 = *(struct tagWND **)(v17[1] + 24LL);
        if ( v13 )
          xxxBroadcastMessageEx(v13, v23, a2, a3, v16, a5, a6, a7);
        v17 = (_QWORD *)v17[4];
      }
      while ( v17 );
      v14 = i;
      v7 = a4;
    }
    v14 = (_QWORD *)v14[1];
  }
  if ( v20 != -1 )
  {
    PopAndFreeW32ThreadLock((__int64)v19, v12);
    v20 = -1LL;
  }
  if ( v22 != -1 )
    PopAndFreeW32ThreadLock((__int64)v21, v12);
}
