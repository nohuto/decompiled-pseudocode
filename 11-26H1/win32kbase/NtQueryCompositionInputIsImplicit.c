/*
 * XREFs of NtQueryCompositionInputIsImplicit @ 0x1400A4180
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1400A4600 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 */

__int64 __fastcall NtQueryCompositionInputIsImplicit(void *a1, void *a2)
{
  int v3; // ebx
  int Src; // [rsp+40h] [rbp+18h] BYREF
  PVOID Object; // [rsp+48h] [rbp+20h] BYREF

  Object = 0LL;
  v3 = CompositionInputObject::ResolveHandle(a1, 1u, 1, (struct CompositionInputObject **)&Object);
  if ( v3 >= 0 )
  {
    Src = *((_DWORD *)Object + 46) & 1;
    ObfDereferenceObject(Object);
    RtlCopyToUser(a2, &Src, 4uLL);
  }
  return (unsigned int)v3;
}
