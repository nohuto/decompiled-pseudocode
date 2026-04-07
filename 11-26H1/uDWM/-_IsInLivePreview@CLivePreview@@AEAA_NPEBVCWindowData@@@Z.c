/*
 * XREFs of ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800B97C8
 * Callers:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180013644 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180014C48 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18001A06C (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x1800431C0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x180043524 (-ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CLivePreview::_IsInLivePreview(CLivePreview *this, const struct CWindowData *a2)
{
  __int64 v2; // r8
  char v3; // r9

  LODWORD(v2) = *((_DWORD *)this + 58);
  v3 = 0;
  while ( 1 )
  {
    v2 = (unsigned int)(v2 - 1);
    if ( (int)v2 < 0 )
      break;
    if ( *(const struct CWindowData **)(*((_QWORD *)this + 26) + 40 * v2) == a2 )
      return 1;
  }
  return v3;
}
