/*
 * XREFs of AlpcpQuerySidToken @ 0x140AA1FCC
 * Callers:
 *     AlpcpQuerySidMessage @ 0x140AA1F10 (AlpcpQuerySidMessage.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 */

__int64 __fastcall AlpcpQuerySidToken(__int64 a1, void *a2, unsigned int a3, unsigned int *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 *v9; // rdx
  unsigned int v10; // ebx
  char PreviousMode; // si
  _BYTE Src[80]; // [rsp+30h] [rbp-88h] BYREF

  memset_0(Src, 0, 0x44uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v9 = **(unsigned __int8 ***)(a1 + 152);
  v10 = 4 * v9[1] + 8;
  if ( v10 <= 0x44 )
    memmove(Src, v9, v10);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a4 )
  {
    if ( PreviousMode )
      RtlWriteULongToUser(a4, v10);
    else
      *a4 = v10;
  }
  if ( v10 <= a3 )
  {
    if ( PreviousMode )
      RtlCopyToUser(a2, Src, v10);
    else
      RtlCopyVolatileMemory(a2, Src, v10);
  }
  return a3 < v10 ? 0xC0000023 : 0;
}
