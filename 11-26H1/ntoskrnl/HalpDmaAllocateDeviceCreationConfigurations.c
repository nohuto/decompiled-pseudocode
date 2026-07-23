/*
 * XREFs of HalpDmaAllocateDeviceCreationConfigurations @ 0x14057AE68
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x140782F1C (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalpDmaFreeDeviceCreationConfigurations @ 0x14057B218 (HalpDmaFreeDeviceCreationConfigurations.c)
 */

__int64 __fastcall HalpDmaAllocateDeviceCreationConfigurations(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        _QWORD *a6)
{
  unsigned int v6; // esi
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 *v14; // rcx
  __int64 result; // rax

  v6 = 0;
  v7 = 0LL;
  if ( !a3 || a4 != 1 )
  {
LABEL_6:
    if ( !a5 )
      goto LABEL_18;
    v9 = HalpMmAllocCtxAlloc(a1, 32LL);
    v11 = (_QWORD *)v9;
    if ( !v9 )
    {
      v6 = -1073741670;
      if ( !v7 )
        goto LABEL_18;
LABEL_17:
      HalpDmaFreeDeviceCreationConfigurations(v7);
      v7 = 0LL;
      goto LABEL_18;
    }
    *(_QWORD *)(v9 + 20) = 0LL;
    *(_DWORD *)(v9 + 28) = 0;
    *(_QWORD *)(v9 + 8) = v9;
    *(_QWORD *)v9 = v9;
    *(_QWORD *)(v9 + 24) |= 1uLL;
    *(_DWORD *)(v9 + 16) = 5;
    if ( v7 )
    {
      v12 = (_QWORD *)v7[1];
      if ( (_QWORD *)*v12 != v7 )
        goto LABEL_14;
      *v11 = v7;
      v11[1] = v12;
      *v12 = v11;
      v7[1] = v11;
    }
    v7 = v11;
    v13 = HalpMmAllocCtxAlloc(v10, 32LL);
    if ( !v13 )
    {
      v6 = -1073741670;
      goto LABEL_17;
    }
    *(_QWORD *)(v13 + 20) = 0LL;
    *(_DWORD *)(v13 + 28) = 0;
    *(_QWORD *)(v13 + 8) = v13;
    *(_QWORD *)v13 = v13;
    *(_QWORD *)(v13 + 24) |= 1uLL;
    *(_DWORD *)(v13 + 16) = 6;
    v14 = (__int64 *)v11[1];
    if ( (_QWORD *)*v14 == v11 )
    {
      *(_QWORD *)v13 = v11;
      v7 = (_QWORD *)v13;
      *(_QWORD *)(v13 + 8) = v14;
      *v14 = v13;
      v11[1] = v13;
      goto LABEL_18;
    }
LABEL_14:
    __fastfail(3u);
  }
  v8 = (_QWORD *)HalpMmAllocCtxAlloc(a1, 32LL);
  if ( v8 )
  {
    v8[2] = 3LL;
    v7 = v8;
    v8[3] = 0LL;
    v8[1] = v8;
    *v8 = v8;
    goto LABEL_6;
  }
  v6 = -1073741670;
LABEL_18:
  result = v6;
  *a6 = v7;
  return result;
}
