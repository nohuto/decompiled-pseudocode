/*
 * XREFs of ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1401BAF24
 * Callers:
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1401BAD98 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 *     xxxHiliteMenuItem @ 0x1402F2B8C (xxxHiliteMenuItem.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     MNLookUpItem @ 0x1400344B8 (MNLookUpItem.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?ItemContainingSubMenu@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_K@Z @ 0x1401BB010 (-ItemContainingSubMenu@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_K@Z.c)
 */

__int64 __fastcall UT_FindTopLevelMenuIndex(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rsi
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 v10[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v11; // [rsp+30h] [rbp-10h]
  __int64 v12; // [rsp+50h] [rbp+10h] BYREF

  v3 = a2;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v10);
  v4 = v11;
  if ( !v11 )
    v4 = *(_QWORD *)v10[0];
  v5 = *(_QWORD **)(a1 + 16);
  v12 = v4;
  if ( !v5 )
    v5 = **(_QWORD ***)a1;
  v6 = MNLookUpItem(v5, v3, 0, &v12);
  v11 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v10, v12);
  if ( !v6 || *(_QWORD *)(v6 + 16) )
  {
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v10);
    return 0xFFFFFFFFLL;
  }
  v8 = v11;
  if ( !v11 )
  {
    if ( *(_QWORD *)v10[0] == **(_QWORD **)a1 )
      goto LABEL_10;
    v8 = v11;
LABEL_13:
    if ( !v8 )
      v8 = *(_QWORD *)v10[0];
    goto LABEL_15;
  }
  if ( v11 != *(_QWORD *)(a1 + 16) )
    goto LABEL_13;
LABEL_10:
  v8 = v3;
LABEL_15:
  v9 = ItemContainingSubMenu(a1, v8);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v10);
  return v9;
}
