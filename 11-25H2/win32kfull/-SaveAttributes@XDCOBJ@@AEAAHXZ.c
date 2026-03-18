/*
 * XREFs of ?SaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1400894C0
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x140087C00 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall XDCOBJ::SaveAttributes(XDCOBJ *this)
{
  struct _DC_ATTR *UserAttr; // rax
  int result; // eax

  if ( (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) != 0 )
    return 1;
  if ( (*((_DWORD *)this + 8) & 2) != 0
    || (UserAttr = XDCOBJ::GetUserAttr(this)) == 0LL
    || (result = DC::SaveAttributes(*(DC **)this, UserAttr)) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
    *((_DWORD *)this + 2) = 1;
    return 1;
  }
  return result;
}
