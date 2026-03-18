/*
 * XREFs of ?QueryInstance@FxWmiInstanceInternal@@MEAAJKPEAXPEAK@Z @ 0x140084740
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxWmiInstanceInternal::QueryInstance(
        FxWmiInstanceInternal *this,
        unsigned int OutBufferSize,
        void *OutBuffer,
        unsigned int *BufferUsed)
{
  return ((__int64 (__fastcall *)(FxDeviceBase *, FxWmiInstanceInternal *, _QWORD, void *, unsigned int *))this->m_QueryInstance)(
           this->m_Provider->m_Parent->m_DeviceBase,
           this,
           OutBufferSize,
           OutBuffer,
           BufferUsed);
}
