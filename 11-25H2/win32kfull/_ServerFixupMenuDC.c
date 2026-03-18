/*
 * XREFs of _ServerFixupMenuDC @ 0x14015522C
 * Callers:
 *     SfnINLPUAHDRAWMENUITEM @ 0x1401D6690 (SfnINLPUAHDRAWMENUITEM.c)
 *     SfnINLPUAHINITMENU @ 0x1401D7CF0 (SfnINLPUAHINITMENU.c)
 *     SfnINOUTLPUAHMEASUREMENUITEM @ 0x1401E5620 (SfnINOUTLPUAHMEASUREMENUITEM.c)
 *     SfnINLPUAHDRAWMENU @ 0x1401F3950 (SfnINLPUAHDRAWMENU.c)
 *     SfnINLPUAHNCPAINTMENUPOPUP @ 0x1402099E0 (SfnINLPUAHNCPAINTMENUPOPUP.c)
 * Callees:
 *     GreGetTextAlign @ 0x14003F490 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x14003F4D8 (GreSetTextAlign.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z @ 0x14003F6E8 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z.c)
 *     MNGetpItemFromIndex @ 0x140042B84 (MNGetpItemFromIndex.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140049F78 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     GreSelectFont @ 0x140054D30 (GreSelectFont.c)
 *     _WindowFromDC @ 0x1401553E8 (_WindowFromDC.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1401C8BD4 (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 */

HDC __fastcall ServerFixupMenuDC(HDC a1, __int64 a2, unsigned int a3, int a4)
{
  HDC DCEx; // rsi
  unsigned int CurrentProcessId; // ebx
  __int64 v10; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  const struct tagWND *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 UserSessionState; // rax
  HFONT *DPIMETRICS; // rax
  __int64 v19; // rax
  int TextAlign; // r8d
  __int64 v21; // rcx
  _DWORD **v22; // rax
  bool v23; // zf
  __int64 v24[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v25; // [rsp+30h] [rbp-28h]

  DCEx = 0LL;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  if ( (unsigned int)GreGetObjectOwner(a1, 1LL) != (CurrentProcessId & 0xFFFFFFFC) && a1 )
  {
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v24, v10);
    v12 = WindowFromDC(a1);
    v14 = (const struct tagWND *)v12;
    if ( v12 )
    {
      DCEx = (HDC)_GetDCEx(v12, 0LL, 65539LL);
      UserSessionState = W32GetUserSessionState(v16, v15);
      GreSelectBrush(DCEx, *(_QWORD *)(*(_QWORD *)(UserSessionState + 19872) + 4752LL));
      DPIMETRICS = (HFONT *)GetDPIMETRICS(v14);
      GreSelectFont(DCEx, *DPIMETRICS);
      v19 = ValidateHmenu(a2, 1LL);
      v25 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=((__int64)v24, v19);
      if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(v24) )
      {
        TextAlign = GreGetTextAlign(a1);
        if ( a4 )
        {
          v13 = *(_QWORD *)v24[0];
          if ( *(_QWORD *)(*(_QWORD *)v24[0] + 88LL) )
          {
            v21 = v25;
            if ( !v25 )
              v21 = *(_QWORD *)v24[0];
            v22 = (_DWORD **)MNGetpItemFromIndex(v21, a3);
            if ( !v22 )
              goto LABEL_5;
            v23 = (**v22 & 0x2000) == 0;
            goto LABEL_15;
          }
        }
        if ( *(_QWORD *)(*(_QWORD *)v24[0] + 88LL) )
        {
          v23 = (***(_DWORD ***)(*(_QWORD *)v24[0] + 88LL) & 0x2000) == 0;
LABEL_15:
          if ( !v23 )
            GreSetTextAlign(a1, TextAlign | 0x100);
        }
      }
    }
LABEL_5:
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v24, v13);
  }
  return DCEx;
}
