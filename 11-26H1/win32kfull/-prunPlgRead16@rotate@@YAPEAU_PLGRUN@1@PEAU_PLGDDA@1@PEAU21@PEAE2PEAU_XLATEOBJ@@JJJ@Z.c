/*
 * XREFs of ?prunPlgRead16@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1403414A0
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x14011C840 (XLATEOBJ_iXlate.c)
 *     ?prunPumpDDA@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@@Z @ 0x14013AD60 (-prunPumpDDA@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@@Z.c)
 *     ?vAdvXDDA@rotate@@YAXPEAU_PLGDDA@1@@Z @ 0x14013AF80 (-vAdvXDDA@rotate@@YAXPEAU_PLGDDA@1@@Z.c)
 */

struct rotate::_PLGRUN *__fastcall rotate::prunPlgRead16(
        rotate *this,
        struct rotate::_PLGDDA *a2,
        struct rotate::_PLGRUN *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        struct _XLATEOBJ *a6,
        int a7,
        int a8)
{
  unsigned __int16 *v10; // rdi
  __int64 v11; // rsi
  struct rotate::_PLGDDA *v12; // rdx
  rotate *v13; // rcx
  struct rotate::_PLGRUN *v14; // r8
  struct rotate::_PLGDDA *v15; // rdx
  rotate *v16; // rcx
  unsigned __int8 *v17; // rsi
  int v18; // r12d
  struct rotate::_PLGDDA *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r15
  unsigned __int8 *v22; // rcx
  __int64 v23; // r14
  struct rotate::_PLGDDA *v24; // rdx
  unsigned __int8 *v25; // rcx
  __int64 v26; // r13
  struct rotate::_PLGRUN *v27; // r8

  v10 = (unsigned __int16 *)((char *)a3 + 2 * (int)a6);
  if ( a4 )
  {
    v17 = &a4[4 * ((__int64)a8 >> 5)];
    v18 = *(_DWORD *)v17;
    if ( (_DWORD)a6 != a7 )
    {
      v19 = (struct rotate::_PLGDDA *)(unsigned int)(a7 - (_DWORD)a6);
      v20 = a8 & 0x1F;
      v21 = (unsigned int)v19;
      if ( pxlo )
      {
        v24 = (struct rotate::_PLGDDA *)dword_140361820;
        do
        {
          v25 = v17 + 4;
          if ( v20 >= 32 )
            v18 = *(_DWORD *)v25;
          v26 = 0LL;
          if ( v20 < 32 )
          {
            v25 = v17;
            v26 = v20;
          }
          v17 = v25;
          if ( (v18 & *((_DWORD *)v24 + v26)) != 0 )
          {
            *(_DWORD *)a2 = XLATEOBJ_iXlate(pxlo, *v10);
            a2 = rotate::prunPumpDDA(this, a2, v27);
            v24 = (struct rotate::_PLGDDA *)dword_140361820;
          }
          rotate::vAdvXDDA(this, v24);
          ++v10;
          v20 = v26 + 1;
          --v21;
        }
        while ( v21 );
      }
      else
      {
        do
        {
          v22 = v17 + 4;
          if ( v20 >= 32 )
            v18 = *(_DWORD *)v22;
          v23 = 0LL;
          if ( v20 < 32 )
          {
            v22 = v17;
            v23 = v20;
          }
          v17 = v22;
          if ( (v18 & dword_140361820[v23]) != 0 )
          {
            *(_DWORD *)a2 = *v10;
            a2 = rotate::prunPumpDDA(this, a2, a3);
          }
          rotate::vAdvXDDA(this, v19);
          ++v10;
          v20 = v23 + 1;
          --v21;
        }
        while ( v21 );
      }
    }
  }
  else if ( (_DWORD)a6 != a7 )
  {
    v11 = (unsigned int)(a7 - (_DWORD)a6);
    if ( pxlo )
    {
      do
      {
        *(_DWORD *)a2 = XLATEOBJ_iXlate(pxlo, *v10);
        a2 = rotate::prunPumpDDA(this, a2, v14);
        rotate::vAdvXDDA(v16, v15);
        ++v10;
        --v11;
      }
      while ( v11 );
    }
    else
    {
      do
      {
        *(_DWORD *)a2 = *v10;
        a2 = rotate::prunPumpDDA(this, a2, a3);
        rotate::vAdvXDDA(v13, v12);
        ++v10;
        --v11;
      }
      while ( v11 );
    }
  }
  return a2;
}
