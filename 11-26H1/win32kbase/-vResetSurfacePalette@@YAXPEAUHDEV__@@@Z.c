/*
 * XREFs of ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1400C9EC4
 * Callers:
 *     bDynamicModeChange @ 0x140030E68 (bDynamicModeChange.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1400C85F0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1400C9FCC (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall vResetSurfacePalette(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 i; // rdx
  void (__fastcall *v7)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  int v8; // [rsp+40h] [rbp+8h]
  int v9; // [rsp+40h] [rbp+8h]
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( (*((_DWORD *)a1 + 539) & 0x100) != 0 )
  {
    v3 = a1[224];
    v10 = v3;
    if ( *(_DWORD *)(v3 + 60) == 20 && (*(_DWORD *)(v3 + 24) & 0x11000) == 0 )
    {
      v4 = *(_QWORD *)(v2 + 3872);
      v5 = 32LL;
      while ( 1 )
      {
        v8 = *(_DWORD *)(v5 + *(_QWORD *)(v4 + 112));
        HIBYTE(v8) = 48;
        *(_DWORD *)(v5 + *(_QWORD *)(v3 + 112)) = v8;
        v5 += 4LL;
        if ( v5 >= 40 )
          break;
        v3 = v10;
      }
      for ( i = 984LL; i < 992; i += 4LL )
      {
        v9 = *(_DWORD *)(*(_QWORD *)(v4 + 112) + i - 944);
        HIBYTE(v9) = 48;
        *(_DWORD *)(i + *(_QWORD *)(v10 + 112)) = v9;
      }
      v3 = v10;
    }
    if ( (a1[5] & 0x400) == 0 )
    {
      v7 = (void (__fastcall *)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))a1[357];
      if ( v7 )
        v7(a1[223], &v10, 0LL, 0LL, *(_DWORD *)(v3 + 28));
    }
  }
}
