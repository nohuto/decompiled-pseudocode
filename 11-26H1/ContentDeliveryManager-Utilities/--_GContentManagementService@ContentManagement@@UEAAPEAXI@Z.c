/*
 * XREFs of ??_GContentManagementService@ContentManagement@@UEAAPEAXI@Z @ 0x180043160
 * Callers:
 *     <none>
 * Callees:
 *     ??1ContentManagementService@ContentManagement@@UEAA@XZ @ 0x180042D98 (--1ContentManagementService@ContentManagement@@UEAA@XZ.c)
 */

ContentManagement::ContentManagementService *__fastcall ContentManagement::ContentManagementService::`scalar deleting destructor'(
        ContentManagement::ContentManagementService *this,
        char a2)
{
  ContentManagement::ContentManagementService::~ContentManagementService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
