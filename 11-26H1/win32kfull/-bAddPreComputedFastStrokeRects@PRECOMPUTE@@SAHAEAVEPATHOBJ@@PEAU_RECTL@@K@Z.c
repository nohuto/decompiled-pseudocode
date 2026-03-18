/*
 * XREFs of ?bAddPreComputedFastStrokeRects@PRECOMPUTE@@SAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x14033D988
 * Callers:
 *     ?bPreComputeFast@PRECOMPUTE@@SAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z @ 0x14033DA84 (-bPreComputeFast@PRECOMPUTE@@SAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z.c)
 * Callees:
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall PRECOMPUTE::bAddPreComputedFastStrokeRects(struct EPATHOBJ *a1, struct _RECTL *a2, __int64 a3)
{
  _DWORD *v3; // rsi
  __int64 v4; // r15
  unsigned int v5; // eax
  __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  char *v10; // rax
  char *v11; // r14
  const void *v12; // rdx
  _DWORD *v13; // rbp
  void *v14; // rcx
  __int64 result; // rax
  bool v16; // zf
  void *v17; // rcx

  v3 = (_DWORD *)((char *)a1 + 60);
  v4 = (unsigned int)a3;
  v5 = *((_DWORD *)a1 + 15);
  v8 = v5 + (unsigned int)a3;
  if ( (unsigned int)v8 <= v5 )
  {
    v16 = v5 == 0;
  }
  else
  {
    v9 = 16 * v8;
    if ( v9 <= 0xFFFFFFFF )
    {
      v10 = (char *)PALLOCNOZ(v9, 1734632775LL, a3);
      v11 = v10;
      if ( v10 )
      {
        v12 = (const void *)*((_QWORD *)a1 + 8);
        v13 = v3;
        if ( v12 )
        {
          memmove(v10, v12, 16LL * (unsigned int)*v3);
          v13 = (_DWORD *)((char *)a1 + 60);
        }
        memmove(&v11[16 * *v3], a2, 16 * v4);
        v14 = (void *)*((_QWORD *)a1 + 8);
        if ( v14 )
          Win32FreePool(v14);
        *v13 += v4;
        result = 1LL;
        *((_QWORD *)a1 + 8) = v11;
        return result;
      }
    }
    v16 = *v3 == 0;
  }
  if ( !v16 )
  {
    v17 = (void *)*((_QWORD *)a1 + 8);
    *v3 = 0;
    Win32FreePool(v17);
    *((_QWORD *)a1 + 8) = 0LL;
  }
  return 0LL;
}
