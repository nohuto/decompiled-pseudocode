/*
 * XREFs of sub_140131B44 @ 0x140131B44
 * Callers:
 *     sub_1401317F8 @ 0x1401317F8 (sub_1401317F8.c)
 *     sub_1401318E4 @ 0x1401318E4 (sub_1401318E4.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140131B44(int a1, unsigned __int16 a2, char a3)
{
  unsigned __int64 v3; // r9
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v10; // r9

  v3 = 0LL;
  if ( a1 )
  {
    v4 = a1 - 1;
    if ( !v4 )
    {
      if ( a3 )
      {
        v8 = (unsigned int)(500 * dword_1401684F0);
        goto LABEL_25;
      }
      v9 = (unsigned int)(250 * dword_1401684F4);
      goto LABEL_22;
    }
    v5 = v4 - 1;
    if ( !v5 )
    {
      if ( a3 )
      {
        v8 = (unsigned int)(984 * dword_1401684F0);
        goto LABEL_25;
      }
      v9 = (unsigned int)(500 * dword_1401684F4);
      goto LABEL_22;
    }
    v6 = v5 - 1;
    if ( !v6 )
    {
      if ( a3 )
      {
        v8 = (unsigned int)(1968 * dword_1401684F0);
        goto LABEL_25;
      }
      v9 = (unsigned int)(984 * dword_1401684F4);
      goto LABEL_22;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      if ( a3 )
      {
        v8 = (unsigned int)(3937 * dword_1401684F0);
        goto LABEL_25;
      }
      v9 = (unsigned int)(1968 * dword_1401684F4);
LABEL_22:
      v10 = qword_1401684F8 * v9;
LABEL_26:
      v3 = (v10 << 10) / 0x3B9ACA00uLL;
      return v3 * a2;
    }
    if ( v7 == 1 )
    {
      if ( a3 )
      {
        v8 = (unsigned int)(7875 * dword_1401684F0);
LABEL_25:
        v10 = qword_140168500 * v8;
        goto LABEL_26;
      }
      v9 = (unsigned int)(3937 * dword_1401684F4);
      goto LABEL_22;
    }
  }
  else if ( a3 )
  {
    v8 = (unsigned int)(250 * dword_1401684F0);
    goto LABEL_25;
  }
  return v3 * a2;
}
