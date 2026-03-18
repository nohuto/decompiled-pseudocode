/*
 * XREFs of ?SaveAttributes@DCOBJ@@AEAAHXZ @ 0x140040610
 * Callers:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x14001B740 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?PentryFromPobj@DC@@QEAAPEAU_ENTRY@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140017E8C (-PentryFromPobj@DC@@QEAAPEAU_ENTRY@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     HmgPentryFromPobj @ 0x140019EC0 (HmgPentryFromPobj.c)
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x140040720 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 *     ?GreDecodeUserModePointer@@YAPEAXPEAX@Z @ 0x140041EB0 (-GreDecodeUserModePointer@@YAPEAXPEAX@Z.c)
 */

__int64 __fastcall DCOBJ::SaveAttributes(DCOBJ *this)
{
  unsigned int CurrentProcessId; // eax
  __int64 v3; // rdx
  unsigned int v4; // edi
  __int64 v5; // rax
  struct _ENTRY *v6; // rax
  struct _DC_ATTR *v7; // rax

  if ( (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) != 0 )
    return 1LL;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  v3 = *(_QWORD *)this;
  v4 = CurrentProcessId & 0xFFFFFFFC;
  if ( **(_QWORD **)this )
  {
    v5 = HmgPentryFromPobj(*((_QWORD *)this + 2));
  }
  else
  {
    v5 = v3 + 2152;
    *(_OWORD *)(v3 + 2152) = 0LL;
    *(_QWORD *)(v3 + 2168) = 0LL;
    *(_DWORD *)(v3 + 2160) = -2147483630;
    *(_QWORD *)(v3 + 2168) = 0LL;
  }
  if ( v4 != (*(_DWORD *)(v5 + 8) & 0xFFFFFFFE)
    || (v6 = DC::PentryFromPobj(*(DC **)this, *((struct Gre::Base::SESSION_GLOBALS **)this + 2))) == 0LL
    || (v7 = (struct _DC_ATTR *)GreDecodeUserModePointer(*((void **)v6 + 2))) == 0LL
    || (unsigned int)DC::SaveAttributes(*(DC **)this, v7) )
  {
    *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
    *((_DWORD *)this + 2) = 1;
    return 1LL;
  }
  return 0LL;
}
