/*
 * XREFs of SepConstrainByMandatory @ 0x140461E00
 * Callers:
 *     SeAccessCheckByType @ 0x1403AC1E8 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     <none>
 */

void __fastcall SepConstrainByMandatory(__int64 a1, int a2, char *a3, char *a4, _BYTE *a5, unsigned int a6)
{
  int v6; // r10d
  signed __int64 v7; // r9
  __int64 v8; // rbx
  _BYTE *v9; // r11
  int v10; // r10d

  if ( *(_DWORD *)(a1 + 8) && (!*(_BYTE *)(a1 + 5) || !*(_BYTE *)(a1 + 4) || !*(_BYTE *)(a1 + 6)) )
  {
    if ( !a6 )
    {
      v6 = *(_DWORD *)a1 & *(_DWORD *)a3;
      if ( v6 == *(_DWORD *)a3 )
        return;
      *(_DWORD *)a3 = v6;
      if ( (a2 & 0x2000000) != 0 )
      {
        if ( v6 )
        {
          *(_DWORD *)a4 = 0;
          if ( !a5 )
            return;
          goto LABEL_11;
        }
        *(_DWORD *)a4 = -1073741790;
        if ( !a5 )
          return;
      }
      else
      {
        *(_DWORD *)a4 = -1073741790;
        if ( !a5 )
          return;
        if ( *(_DWORD *)a3 )
        {
LABEL_11:
          *a5 = 1;
          return;
        }
      }
      *a5 = 0;
      return;
    }
    v7 = a4 - a3;
    v8 = a6;
    v9 = a5;
    do
    {
      v10 = *(_DWORD *)a1 & *(_DWORD *)a3;
      if ( v10 != *(_DWORD *)a3 )
      {
        *(_DWORD *)a3 = v10;
        if ( (a2 & 0x2000000) == 0 )
        {
          *(_DWORD *)&a3[v7] = -1073741790;
          if ( !a5 )
            goto LABEL_23;
          if ( !*(_DWORD *)a3 )
            goto LABEL_29;
LABEL_22:
          *v9 = 1;
          goto LABEL_23;
        }
        if ( v10 )
        {
          *(_DWORD *)&a3[v7] = 0;
          if ( a5 )
            goto LABEL_22;
        }
        else
        {
          *(_DWORD *)&a3[v7] = -1073741790;
          if ( a5 )
LABEL_29:
            *v9 = 0;
        }
      }
LABEL_23:
      a3 += 4;
      ++v9;
      --v8;
    }
    while ( v8 );
  }
}
