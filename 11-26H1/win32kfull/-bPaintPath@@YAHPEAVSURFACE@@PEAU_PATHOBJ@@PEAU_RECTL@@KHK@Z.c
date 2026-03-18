/*
 * XREFs of ?bPaintPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@KHK@Z @ 0x140119398
 * Callers:
 *     ?EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x140118D68 (-EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 * Callees:
 *     ?bFastFill@@YAHJPEAU_POINTFIX@@PEAU_RECTL@@P6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x140119840 (-bFastFill@@YAHJPEAU_POINTFIX@@PEAU_RECTL@@P6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 *     ?bFill@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@Z2@Z @ 0x14011A618 (-bFill@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@Z2@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall bPaintPath(
        struct SURFACE *a1,
        struct _PATHOBJ *a2,
        struct _RECTL *a3,
        int a4,
        int a5,
        unsigned int a6)
{
  __int64 v8; // rdx
  void (__fastcall *v9)(struct _ROW *, unsigned int, int, unsigned __int8 *, unsigned int, int, unsigned int); // rax
  bool v10; // cf
  struct _PATHOBJ v11; // rcx
  int v12; // edi
  int v13; // r15d
  int v14; // r14d
  struct _POINTFIX *v15; // rdx
  int v16; // ecx
  unsigned int v17; // ebx
  void *Src[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+50h] [rbp-B0h]
  int v22; // [rsp+54h] [rbp-ACh]
  int v23; // [rsp+58h] [rbp-A8h]
  int v24; // [rsp+5Ch] [rbp-A4h]
  __int64 v25; // [rsp+60h] [rbp-A0h]
  struct _POINTFIX v26[40]; // [rsp+70h] [rbp-90h] BYREF

  v8 = *((unsigned int *)a1 + 24);
  if ( (unsigned int)(v8 - 1) <= 5 )
  {
    v24 = 0;
    v22 = dword_14035EBA0[v8];
    switch ( (_DWORD)v8 )
    {
      case 1:
        if ( a4 )
          a4 = -1;
LABEL_6:
        v25 = *((_QWORD *)a1 + 10);
        v21 = *((_DWORD *)a1 + 22);
        v23 = a4;
        if ( a5 )
        {
          if ( (_DWORD)v8 == 5 )
          {
            v20[0] = vSolidXorRect24;
            v9 = vSolidXorRow24;
          }
          else
          {
            v20[0] = vSolidXorRect1;
            v9 = vSolidXorRow1;
          }
        }
        else if ( (_DWORD)v8 == 5 )
        {
          v20[0] = vSolidFillRect24;
          v9 = vSolidFillRow24;
        }
        else if ( *((_QWORD *)a1 + 79) )
        {
          v25 = *((_QWORD *)a1 + 79);
          v20[0] = vSolidFillRectWithCallback;
          v9 = vSolidFillRowWithCallback;
        }
        else
        {
          v20[0] = vSolidFillRect1;
          v9 = vSolidFillRow1;
        }
        v10 = a2->cCurves < 2;
        *(_OWORD *)Src = 0LL;
        v20[1] = v9;
        if ( v10 )
        {
          return 1;
        }
        else
        {
          v11 = a2[1];
          a2->fl &= ~8u;
          *(_QWORD *)(*(_QWORD *)&v11 + 80LL) = *(_QWORD *)(*(_QWORD *)&v11 + 32LL);
          if ( EPATHOBJ::bEnum((EPATHOBJ *)a2, (struct _PATHDATA *)Src) )
          {
            if ( ((__int64)Src[0] & 2) == 0 && a2->cCurves <= 0x28 )
            {
              v12 = HIDWORD(Src[0]);
              if ( HIDWORD(Src[0]) <= 0x28 )
              {
                memmove(v26, Src[1], 8LL * HIDWORD(Src[0]));
                while ( 1 )
                {
                  v13 = EPATHOBJ::bEnum((EPATHOBJ *)a2, (struct _PATHDATA *)Src);
                  if ( ((__int64)Src[0] & 1) != 0 )
                    break;
                  v14 = v12 + HIDWORD(Src[0]);
                  if ( (unsigned int)(v12 + HIDWORD(Src[0])) > 0x28 )
                    break;
                  memmove(&v26[v12], Src[1], 8LL * HIDWORD(Src[0]));
                  v12 = v14;
                  if ( !v13 )
                  {
                    if ( !v14 )
                      return (unsigned int)bFill(
                                             (struct EPATHOBJ *)a2,
                                             a3,
                                             a6,
                                             (void (*)(struct _RECTL *, unsigned int, void *))vPaintPathEnum,
                                             v20);
                    v15 = v26;
                    v16 = v14;
                    goto LABEL_21;
                  }
                }
              }
            }
          }
          else
          {
            v16 = HIDWORD(Src[0]);
            v17 = 1;
            if ( HIDWORD(Src[0]) <= 1 )
              return v17;
            v15 = (struct _POINTFIX *)Src[1];
LABEL_21:
            v17 = bFastFill(
                    v16,
                    v15,
                    a3,
                    (void (*)(struct _RECTL *, unsigned int, void *))vPaintPathEnum,
                    (void (*)(int, struct _ROW *, unsigned int, void *))vPaintPathEnumRow,
                    v20);
            if ( v17 )
              return v17;
          }
          return (unsigned int)bFill(
                                 (struct EPATHOBJ *)a2,
                                 a3,
                                 a6,
                                 (void (*)(struct _RECTL *, unsigned int, void *))vPaintPathEnum,
                                 v20);
        }
      case 2:
        a4 |= 16 * a4;
        break;
      case 3:
        break;
      case 4:
        goto LABEL_34;
      default:
        goto LABEL_6;
    }
    a4 |= a4 << 8;
LABEL_34:
    a4 |= a4 << 16;
    goto LABEL_6;
  }
  return 0LL;
}
