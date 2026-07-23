/*
 * XREFs of SepConstrainByConstraintMask @ 0x14045FC10
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     <none>
 */

_BYTE *__fastcall SepConstrainByConstraintMask(
        int a1,
        int a2,
        char *a3,
        char *a4,
        _BYTE *a5,
        unsigned int a6,
        _BYTE *a7)
{
  _BYTE *result; // rax
  int v8; // ecx
  signed __int64 v9; // r9
  __int64 v10; // rsi
  _BYTE *v11; // r10
  int v12; // ebx

  result = a7;
  *a7 = 0;
  if ( a1 != -1 )
  {
    if ( !a6 )
    {
      v8 = a1 & *(_DWORD *)a3;
      if ( v8 == *(_DWORD *)a3 )
        return result;
      *a7 = 1;
      result = a5;
      *(_DWORD *)a3 = v8;
      if ( (a2 & 0x2000000) != 0 )
      {
        if ( v8 )
        {
          *(_DWORD *)a4 = 0;
          if ( !a5 )
            return result;
          goto LABEL_8;
        }
        *(_DWORD *)a4 = -1073741790;
        if ( !a5 )
          return result;
      }
      else
      {
        *(_DWORD *)a4 = -1073741790;
        if ( !a5 )
          return result;
        if ( *(_DWORD *)a3 )
        {
LABEL_8:
          *a5 = 1;
          return result;
        }
      }
      *a5 = 0;
      return result;
    }
    v9 = a4 - a3;
    v10 = a6;
    v11 = a5;
    do
    {
      v12 = a1 & *(_DWORD *)a3;
      if ( v12 != *(_DWORD *)a3 )
      {
        *a7 = 1;
        *(_DWORD *)a3 = v12;
        if ( (a2 & 0x2000000) != 0 )
        {
          if ( !v12 )
          {
            *(_DWORD *)&a3[v9] = -1073741790;
            if ( !a5 )
              goto LABEL_18;
LABEL_26:
            *v11 = 0;
            goto LABEL_18;
          }
          *(_DWORD *)&a3[v9] = 0;
          if ( a5 )
            goto LABEL_22;
        }
        else
        {
          *(_DWORD *)&a3[v9] = -1073741790;
          if ( a5 )
          {
            if ( !*(_DWORD *)a3 )
              goto LABEL_26;
LABEL_22:
            *v11 = 1;
          }
        }
      }
LABEL_18:
      a3 += 4;
      ++v11;
      --v10;
    }
    while ( v10 );
  }
  return result;
}
