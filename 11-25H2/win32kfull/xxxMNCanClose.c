/*
 * XREFs of xxxMNCanClose @ 0x1400471A0
 * Callers:
 *     xxxDrawCaptionBar @ 0x140044E0C (xxxDrawCaptionBar.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x14004B5EC (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     ?xxxDCECalcCaptionButton@@YAXPEAUtagWND@@HPEAG@Z @ 0x140117864 (-xxxDCECalcCaptionButton@@YAXPEAUtagWND@@HPEAG@Z.c)
 *     xxxCalcCaptionButton @ 0x140118DE4 (xxxCalcCaptionButton.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxGetSysMenuPtr @ 0x140047518 (xxxGetSysMenuPtr.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     MNLookUpItem @ 0x1400476D8 (MNLookUpItem.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140049FCC (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 */

__int64 __fastcall xxxMNCanClose(__int64 a1)
{
  char v2; // di
  __int64 SysMenuPtr; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // rdi
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rdi
  char v11; // si
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD v17[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+30h] [rbp-20h]
  __int64 *v19; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-10h] BYREF

  v2 = 0;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v17);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL) + 9LL) & 2) != 0 )
    goto LABEL_30;
  SysMenuPtr = xxxGetSysMenuPtr(a1);
  v5 = v17[0];
  v6 = 1;
  v18 = 0LL;
  v7 = SysMenuPtr;
  if ( SysMenuPtr == *(_QWORD *)v17[0]
    || ((SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v17), !v7)
      ? (v17[0] = gSmartObjNullRef)
      : (v17[0] = *(_QWORD *)(v7 + 152), ++*(_DWORD *)(v17[0] + 8LL)),
        !v18) )
  {
    if ( !*(_QWORD *)v17[0] )
      goto LABEL_23;
  }
  v8 = *(_QWORD *)v17[0];
  v9 = PtiCurrent(v5, v4);
  v19 = (__int64 *)gSmartObjNullRef;
  if ( v8 )
  {
    v19 = *(__int64 **)(v8 + 152);
    ++*(_DWORD *)(*(_QWORD *)(v8 + 152) + 8LL);
  }
  v20[0] = *((_QWORD *)v9 + 209);
  *((_QWORD *)v9 + 209) = v20;
  v20[1] = v18;
  v10 = *v19;
  if ( *v19 != *(_QWORD *)v17[0] )
  {
    SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v17);
    if ( v10 )
    {
      v17[0] = *(_QWORD *)(v10 + 152);
      ++*(_DWORD *)(v17[0] + 8LL);
    }
    else
    {
      v17[0] = gSmartObjNullRef;
    }
  }
  if ( v18 || (v2 = 1, *(_QWORD *)v17[0]) )
  {
    v11 = 0;
    v2 = 1;
  }
  else
  {
LABEL_23:
    v11 = 1;
  }
  if ( (v2 & 1) != 0 )
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(&v19);
  if ( v11 )
    goto LABEL_30;
  v12 = v18;
  if ( !v18 )
    v12 = *(_QWORD *)v17[0];
  v13 = MNLookUpItem(v12, 61536LL, 0LL, 0LL);
  if ( !v13 )
  {
    v15 = v18;
    if ( !v18 )
      v15 = *(_QWORD *)v17[0];
    v13 = MNLookUpItem(v15, 32864LL, 0LL, 0LL);
    if ( !v13 )
    {
      v16 = v18;
      if ( !v18 )
        v16 = *(_QWORD *)v17[0];
      v13 = MNLookUpItem(v16, 49264LL, 0LL, 0LL);
      if ( !v13 )
        goto LABEL_30;
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)v13 + 4LL) & 3) != 0 )
LABEL_30:
    v6 = 0;
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v17);
  return v6;
}
