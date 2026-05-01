/*
 * XREFs of ??_ESnapMigrationHandler@@UEAAPEAXI@Z @ 0x18059E340
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SnapMigrationHandler@@UEAA@XZ @ 0x18059DD88 (--1SnapMigrationHandler@@UEAA@XZ.c)
 */

SnapMigrationHandler *__fastcall SnapMigrationHandler::`vector deleting destructor'(
        SnapMigrationHandler *this,
        char a2)
{
  SnapMigrationHandler::~SnapMigrationHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
