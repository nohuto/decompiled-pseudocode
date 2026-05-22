/*
 * XREFs of ?MapRectByVisualIdentifier@ControllerProcessor@@AEAAXPEAU_LUID@@0PEAUtagRECT@@1@Z @ 0x18017ED30
 * Callers:
 *     ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_K_N3@Z @ 0x18017EDD8 (-NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_K_N3@Z.c)
 *     ?UpdateBoundsIfNeeded@ControllerProcessor@@AEAAXXZ @ 0x1801807E4 (-UpdateBoundsIfNeeded@ControllerProcessor@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

void __fastcall ControllerProcessor::MapRectByVisualIdentifier(
        ControllerProcessor *this,
        struct _LUID *a2,
        struct _LUID *a3,
        struct tagRECT *a4,
        struct tagRECT *a5)
{
  __int64 i; // rax
  LONG v6; // ecx
  LONG v7; // edx
  LONG v8; // r8d
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  float v10[4]; // [rsp+40h] [rbp-28h] BYREF

  v9 = 0LL;
  for ( i = 0LL; i < 4; ++i )
    v10[i] = (float)*(&a4->left + i);
  MapPointsByVisualIdentifier(a2, 0LL, 2LL, v10, &v9);
  v6 = (int)*((float *)&v9 + 1);
  v7 = (int)*((float *)&v9 + 2);
  v8 = (int)*((float *)&v9 + 3);
  a5->left = (int)*(float *)&v9;
  a5->top = v6;
  a5->right = v7;
  a5->bottom = v8;
}
