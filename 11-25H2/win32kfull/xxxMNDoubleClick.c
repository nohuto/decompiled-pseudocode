/*
 * XREFs of xxxMNDoubleClick @ 0x1402BFA0C
 * Callers:
 *     xxxHandleMenuMessages @ 0x1400439DC (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 * Callees:
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x14003D23C (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     MNIspItemValid @ 0x140043458 (MNIspItemValid.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140047180 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140049F78 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxInternalGetMessage @ 0x1401153B0 (xxxInternalGetMessage.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1402BF250 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     _GetMenuDefaultItem @ 0x1402F2F38 (_GetMenuDefaultItem.c)
 */

__int64 __fastcall xxxMNDoubleClick(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rdx
  _QWORD *v9; // r10
  __int64 v10; // rdx
  int MenuDefaultItem; // eax
  __int64 v12; // r10
  __int64 v13; // rcx
  __int64 v14; // r10
  unsigned __int64 v16; // [rsp+20h] [rbp-60h]
  unsigned __int64 v17; // [rsp+20h] [rbp-60h]
  __int64 v18[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v19; // [rsp+40h] [rbp-40h]
  _OWORD v20[3]; // [rsp+48h] [rbp-38h] BYREF

  v4 = a3;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v18, a2);
  LODWORD(v16) = 2;
  memset(v20, 0, sizeof(v20));
  v6 = 1;
  if ( (unsigned int)xxxInternalGetMessage((__int64)v20, 0LL, 0, 0, v16, 0)
    && (DWORD2(v20[0]) == 514 || DWORD2(v20[0]) == 162) )
  {
    LODWORD(v17) = 1;
    xxxInternalGetMessage((__int64)v20, 0LL, SDWORD2(v20[0]), SDWORD2(v20[0]), v17, 0);
  }
  v7 = *(_QWORD *)(**(_QWORD **)a2 + 40LL);
  v19 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v18, v7);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v18)
    || (unsigned int)v4 >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v18[0] + 40LL) + 44LL) )
  {
    xxxMNDoScroll(a2, *(_DWORD *)(**(_QWORD **)a2 + 80LL), 0);
LABEL_17:
    v6 = 0;
    goto LABEL_18;
  }
  v9 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)v18[0] + 88LL) + 96 * v4);
  if ( (*(_DWORD *)(*v9 + 4LL) & 3) != 0 )
    goto LABEL_17;
  while ( 1 )
  {
    v10 = v9[2];
    if ( !v10 )
      break;
    v19 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v18, v10);
    MenuDefaultItem = GetMenuDefaultItem();
    LODWORD(v4) = MenuDefaultItem;
    if ( MenuDefaultItem == -1 )
      goto LABEL_17;
    v9 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)v18[0] + 88LL) + 96LL * MenuDefaultItem);
  }
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v18) )
    goto LABEL_17;
  v13 = v19;
  if ( !v19 )
    v13 = *(_QWORD *)v18[0];
  if ( !MNIspItemValid(v13, v12) )
    goto LABEL_17;
  xxxMNDismissWithNotify(a1, a2, v14, v4, 0LL);
LABEL_18:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v18, v8);
  return v6;
}
