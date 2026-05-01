/*
 * XREFs of ?HigherPriorityPending@BaseResourceSet@ExecutionModel@@AEAA_NKPEBU_ResourceInfo@2@W4Enum@Priority@2@@Z @ 0x18005A398
 * Callers:
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x18002B6A0 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18002D384 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Pri.c)
 * Callees:
 *     <none>
 */

char __fastcall ExecutionModel::BaseResourceSet::HigherPriorityPending(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  _QWORD *v4; // r11
  _QWORD *i; // rax
  __int64 v9; // r9
  __int64 j; // r8
  __int64 v12; // rcx

  v4 = (_QWORD *)(a1 + 40);
  for ( i = *(_QWORD **)(a1 + 40); i != v4; i = (_QWORD *)*i )
  {
    v9 = i[2];
    if ( *(_DWORD *)(v9 + 1280) == 1 && *(_DWORD *)(v9 + 1288) < a4 )
    {
      for ( j = 0LL; (unsigned int)j < a2; j = (unsigned int)(j + 1) )
      {
        if ( *(_QWORD *)(a3 + 24 * j + 8) )
        {
          if ( *(_QWORD *)(v9 + 24LL * *(int *)(a3 + 24 * j) + 80) )
          {
            v12 = *(_QWORD *)(a1 + 1272);
            if ( !_bittest64(&v12, *(unsigned int *)(a3 + 24 * j)) )
              return 1;
          }
        }
      }
    }
  }
  return 0;
}
