/*
 * XREFs of RtlAreBitsSet @ 0x1800E8D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall RtlAreBitsSet(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rcx
  char v5; // r11
  int *v6; // r9
  int v7; // edi
  int *v8; // rbx
  unsigned int v9; // r8d
  int v10; // eax
  int v11; // edx

  if ( a2 < *(_DWORD *)a1 )
  {
    if ( a3 <= 1 )
    {
      if ( a3 == 1 )
        return _bittest((const signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * ((unsigned __int64)a2 >> 5)), a2 & 0x1F);
      return 0;
    }
    if ( *(_DWORD *)a1 - a2 >= a3 )
    {
      v4 = *(_QWORD *)(a1 + 8);
      v5 = a2 + a3 - 1;
      v6 = (int *)(v4 + 4 * ((unsigned __int64)a2 >> 5));
      v7 = *v6;
      v8 = (int *)(v4 + 4 * ((unsigned __int64)(a2 + a3 - 1) >> 5));
      if ( v6 == v8 )
      {
        v9 = 0xFFFFFFFF >> (32 - a3) << a2;
        v10 = v7 & v9;
        return v10 == v9;
      }
      if ( (v7 & (-1 << a2)) == -1 << a2 )
      {
        while ( 1 )
        {
          v11 = *++v6;
          if ( v6 == v8 )
            break;
          if ( v11 != -1 )
            return 0;
        }
        v9 = 0xFFFFFFFF >> ~v5;
        v10 = v11 & v9;
        return v10 == v9;
      }
    }
  }
  return 0;
}
