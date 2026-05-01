/*
 * XREFs of ??$reset@VDDAScreenCapture@@$0A@@?$shared_ptr@VDDAScreenCapture@@@std@@QEAAXPEAVDDAScreenCapture@@@Z @ 0x1803DFFD4
 * Callers:
 *     ?GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x1803E0520 (-GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ??1?$unique_ptr@VDDAScreenCapture@@U?$default_delete@VDDAScreenCapture@@@std@@@std@@QEAA@XZ @ 0x1803E0080 (--1-$unique_ptr@VDDAScreenCapture@@U-$default_delete@VDDAScreenCapture@@@std@@@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::shared_ptr<DDAScreenCapture>::reset<DDAScreenCapture,0>(_QWORD *a1, __int64 a2)
{
  _DWORD *v4; // rbx
  std::_Ref_count_base *v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a2;
  v4 = operator new(0x18uLL);
  *(_OWORD *)v4 = 0LL;
  v4[2] = 1;
  v4[3] = 1;
  *(_QWORD *)v4 = &std::_Ref_count<DDAScreenCapture>::`vftable';
  *((_QWORD *)v4 + 2) = a2;
  v6 = 0LL;
  std::unique_ptr<DDAScreenCapture>::~unique_ptr<DDAScreenCapture>(&v6);
  *a1 = a2;
  v5 = (std::_Ref_count_base *)a1[1];
  a1[1] = v4;
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
}
