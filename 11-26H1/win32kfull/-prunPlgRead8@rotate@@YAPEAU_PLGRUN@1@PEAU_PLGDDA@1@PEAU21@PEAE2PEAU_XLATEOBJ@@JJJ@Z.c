/*
 * XREFs of ?prunPlgRead8@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x140341AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?prunPumpDDA@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@@Z @ 0x14013AD60 (-prunPumpDDA@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@@Z.c)
 *     ?vAdvXDDA@rotate@@YAXPEAU_PLGDDA@1@@Z @ 0x14013AF80 (-vAdvXDDA@rotate@@YAXPEAU_PLGDDA@1@@Z.c)
 */

struct rotate::_PLGRUN *__fastcall rotate::prunPlgRead8(
        rotate *this,
        struct rotate::_PLGDDA *a2,
        struct rotate::_PLGRUN *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        struct _XLATEOBJ *a6,
        int a7,
        int a8)
{
  unsigned __int8 *v8; // rbx
  struct rotate::_PLGRUN *v10; // r8
  __int64 v11; // rsi
  struct rotate::_PLGDDA *v12; // rax
  rotate *v13; // rcx
  struct rotate::_PLGDDA *v14; // rax
  rotate *v15; // rcx
  unsigned __int8 *v16; // rsi
  int v17; // r12d
  struct rotate::_PLGRUN *v18; // r8
  __int64 v19; // rax
  __int64 v20; // r14
  unsigned __int8 *v21; // rcx
  __int64 v22; // rbp
  unsigned __int8 *v23; // rcx
  __int64 v24; // r15

  v8 = (unsigned __int8 *)a3 + (int)a6;
  if ( a4 )
  {
    v16 = &a4[4 * ((__int64)a8 >> 5)];
    v17 = *(_DWORD *)v16;
    if ( (_DWORD)a6 != a7 )
    {
      v18 = (struct rotate::_PLGRUN *)(unsigned int)(a7 - (_DWORD)a6);
      v19 = a8 & 0x1F;
      v20 = (unsigned int)v18;
      if ( a5 )
      {
        do
        {
          v23 = v16 + 4;
          if ( v19 >= 32 )
            v17 = *(_DWORD *)v23;
          v24 = 0LL;
          if ( v19 < 32 )
          {
            v23 = v16;
            v24 = v19;
          }
          v16 = v23;
          if ( (v17 & dword_140361820[v24]) != 0 )
          {
            *(_DWORD *)a2 = *(_DWORD *)(*((_QWORD *)a5 + 2) + 4LL * *v8);
            a2 = rotate::prunPumpDDA(this, a2, v18);
          }
          rotate::vAdvXDDA(this, a2);
          ++v8;
          v19 = v24 + 1;
          --v20;
        }
        while ( v20 );
      }
      else
      {
        do
        {
          v21 = v16 + 4;
          if ( v19 >= 32 )
            v17 = *(_DWORD *)v21;
          v22 = 0LL;
          if ( v19 < 32 )
          {
            v21 = v16;
            v22 = v19;
          }
          v16 = v21;
          if ( (v17 & dword_140361820[v22]) != 0 )
          {
            *(_DWORD *)a2 = *v8;
            a2 = rotate::prunPumpDDA(this, a2, v18);
          }
          rotate::vAdvXDDA(this, a2);
          ++v8;
          v19 = v22 + 1;
          --v20;
        }
        while ( v20 );
      }
    }
  }
  else if ( (_DWORD)a6 != a7 )
  {
    v10 = (struct rotate::_PLGRUN *)(unsigned int)(a7 - (_DWORD)a6);
    v11 = (unsigned int)v10;
    if ( a5 )
    {
      do
      {
        *(_DWORD *)a2 = *(_DWORD *)(*((_QWORD *)a5 + 2) + 4LL * *v8);
        v14 = rotate::prunPumpDDA(this, a2, v10);
        rotate::vAdvXDDA(v15, v14);
        ++v8;
        --v11;
      }
      while ( v11 );
    }
    else
    {
      do
      {
        *(_DWORD *)a2 = *v8;
        v12 = rotate::prunPumpDDA(this, a2, v10);
        rotate::vAdvXDDA(v13, v12);
        ++v8;
        --v11;
      }
      while ( v11 );
    }
  }
  return a2;
}
