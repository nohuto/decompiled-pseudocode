/*
 * XREFs of MNFlushDestroyedPopups @ 0x1402222C0
 * Callers:
 *     xxxMNLoop @ 0x14015A654 (xxxMNLoop.c)
 *     xxxMNEndMenuState @ 0x14015BDC0 (xxxMNEndMenuState.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1400446D8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1400458EC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x140045B70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNFreePopup @ 0x1402565F0 (MNFreePopup.c)
 *     ??$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAUtagPOPUPMENU@@@Z @ 0x140267238 (--$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstr.c)
 */

_QWORD *__fastcall MNFlushDestroyedPopups(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // rax
  __int64 v4; // rdx
  struct tagTHREADINFO *v5; // rax
  _DWORD *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  _DWORD *v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+28h] [rbp-28h] BYREF
  __int64 *v13; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v15[2]; // [rsp+40h] [rbp-10h] BYREF

  v3 = PtiCurrent(a1, a2);
  v11 = gSmartObjNullRef;
  v12 = *((_QWORD *)v3 + 209);
  v4 = v12;
  *((_QWORD *)v3 + 209) = &v12;
  v5 = PtiCurrent((__int64)&v12, v4);
  v13 = (__int64 *)gSmartObjNullRef;
  v6 = (_DWORD *)a1;
  v14 = *((_QWORD *)v5 + 209);
  *((_QWORD *)v5 + 209) = &v14;
LABEL_2:
  SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)&v11, (__int64)v6);
  while ( *(_QWORD *)(*(_QWORD *)v11 + 72LL) )
  {
    v6 = *(_DWORD **)(*(_QWORD *)v11 + 72LL);
    if ( (*v6 & 0x8000) == 0 )
      goto LABEL_2;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)&v13, (__int64)v6);
    *(_QWORD *)(*(_QWORD *)v11 + 72LL) = *(_QWORD *)(*v13 + 72);
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v15, *v13);
    MNFreePopup(v15);
    v10 = (_DWORD *)*v13;
    if ( (*(_DWORD *)*v13 & 0x40000000) != 0 )
      *v10 &= ~0x20000000u;
    else
      FreeIsolatedTypeAndClearStackReferences<tagPOPUPMENU,NSInstrumentation::CTypeIsolation<24576,96>>(v10);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v13, v7);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v11, v8);
}
