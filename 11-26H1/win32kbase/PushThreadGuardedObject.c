/*
 * XREFs of PushThreadGuardedObject @ 0x140030350
 * Callers:
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x140011400 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1400239C0 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z @ 0x140026360 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z.c)
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x14002F138 (--0AUTO_TGO@@IEAA@XZ.c)
 *     bMigrateSurfaceForConversion @ 0x14002F4E0 (bMigrateSurfaceForConversion.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VBRUSHMEMOBJ@@@@QEAA@XZ @ 0x140030308 (--0-$UnexpectedThreadTerminationHandler@VBRUSHMEMOBJ@@@@QEAA@XZ.c)
 *     bDynamicModeChange @ 0x140030E68 (bDynamicModeChange.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1400C2A7C (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1400C7A4C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     NtGdiCreateRectRgn @ 0x140102C20 (NtGdiCreateRectRgn.c)
 *     ??0DCMEMOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140164BA0 (--0DCMEMOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@KHH@Z @ 0x140164CD8 (--0DCMEMOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@KHH@Z.c)
 *     bDeletePalette @ 0x14017D940 (bDeletePalette.c)
 *     GreCreateRectRgn @ 0x140194400 (GreCreateRectRgn.c)
 *     ??0XEPALOBJ2@@QEAA@XZ @ 0x140194898 (--0XEPALOBJ2@@QEAA@XZ.c)
 *     ??0?$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x14019A264 (--0-$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1401BFD9C (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ??0?$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1401F1C1C (--0-$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F1F78 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PushThreadGuardedObject(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rax

  v3 = 0;
  if ( a1 )
  {
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1, a2);
    if ( !CurrentThreadWin32Thread || (v8 = *CurrentThreadWin32Thread) == 0 )
    {
      a1[2] = a2;
      a1[3] = a3;
LABEL_5:
      a1[1] = a1;
      *a1 = a1;
      return v3;
    }
    a1[2] = a2;
    a1[3] = a3;
    v10 = v8 + 8;
    if ( !v10 )
      goto LABEL_5;
    v11 = *(_QWORD *)(v10 + 88);
    v12 = (_QWORD *)(v10 + 88);
    if ( *(_QWORD **)(v11 + 8) != v12 )
      __fastfail(3u);
    *a1 = v11;
    v3 = 1;
    a1[1] = v12;
    *(_QWORD *)(v11 + 8) = a1;
    *v12 = a1;
  }
  return v3;
}
