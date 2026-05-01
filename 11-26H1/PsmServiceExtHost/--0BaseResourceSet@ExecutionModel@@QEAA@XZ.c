/*
 * XREFs of ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x18002BC08
 * Callers:
 *     ??0ResourceSet@ExecutionModel@@AEAA@XZ @ 0x18002C2EC (--0ResourceSet@ExecutionModel@@AEAA@XZ.c)
 *     ??0ExternalResourceSet@ExecutionModel@@AEAA@XZ @ 0x18002E4E8 (--0ExternalResourceSet@ExecutionModel@@AEAA@XZ.c)
 *     ?InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x180081378 (-InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x1800815D4 (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     ??0_ResourceInfo@ExecutionModel@@QEAA@XZ @ 0x18002BCB0 (--0_ResourceInfo@ExecutionModel@@QEAA@XZ.c)
 *     ??0?$list@UExternalResourceRequestMessage@ExternalResourceSet@ExecutionModel@@V?$allocator@UExternalResourceRequestMessage@ExternalResourceSet@ExecutionModel@@@utl@@@utl@@QEAA@XZ @ 0x18002BE20 (--0-$list@UExternalResourceRequestMessage@ExternalResourceSet@ExecutionModel@@V-$allocator@UExte.c)
 */

ExecutionModel::BaseResourceSet *__fastcall ExecutionModel::BaseResourceSet::BaseResourceSet(
        ExecutionModel::BaseResourceSet *this)
{
  ExecutionModel::_ResourceInfo *v2; // rdi
  __int64 v3; // rsi
  ExecutionModel::BaseResourceSet *result; // rax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &ExecutionModel::BaseResourceSet::`vftable';
  *((_BYTE *)this + 12) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = -1;
  *((_DWORD *)this + 9) = 1;
  utl::list<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage,utl::allocator<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage>>::list<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage,utl::allocator<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage>>((char *)this + 40);
  *((_QWORD *)this + 8) = 0LL;
  v2 = (ExecutionModel::BaseResourceSet *)((char *)this + 72);
  v3 = 50LL;
  do
  {
    ExecutionModel::_ResourceInfo::_ResourceInfo(v2);
    v2 = (ExecutionModel::_ResourceInfo *)((char *)v2 + 24);
    --v3;
  }
  while ( v3 );
  *((_QWORD *)this + 159) = 0LL;
  result = this;
  *((_QWORD *)this + 160) = 0LL;
  *((_DWORD *)this + 322) = -1;
  return result;
}
