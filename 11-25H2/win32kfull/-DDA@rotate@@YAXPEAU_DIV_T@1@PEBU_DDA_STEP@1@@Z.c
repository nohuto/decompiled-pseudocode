/*
 * XREFs of ?DDA@rotate@@YAXPEAU_DIV_T@1@PEBU_DDA_STEP@1@@Z @ 0x1400EA3B0
 * Callers:
 *     ?vAdvYDDA@rotate@@YAXPEAU_PLGDDA@1@@Z @ 0x1400EA230 (-vAdvYDDA@rotate@@YAXPEAU_PLGDDA@1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall rotate::DDA(rotate *this, struct rotate::_DIV_T *a2, const struct rotate::_DDA_STEP *a3)
{
  int v4; // ecx
  int v5; // eax
  unsigned int v6; // eax

  v4 = *(_DWORD *)a2 + *(_DWORD *)this;
  v5 = *((_DWORD *)this + 1);
  *(_DWORD *)this = v4;
  v6 = *((_DWORD *)a2 + 1) + v5;
  *((_DWORD *)this + 1) = v6;
  if ( v6 >= *((_DWORD *)a2 + 2) )
  {
    *(_DWORD *)this = v4 + 1;
    *((_DWORD *)this + 1) = v6 - *((_DWORD *)a2 + 2);
  }
}
