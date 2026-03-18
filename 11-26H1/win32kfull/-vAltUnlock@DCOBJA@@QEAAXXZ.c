/*
 * XREFs of ?vAltUnlock@DCOBJA@@QEAAXXZ @ 0x1401CB3B0
 * Callers:
 *     ??0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14025958C (--0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@SAXPEAX@Z @ 0x140310F70 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@SAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DCOBJA::vAltUnlock(DCOBJA *this)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rax

  if ( *(_QWORD *)this )
  {
    v2 = Gre::Base::Globals(this);
    DEC_SHARE_REF_CNT(v2, *(_QWORD *)this);
    *(_QWORD *)this = 0LL;
  }
}
