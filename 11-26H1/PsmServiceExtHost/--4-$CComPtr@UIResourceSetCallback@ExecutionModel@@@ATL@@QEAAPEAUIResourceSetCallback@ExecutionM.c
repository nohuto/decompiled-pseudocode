/*
 * XREFs of ??4?$CComPtr@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAAPEAUIResourceSetCallback@ExecutionModel@@PEAU23@@Z @ 0x18005E810
 * Callers:
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_REASON_INTERNAL@@_KPEAPEAV12@@Z @ 0x180088E44 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComPtr<ExecutionModel::IResourceSetCallback>::operator=(_QWORD *a1, __int64 a2)
{
  if ( *a1 == a2 )
    return *a1;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( *a1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  *a1 = a2;
  return a2;
}
