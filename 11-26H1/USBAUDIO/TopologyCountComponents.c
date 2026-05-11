/*
 * XREFs of TopologyCountComponents @ 0x14002E4FC
 * Callers:
 *     TopologyBuildFilterTopology @ 0x140041998 (TopologyBuildFilterTopology.c)
 * Callees:
 *     <none>
 */

void __fastcall TopologyCountComponents(__int64 **a1, _DWORD *a2, int *a3, int *a4, int *a5)
{
  __int64 *v6; // r10
  unsigned int v8; // ecx
  int v9; // r11d
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // r11d
  int v18; // edx
  int v19; // edx
  int v20; // eax

  v6 = *a1;
  *a2 = 0;
  *a3 = 0;
  *a5 = 0;
  *a4 = 0;
  if ( v6 != (__int64 *)a1 )
  {
    while ( 1 )
    {
      v8 = *((_DWORD *)v6 + 5);
      if ( v8 < 2 )
      {
        v18 = *a4;
        ++*a3;
        v19 = v18 + 1;
        *a4 = v19;
        if ( v8 == 1 )
          *a4 = *((_DWORD *)v6 + 8) + v19;
        if ( *((_DWORD *)v6 + 17) == 257 )
        {
          v20 = *a5;
          if ( ((1 << v8) & *a5) == 0 )
          {
            ++*a2;
            *a5 = (1 << v8) | v20;
          }
        }
        goto LABEL_25;
      }
      if ( v8 == 2 )
      {
        v15 = *((_DWORD *)v6 + 17);
        if ( v15 )
        {
          v16 = *a4;
          v17 = *a3;
          do
          {
            ++v16;
            ++v17;
            v15 &= v15 - 1;
          }
          while ( v15 );
          *a3 = v17;
          *a4 = v16;
        }
        goto LABEL_25;
      }
      if ( v8 == 3 || v8 == 4 )
        goto LABEL_15;
      if ( v8 != 5 )
        break;
      v13 = *((_DWORD *)v6 + 8);
      *a3 += v13 + 1;
      v14 = 2 * v13;
LABEL_14:
      *a4 += v14;
LABEL_25:
      v6 = (__int64 *)*v6;
      if ( v6 == (__int64 *)a1 )
        return;
    }
    if ( v8 != 7 )
    {
      if ( v8 == 8 )
      {
        v9 = *a4 + *((_DWORD *)v6 + 8);
        v10 = *((_DWORD *)v6 + 16);
        *a4 = v9 - 1;
        if ( v10 )
        {
          v11 = *a3;
          do
          {
            v10 &= v10 - 1;
            v12 = v9;
            ++v11;
            ++v9;
          }
          while ( v10 );
          *a3 = v11;
          *a4 = v12;
        }
      }
      goto LABEL_25;
    }
LABEL_15:
    ++*a3;
    v14 = *((_DWORD *)v6 + 8);
    goto LABEL_14;
  }
}
