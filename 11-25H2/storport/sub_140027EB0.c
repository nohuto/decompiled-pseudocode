/*
 * XREFs of sub_140027EB0 @ 0x140027EB0
 * Callers:
 *     sub_140050330 @ 0x140050330 (sub_140050330.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140027EB0(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 v6; // r9
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  __int64 v9; // r11
  int v10; // edx
  int v11; // edx

  result = *(_QWORD *)(a1 + 168);
  if ( *(_BYTE *)(result + 2) == 40 )
  {
    if ( !*(_DWORD *)(result + 20) )
    {
      v6 = 0LL;
      if ( *(_DWORD *)(result + 56) )
      {
        while ( 1 )
        {
          v7 = *(unsigned int *)(result + 4 * v6 + 120);
          if ( (unsigned int)v7 < 0x80 )
            goto LABEL_8;
          v8 = *(unsigned int *)(result + 16);
          if ( (unsigned int)v7 > (unsigned int)v8 )
            goto LABEL_8;
          v9 = (unsigned int)v7;
          v10 = *(_DWORD *)(v7 + result);
          if ( v10 != 64 )
            break;
          if ( v9 + 40 <= v8 )
            goto LABEL_17;
LABEL_8:
          v6 = (unsigned int)(v6 + 1);
          if ( (unsigned int)v6 >= *(_DWORD *)(result + 56) )
            return result;
        }
        v11 = v10 - 65;
        if ( v11 )
        {
          if ( v11 != 1 || v9 + 40 > v8 )
            goto LABEL_8;
          *(_QWORD *)(a1 + 200) = *(_QWORD *)(v9 + result + 24);
          *(_BYTE *)(a1 + 208) = *(_BYTE *)(v9 + result + 9);
          *(_QWORD *)(v9 + result + 24) = a2;
        }
        else
        {
          if ( v9 + 56 > v8 )
            goto LABEL_8;
LABEL_17:
          *(_QWORD *)(a1 + 200) = *(_QWORD *)(v9 + result + 16);
          *(_BYTE *)(a1 + 208) = *(_BYTE *)(v9 + result + 9);
          *(_QWORD *)(v9 + result + 16) = a2;
        }
        *(_BYTE *)(v9 + result + 9) = a3;
        *(_BYTE *)(a1 + 16) |= 0x20u;
        goto LABEL_8;
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 + 200) = *(_QWORD *)(result + 32);
    *(_BYTE *)(a1 + 208) = *(_BYTE *)(result + 11);
    *(_QWORD *)(result + 32) = a2;
    *(_BYTE *)(result + 11) = a3;
    *(_BYTE *)(a1 + 16) |= 0x20u;
  }
  return result;
}
