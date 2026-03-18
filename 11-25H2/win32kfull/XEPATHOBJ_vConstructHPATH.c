/*
 * XREFs of XEPATHOBJ_vConstructHPATH @ 0x1400D5178
 * Callers:
 *     XEPATHOBJ_vConstructHPATHWrap @ 0x1400D5160 (XEPATHOBJ_vConstructHPATHWrap.c)
 * Callees:
 *     ?vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z @ 0x1400D51DC (-vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z.c)
 */

void __fastcall XEPATHOBJ_vConstructHPATH(EPATHOBJ *this, struct HPATH__ *a2, __int64 a3, __int64 a4)
{
  *((_QWORD *)this + 1) = 0LL;
  if ( !*((_DWORD *)this + 28) )
  {
    PushThreadGuardedObject((char *)this + 80, this, XEPATHOBJ_vDestructWrap, a4);
    *((_DWORD *)this + 28) = 1;
  }
  EPATHOBJ::vLock(this, a2);
}
