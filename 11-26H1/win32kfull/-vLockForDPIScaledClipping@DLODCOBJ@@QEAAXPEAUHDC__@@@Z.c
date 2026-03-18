/*
 * XREFs of ?vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14007482C
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1400AB4C4 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x1400BA570 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 * Callees:
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x140073214 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

void __fastcall DLODCOBJ::vLockForDPIScaledClipping(DLODCOBJ *this, HDC a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rax
  unsigned int CurrentProcessId; // eax
  __int64 v7; // rdi
  unsigned int v8; // esi
  __int64 v9; // rbp
  struct _DC_ATTR *UserAttr; // rax

  v3 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
    goto LABEL_17;
  LOBYTE(a3) = 1;
  v5 = HmgLock(*((_QWORD *)this + 2), a2, a3, 0LL);
  *(_QWORD *)this = v5;
  if ( v5 )
  {
    if ( *(_DWORD *)(v5 + 2136) )
    {
      _InterlockedDecrement16((volatile signed __int16 *)(v5 + 12));
      *(_QWORD *)this = 0LL;
    }
  }
  else if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction() != 1 )
  {
    GrepAuditBehaviorRestrictionViolations(1LL);
  }
  if ( *(_QWORD *)this )
  {
    if ( (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) != 0 )
      goto LABEL_13;
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    v7 = *(_QWORD *)this;
    v8 = CurrentProcessId & 0xFFFFFFFC;
    if ( **(_QWORD **)this )
    {
      v9 = HmgPentryFromPobj(*((_QWORD *)this + 2), v7);
    }
    else
    {
      v9 = v7 + 2152;
      *(_OWORD *)(v7 + 2152) = 0LL;
      *(_QWORD *)(v7 + 2168) = 0LL;
      *(_DWORD *)(v7 + 2160) = -2147483630;
      *(_QWORD *)(v7 + 2168) = GreEncodeUserModePointer(0LL);
    }
    if ( v8 != (*(_DWORD *)(v9 + 8) & 0xFFFFFFFE)
      || (UserAttr = DCOBJ::GetUserAttr(this)) == 0LL
      || DC::SaveAttributes(*(DC **)this, UserAttr) )
    {
      *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
      *((_DWORD *)this + 2) = 1;
LABEL_13:
      if ( (*(_DWORD *)(*(_QWORD *)this + 520LL) & 4) != 0 )
        DC::vMarkTransformDirty(*(DC **)this);
      goto LABEL_15;
    }
    _InterlockedDecrement16((volatile signed __int16 *)(*(_QWORD *)this + 12LL));
    *(_QWORD *)this = 0LL;
  }
LABEL_15:
  v3 = *(_QWORD *)this;
  if ( !*(_QWORD *)this )
    return;
  *((_BYTE *)this + 97) = 0;
LABEL_17:
  *(_DWORD *)(v3 + 40) |= 2u;
  *((_BYTE *)this + 96) = 1;
}
