/*
 * XREFs of NtFlipObjectRemovePoolBuffer @ 0x14002A0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14001B668 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z @ 0x14002A17C (-RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 */

__int64 __fastcall NtFlipObjectRemovePoolBuffer(void *a1, void *a2)
{
  unsigned __int64 v3; // r14
  __int64 v4; // r8
  int v5; // ebx
  struct FlipManagerObject *v6; // rdi
  struct FlipManagerObject *v8; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  if ( a1 && a2 )
  {
    v8 = 0LL;
    v9 = 0LL;
    RtlCopyFromUser(&v9, a2, 8uLL);
    v3 = v9;
    KeEnterCriticalRegion();
    v5 = FlipManagerObject::ResolveHandle(a1, 2u, v4, &v8);
    v6 = v8;
    if ( v5 >= 0 )
      v5 = FlipManagerObject::RemovePoolBuffer(v8, v3);
    if ( v6 )
      ObfDereferenceObject(v6);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
