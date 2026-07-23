/*
 * XREFs of LdrpResolveDelayLoadDescriptor @ 0x1801055C4
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x18007A190 (LdrpSnapKernelBaseExtensions.c)
 *     LdrResolveDelayLoadsFromDll @ 0x18015C190 (LdrResolveDelayLoadsFromDll.c)
 * Callees:
 *     LdrResolveDelayLoadedAPI @ 0x180105660 (LdrResolveDelayLoadedAPI.c)
 */

__int64 __fastcall LdrpResolveDelayLoadDescriptor(
        char *ParentModuleBase,
        PCIMAGE_DELAYLOAD_DESCRIPTOR DelayloadDescriptor)
{
  unsigned int v2; // ebx
  char *v3; // rdi
  __int64 v4; // r14
  IMAGE_THUNK_DATA64 *ThunkAddress; // rax

  v2 = 0;
  v3 = &ParentModuleBase[DelayloadDescriptor->ImportAddressTableRVA];
  LODWORD(v4) = 0;
  if ( *(_QWORD *)v3 )
  {
    ThunkAddress = (IMAGE_THUNK_DATA64 *)&ParentModuleBase[DelayloadDescriptor->ImportAddressTableRVA];
    do
    {
      if ( !LdrResolveDelayLoadedAPI(ParentModuleBase, DelayloadDescriptor, 0LL, 0LL, ThunkAddress, 0) )
        v2 = -1073740782;
      v4 = (unsigned int)(v4 + 1);
      ThunkAddress = (IMAGE_THUNK_DATA64 *)&v3[8 * v4];
    }
    while ( ThunkAddress->u1.ForwarderString );
  }
  return v2;
}
