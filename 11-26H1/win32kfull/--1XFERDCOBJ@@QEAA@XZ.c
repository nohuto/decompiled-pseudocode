/*
 * XREFs of ??1XFERDCOBJ@@QEAA@XZ @ 0x140295574
 * Callers:
 *     ?GreExtEscape@@YAHPEAUHDC__@@HHPEADH1@Z @ 0x14016DE10 (-GreExtEscape@@YAHPEAUHDC__@@HHPEADH1@Z.c)
 *     ?ThreadCleanup@XFERDCOBJ@@SAXPEAX@Z @ 0x140310FA0 (-ThreadCleanup@XFERDCOBJ@@SAXPEAX@Z.c)
 * Callees:
 *     ??1DCOBJA@@QEAA@XZ @ 0x140015860 (--1DCOBJA@@QEAA@XZ.c)
 */

void __fastcall XFERDCOBJ::~XFERDCOBJ(XFERDCOBJ *this)
{
  if ( *((_BYTE *)this + 96) )
    PopThreadGuardedObject((char *)this + 64);
  if ( *(_QWORD *)this )
    _InterlockedDecrement16((volatile signed __int16 *)(*(_QWORD *)this + 12LL));
  DCOBJA::~DCOBJA(this);
}
