/*
 * XREFs of ?RestoreAttributesHelper@DCOBJ@@AEAAXXZ @ 0x1401594A0
 * Callers:
 *     ?vInit@RESTORESAVEDCATTRS@@QEAAXPEAVAPIDCOBJ@@@Z @ 0x140296918 (-vInit@RESTORESAVEDCATTRS@@QEAAXPEAVAPIDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DCOBJ::RestoreAttributesHelper(DCOBJ *this)
{
  unsigned int CurrentProcessId; // eax
  __int64 v3; // rsi
  unsigned int v4; // edi
  __int64 v5; // rbp
  struct _DC_ATTR *UserAttr; // rax

  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  v3 = *(_QWORD *)this;
  v4 = CurrentProcessId & 0xFFFFFFFC;
  if ( **(_QWORD **)this )
  {
    v5 = HmgPentryFromPobj(*((_QWORD *)this + 2), *(_QWORD *)this);
  }
  else
  {
    v5 = v3 + 2152;
    *(_OWORD *)(v3 + 2152) = 0LL;
    *(_QWORD *)(v3 + 2168) = 0LL;
    *(_DWORD *)(v3 + 2160) = -2147483630;
    *(_QWORD *)(v3 + 2168) = GreEncodeUserModePointer(0LL);
  }
  if ( v4 == (*(_DWORD *)(v5 + 8) & 0xFFFFFFFE) )
  {
    UserAttr = DCOBJ::GetUserAttr(this);
    if ( UserAttr )
      DC::RestoreAttributes(*(DC **)this, UserAttr);
  }
}
