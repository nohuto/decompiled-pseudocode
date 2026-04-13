/*
 * XREFs of ??_GTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAPEAXI@Z @ 0x1800431A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAA@XZ @ 0x180042E8C (--1TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAA@XZ.c)
 */

Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *__fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::`scalar deleting destructor'(
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *this,
        char a2)
{
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::~TargetedContentTriggerImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
