/*
 * XREFs of ?pSpGrowRanges@@YAPEAU_SPRITERANGE@@PEAU_SPRITESTATE@@PEAU1@PEAPEAU_SPRITESCAN@@PEAPEAU1@@Z @ 0x14018518C
 * Callers:
 *     ?bSpComputeScan@@YAHPEAU_SPRITESTATE@@PEAVSPRITE@@JJPEAPEAU_SPRITESCAN@@PEA_K@Z @ 0x1401868B0 (-bSpComputeScan@@YAHPEAU_SPRITESTATE@@PEAVSPRITE@@JJPEAPEAU_SPRITESCAN@@PEA_K@Z.c)
 * Callees:
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

struct _SPRITERANGE *__fastcall pSpGrowRanges(
        struct _SPRITESTATE *a1,
        struct _SPRITERANGE *a2,
        struct _SPRITESCAN **a3,
        struct _SPRITERANGE **a4)
{
  __int64 v4; // r10
  __int64 v6; // r12
  size_t v9; // rsi
  char *v10; // r14
  char *v11; // rax
  _DWORD *v12; // rdx
  char *v13; // rdi
  struct _SPRITERANGE *result; // rax

  v4 = *((_QWORD *)a1 + 18);
  v6 = *((_QWORD *)a1 + 19) - v4 + 360;
  v9 = (size_t)a2 - v4;
  v10 = (char *)*a3 - v4;
  v11 = (char *)PALLOCNOZ(*((_DWORD *)a1 + 38) - (int)v4 + 360, 1919972167LL, (__int64)a3);
  v12 = (_DWORD *)*((_QWORD *)a1 + 18);
  v13 = v11;
  if ( v11 )
  {
    memmove(v11, v12, v9);
    Win32FreePool(*((void **)a1 + 18));
    *((_QWORD *)a1 + 18) = v13;
    *a3 = (struct _SPRITESCAN *)&v13[(_QWORD)v10];
    *((_QWORD *)a1 + 19) = &v13[v6];
    *a4 = (struct _SPRITERANGE *)&v13[v6 - 56];
    return (struct _SPRITERANGE *)&v13[v9];
  }
  else
  {
    *v12 = *((_DWORD *)a1 + 11);
    v12[1] = *((_DWORD *)a1 + 13);
    *((_QWORD *)v12 + 1) = 40LL;
    *((_QWORD *)v12 + 2) = 0LL;
    v12[6] = *((_DWORD *)a1 + 10);
    v12[7] = *((_DWORD *)a1 + 12);
    *((_QWORD *)v12 + 4) = 0LL;
    *((_QWORD *)a1 + 19) = v12 + 10;
    result = 0LL;
    *((_QWORD *)a1 + 18) = v12;
  }
  return result;
}
