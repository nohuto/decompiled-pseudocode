/*
 * XREFs of ?__EnumDisplayQueryRoutine@@YAJPEAGKPEAXK11@Z @ 0x140144CC0
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCNOZ @ 0x14004B924 (PALLOCNOZ.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall __EnumDisplayQueryRoutine(unsigned __int16 *a1, int a2, void *a3, unsigned int a4, _QWORD *a5)
{
  unsigned int v5; // edi
  size_t v6; // rbx
  void *v8; // rax
  unsigned int v10; // r14d
  void *v11; // rax

  v5 = 0;
  v6 = a4;
  if ( a4 > 2 )
  {
    if ( a2 == 1 )
    {
      if ( !a5[26] )
      {
        v8 = (void *)PALLOCNOZ(a4, 1936876615LL);
        a5[26] = v8;
        if ( v8 )
        {
          memmove(v8, a3, v6);
          *((_DWORD *)a5 + 65) = v6;
          return v5;
        }
        return (unsigned int)-1073741670;
      }
    }
    else if ( a2 == 3 && !a5[26] )
    {
      v10 = a4 + 2;
      v11 = (void *)PALLOCNOZ(a4 + 2, 1936876615LL);
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
