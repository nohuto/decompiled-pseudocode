/*
 * XREFs of ?prunPlgRead4@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x140341880
 * Callers:
 *     <none>
 * Callees:
 *     ?prunPumpDDA@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@@Z @ 0x14013AD60 (-prunPumpDDA@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@@Z.c)
 *     ?vAdvXDDA@rotate@@YAXPEAU_PLGDDA@1@@Z @ 0x14013AF80 (-vAdvXDDA@rotate@@YAXPEAU_PLGDDA@1@@Z.c)
 */

struct rotate::_PLGRUN *__fastcall rotate::prunPlgRead4(
        rotate *this,
        struct rotate::_PLGDDA *a2,
        struct rotate::_PLGRUN *a3,
        unsigned __int8 *a4,
        struct rotate::_PLGRUN *a5,
        struct _XLATEOBJ *a6,
        int a7,
        int a8)
{
  int v8; // ebx
  rotate *v9; // r10
  __int64 v10; // rbp
  unsigned int *v11; // rsi
  unsigned __int64 v12; // r8
  __int64 v13; // rdi
  unsigned int v14; // eax
  struct rotate::_PLGDDA *v15; // rax
  __int64 v16; // r9
  int v17; // ebp
  int v18; // ecx
  unsigned int *v19; // rax
  int v20; // eax
  int v21; // edi
  unsigned __int8 *v22; // r12
  int v23; // r9d
  __int64 v24; // r13
  __int64 v25; // r15
  unsigned int v26; // eax
  struct rotate::_PLGDDA *v27; // rax
  char v28; // r9
  int v29; // ebp
  __int64 v30; // rax
  int v31; // r11d
  unsigned int *v32; // rax
  int v33; // ecx
  unsigned __int8 *v34; // rax
  __int64 v36; // [rsp+20h] [rbp-48h]
  int v38; // [rsp+80h] [rbp+18h]
  int v39; // [rsp+88h] [rbp+20h]
  unsigned int v40; // [rsp+98h] [rbp+30h]

  v8 = (int)a6;
  v9 = this;
  v10 = (unsigned __int8)a6 & 7;
  v11 = (unsigned int *)((char *)a3 + 4 * ((__int64)(int)a6 >> 3));
  v12 = *v11;
  v40 = *v11;
  if ( a4 )
  {
    v21 = a8 & 0x1F;
    v22 = &a4[4 * ((__int64)a8 >> 5)];
    v23 = *(_DWORD *)v22;
    v38 = *(_DWORD *)v22;
    if ( v8 < a7 )
    {
      v24 = v10;
      v25 = a8 & 0x1F;
      while ( 1 )
      {
        if ( (v23 & dword_140361820[v25]) != 0 )
        {
          v26 = ((unsigned int)v12 & dword_140370F20[v24]) >> dword_140370F40[v24];
          if ( a5 )
            v26 = *(_DWORD *)(*((_QWORD *)a5 + 2) + 4LL * v26);
          *(_DWORD *)a2 = v26;
          v27 = rotate::prunPumpDDA(v9, a2, a5);
          v9 = this;
          a2 = v27;
        }
        rotate::vAdvXDDA(v9, a2);
        ++v8;
        v28 = v21 + 1;
        v29 = v10 + 1;
        v39 = v21 + 1;
        v30 = v24 + 1;
        v36 = v25 + 1;
        if ( v8 >= a7 )
          break;
        if ( (v29 & 8) != 0 )
        {
          LODWORD(v12) = v11[1];
          v40 = v12;
        }
        else
        {
          LODWORD(v12) = v40;
        }
        v24 = 0LL;
        if ( (v29 & 8) == 0 )
          v24 = v30;
        v31 = 0;
        v32 = v11 + 1;
        if ( (v29 & 8) == 0 )
        {
          v32 = v11;
          v31 = v29;
        }
        v11 = v32;
        v33 = v28 & 0x20;
        if ( (v28 & 0x20) != 0 )
        {
          v23 = *((_DWORD *)v22 + 1);
          v38 = v23;
        }
        else
        {
          v23 = v38;
        }
        v34 = v22 + 4;
        LODWORD(v10) = v31;
        if ( !v33 )
          v34 = v22;
        v21 = 0;
        v22 = v34;
        if ( !v33 )
          v21 = v39;
        v25 = 0LL;
        if ( !v33 )
          v25 = v36;
      }
    }
  }
  else if ( v8 < a7 )
  {
    v13 = (unsigned int)v10;
    while ( 1 )
    {
      v14 = ((unsigned int)v12 & dword_140370F20[v13]) >> dword_140370F40[v13];
      if ( a5 )
        v14 = *(_DWORD *)(*((_QWORD *)a5 + 2) + 4LL * v14);
      *(_DWORD *)a2 = v14;
      v15 = rotate::prunPumpDDA(v9, a2, (struct rotate::_PLGRUN *)v12);
      rotate::vAdvXDDA(this, v15);
      ++v8;
      v16 = v13 + 1;
      v17 = v10 + 1;
      if ( v8 >= a7 )
        break;
      v18 = v17 & 8;
      if ( (v17 & 8) != 0 )
      {
        v12 = v11[1];
        v40 = v11[1];
      }
      else
      {
        v12 = v40;
      }
      v19 = v11 + 1;
      if ( (v17 & 8) == 0 )
        v19 = v11;
      v11 = v19;
      v20 = 0;
      if ( (v17 & 8) == 0 )
        v20 = v17;
      v13 = 0LL;
      LODWORD(v10) = v20;
      if ( !v18 )
        v13 = v16;
    }
  }
  return a2;
}
