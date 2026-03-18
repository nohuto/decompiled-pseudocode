/*
 * XREFs of ?cSpSubtract@@YAKPEBU_RECTL@@0PEAU1@@Z @ 0x140166C04
 * Callers:
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x140166D28 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1403179A8 (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall cSpSubtract(const struct _RECTL *a1, const struct _RECTL *a2, struct _RECTL *a3)
{
  LONG top; // eax
  int v7; // eax
  struct _RECTL *v8; // rdi
  int v9; // eax
  struct _RECTL *v10; // rbx
  int v11; // eax
  struct _RECTL *v12; // rdi
  int v13; // eax
  struct _RECTL *v14; // rcx
  struct _RECTL v16; // [rsp+20h] [rbp-20h] BYREF

  top = a2->top;
  v16.left = 0x80000000;
  v16.top = 0x80000000;
  v16.right = 0x7FFFFFFF;
  v16.bottom = top;
  v7 = bIntersect(&v16, a1, a3);
  v8 = a3 + 1;
  v16.top = a2->top;
  if ( !v7 )
    v8 = a3;
  v16.right = a2->left;
  v16.bottom = a2->bottom;
  v9 = bIntersect(&v16, a1, v8);
  v10 = v8 + 1;
  v16.right = 0x7FFFFFFF;
  if ( !v9 )
    v10 = v8;
  v16.left = a2->right;
  v11 = bIntersect(&v16, a1, v10);
  v12 = v10 + 1;
  v16.left = 0x80000000;
  v16.bottom = 0x7FFFFFFF;
  if ( !v11 )
    v12 = v10;
  v16.top = a2->bottom;
  v13 = bIntersect(&v16, a1, v12);
  v14 = v12 + 1;
  if ( !v13 )
    v14 = v12;
  return (unsigned int)(v14 - a3);
}
