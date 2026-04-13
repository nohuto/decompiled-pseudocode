/*
 * XREFs of ??1?$ComPtr@VAppInstallInfoRecordImpl@ContentManagement@@@WRL@Microsoft@@QEAA@XZ @ 0x180042BB0
 * Callers:
 *     _ContentManagement::AppManager::ConvertFromStoreRecords_::_1_::dtor$4 @ 0x1800BC2E2 (_ContentManagement--AppManager--ConvertFromStoreRecords_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ContentManagement::AppInstallInfoRecordImpl>::~ComPtr<ContentManagement::AppInstallInfoRecordImpl>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<ContentManagement::AppInstallInfoRecordImpl>::InternalRelease(a1);
}
