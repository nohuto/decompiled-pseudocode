/*
 * XREFs of ValidateVadInReservedTree @ 0x1400CD3D8
 * Callers:
 *     ?RemoveVadFromReservedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1400CC758 (-RemoveVadFromReservedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?InsertVadToReservedListForNewVaRange@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@@Z @ 0x1400CD1F4 (-InsertVadToReservedListForNewVaRange@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@U_D3DDDIGPUV.c)
 *     ?InsertVadToReservedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1400CD7F4 (-InsertVadToReservedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 * Callees:
 *     ReportVadValidationError @ 0x1400AAEE0 (ReportVadValidationError.c)
 */

unsigned __int64 __fastcall ValidateVadInReservedTree(__int64 a1, __int64 a2)
{
  int v3; // eax
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  __int64 j; // rcx
  unsigned __int64 **v8; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 *k; // rbx
  unsigned __int64 *v11; // rdx
  _QWORD *i; // rax

  v3 = *(_DWORD *)(a2 + 72) & 0xF;
  if ( v3 != 3 && v3 != 2 )
    ReportVadValidationError(a1, a2, 452380711LL);
  v5 = *(_QWORD **)a2;
  v6 = (_QWORD *)a2;
  if ( *(_QWORD *)a2 )
  {
    for ( i = (_QWORD *)v5[1]; i; i = (_QWORD *)i[1] )
      v5 = i;
  }
  else
  {
    for ( j = *(_QWORD *)(a2 + 16); ; j = v5[2] )
    {
      v5 = (_QWORD *)(j & 0xFFFFFFFFFFFFFFFCuLL);
      if ( !v5 || (_QWORD *)v5[1] == v6 )
        break;
      v6 = v5;
    }
  }
  v8 = *(unsigned __int64 ***)(a2 + 8);
  result = a2;
  if ( v8 )
  {
    v11 = *v8;
    if ( *v8 )
    {
      do
      {
        result = *v11;
        v8 = (unsigned __int64 **)v11;
        v11 = (unsigned __int64 *)result;
      }
      while ( result );
    }
  }
  else
  {
    for ( k = *(unsigned __int64 **)(a2 + 16); ; k = v8[2] )
    {
      v8 = (unsigned __int64 **)((unsigned __int64)k & 0xFFFFFFFFFFFFFFFCuLL);
      if ( !v8 || *v8 == (unsigned __int64 *)result )
        break;
      result = (unsigned __int64)v8;
    }
  }
  if ( v5 )
  {
    result = v5[4];
    if ( *(_QWORD *)(a2 + 24) < result )
      result = ReportVadValidationError(a1, a2, 1302490555LL);
  }
  if ( v8 )
  {
    result = (unsigned __int64)v8[3];
    if ( *(_QWORD *)(a2 + 32) > result )
      return ReportVadValidationError(a1, a2, 1535924631LL);
  }
  return result;
}
