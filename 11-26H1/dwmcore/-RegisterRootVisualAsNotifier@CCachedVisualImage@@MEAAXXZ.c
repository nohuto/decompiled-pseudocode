/*
 * XREFs of ?RegisterRootVisualAsNotifier@CCachedVisualImage@@MEAAXXZ @ 0x1801DBD60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CCachedVisualImage::RegisterRootVisualAsNotifier(struct CResource **this)
{
  CResource::RegisterNotifier((CResource *)this, this[15]);
}
