/*
 * XREFs of ?prunPumpDDA@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@@Z @ 0x14013AD60
 * Callers:
 *     ?prunPlgRead32@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x14013A520 (-prunPlgRead32@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead24@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x14013AB50 (-prunPlgRead24@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead16@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1403414A0 (-prunPlgRead16@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead1@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x140341660 (-prunPlgRead1@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead4@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x140341880 (-prunPlgRead4@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead8@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x140341AE0 (-prunPlgRead8@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 * Callees:
 *     <none>
 */

struct rotate::_PLGRUN *__fastcall rotate::prunPumpDDA(
        rotate *this,
        struct rotate::_PLGDDA *a2,
        struct rotate::_PLGRUN *a3)
{
  char *v3; // r10
  int v4; // r8d
  _DWORD *v5; // r9
  unsigned int v6; // r11d
  int v7; // ebx
  __int64 v8; // rax
  unsigned int v9; // esi
  int v10; // edi
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  int v14; // r8d
  struct rotate::_PLGRUN *result; // rax
  unsigned int v16; // esi
  int v17; // edi
  int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  int v21; // r11d
  unsigned int v22; // r14d
  int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  int v26; // ebx
  __int64 v27; // [rsp+38h] [rbp+10h]
  __int64 v28; // [rsp+40h] [rbp+18h]
  __int64 v29; // [rsp+48h] [rbp+20h]

  v3 = (char *)a2 + 12;
  v4 = *((_DWORD *)this + 17);
  v5 = (_DWORD *)((char *)a2 + 8);
  v28 = *(_QWORD *)((char *)this + 100);
  v6 = HIDWORD(*(_QWORD *)((char *)this + 108));
  v7 = *(_QWORD *)((char *)this + 108);
  v27 = *(_QWORD *)((char *)this + 116);
  v8 = *(_QWORD *)((char *)this + 124);
  *((_DWORD *)a2 + 1) = v4;
  v29 = v8;
  if ( v4 < *((_DWORD *)this + 19) )
  {
    v16 = HIDWORD(v28);
    v17 = v28;
    do
    {
      if ( v17 < v7 )
      {
        *(_DWORD *)v3 = v17;
        v18 = v7 - v17;
      }
      else
      {
        *(_DWORD *)v3 = v7;
        v18 = v17 - v7;
      }
      *((_DWORD *)v3 + 1) = v18;
      ++*v5;
      v17 += *((_DWORD *)this + 81);
      v16 += *((_DWORD *)this + 82);
      v19 = *((_DWORD *)this + 83);
      if ( v16 >= v19 )
      {
        ++v17;
        v16 -= v19;
      }
      v7 += *((_DWORD *)this + 84);
      v6 += *((_DWORD *)this + 85);
      v20 = *((_DWORD *)this + 86);
      if ( v6 >= v20 )
      {
        ++v7;
        v6 -= v20;
      }
      v3 += 8;
      ++v4;
    }
    while ( v4 < *((_DWORD *)this + 19) );
  }
  v9 = HIDWORD(v27);
  v10 = v27;
  if ( v4 < *((_DWORD *)this + 21) )
  {
    do
    {
      if ( v10 >= v7 )
      {
        *(_DWORD *)v3 = v7;
        v11 = v10 - v7;
      }
      else
      {
        *(_DWORD *)v3 = v10;
        v11 = v7 - v10;
      }
      *((_DWORD *)v3 + 1) = v11;
      ++*v5;
      v10 += *((_DWORD *)this + 87);
      v9 += *((_DWORD *)this + 88);
      v12 = *((_DWORD *)this + 89);
      if ( v9 >= v12 )
      {
        ++v10;
        v9 -= v12;
      }
      v7 += *((_DWORD *)this + 84);
      v6 += *((_DWORD *)this + 85);
      v13 = *((_DWORD *)this + 86);
      if ( v6 >= v13 )
      {
        ++v7;
        v6 -= v13;
      }
      v3 += 8;
      ++v4;
    }
    while ( v4 < *((_DWORD *)this + 21) );
    v5 = (_DWORD *)((char *)a2 + 8);
  }
  if ( v4 < *((_DWORD *)this + 23) )
  {
    v21 = v29;
    v22 = HIDWORD(v29);
    do
    {
      if ( v10 < v21 )
      {
        *(_DWORD *)v3 = v10;
        v23 = v21 - v10;
      }
      else
      {
        *(_DWORD *)v3 = v21;
        v23 = v10 - v21;
      }
      *((_DWORD *)v3 + 1) = v23;
      ++*v5;
      v10 += *((_DWORD *)this + 87);
      v9 += *((_DWORD *)this + 88);
      v24 = *((_DWORD *)this + 89);
      if ( v9 >= v24 )
      {
        ++v10;
        v9 -= v24;
      }
      v21 += *((_DWORD *)this + 90);
      v22 += *((_DWORD *)this + 91);
      v25 = *((_DWORD *)this + 92);
      if ( v22 >= v25 )
      {
        ++v21;
        v22 -= v25;
      }
      v3 += 8;
      ++v4;
    }
    while ( v4 < *((_DWORD *)this + 23) );
    v5 = (_DWORD *)((char *)a2 + 8);
  }
  v14 = v4 - *((_DWORD *)a2 + 1);
  *v5 = v14;
  if ( !*(_DWORD *)this || v14 )
    return (struct rotate::_PLGRUN *)v3;
  if ( v10 >= v7 )
  {
    *(_DWORD *)v3 = v7;
    v26 = v10 - v7;
  }
  else
  {
    *(_DWORD *)v3 = v10;
    v26 = v7 - v10;
  }
  *((_DWORD *)v3 + 1) = v26;
  result = (struct rotate::_PLGRUN *)(v3 + 8);
  *v5 = 1;
  return result;
}
