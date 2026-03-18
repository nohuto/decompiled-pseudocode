/*
 * XREFs of ?vLock@EPATHOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHPATH__@@@Z @ 0x1401DEB20
 * Callers:
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x14006DB98 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ @ 0x1400D86E8 (-ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140114328 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1401DE9F8 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     XEPATHOBJ_vConstructHPATH @ 0x1401DEAA8 (XEPATHOBJ_vConstructHPATH.c)
 *     EngCreatePath @ 0x140296890 (EngCreatePath.c)
 * Callees:
 *     <none>
 */

void __fastcall EPATHOBJ::vLock(EPATHOBJ *this, struct Gre::Base::SESSION_GLOBALS *a2, struct HPATH__ *a3)
{
  struct HPATH__ *v5; // rdx
  __int64 v6; // rax

  v5 = a3;
  LOBYTE(a3) = 7;
  v6 = HmgShareLock(a2, v5, a3, 1LL);
  *((_QWORD *)this + 1) = v6;
  if ( v6 )
  {
    *((_DWORD *)this + 1) = *(_DWORD *)(v6 + 96);
    *(_DWORD *)this = *(_DWORD *)(v6 + 92);
  }
}
