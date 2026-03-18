/*
 * XREFs of ??1XLATEMEMOBJ@@QEAA@XZ @ 0x14033597C
 * Callers:
 *     NtGdiUpdateColors @ 0x140331CD0 (NtGdiUpdateColors.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400765D0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 */

void __fastcall XLATEMEMOBJ::~XLATEMEMOBJ(Gre::Base **this, __int64 a2, __int64 a3)
{
  Gre::Base *v4; // rcx

  v4 = *this;
  if ( v4 )
  {
    FreeThreadBufferWithTag(v4, a2, a3);
    *this = 0LL;
  }
  EXLATEOBJ::vAltUnlock(this, a2, a3);
}
