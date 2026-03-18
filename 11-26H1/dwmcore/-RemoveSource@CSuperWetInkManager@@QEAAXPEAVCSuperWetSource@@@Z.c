/*
 * XREFs of ?RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x18020B5F8
 * Callers:
 *     ??1CGenericInk@@EEAA@XZ @ 0x1801A5C64 (--1CGenericInk@@EEAA@XZ.c)
 *     ??1CDelegatedInkCanvas@@EEAA@XZ @ 0x18026C57C (--1CDelegatedInkCanvas@@EEAA@XZ.c)
 *     ??1CSynchronousSuperWetInk@@EEAA@XZ @ 0x180284A74 (--1CSynchronousSuperWetInk@@EEAA@XZ.c)
 * Callees:
 *     IsSuperWetInkCompatibleVailContainer @ 0x1801260AC (IsSuperWetInkCompatibleVailContainer.c)
 *     ?RemoveSourceLocal@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x18020B638 (-RemoveSourceLocal@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 *     ?RemoveSourceHost@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x18020B6A0 (-RemoveSourceHost@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 */

void __fastcall CSuperWetInkManager::RemoveSource(CSuperWetInkManager *this, struct CSuperWetSource *a2)
{
  if ( IsSuperWetInkCompatibleVailContainer() )
    CSuperWetInkManager::RemoveSourceHost(this, a2);
  else
    CSuperWetInkManager::RemoveSourceLocal(this, a2);
}
