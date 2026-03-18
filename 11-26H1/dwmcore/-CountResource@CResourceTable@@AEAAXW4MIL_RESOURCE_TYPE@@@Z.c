/*
 * XREFs of ?CountResource@CResourceTable@@AEAAXW4MIL_RESOURCE_TYPE@@@Z @ 0x180189944
 * Callers:
 *     ?AddResourceAtHandle@CResourceTable@@QEAAJIW4MIL_RESOURCE_TYPE@@PEAVCResource@@@Z @ 0x18018984C (-AddResourceAtHandle@CResourceTable@@QEAAJIW4MIL_RESOURCE_TYPE@@PEAVCResource@@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CResourceTable::CountResource(__int64 a1, unsigned int a2)
{
  _DWORD *result; // rax
  bool v3; // zf
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  bool v9; // zf
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx

  result = *(_DWORD **)(a1 + 56);
  if ( a2 <= 0x4C )
  {
    if ( a2 != 76 && a2 != 2 )
    {
      if ( a2 == 31 )
      {
        ++result[31];
        goto LABEL_38;
      }
      if ( a2 == 35 )
      {
LABEL_40:
        ++result[26];
        goto LABEL_10;
      }
      if ( a2 != 44 )
      {
        if ( a2 == 70 )
        {
          ++result[29];
LABEL_36:
          ++dword_1803DE914;
          return result;
        }
        v3 = a2 == 71;
        goto LABEL_8;
      }
    }
  }
  else if ( a2 != 91 && a2 != 137 )
  {
    if ( a2 != 138 )
    {
      if ( a2 == 139 || a2 == 156 )
      {
LABEL_34:
        ++result[28];
        goto LABEL_10;
      }
      v3 = a2 == 164;
LABEL_8:
      if ( !v3 )
      {
        ++result[27];
        goto LABEL_10;
      }
      goto LABEL_34;
    }
    goto LABEL_40;
  }
  ++result[30];
LABEL_10:
  if ( a2 > 0x4C )
  {
    v4 = a2 - 91;
    if ( v4 )
    {
      v5 = v4 - 46;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( !v7 || (v8 = v7 - 17) == 0 )
          {
LABEL_33:
            ++dword_1803DE910;
            return result;
          }
          v9 = v8 == 8;
LABEL_17:
          if ( !v9 )
          {
            ++dword_1803DE90C;
            return result;
          }
          goto LABEL_33;
        }
        goto LABEL_39;
      }
    }
    goto LABEL_42;
  }
  if ( a2 == 76 )
    goto LABEL_42;
  v10 = a2 - 2;
  if ( !v10 )
    goto LABEL_42;
  v11 = v10 - 29;
  if ( !v11 )
  {
LABEL_38:
    ++dword_1803DE91C;
    return result;
  }
  v12 = v11 - 4;
  if ( !v12 )
  {
LABEL_39:
    ++dword_1803DE908;
    return result;
  }
  v13 = v12 - 9;
  if ( v13 )
  {
    v14 = v13 - 26;
    if ( v14 )
    {
      v9 = v14 == 1;
      goto LABEL_17;
    }
    goto LABEL_36;
  }
LABEL_42:
  ++dword_1803DE918;
  return result;
}
