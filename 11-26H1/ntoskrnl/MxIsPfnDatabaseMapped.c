/*
 * XREFs of MxIsPfnDatabaseMapped @ 0x140CFDEAC
 * Callers:
 *     MxMapFreePageNode @ 0x140CFE074 (MxMapFreePageNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MxIsPfnDatabaseMapped(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // r8
  __int64 v3; // r11
  unsigned int v4; // ecx
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdx
  __int64 *v10; // r9
  __int64 v11; // rbx
  __int64 v12; // r11
  bool v13; // zf
  bool i; // zf
  __int64 v15; // rax

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 48 * v1;
  v3 = 48 * (v1 + *(_QWORD *)(a1 + 40));
  v4 = 0;
  v5 = v3 - 1;
  v6 = (unsigned __int64)(48 * v1) >> 21;
  v7 = v5 >> 21;
  v8 = (v5 >> 21) - v6 + 1;
  if ( qword_14101FC88 && v7 < qword_14101FC80 && v6 < qword_14101FC80 )
  {
    if ( v8 > 1 )
    {
      if ( qword_14101FC80 - v6 >= v8 )
      {
        v10 = (__int64 *)(qword_14101FC88 + 8 * (v2 >> 27));
        v11 = qword_14101FC88 + 8 * (v5 >> 27);
        v12 = *v10;
        if ( v10 == (__int64 *)v11 )
        {
          v13 = (v12 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v8) << v6)) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v8) << v6;
LABEL_15:
          if ( v13 )
            return 1LL;
        }
        else
        {
          for ( i = (v12 & (-1LL << v6)) == -1LL << v6; i; i = v15 == -1 )
          {
            v15 = *++v10;
            if ( v10 == (__int64 *)v11 )
            {
              v13 = (v15 & (0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v7)) == 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v7;
              goto LABEL_15;
            }
          }
        }
      }
    }
    else if ( v5 >> 21 == v6 )
    {
      LOBYTE(v4) = _bittest64((const signed __int64 *)(qword_14101FC88 + 8 * (v2 >> 27)), v6 & 0x3F) != 0;
      return v4;
    }
  }
  return 0LL;
}
