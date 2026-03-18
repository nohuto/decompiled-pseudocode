/*
 * XREFs of HmgSafeNextObjt @ 0x140032210
 * Callers:
 *     vDynamicConvertNewSurfaceDCs @ 0x14002F1A0 (vDynamicConvertNewSurfaceDCs.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x140030690 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 *     ?DrvDisableDisplay@@YAHAEAVPDEVOBJ@@H@Z @ 0x140030770 (-DrvDisableDisplay@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     bDynamicProcessAllDriverRealizations @ 0x140030BE0 (bDynamicProcessAllDriverRealizations.c)
 *     bDynamicModeChange @ 0x140030E68 (bDynamicModeChange.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x140032100 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x140033AE4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1400C85F0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1400C9FCC (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1400CA374 (-vCleanupDCs@@YAXK@Z.c)
 *     ?DrvBackoutRedirectionDeviceBitmap@@YAXPEAUHDEV__@@@Z @ 0x1401994C4 (-DrvBackoutRedirectionDeviceBitmap@@YAXPEAUHDEV__@@@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1401F5468 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HmgSafeNextObjt(__int64 a1, char a2, __int64 **a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rbp
  __int64 *v7; // rax
  unsigned __int64 v8; // r10
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v5 = a1;
  v6 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v10 = 0LL;
  while ( 1 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(v6 + 8) + 32LL))(
           *(_QWORD *)(v6 + 8),
           v5,
           &v10);
    if ( !v5 )
      break;
    if ( *(_BYTE *)(v10 + 14) == a2 )
    {
      v7 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v6 + 8) + 96LL))(
                        *(_QWORD *)(v6 + 8),
                        v5);
      v8 = (unsigned __int16)v5 | (unsigned __int64)(*(unsigned __int16 *)(v10 + 12) << 16);
      if ( (_DWORD)v8 == (unsigned int)*v7 )
      {
        if ( v8 )
        {
          *a3 = v7;
          return v5;
        }
      }
      else
      {
        GrepCaptureLiveMemoryDump(400LL, 47LL, v10, *v7, v8, 0);
      }
    }
  }
  *a3 = 0LL;
  return 0LL;
}
