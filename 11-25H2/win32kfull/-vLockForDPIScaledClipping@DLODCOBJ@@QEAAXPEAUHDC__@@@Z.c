/*
 * XREFs of ?vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14008A230
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1400782E4 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14008A700 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14008A7E0 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x14008A810 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

void __fastcall DLODCOBJ::vLockForDPIScaledClipping(DLODCOBJ *this, HDC a2)
{
  __int64 v2; // rax
  struct _DC_ATTR *UserAttr; // rax

  v2 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
    goto LABEL_10;
  XDCOBJ::vLockIgnoreAttributes(this, a2);
  if ( *(_QWORD *)this )
  {
    if ( (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) == 0 )
    {
      if ( (*((_DWORD *)this + 8) & 2) == 0 )
      {
        UserAttr = XDCOBJ::GetUserAttr(this);
        if ( UserAttr )
        {
          if ( !DC::SaveAttributes(*(DC **)this, UserAttr) )
          {
            OBJECT::InterlockedDecrementExclusiveLockCount(*(OBJECT **)this);
            *(_QWORD *)this = 0LL;
            goto LABEL_8;
          }
        }
      }
      *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
      *((_DWORD *)this + 2) = 1;
    }
    if ( (*(_DWORD *)(*(_QWORD *)this + 520LL) & 4) != 0 )
      DC::vMarkTransformDirty(*(DC **)this);
  }
LABEL_8:
  v2 = *(_QWORD *)this;
  if ( !*(_QWORD *)this )
    return;
  *((_BYTE *)this + 73) = 0;
LABEL_10:
  *(_DWORD *)(v2 + 40) |= 2u;
  *((_BYTE *)this + 72) = 1;
}
