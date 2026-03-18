/*
 * XREFs of xxxEndMenu @ 0x1402E9D60
 * Callers:
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140256AE8 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     xxxEndMenuLoop @ 0x140258BF0 (xxxEndMenuLoop.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x140259C18 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxMNCloseHierarchy @ 0x14003CF70 (xxxMNCloseHierarchy.c)
 *     xxxMNCancel @ 0x14003D33C (xxxMNCancel.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1400446D8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1400458EC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x140045B70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxDestroyWindow @ 0x14017EBE0 (xxxDestroyWindow.c)
 *     xxxMNReleaseCapture @ 0x14026AD74 (xxxMNReleaseCapture.c)
 */

_QWORD *__fastcall xxxEndMenu(__int64 a1)
{
  __int64 v2; // rdx
  _DWORD **v3; // rax
  _DWORD *v4; // rcx
  struct tagTHREADINFO *v5; // rbx
  __int64 v6; // r9
  struct tagTHREADINFO *v7; // rsi
  __int64 v8; // r8
  int v9; // eax
  int v10; // ebx
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v12, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v12, *(_QWORD *)a1);
  if ( *(_QWORD *)v12[0] )
  {
    v3 = (_DWORD **)v12[0];
    *(_DWORD *)(a1 + 8) &= 0xFFFFFFFA;
    v4 = *v3;
    **v3 |= 0x8000u;
    v5 = PtiCurrent((__int64)v4, v2);
    v7 = *(struct tagTHREADINFO **)(a1 + 32);
    v8 = *((_QWORD *)v5 + 59);
    v2 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
    if ( *(_QWORD *)(v8 + 112) == v2 )
      xxxMNReleaseCapture(a1, v2);
    if ( v5 == v7 )
    {
      v9 = *(_DWORD *)(a1 + 8);
      if ( (v9 & 0x10) == 0 )
      {
        *(_DWORD *)(a1 + 8) = v9 | 0x10;
        if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) )
        {
          if ( (**(_DWORD **)a1 & 0x80000) == 0 )
            xxxMNCancel(a1, 0, 0LL, 0LL);
        }
        else
        {
          v10 = **(_DWORD **)v12[0];
          xxxMNCloseHierarchy(*(_QWORD *)v12[0], a1, v8, v6);
          if ( (v10 & 8) != 0 && *(_QWORD *)(*(_QWORD *)v12[0] + 16LL) )
            xxxDestroyWindow(*(struct tagWND **)(*(_QWORD *)v12[0] + 16LL), v2);
        }
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v12, v2);
}
