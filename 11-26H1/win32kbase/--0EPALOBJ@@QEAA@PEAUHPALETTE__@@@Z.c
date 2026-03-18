/*
 * XREFs of ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1400C2CFC
 * Callers:
 *     ?GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z @ 0x140023DBC (-GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z @ 0x140026360 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1400372F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     GreDeleteObject @ 0x140082330 (GreDeleteObject.c)
 *     EngDeletePalette @ 0x1400C2C10 (EngDeletePalette.c)
 *     NtGdiDeleteObjectApp @ 0x1400C57B0 (NtGdiDeleteObjectApp.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1400C85F0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1401F1028 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1401F29F0 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1401FABE8 (-vRemoveRefPalettes@@YAXK@Z.c)
 *     bInitPALOBJ @ 0x1402F0008 (bInitPALOBJ.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?InRegion@ThreadRestrictNewHandlesRegion@@QEAA_NI@Z @ 0x140023420 (-InRegion@ThreadRestrictNewHandlesRegion@@QEAA_NI@Z.c)
 *     UMPDGetThreadClientPID @ 0x140035858 (UMPDGetThreadClientPID.c)
 *     W32GetCurrentThreadAndEnterCriticalRegion @ 0x1400C36A0 (W32GetCurrentThreadAndEnterCriticalRegion.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

EPALOBJ *__fastcall EPALOBJ::EPALOBJ(EPALOBJ *this, HPALETTE a2)
{
  __int64 v2; // rsi
  unsigned int v3; // r15d
  __int64 SessionState; // rax
  __int64 v5; // r13
  __int64 CurrentThreadAndEnterCriticalRegion; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r12
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // rax
  unsigned int *v14; // r14
  unsigned int v15; // r15d
  __int64 *v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rax
  EPALOBJ *result; // rax
  ThreadRestrictNewHandlesRegion *v20; // rcx
  unsigned int *v21; // [rsp+20h] [rbp-28h] BYREF
  int v22; // [rsp+28h] [rbp-20h]
  __int16 v23; // [rsp+2Ch] [rbp-1Ch]
  __int64 v24; // [rsp+30h] [rbp-18h]
  __int16 v26; // [rsp+9Ah] [rbp+52h]
  unsigned int v27; // [rsp+A0h] [rbp+58h]
  __int64 v28; // [rsp+A8h] [rbp+60h] BYREF

  v26 = WORD1(a2);
  v2 = 0LL;
  v3 = (unsigned int)a2;
  *(_QWORD *)this = 0LL;
  v23 = 0;
  SessionState = W32GetSessionState(this);
  v28 = 0LL;
  v5 = *(_QWORD *)(SessionState + 88);
  v24 = v5;
  v27 = (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000;
  CurrentThreadAndEnterCriticalRegion = W32GetCurrentThreadAndEnterCriticalRegion(&v28);
  v7 = CurrentThreadAndEnterCriticalRegion + 8;
  v8 = -CurrentThreadAndEnterCriticalRegion;
  v9 = v7 & -(__int64)(v8 != 0);
  if ( v9 )
    v10 = *(_QWORD *)((v7 & -(__int64)(v8 != 0)) + 0x40);
  else
    v10 = 0LL;
  v11 = *(_QWORD *)(v5 + 8);
  v12 = 1;
  v22 = 1;
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 40LL))(
          v11,
          (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000);
  v21 = (unsigned int *)v13;
  v14 = (unsigned int *)v13;
  if ( v13 )
  {
    _m_prefetchw((const void *)(v13 + 8));
    v15 = *(_DWORD *)(v13 + 8) & 0xFFFFFFFE;
    if ( v15 == (v28 & 0xFFFFFFFC) || !v15 || v10 && v15 == (unsigned int)UMPDGetThreadClientPID(v9) )
    {
      if ( (*(_BYTE *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v5 + 8) + 96LL))(
                         *(_QWORD *)(v5 + 8),
                         *v14)
                     + 14) & 0x20) == 0 )
        goto LABEL_6;
      if ( v9 )
      {
        v20 = *(ThreadRestrictNewHandlesRegion **)(v9 + 328);
        if ( v20 )
        {
          if ( *((_BYTE *)v20 + 80) && ThreadRestrictNewHandlesRegion::InRegion(v20, v27) )
            goto LABEL_6;
        }
      }
      LOBYTE(v23) = 1;
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v21);
    v14 = v21;
    v12 = v22;
    v5 = v24;
LABEL_6:
    HIWORD(v3) = v26;
    goto LABEL_7;
  }
  v12 = 0;
  KeLeaveCriticalRegion();
LABEL_7:
  if ( v12 )
  {
    if ( *((_BYTE *)v14 + 14) == 8 && *((_WORD *)v14 + 6) == HIWORD(v3) )
    {
      v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v5 + 8) + 96LL))(*(_QWORD *)(v5 + 8), *v14);
      ++*(_DWORD *)(v2 + 8);
    }
    v16 = *(__int64 **)(v5 + 8);
    v17 = *v16;
    v18 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v16 + 96))(v16, *v14);
    (*(void (__fastcall **)(__int64 *, __int64))(v17 + 48))(v16, v18);
    KeLeaveCriticalRegion();
  }
  result = this;
  *(_QWORD *)this = v2;
  return result;
}
