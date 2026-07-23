/*
 * XREFs of IopEnumerateRelations @ 0x140AED59C
 * Callers:
 *     PnpFinalizeDeviceRemovalForReset @ 0x1407A570C (PnpFinalizeDeviceRemovalForReset.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1409B3C10 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PipDeviceObjectListElementAt @ 0x140AED638 (PipDeviceObjectListElementAt.c)
 */

bool __fastcall IopEnumerateRelations(__int64 a1, int *a2, _QWORD *a3, _DWORD *a4, _DWORD *a5)
{
  char v5; // r10
  int v6; // edi
  int v9; // ecx
  unsigned int v10; // r8d
  unsigned int v11; // edx
  int v12; // edx
  int v13; // eax
  int v15; // ecx

  v5 = 0;
  v6 = (int)a3;
  *a3 = 0LL;
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0;
  v9 = *a2;
  if ( !*a2 || *(_BYTE *)(a1 + 8) )
  {
    v10 = a2[1];
    v11 = **(_DWORD **)a1;
    if ( v10 < v11 )
    {
      if ( v9 && (v15 = v9 - 1) != 0 )
      {
        if ( v15 != 1 )
          return v5;
        v12 = v11 - v10 - 1;
      }
      else
      {
        v12 = v10;
      }
      v13 = PipDeviceObjectListElementAt(*(_QWORD *)a1, v12, v6, (_DWORD)a4, (__int64)a5);
      ++a2[1];
      return v13 >= 0;
    }
  }
  return v5;
}
