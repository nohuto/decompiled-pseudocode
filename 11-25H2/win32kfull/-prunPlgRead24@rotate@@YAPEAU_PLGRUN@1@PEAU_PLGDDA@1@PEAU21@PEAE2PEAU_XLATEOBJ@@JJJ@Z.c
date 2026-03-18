/*
 * XREFs of ?prunPlgRead24@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x14012D700
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1400D08C0 (XLATEOBJ_iXlate.c)
 *     ?prunPumpDDA@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@@Z @ 0x14012D910 (-prunPumpDDA@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@@Z.c)
 *     ?vAdvXDDA@rotate@@YAXPEAU_PLGDDA@1@@Z @ 0x14012DB30 (-vAdvXDDA@rotate@@YAXPEAU_PLGDDA@1@@Z.c)
 */

struct rotate::_PLGRUN *__fastcall rotate::prunPlgRead24(
        rotate *this,
        struct rotate::_PLGDDA *a2,
        struct rotate::_PLGRUN *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        int iColor,
        int a7,
        int a8)
{
  struct rotate::_PLGDDA *v9; // rdx
  char *v11; // rbx
  __int64 v12; // r14
  struct rotate::_PLGDDA *v13; // rdx
  rotate *v14; // rcx
  unsigned __int8 *v16; // r14
  unsigned __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // r12
  unsigned __int8 *v20; // rcx
  __int64 v21; // r15
  struct rotate::_PLGRUN *v22; // r8
  struct rotate::_PLGDDA *v23; // rdx
  rotate *v24; // rcx
  struct rotate::_PLGDDA *v25; // rdx
  unsigned __int8 *v26; // rcx
  __int64 v27; // r13
  struct rotate::_PLGRUN *v28; // r8
  unsigned int v29; // [rsp+60h] [rbp+40h]

  v9 = (struct rotate::_PLGDDA *)iColor;
  HIBYTE(iColor) = 0;
  v11 = (char *)a3 + 2 * (_QWORD)v9 + (_QWORD)v9;
  if ( a4 )
  {
    v16 = &a4[4 * ((__int64)a8 >> 5)];
    v17 = *(unsigned int *)v16;
    v29 = *(_DWORD *)v16;
    if ( (_DWORD)v9 != a7 )
    {
      v18 = a8 & 0x1F;
      v19 = (unsigned int)(a7 - (_DWORD)v9);
      if ( pxlo )
      {
        v25 = (struct rotate::_PLGDDA *)dword_140355080;
        do
        {
          v26 = v16 + 4;
          if ( v18 >= 32 )
          {
            LODWORD(v17) = *(_DWORD *)v26;
            v29 = *(_DWORD *)v26;
          }
          v27 = 0LL;
          if ( v18 < 32 )
          {
            v26 = v16;
            v27 = v18;
          }
          v16 = v26;
          if ( ((unsigned int)v17 & *((_DWORD *)v25 + v27)) != 0 )
          {
            LOWORD(iColor) = *(_WORD *)v11;
            BYTE2(iColor) = v11[2];
            *(_DWORD *)a2 = XLATEOBJ_iXlate(pxlo, iColor);
            a2 = rotate::prunPumpDDA(this, a2, v28);
            v25 = (struct rotate::_PLGDDA *)dword_140355080;
          }
          rotate::vAdvXDDA(this, v25);
          LODWORD(v17) = v29;
          v18 = v27 + 1;
          v11 += 3;
          --v19;
        }
        while ( v19 );
      }
      else
      {
        do
        {
          v20 = v16 + 4;
          if ( v18 >= 32 )
          {
            v17 = *(unsigned int *)v20;
            v29 = *(_DWORD *)v20;
          }
          v21 = 0LL;
          if ( v18 < 32 )
          {
            v20 = v16;
            v21 = v18;
          }
          v16 = v20;
          if ( ((unsigned int)v17 & dword_140355080[v21]) != 0 )
          {
            LOWORD(iColor) = *(_WORD *)v11;
            BYTE2(iColor) = v11[2];
            *(_DWORD *)a2 = iColor;
            a2 = rotate::prunPumpDDA(this, a2, (struct rotate::_PLGRUN *)v17);
          }
          rotate::vAdvXDDA(this, v9);
          v17 = v29;
          v18 = v21 + 1;
          v11 += 3;
          --v19;
        }
        while ( v19 );
      }
    }
  }
  else if ( (_DWORD)v9 != a7 )
  {
    v12 = (unsigned int)(a7 - (_DWORD)v9);
    if ( pxlo )
    {
      do
      {
        LOWORD(iColor) = *(_WORD *)v11;
        BYTE2(iColor) = v11[2];
        *(_DWORD *)a2 = XLATEOBJ_iXlate(pxlo, iColor);
        a2 = rotate::prunPumpDDA(this, a2, v22);
        rotate::vAdvXDDA(v24, v23);
        v11 += 3;
        --v12;
      }
      while ( v12 );
    }
    else
    {
      do
      {
        LOWORD(iColor) = *(_WORD *)v11;
        BYTE2(iColor) = v11[2];
        *(_DWORD *)a2 = iColor;
        a2 = rotate::prunPumpDDA(this, a2, a3);
        rotate::vAdvXDDA(v14, v13);
        v11 += 3;
        --v12;
      }
      while ( v12 );
    }
  }
  return a2;
}
