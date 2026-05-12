/*
 * XREFs of NvmeNamespaceComputeBlockInfo @ 0x140102788
 * Callers:
 *     NvmeControllerIdentifyChangedNamespaces @ 0x1400C5E88 (NvmeControllerIdentifyChangedNamespaces.c)
 *     NvmeNamespaceIdentify @ 0x1400C6954 (NvmeNamespaceIdentify.c)
 *     NvmeControllerCreateNvmeNamespace @ 0x140100594 (NvmeControllerCreateNvmeNamespace.c)
 * Callees:
 *     NvmeControllerGetMaxTransferSize @ 0x1400F4A5C (NvmeControllerGetMaxTransferSize.c)
 */

__int64 __fastcall NvmeNamespaceComputeBlockInfo(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v3; // edi
  unsigned int MaxTransferSize; // eax
  __int64 *v5; // r9
  unsigned int v6; // esi
  unsigned int v7; // r10d
  __int64 v8; // rcx
  unsigned int v9; // ecx
  unsigned int v10; // r8d
  unsigned int v11; // r11d
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  __int64 v15; // rcx
  unsigned int v16; // r8d
  unsigned int v17; // ecx
  int v18; // ecx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v3 = -1;
  MaxTransferSize = NvmeControllerGetMaxTransferSize(v1);
  v5 = *(__int64 **)(a1 + 176);
  v6 = MaxTransferSize;
  v7 = 1 << *((_BYTE *)v5 + 4 * (*((_BYTE *)v5 + 26) & 0xF) + 130);
  v8 = *(unsigned __int16 *)(a1 + 62);
  *(_DWORD *)(a1 + 64) = v7;
  if ( (_WORD)v8 && *(_DWORD *)((v8 << 7) + *(_QWORD *)(v1 + 624) - 116) )
    v3 = *(_DWORD *)((v8 << 7) + *(_QWORD *)(v1 + 624) - 116);
  if ( (v5[3] & 0x10) != 0 )
  {
    v9 = v7 * (*((unsigned __int16 *)v5 + 36) + 1);
    if ( v9 <= MaxTransferSize )
    {
      if ( v3 < v9 )
        v9 = v3;
      if ( v9 - 0x8000 <= 0xFFFF7FFE )
      {
        v10 = v7 * (*((unsigned __int16 *)v5 + 32) + 1);
        if ( v10 <= MaxTransferSize )
        {
          v11 = v7 * (*((unsigned __int16 *)v5 + 33) + 1);
          if ( !(v10 % v11) )
          {
            *(_DWORD *)(a1 + 72) = v9;
            *(_DWORD *)(a1 + 76) = v10;
            *(_DWORD *)(a1 + 80) = v11;
            *(_DWORD *)(a1 + 84) = *((unsigned __int16 *)v5 + 34) + 1;
            v12 = *((unsigned __int16 *)v5 + 35) + 1;
            *(_DWORD *)(a1 + 68) = v10;
            *(_DWORD *)(a1 + 88) = v12;
          }
        }
      }
    }
  }
  else if ( v3 - 0x8000 <= 0xFFFF7FFE )
  {
    *(_DWORD *)(a1 + 72) = v3;
  }
  *(_DWORD *)(a1 + 420) = 0;
  v13 = 0;
  *(_BYTE *)(a1 + 419) = 0;
  v14 = *((unsigned __int16 *)v5 + 23);
  if ( (_WORD)v14 )
  {
    v13 = v7 * v14;
    *(_DWORD *)(a1 + 420) = v7 * v14;
  }
  v15 = *(_QWORD *)(v1 + 1048);
  v16 = v13;
  if ( v15 )
  {
    v17 = *(_DWORD *)(v15 + 20);
    if ( v17 )
    {
      if ( !(v17 % v7) )
      {
        *(_DWORD *)(a1 + 420) = v17;
        v16 = v17;
      }
    }
  }
  if ( v16 <= v6 )
  {
    if ( v16 )
    {
      _BitScanForward((unsigned int *)&v18, v16);
      if ( v16 >> v18 == 1 )
        *(_BYTE *)(a1 + 419) = v18;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 420) = 0;
  }
  if ( !*(_DWORD *)(a1 + 68) )
    *(_DWORD *)(a1 + 68) = 4096;
  result = *v5;
  *(_QWORD *)(a1 + 424) = *v5;
  return result;
}
