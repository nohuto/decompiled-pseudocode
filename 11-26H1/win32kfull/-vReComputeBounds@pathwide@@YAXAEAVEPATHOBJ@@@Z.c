/*
 * XREFs of ?vReComputeBounds@pathwide@@YAXAEAVEPATHOBJ@@@Z @ 0x14011AF88
 * Callers:
 *     ?bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x140119278 (-bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     NtGdiWidenPath @ 0x14011ADC0 (NtGdiWidenPath.c)
 * Callees:
 *     <none>
 */

void __fastcall pathwide::vReComputeBounds(pathwide *this, struct EPATHOBJ *a2)
{
  __int64 v2; // rdx
  __int64 *v3; // r8
  int v4; // ecx
  int v5; // eax
  _DWORD *v6; // rcx
  unsigned __int64 v7; // r10
  int v8; // r11d
  int v9; // ebx
  int v10; // r9d
  _DWORD *v11; // rdi
  int v12; // eax

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
        v6 = v3 + 3;
        v7 = (unsigned __int64)&v3[*((unsigned int *)v3 + 5) + 3];
        if ( (unsigned __int64)(v3 + 3) < v7 )
        {
          v8 = *(_DWORD *)(v2 + 60);
          v9 = *(_DWORD *)(v2 + 48);
          do
          {
            v10 = *v6;
            v11 = v6;
            v6 += 2;
            if ( v9 > v10 )
            {
              *(_DWORD *)(v2 + 48) = v10;
              v9 = v10;
            }
            else if ( *(_DWORD *)(v2 + 56) < v10 )
            {
              *(_DWORD *)(v2 + 56) = v10;
            }
            v12 = v11[1];
            if ( v8 < v12 )
            {
              v8 = v11[1];
              *(_DWORD *)(v2 + 60) = v12;
            }
            else if ( *(_DWORD *)(v2 + 52) > v12 )
            {
              *(_DWORD *)(v2 + 52) = v12;
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
      *(_QWORD *)(v2 + 48) = 0LL;
      *(_QWORD *)(v2 + 56) = 0LL;
    }
  }
}
