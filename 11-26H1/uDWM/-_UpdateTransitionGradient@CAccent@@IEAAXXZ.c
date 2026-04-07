/*
 * XREFs of ?_UpdateTransitionGradient@CAccent@@IEAAXXZ @ 0x180094F78
 * Callers:
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x1800634B0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 * Callees:
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCNineGridVisual@@KAEBUtagRECT@@M@Z @ 0x180094D04 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCNineGridVisual@@KAEBUtagRECT@@M@Z.c)
 */

void __fastcall CAccent::_UpdateTransitionGradient(CAccent *this)
{
  struct CNineGridVisual *v1; // rdx
  LONG v2; // r9d
  LONG v3; // eax
  float v4; // xmm0_4
  int v5; // r8d
  struct tagRECT v6; // [rsp+30h] [rbp-18h] BYREF

  v1 = (struct CNineGridVisual *)*((_QWORD *)this + 29);
  v2 = 0;
  if ( v1 )
  {
    v3 = 0;
    v4 = *((float *)this + 68);
    if ( *((_DWORD *)this + 122) - *((_DWORD *)this + 120) >= 0 )
      v3 = *((_DWORD *)this + 122) - *((_DWORD *)this + 120);
    *(_QWORD *)&v6.left = 0LL;
    v5 = *((_DWORD *)this + 52);
    v6.right = v3;
    if ( *((_DWORD *)this + 123) - *((_DWORD *)this + 121) >= 0 )
      v2 = *((_DWORD *)this + 123) - *((_DWORD *)this + 121);
    v6.bottom = v2;
    CAccent::_UpdateSolidFill(this, v1, v5, &v6, v4);
  }
}
