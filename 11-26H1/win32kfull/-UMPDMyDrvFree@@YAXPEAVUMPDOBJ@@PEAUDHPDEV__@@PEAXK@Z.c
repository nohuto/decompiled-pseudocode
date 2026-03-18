/*
 * XREFs of ?UMPDMyDrvFree@@YAXPEAVUMPDOBJ@@PEAUDHPDEV__@@PEAXK@Z @ 0x1400D4200
 * Callers:
 *     ?UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z @ 0x140283760 (-UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z.c)
 *     ?UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z @ 0x140283BF0 (-UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z.c)
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D600C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall UMPDMyDrvFree(struct UMPDOBJ *a1, struct DHPDEV__ *a2, void *a3, int a4)
{
  __int64 v4; // rax
  size_t v5; // [rsp+20h] [rbp-58h]
  char v6; // [rsp+30h] [rbp-48h] BYREF
  __int16 v7; // [rsp+31h] [rbp-47h]
  char v8; // [rsp+33h] [rbp-45h]
  int v9; // [rsp+34h] [rbp-44h]
  __int64 v10; // [rsp+38h] [rbp-40h]
  __int64 v11; // [rsp+40h] [rbp-38h]
  struct DHPDEV__ *v12; // [rsp+48h] [rbp-30h]
  void *v13; // [rsp+50h] [rbp-28h]
  int v14; // [rsp+58h] [rbp-20h]
  int v15; // [rsp+5Ch] [rbp-1Ch]

  v4 = *(_QWORD *)a1;
  v7 = 0;
  v8 = 0;
  v10 = 0LL;
  v15 = 0;
  v9 = 42;
  v12 = a2;
  v13 = a3;
  v14 = a4;
  v6 = 0;
  v11 = v4;
  LODWORD(v5) = 0;
  UMPDOBJ::Thunk(a1, &v6, 0x30u, 0LL, v5);
}
