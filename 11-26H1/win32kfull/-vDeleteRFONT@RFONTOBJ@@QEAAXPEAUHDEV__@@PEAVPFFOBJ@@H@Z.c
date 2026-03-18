/*
 * XREFs of ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z @ 0x140105CD0
 * Callers:
 *     vRemoveAllInactiveRFONTs @ 0x1400F45AC (vRemoveAllInactiveRFONTs.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1400F59E4 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     vKillEudcRFONTs @ 0x140104B04 (vKillEudcRFONTs.c)
 *     HDEV_DeleteRfontsAndUnloadDeviceFonts @ 0x140105ED0 (HDEV_DeleteRfontsAndUnloadDeviceFonts.c)
 *     ?vRestartKillEudcRFONTs@@YAXPEAU_LIST_ENTRY@@@Z @ 0x140325130 (-vRestartKillEudcRFONTs@@YAXPEAU_LIST_ENTRY@@@Z.c)
 *     vKillRFONTList @ 0x140327774 (vKillRFONTList.c)
 *     ?RestartInactiveHelper@@YAXPEAVRFONT@@@Z @ 0x140327B10 (-RestartInactiveHelper@@YAXPEAVRFONT@@@Z.c)
 *     ?vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z @ 0x1403281E0 (-vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BC@@@QEAAXXZ @ 0x1400C3B0C (-vUnlock@-$SEMOBJ@$0BC@@@QEAAXXZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1400C6734 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1400D12E0 (--$FreeIsolatedType@V-$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400F651C (--$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1400FD7BC (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x140101C04 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?cInactive@PDEVOBJ@@QEBAIXZ @ 0x1401AB924 (-cInactive@PDEVOBJ@@QEBAIXZ.c)
 *     ?cInactive@PDEVOBJ@@QEAAII@Z @ 0x1401C4AE0 (-cInactive@PDEVOBJ@@QEAAII@Z.c)
 *     ?vDeleteCache@RFONTOBJ@@QEAAXXZ @ 0x1401F208C (-vDeleteCache@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::vDeleteRFONT(RFONTOBJ *this, HDEV a2, struct PFFOBJ *a3, int a4)
{
  __int64 v6; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  void *v23; // rcx
  __int64 v24; // rcx
  __int64 **v25; // [rsp+30h] [rbp-18h] BYREF
  HDEV v26; // [rsp+50h] [rbp+8h] BYREF
  __int64 v27; // [rsp+58h] [rbp+10h] BYREF

  v6 = *(_QWORD *)this;
  v25 = *(__int64 ***)(*(_QWORD *)this + 120LL);
  v26 = *(HDEV *)(v6 + 96);
  if ( *((_QWORD *)v26 + 378) && a4 )
    PDEVOBJ::DestroyFont((PDEVOBJ *)&v26, (struct _FONTOBJ *)v6, (__int64)a3);
  v27 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(this, v6, a3) + 96) + 20328LL);
  GreAcquireSemaphoreCommon<18,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v27);
  v8 = *(int *)(*(_QWORD *)this + 668LL);
  if ( (int)v8 > 0 )
    GrepCaptureLiveMemoryDump(400LL, 49LL, v8);
  if ( a2 )
  {
    v9 = *(_QWORD *)this + 672LL;
    v10 = *(_QWORD *)v9;
    if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 )
      goto LABEL_21;
    v11 = *(_QWORD **)(*(_QWORD *)this + 680LL);
    if ( *v11 != v9 )
      goto LABEL_21;
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    v12 = *(_QWORD *)this;
    v26 = a2;
    *(_QWORD *)(v12 + 672) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 680LL) = 0LL;
    v13 = PDEVOBJ::cInactive((PDEVOBJ *)&v26);
    PDEVOBJ::cInactive((PDEVOBJ *)&v26, v13 - 1);
  }
  if ( !a3 )
    goto LABEL_14;
  v14 = *(_QWORD *)this + 488LL;
  v15 = *(_QWORD *)v14;
  if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14 || (v16 = *(_QWORD **)(*(_QWORD *)this + 496LL), *v16 != v14) )
LABEL_21:
    __fastfail(3u);
  *v16 = v15;
  *(_QWORD *)(v15 + 8) = v16;
  *(_QWORD *)(*(_QWORD *)this + 488LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 496LL) = 0LL;
LABEL_14:
  SEMOBJ<18>::vUnlock((HSEMAPHORE *)&v27);
  PFEOBJ::vFreepfdg(&v25, v17, v18);
  if ( a3 )
    PFFOBJ::vDeleteRFONTRef(a3, v19, v20);
  RFONTOBJ::vDeleteCache(this);
  v23 = *(void **)(*(_QWORD *)this + 696LL);
  if ( v23 )
    Win32FreePool(v23);
  v24 = *(_QWORD *)(*(_QWORD *)this + 856LL);
  if ( v24 )
    GreDeleteSemaphore(v24, v21, v22);
  GreDeleteSemaphore(*(_QWORD *)(*(_QWORD *)this + 504LL), v21, v22);
  FreeIsolatedType<NSInstrumentation::CTypeIsolation<237568,928>>(*(Gre::Base **)this);
  *(_QWORD *)this = 0LL;
}
