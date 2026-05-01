/*
 * XREFs of ??_ECCortanaWNFService@Cortana@TwinUI@@UEAAPEAXI@Z @ 0x1803D7E60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CCortanaWNFService@Cortana@TwinUI@@UEAA@XZ @ 0x1803D7DDC (--1CCortanaWNFService@Cortana@TwinUI@@UEAA@XZ.c)
 */

TwinUI::Cortana::CCortanaWNFService *__fastcall TwinUI::Cortana::CCortanaWNFService::`vector deleting destructor'(
        TwinUI::Cortana::CCortanaWNFService *this,
        char a2)
{
  TwinUI::Cortana::CCortanaWNFService::~CCortanaWNFService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
