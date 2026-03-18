/*
 * XREFs of ?vLockAll@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x14016C468
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1400239C0 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ?bGarbageCollect@BRUSHSELOBJGC@@QEAA_NAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401ECDBC (-bGarbageCollect@BRUSHSELOBJGC@@QEAA_NAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 * Callees:
 *     ?HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140019830 (-HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions.c)
 */

void __fastcall SURFREF::vLockAll(SURFREF *this, HSURF a2)
{
  unsigned int v2; // ebx
  __int64 SessionState; // rax

  v2 = (unsigned int)a2;
  SessionState = W32GetSessionState(this);
  *((_QWORD *)this + 4) = HmgShareLock(*(_QWORD *)(SessionState + 88), v2, 5, 1);
}
