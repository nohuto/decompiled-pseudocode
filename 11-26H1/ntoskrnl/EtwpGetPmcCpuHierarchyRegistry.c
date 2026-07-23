/*
 * XREFs of EtwpGetPmcCpuHierarchyRegistry @ 0x14082C1CC
 * Callers:
 *     EtwpFindMatchingPmcRegistryGroup @ 0x14082BDA4 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x14082C8E4 (EtwpLoadMicroarchitecturalProfileGroup.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlpQueryRegistryValues @ 0x140A10184 (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall EtwpGetPmcCpuHierarchyRegistry(int a1, _DWORD *a2, __int64 a3)
{
  char *v6; // rdx
  __int64 *v7; // r8
  char *v8; // rcx
  char *v9; // r9
  __int64 v10; // r10
  __int64 v11; // rax
  ULONG v13; // [rsp+20h] [rbp-E0h]
  _QWORD v14[4]; // [rsp+30h] [rbp-D0h] BYREF
  char v15; // [rsp+50h] [rbp-B0h] BYREF
  char v16; // [rsp+58h] [rbp-A8h] BYREF
  int v17; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v18; // [rsp+88h] [rbp-78h]
  int v19[6]; // [rsp+A0h] [rbp-60h] BYREF
  char v20; // [rsp+B8h] [rbp-48h] BYREF
  void *v21; // [rsp+148h] [rbp+48h]
  const WCHAR *v22; // [rsp+158h] [rbp+58h]
  int *v23; // [rsp+160h] [rbp+60h]
  int v24; // [rsp+168h] [rbp+68h]

  v14[0] = L"Family";
  v14[1] = L"Model";
  v14[2] = L"Stepping";
  memset_0(v19, 0, 0x118uLL);
  v6 = &v16;
  v7 = v14;
  *(_QWORD *)a3 = -1LL;
  v8 = &v20;
  *(_DWORD *)(a3 + 8) = -1;
  v9 = &v15;
  v10 = 3LL;
  do
  {
    v11 = *v7++;
    *(_QWORD *)v8 = v9;
    v9 += 16;
    *(_QWORD *)v6 = a3;
    a3 += 4LL;
    *((_QWORD *)v8 - 3) = &EtwpQueryRegistryCallback;
    *((_QWORD *)v8 - 1) = v11;
    *((_DWORD *)v8 + 2) = 4;
    v8 += 56;
    *((_DWORD *)v6 - 2) = 4;
    v6 += 16;
    --v10;
  }
  while ( v10 );
  *a2 = -1;
  v23 = &v17;
  v21 = &EtwpQueryRegistryCallback;
  v22 = L"Architecture";
  v24 = 4;
  v17 = 4;
  v18 = a2;
  return RtlpQueryRegistryValues(0x40000000, a1, (int)v19, 0, v13, 1);
}
