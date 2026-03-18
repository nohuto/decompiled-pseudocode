/*
 * XREFs of ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x14016EC10
 * Callers:
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x14016EA90 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 *     xxxHiliteMenuItem @ 0x1402E16B0 (xxxHiliteMenuItem.c)
 * Callees:
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     MNLookUpItem @ 0x1400476D8 (MNLookUpItem.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140049F78 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?ItemContainingSubMenu@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_K@Z @ 0x14016ECFC (-ItemContainingSubMenu@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_K@Z.c)
 */

__int64 __fastcall UT_FindTopLevelMenuIndex(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v14; // [rsp+30h] [rbp-10h]
  __int64 v15; // [rsp+50h] [rbp+10h] BYREF

  v3 = (unsigned int)a2;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v13, a2);
  v4 = v14;
  if ( !v14 )
    v4 = *(_QWORD *)v13[0];
  v5 = *(_QWORD **)(a1 + 16);
  v15 = v4;
  if ( !v5 )
    v5 = **(_QWORD ***)a1;
  v6 = MNLookUpItem(v5, (unsigned int)v3, 0, &v15);
  v14 = 0LL;
  v7 = v6;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v13, v15);
  if ( !v7 || *(_QWORD *)(v7 + 16) )
  {
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v13, v8);
    return 0xFFFFFFFFLL;
  }
  v10 = v14;
  if ( v14 )
  {
    if ( v14 != *(_QWORD *)(a1 + 16) )
      goto LABEL_10;
  }
  else if ( *(_QWORD *)v13[0] != **(_QWORD **)a1 )
  {
    v10 = v14;
LABEL_10:
    if ( !v10 )
      v10 = *(_QWORD *)v13[0];
    goto LABEL_12;
  }
  v10 = v3;
LABEL_12:
  v11 = ItemContainingSubMenu(a1, v10);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v13, v12);
  return v11;
}
