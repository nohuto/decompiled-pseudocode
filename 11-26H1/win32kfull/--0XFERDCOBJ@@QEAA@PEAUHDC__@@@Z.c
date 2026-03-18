/*
 * XREFs of ??0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14025958C
 * Callers:
 *     ?GreExtEscape@@YAHPEAUHDC__@@HHPEADH1@Z @ 0x14016DE10 (-GreExtEscape@@YAHPEAUHDC__@@HHPEADH1@Z.c)
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x14004129C (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAltUnlock@DCOBJA@@QEAAXXZ @ 0x1401CB3B0 (-vAltUnlock@DCOBJA@@QEAAXXZ.c)
 */

XFERDCOBJ *__fastcall XFERDCOBJ::XFERDCOBJ(XFERDCOBJ *this, HDC a2)
{
  bool v4; // zf
  __int64 v5; // r8

  DCOBJA::DCOBJA(this, a2);
  v4 = *(_QWORD *)this == 0LL;
  *((_BYTE *)this + 96) = 0;
  if ( !v4 )
  {
    if ( *(_DWORD *)(*(_QWORD *)this + 2136LL) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      LOBYTE(v5) = 1;
      if ( HmgLock(*((_QWORD *)this + 2), a2, v5, 1LL) )
      {
        if ( *(_WORD *)(*(_QWORD *)this + 12LL) == 1
          && *(_DWORD *)(*(_QWORD *)this + 2136LL) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        {
          *((_BYTE *)this + 96) = (unsigned int)PushThreadGuardedObject(
                                                  (char *)this + 64,
                                                  this,
                                                  XFERDCOBJ::ThreadCleanup) != 0;
          return this;
        }
        _InterlockedDecrement16((volatile signed __int16 *)(*(_QWORD *)this + 12LL));
      }
    }
    DCOBJA::vAltUnlock(this);
  }
  return this;
}
