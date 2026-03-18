/*
 * XREFs of ?PentryFromPobj@DC@@QEAAPEAU_ENTRY@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14019778C
 * Callers:
 *     ?bBeginXfer@XFERDCOBJ@@SA_NPEAUHDC__@@K@Z @ 0x140197540 (-bBeginXfer@XFERDCOBJ@@SA_NPEAUHDC__@@K@Z.c)
 *     ?bEndXfer@XFERDCOBJ@@SA_NPEAUHDC__@@@Z @ 0x140197674 (-bEndXfer@XFERDCOBJ@@SA_NPEAUHDC__@@@Z.c)
 * Callees:
 *     <none>
 */

struct _ENTRY *__fastcall DC::PentryFromPobj(DC *this, struct Gre::Base::SESSION_GLOBALS *a2)
{
  char *v3; // rbx

  if ( *(_QWORD *)this )
    return (struct _ENTRY *)HmgPentryFromPobj(a2, this);
  v3 = (char *)this + 2152;
  *(_OWORD *)((char *)this + 2152) = 0LL;
  *((_QWORD *)this + 271) = 0LL;
  *((_DWORD *)this + 540) = -2147483630;
  *((_QWORD *)this + 271) = GreEncodeUserModePointer(0LL);
  return (struct _ENTRY *)v3;
}
