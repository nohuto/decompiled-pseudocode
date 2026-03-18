/*
 * XREFs of ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400A8E68
 * Callers:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z @ 0x1400A8B34 (-UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1400B3E48 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     UntrapAppContainerRenderingWrap @ 0x140189A40 (UntrapAppContainerRenderingWrap.c)
 * Callees:
 *     <none>
 */

DCOBJ *__fastcall DCOBJ::DCOBJ(DCOBJ *this, HDC a2)
{
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  unsigned int CurrentProcessId; // eax
  __int64 v8; // rbx
  unsigned int v9; // ebp
  __int64 v10; // rsi
  struct _DC_ATTR *UserAttr; // rax
  __int64 v12; // rdx
  int v13; // ecx
  unsigned int v15; // ecx
  __int64 v16; // rdx
  int v17; // eax
  int v18; // eax

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  v4 = Gre::Base::Globals(this);
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 2) = v4;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_OWORD *)this + 2) = 0LL;
  *((_OWORD *)this + 3) = 0LL;
  PushThreadGuardedObject(
    (char *)this + 32,
    (unsigned __int64)this & ((unsigned __int128)-(__int128)((unsigned __int64)this + 32) >> 64),
    UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
  LOBYTE(v5) = 1;
  v6 = HmgLock(*((_QWORD *)this + 2), a2, v5, 0LL);
  *(_QWORD *)this = v6;
  if ( v6 )
  {
    if ( *(_DWORD *)(v6 + 2136) )
    {
      _InterlockedDecrement16((volatile signed __int16 *)(v6 + 12));
      *(_QWORD *)this = 0LL;
    }
  }
  else if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction() != 1 )
  {
    GrepAuditBehaviorRestrictionViolations(1LL);
  }
  if ( *(_QWORD *)this )
  {
    if ( (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) == 0 )
    {
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      v8 = *(_QWORD *)this;
      v9 = CurrentProcessId & 0xFFFFFFFC;
      if ( **(_QWORD **)this )
      {
        v10 = HmgPentryFromPobj(*((_QWORD *)this + 2), *(_QWORD *)this);
      }
      else
      {
        v10 = v8 + 2152;
        *(_OWORD *)(v8 + 2152) = 0LL;
        *(_QWORD *)(v8 + 2168) = 0LL;
        *(_DWORD *)(v8 + 2160) = -2147483630;
        *(_QWORD *)(v8 + 2168) = GreEncodeUserModePointer(0LL);
      }
      if ( v9 == (*(_DWORD *)(v10 + 8) & 0xFFFFFFFE) )
      {
        UserAttr = DCOBJ::GetUserAttr(this);
        if ( UserAttr )
        {
          if ( !DC::SaveAttributes(*(DC **)this, UserAttr) )
          {
            _InterlockedDecrement16((volatile signed __int16 *)(*(_QWORD *)this + 12LL));
            *(_QWORD *)this = 0LL;
            return this;
          }
        }
      }
      *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
      *((_DWORD *)this + 2) = 1;
    }
    v12 = *(_QWORD *)this;
    v13 = *(_DWORD *)(*(_QWORD *)this + 520LL);
    if ( (v13 & 4) != 0 )
    {
      v15 = v13 & 0xFFFFFFFB;
      *(_DWORD *)(v12 + 520) = v15;
      v16 = *(_QWORD *)(v12 + 976);
      v17 = *(_DWORD *)(v16 + 340);
      if ( (v15 & 1) != 0 )
        v18 = v17 | 0x16090;
      else
        v18 = v17 | 0x6090;
      *(_DWORD *)(v16 + 340) = v18;
    }
  }
  return this;
}
