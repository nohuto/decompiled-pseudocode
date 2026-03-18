/*
 * XREFs of ?vAdvYDDA@rotate@@YAXPEAU_PLGDDA@1@@Z @ 0x1400EB850
 * Callers:
 *     EngPlgBlt @ 0x1400EA130 (EngPlgBlt.c)
 * Callees:
 *     ?DDA@rotate@@YAXPEAU_DIV_T@1@PEBU_DDA_STEP@1@@Z @ 0x1400EB9C0 (-DDA@rotate@@YAXPEAU_DIV_T@1@PEBU_DDA_STEP@1@@Z.c)
 */

void __fastcall rotate::vAdvYDDA(rotate *this, struct rotate::_PLGDDA *a2)
{
  rotate *v2; // r8
  int v3; // r9d
  unsigned int v4; // ecx
  struct rotate::_DIV_T *v5; // r10
  unsigned int v6; // eax
  struct rotate::_DIV_T *v7; // rsi
  __int64 v8; // r8
  struct rotate::_DIV_T *v9; // r10
  rotate *v10; // rdi
  unsigned int v11; // r9d
  unsigned int v12; // eax
  int v13; // edx
  unsigned int v14; // r9d
  unsigned int v15; // eax
  int v16; // r10d
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // r8
  rotate *v21; // r10

  v2 = this;
  *((_DWORD *)this + 1) += *((_DWORD *)this + 45);
  v3 = *((_DWORD *)this + 1);
  v4 = *((_DWORD *)this + 2) + *((_DWORD *)this + 46);
  v5 = (rotate *)((char *)v2 + 384);
  v6 = *((_DWORD *)v2 + 47);
  v7 = (rotate *)((char *)v2 + 372);
  *((_DWORD *)v2 + 2) = v4;
  if ( v4 >= v6 )
  {
    *((_DWORD *)v2 + 2) = v4 - v6;
    *((_DWORD *)v2 + 1) = v3 + 1;
    rotate::DDA((rotate *)((char *)v2 + 36), (rotate *)((char *)v2 + 372), v2);
    rotate::DDA((rotate *)(v8 + 44), v9, (const struct rotate::_DDA_STEP *)v8);
  }
  v10 = (rotate *)((char *)v2 + 52);
  *((_DWORD *)v2 + 3) += *((_DWORD *)v2 + 48);
  v11 = *((_DWORD *)v2 + 4) + *((_DWORD *)v2 + 49);
  v12 = *((_DWORD *)v2 + 50);
  v13 = *((_DWORD *)v2 + 3);
  *((_DWORD *)v2 + 4) = v11;
  if ( v11 >= v12 )
  {
    *((_DWORD *)v2 + 4) = v11 - v12;
    *((_DWORD *)v2 + 3) = v13 + 1;
    rotate::DDA((rotate *)((char *)v2 + 52), v5, v2);
  }
  *((_DWORD *)v2 + 5) += *((_DWORD *)v2 + 51);
  v14 = *((_DWORD *)v2 + 6) + *((_DWORD *)v2 + 52);
  v15 = *((_DWORD *)v2 + 53);
  v16 = *((_DWORD *)v2 + 5);
  *((_DWORD *)v2 + 6) = v14;
  if ( v14 >= v15 )
  {
    *((_DWORD *)v2 + 6) = v14 - v15;
    *((_DWORD *)v2 + 5) = v16 + 1;
    rotate::DDA((rotate *)((char *)v2 + 60), v7, v2);
  }
  rotate::DDA((rotate *)((char *)v2 + 28), (rotate *)((char *)v2 + 216), v2);
  rotate::DDA((rotate *)(v17 + 36), (struct rotate::_DIV_T *)(v17 + 276), (const struct rotate::_DDA_STEP *)v17);
  rotate::DDA((rotate *)(v18 + 44), (struct rotate::_DIV_T *)(v18 + 288), (const struct rotate::_DDA_STEP *)v18);
  rotate::DDA(v10, (struct rotate::_DIV_T *)(v19 + 300), (const struct rotate::_DDA_STEP *)v19);
  rotate::DDA(v21, (struct rotate::_DIV_T *)(v20 + 312), (const struct rotate::_DDA_STEP *)v20);
}
