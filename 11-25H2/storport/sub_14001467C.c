/*
 * XREFs of sub_14001467C @ 0x14001467C
 * Callers:
 *     sub_140014708 @ 0x140014708 (sub_140014708.c)
 *     sub_14005AC44 @ 0x14005AC44 (sub_14005AC44.c)
 * Callees:
 *     sub_140016234 @ 0x140016234 (sub_140016234.c)
 */

__int64 __fastcall sub_14001467C(__int64 a1, IRP *a2, __int64 a3)
{
  int v5; // edx
  __int64 v6; // rcx
  char v7; // al

  v5 = sub_140016234((CMSPAddress *)a1, a2, (__int64)sub_1400399C0, 0, 64, *(_DWORD *)(a1 + 4124));
  if ( v5 >= 0 )
  {
    v6 = *(unsigned int *)(a3 + 44);
    if ( *(_DWORD *)(v6 + a3) == 2 && *(_DWORD *)(v6 + a3 + 4) == 24 )
    {
      v7 = *(_BYTE *)(a1 + 110);
      *(_DWORD *)(a1 + 5364) = 2;
      *(_BYTE *)(a1 + 110) = v7 ^ (v7 ^ (2 * *(_BYTE *)(v6 + a3 + 12))) & 2;
    }
    else
    {
      *(_DWORD *)(a1 + 5364) = 1;
    }
  }
  return (unsigned int)v5;
}
