/*
 * XREFs of ValidateVadInFreeTree @ 0x1400C9968
 * Callers:
 *     ?RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1400C943C (-RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1400C94C0 (-InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1400CCB80 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 * Callees:
 *     ReportVadValidationError @ 0x1400AAEE0 (ReportVadValidationError.c)
 */

__int64 __fastcall ValidateVadInFreeTree(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  unsigned __int64 v5; // rbp
  _QWORD *v6; // rcx
  __int64 j; // rcx
  __int64 **v8; // rbx
  __int64 result; // rax
  __int64 *k; // rbx
  __int64 *v11; // rdx
  _QWORD *i; // rax

  if ( (*(_DWORD *)(a2 + 72) & 0xF) != 1 )
    ReportVadValidationError(a1, a2, 3902338670LL);
  v4 = (_QWORD *)a2;
  v5 = *(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 24);
  v6 = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 )
  {
    for ( i = (_QWORD *)v6[1]; i; i = (_QWORD *)i[1] )
      v6 = i;
  }
  else
  {
    for ( j = *(_QWORD *)(a2 + 16); ; j = v6[2] )
    {
      v6 = (_QWORD *)(j & 0xFFFFFFFFFFFFFFFCuLL);
      if ( !v6 || (_QWORD *)v6[1] == v4 )
        break;
      v4 = v6;
    }
  }
  v8 = *(__int64 ***)(a2 + 8);
  result = a2;
  if ( v8 )
  {
    v11 = *v8;
    if ( *v8 )
    {
      do
      {
        result = *v11;
        v8 = (__int64 **)v11;
        v11 = (__int64 *)result;
      }
      while ( result );
    }
  }
  else
  {
    for ( k = *(__int64 **)(a2 + 16); ; k = v8[2] )
    {
      v8 = (__int64 **)((unsigned __int64)k & 0xFFFFFFFFFFFFFFFCuLL);
      if ( !v8 || *v8 == (__int64 *)result )
        break;
      result = (__int64)v8;
    }
  }
  if ( v6 )
  {
    result = v6[3];
    if ( v5 < v6[4] - result )
      result = ReportVadValidationError(a1, a2, 321193775LL);
  }
  if ( v8 )
  {
    if ( v5 > (char *)v8[4] - (char *)v8[3] )
      return ReportVadValidationError(a1, a2, 1439421046LL);
  }
  return result;
}
