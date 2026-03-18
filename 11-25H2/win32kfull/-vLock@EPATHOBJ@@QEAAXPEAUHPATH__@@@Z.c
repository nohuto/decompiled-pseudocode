/*
 * XREFs of ?vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z @ 0x1400D51DC
 * Callers:
 *     EngCreatePath @ 0x140069F10 (EngCreatePath.c)
 *     ?ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ @ 0x1400D4F14 (-ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ.c)
 *     XEPATHOBJ_vConstructHPATH @ 0x1400D5178 (XEPATHOBJ_vConstructHPATH.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1400E58DC (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall EPATHOBJ::vLock(EPATHOBJ *this, struct HPATH__ *a2, __int64 a3, __int64 a4)
{
  struct HPATH__ *v5; // rcx
  __int64 v6; // rax

  v5 = a2;
  LOBYTE(a2) = 7;
  v6 = HmgShareLock(v5, a2, a3, a4);
  *((_QWORD *)this + 1) = v6;
  if ( v6 )
  {
    *((_DWORD *)this + 1) = *(_DWORD *)(v6 + 96);
    *(_DWORD *)this = *(_DWORD *)(v6 + 92);
  }
}
