/*
 * XREFs of ?InitializeTrustedComponentForegroundControl@UndockedSearchAppExperienceManager@@UEAAJPEAUITrustedComponentForegroundControl@@@Z @ 0x1803B4B90
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::InitializeTrustedComponentForegroundControl(
        UndockedSearchAppExperienceManager *this,
        struct ITrustedComponentForegroundControl *a2)
{
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 6, (__int64)a2);
  return 0LL;
}
