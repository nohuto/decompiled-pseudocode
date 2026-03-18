/*
 * XREFs of ??0MAPIDCOBJ@@QEAA@PEAUHDC__@@0@Z @ 0x14016B560
 * Callers:
 *     _DrawIconEx @ 0x140027334 (_DrawIconEx.c)
 *     BltIcon @ 0x140027954 (BltIcon.c)
 *     NtGdiTransparentBlt @ 0x14016B240 (NtGdiTransparentBlt.c)
 *     NtGdiMaskBlt @ 0x14016B360 (NtGdiMaskBlt.c)
 *     GreStretchBlt @ 0x14016B458 (GreStretchBlt.c)
 *     NtGdiPlgBlt @ 0x14031E570 (NtGdiPlgBlt.c)
 * Callees:
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x140073214 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?vUnlock@DCOBJ@@QEAAXXZ @ 0x140155DFC (-vUnlock@DCOBJ@@QEAAXXZ.c)
 */

MAPIDCOBJ *__fastcall MAPIDCOBJ::MAPIDCOBJ(MAPIDCOBJ *this, HDC a2, HDC a3)
{
  struct Gre::Base::SESSION_GLOBALS *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int CurrentProcessId; // eax
  __int64 v11; // rbx
  unsigned int v12; // ebp
  __int64 v13; // rsi
  struct _DC_ATTR *UserAttr; // rax
  __int64 v15; // rax

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  v6 = Gre::Base::Globals(this);
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 2) = v6;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_OWORD *)this + 2) = 0LL;
  *((_OWORD *)this + 3) = 0LL;
  PushThreadGuardedObject(
    (char *)this + 32,
    (unsigned __int64)this & ((unsigned __int128)-(__int128)((unsigned __int64)this + 32) >> 64),
    UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
  LOBYTE(v7) = 1;
  v8 = HmgLock(*((_QWORD *)this + 2), a2, v7, 0LL);
  *(_QWORD *)this = v8;
  if ( v8 )
  {
    if ( *(_DWORD *)(v8 + 2136) )
    {
      _InterlockedDecrement16((volatile signed __int16 *)(v8 + 12));
      *(_QWORD *)this = 0LL;
    }
  }
  else if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction(v9) != 1 )
  {
    GrepAuditBehaviorRestrictionViolations(1LL);
  }
  if ( *(_QWORD *)this )
  {
    if ( (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) == 0 )
    {
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      v11 = *(_QWORD *)this;
      v12 = CurrentProcessId & 0xFFFFFFFC;
      if ( **(_QWORD **)this )
      {
        v13 = HmgPentryFromPobj(*((_QWORD *)this + 2), *(_QWORD *)this);
      }
      else
      {
        v13 = v11 + 2152;
        *(_OWORD *)(v11 + 2152) = 0LL;
        *(_QWORD *)(v11 + 2168) = 0LL;
        *(_DWORD *)(v11 + 2160) = -2147483630;
        *(_QWORD *)(v11 + 2168) = GreEncodeUserModePointer(0LL);
      }
      if ( v12 == (*(_DWORD *)(v13 + 8) & 0xFFFFFFFE) )
      {
        UserAttr = DCOBJ::GetUserAttr(this);
        if ( UserAttr )
        {
          if ( !DC::SaveAttributes(*(DC **)this, UserAttr) )
          {
            _InterlockedDecrement16((volatile signed __int16 *)(*(_QWORD *)this + 12LL));
            *(_QWORD *)this = 0LL;
            goto LABEL_14;
          }
        }
      }
      *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
      *((_DWORD *)this + 2) = 1;
    }
    if ( (*(_DWORD *)(*(_QWORD *)this + 520LL) & 4) != 0 )
      DC::vMarkTransformDirty(*(DC **)this);
  }
LABEL_14:
  *((_OWORD *)this + 4) = 0LL;
  *((_OWORD *)this + 5) = 0LL;
  PushThreadGuardedObject(
    (char *)this + 64,
    (unsigned __int64)this & ((unsigned __int128)-(__int128)((unsigned __int64)this + 64) >> 64),
    UnexpectedThreadTerminationHandler<APIDCOBJ>::OnUnexpectedThreadTerminationStatic);
  v15 = *(_QWORD *)this;
  *((_BYTE *)this + 96) = 1;
  if ( v15 )
  {
    if ( *(_WORD *)(v15 + 12) != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    if ( *(_WORD *)(*(_QWORD *)this + 12LL) != 1 )
      DCOBJ::vUnlock(this);
  }
  *((_QWORD *)this + 15) = *((_QWORD *)this + 2);
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *(_OWORD *)((char *)this + 136) = 0LL;
  *(_OWORD *)((char *)this + 152) = 0LL;
  PushThreadGuardedObject(
    (char *)this + 136,
    ((unsigned __int64)this + 104) & ((unsigned __int128)-(__int128)((unsigned __int64)this + 136) >> 64),
    UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
  *(_OWORD *)((char *)this + 168) = 0LL;
  *(_OWORD *)((char *)this + 184) = 0LL;
  PushThreadGuardedObject(
    (char *)this + 168,
    ((unsigned __int64)this + 104) & ((unsigned __int128)-(__int128)((unsigned __int64)this + 168) >> 64),
    UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>::OnUnexpectedThreadTerminationStatic);
  *((_QWORD *)this + 25) = a3;
  *((_WORD *)this + 104) = 1;
  if ( *(_QWORD *)this && a3 == **(HDC **)this )
  {
    *((_WORD *)this + 104) = 256;
    *((_QWORD *)this + 13) = *(_QWORD *)this;
  }
  return this;
}
