/*
 * XREFs of ??1MULTIDEVLOCKOBJ@@QEAA@XZ @ 0x1400C76F4
 * Callers:
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1400C76CC (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1400C7720 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 */

void __fastcall MULTIDEVLOCKOBJ::~MULTIDEVLOCKOBJ(char **this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  MULTIDEVLOCKOBJ::vUnlock((MULTIDEVLOCKOBJ *)this);
  if ( (*(_DWORD *)this & 2) != 0 )
    GreDeleteFastMutex(this[1], v2, v3, v4);
}
