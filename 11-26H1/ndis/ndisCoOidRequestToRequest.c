/*
 * XREFs of ndisCoOidRequestToRequest @ 0x1400798A0
 * Callers:
 *     NdisCoOidRequest @ 0x14008ACE0 (NdisCoOidRequest.c)
 *     NdisMCmOidRequest @ 0x1400D7BC0 (NdisMCmOidRequest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisCoOidRequestToRequest(
        __int64 (__fastcall **a1)(__int64, __int64, __int64, __int64),
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 Pool2; // rax
  __int64 v10; // rbx
  int v12; // ecx
  int v13; // ecx
  _DWORD *v14; // rax
  int *v15; // rcx
  int v16; // ecx
  __int64 v17; // r8
  int v18; // r9d
  int v19; // edx
  unsigned int v20; // edi
  _DWORD *v21; // [rsp+60h] [rbp-38h]

  Pool2 = ExAllocatePool2(64LL, 176LL, 1701987406LL);
  v10 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v12 = *(_DWORD *)(a5 + 4);
  *(_DWORD *)(Pool2 + 24) |= 0x400u;
  *(_DWORD *)(Pool2 + 32) = v12;
  *(_QWORD *)(Pool2 + 8) = a5;
  if ( !v12 )
  {
LABEL_8:
    v14 = (_DWORD *)(a5 + 56);
    v15 = (int *)(a5 + 56);
    goto LABEL_9;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    if ( v13 == 11 )
    {
      ExFreePoolWithTag((PVOID)Pool2, 0);
      return 3221225659LL;
    }
    goto LABEL_8;
  }
  v14 = (_DWORD *)(a5 + 56);
  v15 = (int *)(a5 + 56);
LABEL_9:
  v16 = *v15;
  v21 = v14;
  v17 = *(_QWORD *)(a5 + 40);
  v18 = *(_DWORD *)(a5 + 48);
  v19 = *(_DWORD *)(a5 + 52);
  *(_DWORD *)(v10 + 40) = *(_DWORD *)(a5 + 32);
  *(_QWORD *)(v10 + 48) = v17;
  *(_DWORD *)(v10 + 56) = v18;
  *(_DWORD *)(v10 + 60) = v19;
  *(_DWORD *)(v10 + 64) = v16;
  v20 = (*a1)(a2, a3, a4, v10);
  if ( v20 != 259 )
  {
    *(_DWORD *)(a5 + 52) = *(_DWORD *)(v10 + 60);
    *v21 = *(_DWORD *)(v10 + 64);
    ExFreePoolWithTag((PVOID)v10, 0);
  }
  return v20;
}
