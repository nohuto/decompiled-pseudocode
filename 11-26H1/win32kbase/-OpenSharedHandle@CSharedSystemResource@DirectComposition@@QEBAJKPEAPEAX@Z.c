/*
 * XREFs of ?OpenSharedHandle@CSharedSystemResource@DirectComposition@@QEBAJKPEAPEAX@Z @ 0x14014B7E0
 * Callers:
 *     ?OpenSharedResourceHandle@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAX@Z @ 0x14014B790 (-OpenSharedResourceHandle@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAX@Z.c)
 *     NtDCompositionCreateSharedResourceHandle @ 0x1401B27C0 (NtDCompositionCreateSharedResourceHandle.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DirectComposition::CSharedSystemResource::OpenSharedHandle(
        DirectComposition::CSharedSystemResource *this,
        __int64 a2,
        void **Handle)
{
  *Handle = (void *)-1LL;
  return ObOpenObjectByPointer((char *)this - 24, 0x40u, 0LL, 3u, ExCompositionObjectType, 0, Handle);
}
