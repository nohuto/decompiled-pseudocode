/*
 * XREFs of LdrpRecordModuleDependency @ 0x180050E60
 * Callers:
 *     LdrpLoadDependentModuleInternal @ 0x18003AF90 (LdrpLoadDependentModuleInternal.c)
 *     LdrpBuildForwarderLink @ 0x180050D90 (LdrpBuildForwarderLink.c)
 *     LdrpFastpthReloadedDll @ 0x180052D40 (LdrpFastpthReloadedDll.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x180118DB0 (LdrpInitializeNtdllDataTableEntry.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 */

__int64 __fastcall LdrpRecordModuleDependency(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rbx
  __int64 v6; // rdi
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  __int64 result; // rax
  __int64 *v10; // rcx
  _QWORD *v11; // rcx
  _QWORD *v12; // rdx
  int v13; // ecx
  unsigned int v14; // eax

  v4 = *(_QWORD *)(a2 + 152);
  v6 = *(_QWORD *)(a1 + 152);
  if ( v6 == v4
    || *(_DWORD *)(v4 + 56) == 9 && (*(_DWORD *)(v4 + 24) == -1 || (*(_DWORD *)(*(_QWORD *)v4 - 56LL) & 0x20) != 0) )
  {
LABEL_22:
    v14 = *(_DWORD *)(v4 + 24);
    if ( v14 != -1 && v14 > 1 )
      *(_DWORD *)(v4 + 24) = v14 - 1;
    return a3;
  }
  v7 = *(_QWORD **)(v6 + 40);
  if ( v7 )
  {
    v8 = *(_QWORD **)(v6 + 40);
    do
    {
      v8 = (_QWORD *)*v8;
      if ( v8[1] == v4 )
        goto LABEL_22;
    }
    while ( v8 != v7 );
  }
  if ( !a3 )
  {
    result = RtlAllocateHeap_0();
    a3 = result;
    if ( !result )
    {
      *a4 = -1073741801;
      return result;
    }
    *(_DWORD *)(result + 24) |= 1u;
  }
  v10 = *(__int64 **)(v6 + 40);
  if ( v10 )
  {
    *(_QWORD *)a3 = *v10;
    *v10 = a3;
  }
  else
  {
    *(_QWORD *)a3 = a3;
  }
  *(_QWORD *)(v6 + 40) = a3;
  v11 = (_QWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 8) = v4;
  v12 = *(_QWORD **)(v4 + 48);
  if ( v12 )
  {
    *v11 = *v12;
    *v12 = v11;
  }
  else
  {
    *v11 = v11;
  }
  *(_QWORD *)(v4 + 48) = v11;
  v13 = *(_DWORD *)(a3 + 24);
  *(_QWORD *)(a3 + 24) = v6;
  if ( (v13 & 1) != 0 )
    *(_DWORD *)(a3 + 24) = v6 ^ ((unsigned __int8)v13 ^ (unsigned __int8)v6) & 1;
  return 0LL;
}
