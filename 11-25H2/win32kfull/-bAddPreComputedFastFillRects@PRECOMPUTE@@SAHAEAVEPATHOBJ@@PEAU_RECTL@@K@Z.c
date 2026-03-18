/*
 * XREFs of ?bAddPreComputedFastFillRects@PRECOMPUTE@@SAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x14031A8E4
 * Callers:
 *     ?bPreComputeFast@PRECOMPUTE@@SAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z @ 0x14031AAA4 (-bPreComputeFast@PRECOMPUTE@@SAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z.c)
 * Callees:
 *     PALLOCNOZ @ 0x1400FD16C (PALLOCNOZ.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall PRECOMPUTE::bAddPreComputedFastFillRects(struct EPATHOBJ *a1, struct _RECTL *a2, unsigned int a3)
{
  unsigned int v3; // eax
  __int64 v5; // rbp
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  char *v9; // rax
  char *v10; // rsi
  const void *v11; // rdx
  void *v12; // rcx
  __int64 result; // rax
  bool v14; // zf
  void *v15; // rcx

  v3 = *((_DWORD *)a1 + 14);
  v5 = a3;
  v7 = v3 + a3;
  if ( (unsigned int)v7 <= v3 )
  {
    v14 = v3 == 0;
  }
  else
  {
    v8 = 16 * v7;
    if ( v8 <= 0xFFFFFFFF )
    {
      v9 = (char *)PALLOCNOZ(v8, 1734632775LL);
      v10 = v9;
      if ( v9 )
      {
        v11 = (const void *)*((_QWORD *)a1 + 6);
        if ( v11 )
          memmove(v9, v11, 16LL * *((unsigned int *)a1 + 14));
        memmove(&v10[16 * *((unsigned int *)a1 + 14)], a2, 16 * v5);
        v12 = (void *)*((_QWORD *)a1 + 6);
        if ( v12 )
          Win32FreePool(v12);
        *((_DWORD *)a1 + 14) += v5;
        result = 1LL;
        *((_QWORD *)a1 + 6) = v10;
        return result;
      }
    }
    v14 = *((_DWORD *)a1 + 14) == 0;
  }
  if ( !v14 )
  {
    v15 = (void *)*((_QWORD *)a1 + 6);
    *((_DWORD *)a1 + 14) = 0;
    Win32FreePool(v15);
    *((_QWORD *)a1 + 6) = 0LL;
  }
  return 0LL;
}
