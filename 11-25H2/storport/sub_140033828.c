/*
 * XREFs of sub_140033828 @ 0x140033828
 * Callers:
 *     sub_14003328C @ 0x14003328C (sub_14003328C.c)
 * Callees:
 *     sub_14008EC74 @ 0x14008EC74 (sub_14008EC74.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 sub_140033828(char *Dest, unsigned __int64 a2, char **a3, unsigned __int64 *a4, int a5, char *Format, ...)
{
  int v7; // ebx
  const char *v9; // r8
  char *v10; // r13
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rdi
  int v13; // eax
  char *v15; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-10h] BYREF
  unsigned __int64 *v18; // [rsp+A8h] [rbp+60h]
  va_list va; // [rsp+C0h] [rbp+78h] BYREF

  va_start(va, Format);
  v18 = a4;
  v7 = 0;
  if ( (a5 & 0x100) != 0 )
  {
    if ( !Dest && a2 || a2 > 0x7FFFFFFF )
      v7 = -1073741811;
  }
  else if ( a2 - 1 > 0x7FFFFFFE )
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
  {
    if ( a2 )
      *Dest = 0;
  }
  else
  {
    v9 = Format;
    v10 = Dest;
    v15 = Dest;
    v11 = a2;
    v16 = a2;
    if ( (a5 & 0x100) != 0 && !Format )
      v9 = (const char *)&unk_1401489C4;
    v7 = 0;
    if ( (a5 & 0xFFFFE000) != 0 )
    {
      v7 = -1073741811;
      if ( a2 )
        *Dest = 0;
    }
    else if ( a2 )
    {
      v16 = 0LL;
      v12 = a2 - 1;
      v13 = vsnprintf(Dest, a2 - 1, v9, va);
      if ( v13 < 0 || v13 > v12 )
      {
        Dest[v12] = 0;
        v7 = -2147483643;
      }
      else if ( v13 == v12 )
      {
        Dest[v12] = 0;
      }
      else
      {
        v12 = v13;
      }
      v11 = a2 - v12;
      v10 = &Dest[v12];
      v15 = &Dest[v12];
      v16 = a2 - v12;
      if ( v7 >= 0 )
      {
        if ( (a5 & 0x200) != 0 && v11 > 1 )
          memset_0(v10 + 1, (unsigned __int8)a5, v11 - 1);
LABEL_14:
        a4 = v18;
LABEL_15:
        if ( a3 )
          *a3 = v10;
        if ( a4 )
          *a4 = v11;
        return (unsigned int)v7;
      }
    }
    else
    {
      if ( !*v9 )
        goto LABEL_15;
      v7 = Dest != 0LL ? -2147483643 : -1073741811;
    }
    if ( (a5 & 0x1C00) != 0 && a2 )
    {
      sub_14008EC74(Dest, a2, v9, &v15, &v16, a5);
      v10 = v15;
      v11 = v16;
    }
    if ( (int)(v7 + 0x80000000) < 0 || v7 == -2147483643 )
      goto LABEL_14;
  }
  return (unsigned int)v7;
}
