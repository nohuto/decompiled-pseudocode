/*
 * XREFs of SmRegistrationCtxStart @ 0x140B51620
 * Callers:
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x14064098C (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 *     SmGetRegistrationInfo @ 0x14081F03C (SmGetRegistrationInfo.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     SmCreateEvent @ 0x140B51678 (SmCreateEvent.c)
 */

__int64 __fastcall SmRegistrationCtxStart(PVOID *a1)
{
  int v2; // ebx
  PVOID v3; // rcx
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  Object = 0LL;
  v2 = SmCreateEvent(a1, &Object);
  if ( v2 < 0 )
  {
    v3 = Object;
  }
  else
  {
    v3 = 0LL;
    *a1 = Object;
    v2 = 0;
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v2;
}
