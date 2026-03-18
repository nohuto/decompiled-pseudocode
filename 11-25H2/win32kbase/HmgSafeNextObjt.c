/*
 * XREFs of HmgSafeNextObjt @ 0x1400726E0
 * Callers:
 *     ?DrvBackoutRedirectionDeviceBitmap@@YAXPEAUHDEV__@@@Z @ 0x140070C10 (-DrvBackoutRedirectionDeviceBitmap@@YAXPEAUHDEV__@@@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x140070EB0 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x140070FD4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     bDynamicProcessAllDriverRealizations @ 0x140071620 (bDynamicProcessAllDriverRealizations.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x140071D90 (vDynamicConvertNewSurfaceDCs.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x140071E64 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x14007230C (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1400725DC (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1400856CC (-vCleanupDCs@@YAXK@Z.c)
 *     ?vMarkSurfacesWithHDEV@@YAXPEAUHDEV__@@@Z @ 0x140092D48 (-vMarkSurfacesWithHDEV@@YAXPEAUHDEV__@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x140093688 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1401792DC (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 *     bDynamicModeChange @ 0x1401793D8 (bDynamicModeChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HmgSafeNextObjt(__int64 a1, char a2, _QWORD *a3)
{
  unsigned int v4; // ebx
  __int64 SessionState; // rax
  struct _KTHREAD *CurrentThread; // r12
  __int64 v7; // r13
  __int64 v8; // r10
  __int64 v9; // rdi
  unsigned int v10; // esi
  __int64 v11; // rbp
  unsigned int v12; // r9d
  unsigned int v13; // r14d
  unsigned int v14; // ecx
  __int64 v15; // r8
  unsigned int v16; // eax
  __int64 v17; // r11
  unsigned __int64 v18; // rdx
  unsigned int v19; // ecx
  __int64 v20; // rdi
  __int64 v21; // rax
  unsigned int v22; // ecx
  __int64 v23; // r8
  __int64 v24; // rdx
  unsigned __int64 v25; // r8

  v4 = a1;
  SessionState = W32GetSessionState(a1);
  CurrentThread = KeGetCurrentThread();
  v7 = *(_QWORD *)(SessionState + 88);
  while ( 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
LABEL_3:
      v9 = *(_QWORD *)(v7 + 5672);
      v10 = *(_DWORD *)v9;
      while ( 1 )
      {
        if ( ++v4 >= v10 )
          goto LABEL_40;
        v11 = *(_QWORD *)(v9 + 16);
        v12 = *(_DWORD *)(v11 + 2056);
        v13 = v12 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16);
        if ( v4 < v13 )
        {
          if ( v4 >= v12 )
            v14 = ((v4 - v12) >> 16) + 1;
          else
            v14 = 0;
          v15 = *(_QWORD *)(v11 + 8LL * v14 + 8);
          if ( v14 )
            v16 = v4 + ((1 - v14) << 16) - v12;
          else
            v16 = v4;
          v17 = 0LL;
          if ( v16 < *(_DWORD *)(v15 + 20) )
          {
            if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v15 + 24) + 8 * ((unsigned __int64)v16 >> 8))
                           + 16LL * (unsigned __int8)v16
                           + 8) )
              v17 = *(_QWORD *)v15 + 24LL * v16;
            v8 = 0LL;
          }
          if ( v17 )
            break;
        }
      }
      if ( !v4 )
      {
LABEL_40:
        *a3 = 0LL;
        return 0LL;
      }
      if ( *(_BYTE *)(v17 + 14) == a2 )
      {
        v18 = v4;
        if ( v4 >= 0x10000 )
        {
          if ( v10 <= 0x10000 )
          {
            v18 = (unsigned __int16)v4;
          }
          else
          {
            if ( (unsigned __int16)v4 < v13 )
            {
              v19 = (unsigned __int16)v4 >= v12 ? (((unsigned __int16)v4 - v12) >> 16) + 1 : 0;
              v20 = *(_QWORD *)(v11 + 8LL * v19 + 8);
              v21 = v19 ? (unsigned __int16)v4 + ((1 - v19) << 16) - v12 : (unsigned __int16)v4;
              if ( (unsigned int)v21 < *(_DWORD *)(v20 + 20) )
                v8 = *(_QWORD *)v20 + 24 * v21;
            }
            if ( *(unsigned __int8 *)(v8 + 13) == HIWORD(v4) )
              v18 = (unsigned __int16)v4;
            v8 = 0LL;
          }
        }
        if ( (unsigned int)v18 >= v13 )
          goto LABEL_49;
        v22 = (unsigned int)v18 >= v12 ? (((unsigned int)v18 - v12) >> 16) + 1 : 0;
        v23 = *(_QWORD *)(v11 + 8LL * v22 + 8);
        if ( v22 )
          v18 = ((1 - v22) << 16) - v12 + (unsigned int)v18;
        if ( (unsigned int)v18 >= *(_DWORD *)(v23 + 20) )
LABEL_49:
          v24 = 0LL;
        else
          v24 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v23 + 24) + 8 * (v18 >> 8)) + 16LL * (unsigned __int8)v18 + 8);
        if ( (*(_BYTE *)(v17 + 15) & 0x40) == 0
          || *(_WORD *)(v24 + 12) && *(struct _KTHREAD **)(v24 + 16) == CurrentThread )
        {
          break;
        }
      }
    }
    v25 = (unsigned __int16)v4 | (unsigned __int64)(*(unsigned __int16 *)(v17 + 12) << 16);
    if ( (_DWORD)v25 == (unsigned int)*(_QWORD *)v24 )
      break;
    DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 47LL, v17, *(_QWORD *)v24, v25, 0LL, 0LL, 0);
  }
  if ( !v25 )
    goto LABEL_3;
  *a3 = v24;
  return v4;
}
