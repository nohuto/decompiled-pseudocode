/*
 * XREFs of _RtlpMuiRegDeserializeRegistryInfo @ 0x1800DBF10
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180053B7C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpMuiRegDeserializeRegistryInfo(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned __int64 v3; // r9
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  unsigned int v10; // r8d
  __int64 v11; // r10
  __int64 v12; // r10
  __int64 v13; // r10
  __int64 v15; // r8
  __int64 v16; // r8

  v3 = a2;
  if ( !a3 || !a1 || a2 < 0xA8 )
    return (unsigned int)-1073741811;
  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 )
  {
    if ( v3 < (unsigned __int64)(unsigned int)v5 + 24 )
      return (unsigned int)-1073741811;
    v16 = a1 + (unsigned int)v5;
    *(_QWORD *)(a1 + 24) = v16;
    if ( (unsigned int)v3 < *(_DWORD *)v16 + (int)v5 )
      return (unsigned int)-1073741811;
    *(_QWORD *)(v16 + 16) = v16 + 24;
  }
  v6 = *(_QWORD *)(a1 + 32);
  if ( v6 )
  {
    if ( v3 < (unsigned __int64)(unsigned int)v6 + 32 )
      return (unsigned int)-1073741811;
    v15 = a1 + (unsigned int)v6;
    *(_QWORD *)(a1 + 32) = v15;
    if ( (unsigned int)v3 < *(_DWORD *)v15 + (int)v6 )
      return (unsigned int)-1073741811;
    *(_QWORD *)(v15 + 16) = v15 + 32;
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL) = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL)
                                             + 2LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 32) + 4LL);
  }
  v7 = *(_QWORD *)(a1 + 40);
  if ( v7 )
  {
    if ( v3 < (unsigned __int64)(unsigned int)v7 + 16 )
      return (unsigned int)-1073741811;
    v8 = a1 + (unsigned int)v7;
    *(_QWORD *)(a1 + 40) = v8;
    if ( (unsigned int)v3 < *(_DWORD *)v8 + (int)v7 )
      return (unsigned int)-1073741811;
    *(_QWORD *)(v8 + 8) = v8 + 16;
  }
  v9 = *(_QWORD *)(a1 + 56);
  v10 = 0;
  if ( v9 )
  {
    if ( v3 < (unsigned __int64)(unsigned int)v9 + 64 )
      return (unsigned int)-1073741811;
    *(_QWORD *)(a1 + 56) = (unsigned int)v9 + a1;
    if ( (unsigned int)v3 < *(_DWORD *)((unsigned int)v9 + a1) + (int)v9 )
      return (unsigned int)-1073741811;
    *(_QWORD *)((unsigned int)v9 + a1 + 24) = (unsigned int)v9 + a1 + 64;
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL) = 0LL;
  }
  v11 = *(_QWORD *)(a1 + 128);
  if ( v11 )
  {
    if ( (unsigned int)v3 < (int)v11 + *(_DWORD *)(a1 + 148) )
      return (unsigned int)-1073741811;
    *(_QWORD *)(a1 + 128) = a1 + (unsigned int)v11;
  }
  v12 = *(_QWORD *)(a1 + 152);
  if ( v12 )
  {
    if ( (unsigned int)v3 < (int)v12 + *(_DWORD *)(a1 + 160) )
      return (unsigned int)-1073741811;
    *(_QWORD *)(a1 + 152) = a1 + (unsigned int)v12;
  }
  v13 = *(_QWORD *)(a1 + 136);
  if ( v13 )
  {
    if ( (unsigned int)v3 >= (int)v13 + *(_DWORD *)(a1 + 144) )
    {
      *(_QWORD *)(a1 + 136) = a1 + (unsigned int)v13;
      goto LABEL_23;
    }
    return (unsigned int)-1073741811;
  }
LABEL_23:
  *(_DWORD *)a1 = 1024;
  *a3 = a1;
  return v10;
}
