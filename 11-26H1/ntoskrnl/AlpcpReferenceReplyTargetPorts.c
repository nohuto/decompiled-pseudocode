/*
 * XREFs of AlpcpReferenceReplyTargetPorts @ 0x140A8B660
 * Callers:
 *     AlpcpDispatchReplyToPort @ 0x140B73328 (AlpcpDispatchReplyToPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObReferenceObjectSafe @ 0x140441D40 (ObReferenceObjectSafe.c)
 */

__int64 __fastcall AlpcpReferenceReplyTargetPorts(__int64 Object, signed __int64 a2)
{
  _DWORD *v3; // rdi
  PVOID v5; // rcx

  v3 = (_DWORD *)Object;
  if ( Object )
    v3 = (_DWORD *)(-(__int64)(ObReferenceObjectSafe(Object) != 0) & Object);
  if ( a2 )
    a2 &= -(__int64)(ObReferenceObjectSafe(a2) != 0);
  if ( v3 )
  {
    if ( !a2 )
    {
      v5 = v3;
      goto LABEL_12;
    }
    if ( (v3[104] & 0x20) == 0 && (*(_DWORD *)(a2 + 416) & 0x20) == 0 )
      return 0LL;
    ObfDereferenceObject(v3);
  }
  else if ( !a2 )
  {
    return 3221225527LL;
  }
  v5 = (PVOID)a2;
LABEL_12:
  ObfDereferenceObject(v5);
  return 3221225527LL;
}
