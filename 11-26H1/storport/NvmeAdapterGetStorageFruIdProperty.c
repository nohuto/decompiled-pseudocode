/*
 * XREFs of NvmeAdapterGetStorageFruIdProperty @ 0x14019CE78
 * Callers:
 *     NvmeAdapterStorageQueryProperty @ 0x14018377C (NvmeAdapterStorageQueryProperty.c)
 * Callees:
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterGetStorageFruIdProperty(__int64 a1, _DWORD *a2, int *a3)
{
  unsigned int v3; // esi
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // ecx

  v3 = *a3;
  if ( (unsigned int)*a3 < 0x10 )
  {
    if ( v3 < 8 )
    {
      *a3 = 0;
      return 3221225507LL;
    }
    goto LABEL_10;
  }
  memset_0(a2, 0, (unsigned int)*a3);
  *a2 = 16;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 1152) + 592LL);
  v9 = *(_QWORD *)(v8 + 112) - qword_140172D70;
  if ( !v9 )
    v9 = *(_QWORD *)(v8 + 120) - qword_140172D78;
  if ( v9 )
  {
    v10 = 28;
    if ( v3 >= 0x1C )
    {
      a2[2] = 16;
      *(_OWORD *)(a2 + 3) = *(_OWORD *)(v8 + 112);
LABEL_12:
      *a3 = v10;
      a2[1] = v10;
      return 0LL;
    }
  }
  else
  {
    v10 = 32;
    if ( v3 >= 0x20 )
    {
      a2[2] = 20;
      *(_OWORD *)(a2 + 3) = *(_OWORD *)(v8 + 4);
      a2[7] = *(_DWORD *)(v8 + 20);
      goto LABEL_12;
    }
  }
LABEL_10:
  a2[1] = 16;
  *a3 = 8;
  return 0LL;
}
