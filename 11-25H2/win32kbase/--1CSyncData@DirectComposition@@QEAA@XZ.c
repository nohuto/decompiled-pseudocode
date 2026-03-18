/*
 * XREFs of ??1CSyncData@DirectComposition@@QEAA@XZ @ 0x140144C90
 * Callers:
 *     ??_GCSyncData@DirectComposition@@QEAAPEAXI@Z @ 0x140144C68 (--_GCSyncData@DirectComposition@@QEAAPEAXI@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

void __fastcall DirectComposition::CSyncData::~CSyncData(char **this)
{
  if ( this[9] != (char *)this + 28 )
    GreDeleteFastMutex(this[9]);
}
