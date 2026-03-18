/*
 * XREFs of NtGdiGradientFill @ 0x1400A0A80
 * Callers:
 *     <none>
 * Callees:
 *     GreGradientFill @ 0x1400A0CB0 (GreGradientFill.c)
 */

__int64 __fastcall NtGdiGradientFill(HDC a1, const void *a2, unsigned int a3, const void *a4, unsigned int a5, int a6)
{
  const void *v7; // r8
  unsigned __int64 v8; // r12
  unsigned int v9; // eax
  int v10; // r13d
  unsigned int v11; // r13d
  unsigned int v12; // eax
  struct _TRIVERTEX *v13; // rbx
  unsigned int v14; // r14d
  ULONG v16; // ecx

  v7 = a2;
  if ( (a6 & 0xFFFFFF00) != 0
    || !a2
    || !a4
    || !a3
    || !a5
    || a3 >= 0x80000000
    || a5 >= 0x80000000
    || (unsigned __int8)a6 > 2u
    || a3 > 0x271000 )
  {
    goto LABEL_23;
  }
  v8 = 16 * a3;
  v9 = 40960000 - v8;
  if ( (unsigned __int8)a6 != 2 )
  {
    if ( a5 <= v9 >> 3 )
    {
      v10 = 8;
      goto LABEL_13;
    }
LABEL_23:
    v16 = 87;
    goto LABEL_22;
  }
  if ( a5 > v9 / 0xCuLL )
    goto LABEL_23;
  v10 = 12;
LABEL_13:
  v11 = a5 * v10;
  v12 = v8 + v11;
  if ( (unsigned int)v8 + v11 >= 0x2710000 )
  {
    v16 = 8;
LABEL_22:
    EngSetLastError(v16);
    return 0LL;
  }
  if ( v12 )
  {
    v13 = (struct _TRIVERTEX *)Win32AllocPool(v12, 1886221383LL);
    v7 = a2;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v13 )
  {
    GreProbeAndReadFromUntrustedVa(v13, (unsigned int)v8, v7, (unsigned int)v8, 1uLL);
    GreProbeAndReadFromUntrustedVa(&v13[v8 / 0x10], v11, a4, v11, 1uLL);
    v14 = GreGradientFill(a1, v13, a3, &v13[v8 / 0x10], a5, a6);
    Win32FreePool(v13);
  }
  else
  {
    EngSetLastError(8u);
    return 0;
  }
  return v14;
}
