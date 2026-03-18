/*
 * XREFs of ?GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z @ 0x1401474F0
 * Callers:
 *     NtUserGetPointerCursorId @ 0x1401E4AF0 (NtUserGetPointerCursorId.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?GetMsgPointerId@CTouchProcessor@@AEAAG_K@Z @ 0x140147848 (-GetMsgPointerId@CTouchProcessor@@AEAAG_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerCursorIdFromMsgData(
        PERESOURCE *this,
        unsigned __int64 a2,
        unsigned int *a3)
{
  PERESOURCE *v3; // rdi
  CTouchProcessor *v7; // rcx
  bool IsLockedShared; // bp
  unsigned __int16 MsgPointerId; // bx
  PERESOURCE *i; // rax
  unsigned int v11; // ebx

  v3 = this + 4;
  IsLockedShared = tagDomLock::IsLockedShared(this + 4);
  if ( !IsLockedShared )
    ExEnterCriticalRegionAndAcquireResourceShared(*v3);
  MsgPointerId = CTouchProcessor::GetMsgPointerId(v7, a2);
  if ( !MsgPointerId )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5731LL);
  if ( !tagDomLock::IsLockedShared(v3) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8594LL);
  for ( i = (PERESOURCE *)this[8]; ; i = (PERESOURCE *)*i )
  {
    if ( i == this + 8 )
    {
      v11 = 0;
      goto LABEL_10;
    }
    if ( *((_WORD *)i + 16) == MsgPointerId )
      break;
  }
  v11 = 1;
  *a3 = *((unsigned __int16 *)i + 17);
LABEL_10:
  if ( !IsLockedShared )
    ExReleaseResourceAndLeaveCriticalRegion(*v3);
  return v11;
}
