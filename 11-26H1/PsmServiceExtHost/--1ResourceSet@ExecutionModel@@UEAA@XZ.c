/*
 * XREFs of ??1ResourceSet@ExecutionModel@@UEAA@XZ @ 0x18002C938
 * Callers:
 *     ??_GResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x18002C900 (--_GResourceSet@ExecutionModel@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180006C30 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ExecutionModel::ResourceSet::~ResourceSet(ExecutionModel::ResourceSet *this)
{
  char *v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &ExecutionModel::ResourceSet::`vftable';
  v2 = (char *)*((_QWORD *)this + 165);
  if ( v2 )
    RmpObjectRelease(v2);
  v3 = *((_QWORD *)this + 214);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  *(_QWORD *)this = &ExecutionModel::BaseResourceSet::`vftable';
  utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear((char *)this + 40);
}
