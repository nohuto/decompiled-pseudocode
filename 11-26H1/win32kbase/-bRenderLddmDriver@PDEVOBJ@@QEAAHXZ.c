/*
 * XREFs of ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1401560A0
 * Callers:
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1401B9304 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1401F29F0 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 * Callees:
 *     ?IsCddCddRemoteSessionFilteringAllowed@@YAHXZ @ 0x14000D8B0 (-IsCddCddRemoteSessionFilteringAllowed@@YAHXZ.c)
 */

__int64 __fastcall PDEVOBJ::bRenderLddmDriver(PDEVOBJ *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  int v4; // eax
  int v5; // edx
  bool v6; // zf
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax

  v1 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)this + 2568LL);
  if ( v3 && v3 != -4 )
  {
    v4 = *(_DWORD *)(v3 + 160);
    v5 = v4 & 0x800000;
    if ( (v4 & 0x4000000) == 0 )
    {
      v6 = v5 == 0;
LABEL_5:
      LOBYTE(v1) = !v6;
      return v1;
    }
    v6 = v5 == 0;
    if ( v5 )
      goto LABEL_5;
    v8 = *(_QWORD *)(W32GetSessionState(this) + 88);
    if ( (unsigned int)IsCddCddRemoteSessionFilteringAllowed(v9) )
    {
      v10 = *(_QWORD *)(*(_QWORD *)this + 2568LL);
      if ( (*(_DWORD *)(v10 + 160) & 0x4000000) != 0 || *(_DWORD *)(v8 + 1140) )
      {
        v6 = *(_QWORD *)(v10 + 272) == 0LL;
        goto LABEL_5;
      }
    }
  }
  return 0LL;
}
