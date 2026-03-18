/*
 * XREFs of ?NotifyAtlasEntryInvalidated@CGradientBrush@@UEAAXXZ @ 0x18027EA70
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyAtlasEntryInvalidated@CGradientSource@@MEAAXXZ @ 0x18027E72C (-NotifyAtlasEntryInvalidated@CGradientSource@@MEAAXXZ.c)
 */

void __fastcall CGradientBrush::NotifyAtlasEntryInvalidated(CGradientBrush *this)
{
  CGradientSource::NotifyAtlasEntryInvalidated(this);
  (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this - 19) + 80LL))((char *)this - 152, 5LL);
}
