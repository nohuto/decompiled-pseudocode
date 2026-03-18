/*
 * XREFs of ?__EnumDisplayQueryRoutine@@YAJPEAGKPEAXK11@Z @ 0x14017D590
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCNOZ @ 0x14000E6AC (PALLOCNOZ.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall __EnumDisplayQueryRoutine(unsigned __int16 *a1, int a2, void *a3, unsigned int a4, _QWORD *a5)
{
  unsigned int v5; // edi
  size_t v6; // rbx
  void *v9; // rax
  unsigned int v10; // r14d
  void *v11; // rax

  v5 = 0;
  v6 = a4;
  if ( a4 > 2 )
  {
    if ( a2 == 1 )
    {
      if ( a5[26] )
        return v5;
      v9 = (void *)PALLOCNOZ(a4, 0x73726447u);
      a5[26] = v9;
      if ( v9 )
      {
        memmove(v9, a3, v6);
        *((_DWORD *)a5 + 65) = v6;
        return v5;
      }
      return (unsigned int)-1073741670;
    }
    if ( a2 == 3 && !a5[26] )
    {
      v10 = a4 + 2;
      v11 = (void *)PALLOCNOZ(a4 + 2, 0x73726447u);
      a5[26] = v11;
      if ( v11 )
      {
        memmove(v11, a3, v6);
        *(_WORD *)(v6 + a5[26]) = 0;
        *((_DWORD *)a5 + 65) = v10;
        return v5;
      }
      return (unsigned int)-1073741670;
    }
  }
  return v5;
}
