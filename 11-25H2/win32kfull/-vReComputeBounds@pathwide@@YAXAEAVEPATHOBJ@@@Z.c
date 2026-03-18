/*
 * XREFs of ?vReComputeBounds@pathwide@@YAXAEAVEPATHOBJ@@@Z @ 0x1400E4FA8
 * Callers:
 *     NtGdiWidenPath @ 0x1400E53B0 (NtGdiWidenPath.c)
 * Callees:
 *     <none>
 */

void __fastcall pathwide::vReComputeBounds(pathwide *this, struct EPATHOBJ *a2)
{
  __int64 v2; // rdx
  __int64 *v3; // r8
  int v4; // ecx
  int v5; // eax
  int *v6; // rcx
  unsigned __int64 v7; // r10
  int v8; // r9d
  int *v9; // r11
  int v10; // eax
  int v11; // eax

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    v3 = *(__int64 **)(v2 + 32);
    if ( v3 )
    {
      v4 = *((_DWORD *)v3 + 6);
      *(_DWORD *)(v2 + 48) = v4;
      v5 = *((_DWORD *)v3 + 7);
      *(_DWORD *)(v2 + 52) = v5;
      *(_DWORD *)(v2 + 56) = v4;
      *(_DWORD *)(v2 + 60) = v5;
      do
      {
        v6 = (int *)(v3 + 3);
        v7 = (unsigned __int64)&v3[*((unsigned int *)v3 + 5) + 3];
        if ( (unsigned __int64)(v3 + 3) < v7 )
        {
          v8 = *(_DWORD *)(v2 + 60);
          do
          {
            v9 = v6;
            v6 += 2;
            v10 = *v9;
            if ( *(_DWORD *)(v2 + 48) > *v9 )
            {
              *(_DWORD *)(v2 + 48) = v10;
            }
            else if ( *(_DWORD *)(v2 + 56) < v10 )
            {
              *(_DWORD *)(v2 + 56) = v10;
            }
            v11 = v9[1];
            if ( v8 < v11 )
            {
              v8 = v9[1];
              *(_DWORD *)(v2 + 60) = v11;
            }
            else if ( *(_DWORD *)(v2 + 52) > v11 )
            {
              *(_DWORD *)(v2 + 52) = v11;
            }
          }
          while ( (unsigned __int64)v6 < v7 );
        }
        v3 = (__int64 *)*v3;
      }
      while ( v3 );
    }
    else
    {
      *(_DWORD *)(v2 + 48) = 0;
      *(_DWORD *)(v2 + 52) = 0;
      *(_DWORD *)(v2 + 56) = 0;
      *(_DWORD *)(v2 + 60) = 0;
    }
  }
}
