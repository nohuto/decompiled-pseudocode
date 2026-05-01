/*
 * XREFs of ??_EFindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x18001B970
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021F0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ @ 0x180019320 (--1FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ.c)
 */

Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *__fastcall Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::`vector deleting destructor'(
        Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *this,
        char a2)
{
  Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::~FindAllOperation(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE8);
  return this;
}
