/*
 * XREFs of ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x14003D23C
 * Callers:
 *     xxxMNButtonUp @ 0x14003CC8C (xxxMNButtonUp.c)
 *     xxxMNDoubleClick @ 0x1402BFA0C (xxxMNDoubleClick.c)
 *     xxxMNKeyDown @ 0x1402BFBCC (xxxMNKeyDown.c)
 * Callees:
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x140034D4C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     xxxMNCancel @ 0x14003D33C (xxxMNCancel.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     zzzStartFade @ 0x1401E99CC (zzzStartFade.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x140267AFC (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 */

__int64 __fastcall xxxMNDismissWithNotify(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned int v10; // edi
  int v11; // ebx
  int v12; // r8d
  _QWORD v14[4]; // [rsp+30h] [rbp-38h] BYREF

  if ( (**(_DWORD **)a1 & 4) != 0 )
  {
    v10 = 274;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 8) & 0x20000) != 0 )
    {
      v10 = 294;
      a5 = **(_QWORD **)(**(_QWORD **)a2 + 40LL);
      goto LABEL_7;
    }
    v10 = 273;
    a5 = 0LL;
  }
  a4 = *(_DWORD *)(*(_QWORD *)a3 + 8LL);
LABEL_7:
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v14, *(_QWORD *)(**(_QWORD **)a2 + 40LL));
  v11 = zzzMNFadeSelection(v14, a3);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v14);
  if ( v11 )
    zzzStartFade();
  v12 = -1;
  if ( v10 != 274 )
    v12 = -3;
  xxxWindowEvent(0x8013u, *(struct tagWND **)(**(_QWORD **)a2 + 16LL), v12, a4, 0);
  return xxxMNCancel(a1, v10, a4, a5);
}
