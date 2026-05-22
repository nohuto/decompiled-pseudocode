/*
 * XREFs of ?QueryInterface@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800997D0
 * Callers:
 *     ?QueryInterface@ConnectionIndirector@BamoImpl@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B8300 (-QueryInterface@ConnectionIndirector@BamoImpl@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::QueryInterface(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        struct _GUID *a2,
        void **a3)
{
  return Microsoft::BamoImpl::Util::QueryInterface<Microsoft::BamoImpl::ConnectionIndirector,IMessageConversationHost,IMessageConversationBouncer>(
           (__int64)this - 16,
           a2,
           a3);
}
