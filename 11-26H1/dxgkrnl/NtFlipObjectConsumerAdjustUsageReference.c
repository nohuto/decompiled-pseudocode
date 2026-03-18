/*
 * XREFs of NtFlipObjectConsumerAdjustUsageReference @ 0x1400A3DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14001B668 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z @ 0x14005694C (-ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 */

__int64 __fastcall NtFlipObjectConsumerAdjustUsageReference(void *a1, void *a2, int a3)
{
  unsigned __int64 v5; // r14
  __int64 v6; // r8
  int v7; // ebx
  struct FlipManagerObject *v8; // rdi
  unsigned __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-30h]
  struct FlipManagerObject *v12; // [rsp+78h] [rbp+20h] BYREF

  if ( a1 && a2 )
  {
    v12 = 0LL;
    v11 = 0LL;
    v10 = 0LL;
    RtlCopyFromUser(&v10, a2, 8uLL);
    v5 = v10;
    v11 = v10;
    KeEnterCriticalRegion();
    v7 = FlipManagerObject::ResolveHandle(a1, 1u, v6, &v12);
    v8 = v12;
    if ( v7 >= 0 )
      v7 = FlipManagerObject::ConsumerAdjustUsageReference(v12, v5, a3 != 0);
    if ( v8 )
      ObfDereferenceObject(v8);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
