/*
 * XREFs of QueryPkgThermalMSRValues @ 0x140003F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall QueryPkgThermalMSRValues(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  unsigned int v4; // r10d
  __int64 v5; // r11
  unsigned int i; // r8d
  __int64 v7; // rax
  unsigned int v8; // edi
  _QWORD *v9; // r8
  __int64 v10; // rax

  v4 = 0;
  if ( a2 && a3 && (v5 = *(_QWORD *)(a2 + 48)) != 0 && *(_DWORD *)(a2 + 24) == 2 )
  {
    *a3 = *(_DWORD *)(v5 + 32) + *(_DWORD *)(v5 + 16);
    if ( a4 )
    {
      for ( i = 0; i < *(_DWORD *)(v5 + 16); a4 += 24LL )
      {
        v7 = i++;
        *(_DWORD *)a4 = *(_DWORD *)(*(_QWORD *)(v5 + 24) + 40 * v7 + 24);
        *(_QWORD *)(a4 + 8) = *(_QWORD *)(v5 + 8);
        *(_QWORD *)(a4 + 16) = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 40 * v7 + 32);
      }
      v8 = 0;
      if ( *(_DWORD *)(v5 + 32) )
      {
        v9 = (_QWORD *)(a4 + 16);
        do
        {
          v10 = v8++;
          *((_DWORD *)v9 - 4) = *(_DWORD *)(*(_QWORD *)(v5 + 40) + 40 * v10 + 24);
          *(v9 - 1) = *(_QWORD *)(v5 + 8);
          *v9 = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 40 * v10 + 32);
          v9 += 3;
        }
        while ( v8 < *(_DWORD *)(v5 + 32) );
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
