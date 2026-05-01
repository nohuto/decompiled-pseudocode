/*
 * XREFs of ??_ESnapMigrationHandler@@UEAAPEAXI@Z @ 0x18057ABE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SnapMigrationHandler@@UEAA@XZ @ 0x18057A5F0 (--1SnapMigrationHandler@@UEAA@XZ.c)
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
