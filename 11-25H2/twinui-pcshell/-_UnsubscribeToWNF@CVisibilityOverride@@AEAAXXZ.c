/*
 * XREFs of ?_UnsubscribeToWNF@CVisibilityOverride@@AEAAXXZ @ 0x18020FFE4
 * Callers:
 *     ??1CVisibilityOverride@@UEAA@XZ @ 0x18020FF7C (--1CVisibilityOverride@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisibilityOverride::_UnsubscribeToWNF(CVisibilityOverride *this)
{
  if ( *((_QWORD *)this + 7) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)this + 7) = 0LL;
  }
  if ( *((_QWORD *)this + 8) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)this + 8) = 0LL;
  }
}
