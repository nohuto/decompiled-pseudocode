/*
 * XREFs of ?W32kCddLineToApiExt@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@KPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x14012CD10
 * Callers:
 *     <none>
 * Callees:
 *     W32kCddLineTo @ 0x14012CDDC (W32kCddLineTo.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall W32kCddLineToApiExt(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _BRUSHOBJ *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        struct _RECTL *a8,
        unsigned int a9,
        struct _W32KCDD_ENG_CALLBACKS *a10)
{
  int v11; // esi
  int v12; // ebp
  int v13; // r14d
  unsigned int v14; // ebx
  int (*v15)(void); // rax

  v11 = (int)a3;
  v12 = (int)a2;
  v13 = (int)a1;
  v14 = 0;
  v15 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 512LL);
  if ( v15 && v15() >= 0 )
    return (unsigned int)W32kCddLineTo(v13, v12, v11, a4, a5, a6, a7, (__int64)a8, a9, (__int64)a10);
  return v14;
}
