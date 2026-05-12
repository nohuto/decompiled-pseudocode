/*
 * XREFs of RaidGetResourceListInterrupt @ 0x14008291C
 * Callers:
 *     RaidAdapterConnectInterrupt @ 0x1400606E4 (RaidAdapterConnectInterrupt.c)
 *     NvmeAdapterConnectInterrupt @ 0x1400D3FE4 (NvmeAdapterConnectInterrupt.c)
 * Callees:
 *     RaidGetResourceListElement @ 0x1400828B8 (RaidGetResourceListElement.c)
 */

__int64 __fastcall RaidGetResourceListInterrupt(
        __int64 *a1,
        char a2,
        _DWORD *a3,
        unsigned __int8 *a4,
        int *a5,
        bool *a6,
        _OWORD *a7,
        unsigned __int8 *a8)
{
  unsigned int v12; // r14d
  unsigned __int8 *v14; // rdi
  __int64 v15; // rax
  unsigned int v16; // ebp
  unsigned int i; // ebx
  _BYTE *v18; // r8
  unsigned __int8 v19; // al
  __int64 v20; // rdx
  __int64 v21; // rcx
  bool v22; // zf
  int v23; // eax
  bool *v24; // rcx
  int v25; // [rsp+30h] [rbp-38h] BYREF
  _BYTE *v26; // [rsp+38h] [rbp-30h] BYREF
  int v27; // [rsp+70h] [rbp+8h] BYREF

  v26 = 0LL;
  v12 = -1073741275;
  if ( !a1 )
    return 0LL;
  v14 = a8;
  v15 = *a1;
  *a4 = 0;
  *v14 = 0;
  if ( v15 )
    v16 = *(_DWORD *)(v15 + 16);
  else
    v16 = 0;
  for ( i = 0; i < v16; ++i )
  {
    RaidGetResourceListElement(a1, i, &v25, &v27, 0LL, (__int64 *)&v26);
    v18 = v26;
    if ( *v26 == 2 )
    {
      v19 = v26[4];
      v12 = 0;
      *a4 = v19;
      if ( !a2 )
      {
        v20 = (__int64)a7;
        v21 = *(_QWORD *)(v18 + 12);
        v22 = v18[1] == 3;
        v23 = *((_DWORD *)v18 + 2);
        *a7 = 0LL;
        *(_QWORD *)v20 = v21;
        *(_WORD *)(v20 + 8) = *((_WORD *)v18 + 3);
        v24 = a6;
        *a3 = v23;
        *v24 = v22;
        *a5 = v18[2] & 1;
        return v12;
      }
      if ( v19 > *v14 )
        *v14 = v19;
    }
  }
  return v12;
}
