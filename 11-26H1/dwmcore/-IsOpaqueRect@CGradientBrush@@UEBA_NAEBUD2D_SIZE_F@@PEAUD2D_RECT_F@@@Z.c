/*
 * XREFs of ?IsOpaqueRect@CGradientBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x1801BDDA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CGradientBrush::IsOpaqueRect(CGradientBrush *this, const struct D2D_SIZE_F *a2, struct D2D_RECT_F *a3)
{
  bool result; // al
  FLOAT width; // xmm0_4
  FLOAT height; // xmm1_4

  if ( !*((_BYTE *)this + 240)
    || !*((_BYTE *)this + 241)
    || (*(unsigned __int8 (__fastcall **)(CGradientBrush *))(*(_QWORD *)this + 224LL))(this) )
  {
    return 0;
  }
  width = a2->width;
  result = 1;
  height = a2->height;
  *(_QWORD *)&a3->left = 0LL;
  a3->right = width;
  a3->bottom = height;
  return result;
}
