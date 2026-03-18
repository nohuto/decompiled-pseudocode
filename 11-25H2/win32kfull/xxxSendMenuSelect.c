/*
 * XREFs of xxxSendMenuSelect @ 0x14003F1D4
 * Callers:
 *     xxxMNCloseHierarchy @ 0x14003CF70 (xxxMNCloseHierarchy.c)
 *     xxxMNCancel @ 0x14003D33C (xxxMNCancel.c)
 *     xxxMNSelectItem @ 0x14003DFC0 (xxxMNSelectItem.c)
 *     xxxMNInvertItem @ 0x14003E628 (xxxMNInvertItem.c)
 * Callees:
 *     xxxCallMsgFilter @ 0x14001FA20 (xxxCallMsgFilter.c)
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x14003F404 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x140049CB8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140049FCC (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     xxxSendNotifyMessage @ 0x14012B560 (xxxSendNotifyMessage.c)
 */

__int64 __fastcall xxxSendMenuSelect(struct tagWND *a1, struct tagWND *a2, __int64 **a3, int a4, __int64 a5)
{
  __int64 v6; // rdi
  __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 *v11; // rsi
  unsigned int v12; // ebx
  int v13; // esi
  unsigned int v15; // ebx
  _QWORD *v16; // rdx
  int v17; // ebx
  int v18; // ecx
  _QWORD v19[2]; // [rsp+38h] [rbp-21h] BYREF
  __int64 v20; // [rsp+48h] [rbp-11h]
  _BYTE v21[24]; // [rsp+50h] [rbp-9h] BYREF
  __int64 v22; // [rsp+68h] [rbp+Fh] BYREF
  int v23; // [rsp+70h] [rbp+17h]
  int v24; // [rsp+74h] [rbp+1Bh]
  unsigned __int64 v25; // [rsp+78h] [rbp+1Fh]
  __int64 v26; // [rsp+80h] [rbp+27h]
  __int128 v27; // [rsp+88h] [rbp+2Fh]

  v6 = a4;
  v24 = 0;
  v27 = 0LL;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v19, a3);
  if ( (int)v6 < 0 || *(_DWORD *)(*(_QWORD *)(**a3 + 40) + 44LL) <= (unsigned int)v6 )
  {
    v9 = a3[2];
    if ( !v9 )
      v9 = (__int64 *)**a3;
    v10 = SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v21, 0xFFFFFFFFLL);
    v11 = *(__int64 **)(v10 + 16);
    if ( !v11 )
      v11 = **(__int64 ***)v10;
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v21);
    v12 = 0xFFFF;
    v20 = 0LL;
    if ( v9 != v11 )
      v12 = 0;
    LOWORD(v13) = 0;
    if ( *(_QWORD *)v19[0] )
    {
      SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v19);
      v19[0] = gSmartObjNullRef;
    }
    LODWORD(v6) = -1;
  }
  else
  {
    v16 = (_QWORD *)(*(_QWORD *)(**a3 + 88) + 96 * v6);
    v17 = *(_DWORD *)*v16 & 0x6B64 | *(_DWORD *)(*v16 + 4LL) & 0x8B;
    if ( v16[2] )
      v17 |= 0x10u;
    v12 = v17 & 0xFFFF5FFF;
    if ( (v12 & 0x10) != 0 )
      LOWORD(v13) = v6;
    else
      v13 = *(_DWORD *)(*v16 + 8LL);
    if ( a5 )
    {
      v18 = v12 | 0x8000;
      if ( *(_DWORD *)(a5 + 20) != -1 )
        v18 = v12;
      v12 = v18;
      if ( (*(_DWORD *)(a5 + 8) & 2) != 0 )
        v12 = v18 | 0x2000;
    }
  }
  if ( a1 )
    v22 = *(_QWORD *)a1;
  else
    v22 = 0LL;
  v23 = 287;
  v25 = (unsigned __int16)v13 | (unsigned __int64)(v12 << 16);
  if ( v20 || *(_QWORD *)v19[0] )
    v26 = **(_QWORD **)v19[0];
  else
    v26 = 0LL;
  if ( !(unsigned int)xxxCallMsgFilter((__int64)&v22, 2LL) )
    xxxSendNotifyMessage(a1, 287LL, v25, v26, 1);
  if ( a2 )
  {
    if ( a2 == a1 )
      v15 = (v12 >> 12) | 0xFFFFFFFD;
    else
      v15 = -4;
    xxxWindowEvent(0x8005u, a2, v15, v6 + 1, 0);
  }
  return SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v19);
}
