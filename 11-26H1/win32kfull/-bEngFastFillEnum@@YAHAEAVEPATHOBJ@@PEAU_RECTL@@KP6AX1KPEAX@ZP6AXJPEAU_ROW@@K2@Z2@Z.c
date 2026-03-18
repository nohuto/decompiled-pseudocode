/*
 * XREFs of ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x140119674
 * Callers:
 *     ?bBrushPathN_8x8@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x14011B048 (-bBrushPathN_8x8@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?bBrushPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x140297AAC (-bBrushPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 * Callees:
 *     ?bFastFill@@YAHJPEAU_POINTFIX@@PEAU_RECTL@@P6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x140119840 (-bFastFill@@YAHJPEAU_POINTFIX@@PEAU_RECTL@@P6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 *     ?bFill@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@Z2@Z @ 0x14011A618 (-bFill@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@Z2@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall bEngFastFillEnum(
        struct EPATHOBJ *a1,
        struct _RECTL *a2,
        unsigned int a3,
        void (*a4)(struct _RECTL *, unsigned int, void *),
        void (*a5)(int, struct _ROW *, unsigned int, void *),
        void *a6)
{
  bool v6; // cf
  int v10; // edi
  int v11; // r14d
  unsigned int v12; // eax
  unsigned int v13; // ebx
  void *Src[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+40h] [rbp-C0h]
  unsigned int v17; // [rsp+44h] [rbp-BCh]
  void (*v18)(int, struct _ROW *, unsigned int, void *); // [rsp+48h] [rbp-B8h]
  struct _POINTFIX v19[40]; // [rsp+50h] [rbp-B0h] BYREF

  v6 = *((_DWORD *)a1 + 1) < 2u;
  v18 = a5;
  *(_OWORD *)Src = 0LL;
  v17 = a3;
  if ( !v6 )
  {
    *(_DWORD *)a1 &= ~8u;
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 80LL) = *(_QWORD *)(*((_QWORD *)a1 + 1) + 32LL);
    if ( EPATHOBJ::bEnum(a1, (struct _PATHDATA *)Src) )
    {
      if ( ((__int64)Src[0] & 2) == 0 && *((_DWORD *)a1 + 1) <= 0x28u )
      {
        v10 = HIDWORD(Src[0]);
        if ( HIDWORD(Src[0]) <= 0x28 )
        {
          memmove(v19, Src[1], 8LL * HIDWORD(Src[0]));
          while ( 1 )
          {
            v16 = EPATHOBJ::bEnum(a1, (struct _PATHDATA *)Src);
            if ( ((__int64)Src[0] & 1) != 0 )
              break;
            v11 = v10 + HIDWORD(Src[0]);
            if ( (unsigned int)(v10 + HIDWORD(Src[0])) > 0x28 )
              break;
            memmove(&v19[v10], Src[1], 8LL * HIDWORD(Src[0]));
            v10 = v11;
            if ( !v16 )
            {
              if ( !v11 )
                return (unsigned int)bFill(a1, a2, v17, a4, a6);
              v12 = bFastFill(v11, v19, a2, a4, v18, a6);
              goto LABEL_12;
            }
          }
        }
      }
    }
    else
    {
      v13 = 1;
      if ( HIDWORD(Src[0]) <= 1 )
        return v13;
      v12 = bFastFill(SHIDWORD(Src[0]), (struct _POINTFIX *)Src[1], a2, a4, a5, a6);
LABEL_12:
      v13 = v12;
      if ( v12 )
        return v13;
    }
    return (unsigned int)bFill(a1, a2, v17, a4, a6);
  }
  return 1LL;
}
