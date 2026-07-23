/*
 * XREFs of HsaGetBlockedDomain @ 0x1405AC2C8
 * Callers:
 *     HsaUpdateDeviceTableEntry @ 0x1405AD260 (HsaUpdateDeviceTableEntry.c)
 *     HsaInitializeIommu @ 0x140BF6BE0 (HsaInitializeIommu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HsaGetBlockedDomain(__int64 a1, _DWORD *a2, unsigned __int64 *a3)
{
  unsigned int *v5; // rcx
  unsigned int i; // r9d
  unsigned int *v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 result; // rax

  if ( a2 )
  {
    v5 = *(unsigned int **)(a1 + 216);
    for ( i = 0; i < *v5; ++i )
    {
      v7 = &v5[4 * i + 2];
      v8 = **((_QWORD **)v7 + 1);
      if ( *(_DWORD *)v8 == 1 && *(unsigned __int16 *)(v8 + 12) == *a2 )
      {
        if ( !v7 )
          break;
        v9 = *(_QWORD *)(*((_QWORD *)v7 + 1) + 16LL);
        goto LABEL_10;
      }
    }
  }
  v9 = qword_140F87878;
  v7 = (unsigned int *)(a1 + 200);
LABEL_10:
  result = *v7;
  *a3 = v9 >> 12;
  return result;
}
