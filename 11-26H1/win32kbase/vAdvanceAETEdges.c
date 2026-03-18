/*
 * XREFs of vAdvanceAETEdges @ 0x140119C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vAdvanceAETEdges(__int64 **a1)
{
  int v1; // r9d
  __int64 **v2; // r8
  __int64 *v3; // rdx
  int v5; // r11d
  __int64 v6; // r10
  bool v7; // sf
  __int64 v8; // r10
  int v9; // ecx

  v1 = *((_DWORD *)a1 + 4);
  v2 = a1;
  v3 = *a1;
  do
  {
    if ( (*((_DWORD *)v3 + 2))-- == 1 )
    {
      v3 = (__int64 *)*v3;
      --v1;
      *a1 = v3;
    }
    else
    {
      v5 = *((_DWORD *)v3 + 3) + *((_DWORD *)v3 + 12);
      v6 = v3[4];
      v7 = v3[3] + v6 < 0;
      v8 = v3[3] + v6;
      v3[3] = v8;
      *((_DWORD *)v3 + 3) = v5;
      if ( !v7 )
      {
        v9 = *((_DWORD *)v3 + 13);
        v3[3] = v8 - v3[5];
        *((_DWORD *)v3 + 3) = v5 + v9;
      }
      a1 = (__int64 **)v3;
      v3 = (__int64 *)*v3;
    }
  }
  while ( v3 != (__int64 *)v2 );
  *((_DWORD *)v2 + 4) = v1;
}
