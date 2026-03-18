/*
 * XREFs of NtFlipObjectConsumerPostMessage @ 0x14001AEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z @ 0x14001A7BC (-ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14001B668 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ??$CreateFlipPropertySetWorker@VCFlipConsumerMessage@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x14001BA64 (--$CreateFlipPropertySetWorker@VCFlipConsumerMessage@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlip.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x14001BE5C (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 */

__int64 __fastcall NtFlipObjectConsumerPostMessage(void *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rax
  int v5; // ebx
  char v6; // r8
  int v7; // eax
  PVOID v8; // rdi
  CFlipPropertySetBase *v10; // [rsp+30h] [rbp+8h] BYREF
  PVOID Object; // [rsp+48h] [rbp+20h] BYREF

  v3 = a3;
  if ( a1 && a2 && a3 )
  {
    Object = 0LL;
    LOBYTE(a3) = 1;
    v10 = 0LL;
    v5 = CreateFlipPropertySetWorker<CFlipConsumerMessage>(a2, v3, a3, &v10);
    KeEnterCriticalRegion();
    if ( v5 >= 0 )
    {
      v7 = FlipManagerObject::ResolveHandle(a1, 1u, v6, (struct FlipManagerObject **)&Object);
      v8 = Object;
      v5 = v7;
      if ( v7 >= 0 )
        v5 = FlipManagerObject::ConsumerPostMessage((FlipManagerObject *)Object, v10);
      if ( v8 )
        ObfDereferenceObject(v8);
    }
    if ( v10 )
      CFlipPropertySetBase::Release(v10);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
