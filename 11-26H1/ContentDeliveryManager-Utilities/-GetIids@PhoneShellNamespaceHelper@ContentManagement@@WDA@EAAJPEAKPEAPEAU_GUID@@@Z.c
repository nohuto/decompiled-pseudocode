/*
 * XREFs of ?GetIids@PhoneShellNamespaceHelper@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180031D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::PhoneShellNamespaceHelper::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return ContentManagement::PhoneShellNamespaceHelper::GetIids(
           (ContentManagement::PhoneShellNamespaceHelper *)(a1 - 48),
           a2,
           a3);
}
