/*
 * XREFs of ?prunPlgRead8@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x14031EFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?prunPumpDDA@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@@Z @ 0x14012D910 (-prunPumpDDA@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@@Z.c)
 *     ?vAdvXDDA@rotate@@YAXPEAU_PLGDDA@1@@Z @ 0x14012DB30 (-vAdvXDDA@rotate@@YAXPEAU_PLGDDA@1@@Z.c)
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
  struct rotate::_PLGRUN *v9; // r8
  unsigned __int8 *v11; // rbx
  __int64 v12; // rsi
  struct rotate::_PLGDDA *v13; // rax
  rotate *v14; // rcx
  struct rotate::_PLGDDA *v15; // rax
  rotate *v16; // rcx
  unsigned __int8 *v17; // rsi
  int v18; // r12d
  __int64 v19; // rax
  __int64 v20; // r14
  unsigned __int8 *v21; // rcx
  __int64 v22; // rbp
  unsigned __int8 *v23; // rcx
  __int64 v24; // r15

  v9 = (struct rotate::_PLGRUN *)(int)a6;
  v11 = (unsigned __int8 *)a3 + (int)a6;
  if ( a4 )
  {
    v17 = &a4[4 * ((__int64)a8 >> 5)];
    v18 = *(_DWORD *)v17;
    if ( (_DWORD)a6 != a7 )
    {
      v19 = a8 & 0x1F;
      v20 = (unsigned int)(a7 - (_DWORD)a6);
      if ( a5 )
      {
        do
        {
          v23 = v17 + 4;
          if ( v19 >= 32 )
            v18 = *(_DWORD *)v23;
          v24 = 0LL;
          if ( v19 < 32 )
          {
            v23 = v17;
            v24 = v19;
          }
          v17 = v23;
          if ( (v18 & dword_140355080[v24]) != 0 )
          {
            *(_DWORD *)a2 = *(_DWORD *)(*((_QWORD *)a5 + 2) + 4LL * *v11);
            a2 = rotate::prunPumpDDA(this, a2, v9);
          }
          rotate::vAdvXDDA(this, a2);
          ++v11;
          v19 = v24 + 1;
          --v20;
        }
        while ( v20 );
      }
      else
      {
        do
        {
          v21 = v17 + 4;
          if ( v19 >= 32 )
            v18 = *(_DWORD *)v21;
          v22 = 0LL;
          if ( v19 < 32 )
          {
            v21 = v17;
            v22 = v19;
          }
          v17 = v21;
          if ( (v18 & dword_140355080[v22]) != 0 )
          {
            *(_DWORD *)a2 = *v11;
            a2 = rotate::prunPumpDDA(this, a2, v9);
          }
          rotate::vAdvXDDA(this, a2);
          ++v11;
          v19 = v22 + 1;
          --v20;
        }
        while ( v20 );
      }
    }
  }
  else if ( (_DWORD)a6 != a7 )
  {
    v12 = (unsigned int)(a7 - (_DWORD)a6);
    if ( a5 )
    {
      do
      {
        *(_DWORD *)a2 = *(_DWORD *)(*((_QWORD *)a5 + 2) + 4LL * *v11);
        v15 = rotate::prunPumpDDA(this, a2, v9);
        rotate::vAdvXDDA(v16, v15);
        ++v11;
        --v12;
      }
      while ( v12 );
    }
    else
    {
      do
      {
        *(_DWORD *)a2 = *v11;
        v13 = rotate::prunPumpDDA(this, a2, v9);
        rotate::vAdvXDDA(v14, v13);
        ++v11;
        --v12;
      }
      while ( v12 );
    }
  }
  return a2;
}
