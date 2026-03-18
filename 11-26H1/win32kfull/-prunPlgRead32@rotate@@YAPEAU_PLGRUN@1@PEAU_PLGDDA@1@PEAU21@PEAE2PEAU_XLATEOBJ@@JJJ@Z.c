/*
 * XREFs of ?prunPlgRead32@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x14013A520
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x14011C840 (XLATEOBJ_iXlate.c)
 *     ?prunPumpDDA@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@@Z @ 0x14013AD60 (-prunPumpDDA@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@@Z.c)
 *     ?vAdvXDDA@rotate@@YAXPEAU_PLGDDA@1@@Z @ 0x14013AF80 (-vAdvXDDA@rotate@@YAXPEAU_PLGDDA@1@@Z.c)
 */

struct rotate::_PLGRUN *__fastcall rotate::prunPlgRead32(
        rotate *this,
        struct rotate::_PLGDDA *a2,
        struct rotate::_PLGRUN *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        struct _XLATEOBJ *a6,
        int a7,
        int a8)
{
  struct rotate::_PLGRUN *v9; // rsi
  ULONG *v10; // r8
  unsigned __int8 *v12; // rdi
  int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // r14
  unsigned __int8 *v16; // rcx
  __int64 v17; // rbp
  unsigned int v18; // ecx
  __int64 v19; // rdi
  struct rotate::_PLGRUN *v20; // r8
  struct rotate::_PLGDDA *v21; // rdx
  rotate *v22; // rcx
  __int64 v23; // r15
  struct rotate::_PLGRUN *v24; // r9
  int v25; // r11d
  unsigned int v26; // r10d
  int v27; // edx
  __int64 v28; // rax
  unsigned int v29; // ebp
  int v30; // ecx
  int v31; // r11d
  unsigned int v32; // edx
  unsigned int v33; // eax
  int v34; // r9d
  int v35; // r9d
  unsigned int v36; // edx
  unsigned int v37; // ecx
  int v38; // r9d
  unsigned int v39; // edx
  unsigned int v40; // ecx
  int v41; // edx
  unsigned int v42; // edx
  unsigned int v43; // eax
  int v44; // r9d
  int v45; // r9d
  unsigned int v46; // edx
  unsigned int v47; // ecx
  int v48; // edx
  unsigned int v49; // edx
  unsigned int v50; // eax
  int v51; // r9d
  int v52; // r9d
  unsigned int v53; // edx
  unsigned int v54; // ecx
  int v55; // r9d
  int v56; // edx
  unsigned int v57; // edx
  unsigned int v58; // ecx
  int v59; // r9d
  int v60; // edx
  unsigned int v61; // edx
  unsigned int v62; // ecx
  int v63; // r9d
  unsigned int v64; // edx
  unsigned int v65; // ecx
  int v66; // r9d
  int v67; // edx
  unsigned int v68; // edx
  unsigned int v69; // ecx
  int v70; // r9d
  int v71; // edx
  unsigned int v72; // edx
  unsigned int v73; // ecx
  int v74; // eax
  unsigned int v75; // eax
  unsigned int v76; // eax
  unsigned int v77; // edi
  int v78; // ecx
  int v79; // eax
  unsigned int v80; // eax
  unsigned int v81; // eax
  unsigned int v82; // edi
  int v83; // r10d
  int v84; // eax
  unsigned int v85; // eax
  unsigned int v86; // eax
  int v87; // edx
  unsigned __int8 *v88; // rcx
  __int64 v89; // r15
  struct rotate::_PLGRUN *v90; // r8
  __int64 v91; // [rsp+20h] [rbp-48h]
  __int64 v92; // [rsp+28h] [rbp-40h]
  ULONG *v93; // [rsp+80h] [rbp+18h]
  __int64 v94; // [rsp+88h] [rbp+20h]

  v9 = a2;
  v10 = (ULONG *)((char *)a3 + 4 * (int)a6);
  v93 = v10;
  if ( a4 )
  {
    v12 = &a4[4 * ((__int64)a8 >> 5)];
    v13 = *(_DWORD *)v12;
    if ( (_DWORD)a6 != a7 )
    {
      v14 = a8 & 0x1F;
      v15 = (unsigned int)(a7 - (_DWORD)a6);
      if ( pxlo )
      {
        do
        {
          v88 = v12 + 4;
          if ( v14 >= 32 )
            v13 = *(_DWORD *)v88;
          v89 = 0LL;
          if ( v14 < 32 )
          {
            v88 = v12;
            v89 = v14;
          }
          v12 = v88;
          if ( (v13 & dword_140361820[v89]) != 0 )
          {
            *(_DWORD *)v9 = XLATEOBJ_iXlate(pxlo, *v10);
            v9 = rotate::prunPumpDDA(this, v9, v90);
          }
          rotate::vAdvXDDA(this, a2);
          v14 = v89 + 1;
          v10 = ++v93;
          --v15;
        }
        while ( v15 );
      }
      else
      {
        do
        {
          v16 = v12 + 4;
          if ( v14 >= 32 )
            v13 = *(_DWORD *)v16;
          v17 = 0LL;
          if ( v14 < 32 )
          {
            v16 = v12;
            v17 = v14;
          }
          v12 = v16;
          if ( (v13 & dword_140361820[v17]) != 0 )
          {
            *(_DWORD *)v9 = *v10;
            v9 = rotate::prunPumpDDA(this, v9, (struct rotate::_PLGRUN *)v10);
          }
          rotate::vAdvXDDA(this, a2);
          v14 = v17 + 1;
          v10 = ++v93;
          --v15;
        }
        while ( v15 );
      }
    }
  }
  else if ( (_DWORD)a6 != a7 )
  {
    v18 = a7 - (_DWORD)a6;
    if ( pxlo )
    {
      v19 = v18;
      do
      {
        *(_DWORD *)v9 = XLATEOBJ_iXlate(pxlo, *v10);
        v9 = rotate::prunPumpDDA(this, v9, v20);
        rotate::vAdvXDDA(v22, v21);
        v10 = ++v93;
        --v19;
      }
      while ( v19 );
    }
    else
    {
      v23 = v18;
      do
      {
        v24 = (struct rotate::_PLGRUN *)((char *)v9 + 12);
        *(_DWORD *)v9 = *v10;
        v25 = *((_DWORD *)this + 17);
        v91 = *(_QWORD *)((char *)this + 100);
        v26 = HIDWORD(*(_QWORD *)((char *)this + 108));
        v27 = *(_QWORD *)((char *)this + 108);
        v94 = *(_QWORD *)((char *)this + 116);
        v28 = *(_QWORD *)((char *)this + 124);
        *((_DWORD *)v9 + 1) = v25;
        v92 = v28;
        if ( v25 < *((_DWORD *)this + 19) )
        {
          v77 = HIDWORD(v91);
          v78 = v91;
          do
          {
            if ( v78 < v27 )
            {
              *(_DWORD *)v24 = v78;
              v79 = v27 - v78;
            }
            else
            {
              *(_DWORD *)v24 = v27;
              v79 = v78 - v27;
            }
            *((_DWORD *)v24 + 1) = v79;
            ++*((_DWORD *)v9 + 2);
            v78 += *((_DWORD *)this + 81);
            v77 += *((_DWORD *)this + 82);
            v80 = *((_DWORD *)this + 83);
            if ( v77 >= v80 )
            {
              ++v78;
              v77 -= v80;
            }
            v27 += *((_DWORD *)this + 84);
            v26 += *((_DWORD *)this + 85);
            v81 = *((_DWORD *)this + 86);
            if ( v26 >= v81 )
            {
              ++v27;
              v26 -= v81;
            }
            v24 = (struct rotate::_PLGRUN *)((char *)v24 + 8);
            ++v25;
          }
          while ( v25 < *((_DWORD *)this + 19) );
        }
        v29 = HIDWORD(v94);
        v30 = v94;
        while ( v25 < *((_DWORD *)this + 21) )
        {
          if ( v30 >= v27 )
          {
            *(_DWORD *)v24 = v27;
            v74 = v30 - v27;
          }
          else
          {
            *(_DWORD *)v24 = v30;
            v74 = v27 - v30;
          }
          *((_DWORD *)v24 + 1) = v74;
          ++*((_DWORD *)v9 + 2);
          v30 += *((_DWORD *)this + 87);
          v29 += *((_DWORD *)this + 88);
          v75 = *((_DWORD *)this + 89);
          if ( v29 >= v75 )
          {
            ++v30;
            v29 -= v75;
          }
          v27 += *((_DWORD *)this + 84);
          v26 += *((_DWORD *)this + 85);
          v76 = *((_DWORD *)this + 86);
          if ( v26 >= v76 )
          {
            ++v27;
            v26 -= v76;
          }
          v24 = (struct rotate::_PLGRUN *)((char *)v24 + 8);
          ++v25;
        }
        if ( v25 < *((_DWORD *)this + 23) )
        {
          v82 = HIDWORD(v92);
          v83 = v92;
          do
          {
            if ( v30 < v83 )
            {
              *(_DWORD *)v24 = v30;
              v84 = v83 - v30;
            }
            else
            {
              *(_DWORD *)v24 = v83;
              v84 = v30 - v83;
            }
            *((_DWORD *)v24 + 1) = v84;
            ++*((_DWORD *)v9 + 2);
            v30 += *((_DWORD *)this + 87);
            v29 += *((_DWORD *)this + 88);
            v85 = *((_DWORD *)this + 89);
            if ( v29 >= v85 )
            {
              ++v30;
              v29 -= v85;
            }
            v83 += *((_DWORD *)this + 90);
            v82 += *((_DWORD *)this + 91);
            v86 = *((_DWORD *)this + 92);
            if ( v82 >= v86 )
            {
              ++v83;
              v82 -= v86;
            }
            v24 = (struct rotate::_PLGRUN *)((char *)v24 + 8);
            ++v25;
          }
          while ( v25 < *((_DWORD *)this + 23) );
        }
        v31 = v25 - *((_DWORD *)v9 + 1);
        *((_DWORD *)v9 + 2) = v31;
        if ( *(_DWORD *)this && !v31 )
        {
          if ( v30 >= v27 )
          {
            *(_DWORD *)v24 = v27;
            v87 = v30 - v27;
          }
          else
          {
            *(_DWORD *)v24 = v30;
            v87 = v27 - v30;
          }
          *((_DWORD *)v24 + 1) = v87;
          v24 = (struct rotate::_PLGRUN *)((char *)v24 + 8);
          *((_DWORD *)v9 + 2) = 1;
        }
        v9 = v24;
        *((_DWORD *)this + 17) += *((_DWORD *)this + 33);
        v32 = *((_DWORD *)this + 18) + *((_DWORD *)this + 34);
        v33 = *((_DWORD *)this + 35);
        v34 = *((_DWORD *)this + 17);
        *((_DWORD *)this + 18) = v32;
        if ( v32 >= v33 )
        {
          *((_DWORD *)this + 17) = v34 + 1;
          *((_DWORD *)this + 18) = v32 - v33;
          v35 = *((_DWORD *)this + 25) + *((_DWORD *)this + 93);
          *((_DWORD *)this + 25) = v35;
          v36 = *((_DWORD *)this + 26) + *((_DWORD *)this + 94);
          *((_DWORD *)this + 26) = v36;
          v37 = *((_DWORD *)this + 95);
          if ( v36 >= v37 )
          {
            *((_DWORD *)this + 25) = v35 + 1;
            *((_DWORD *)this + 26) = v36 - v37;
          }
          v38 = *((_DWORD *)this + 27) + *((_DWORD *)this + 96);
          *((_DWORD *)this + 27) = v38;
          v39 = *((_DWORD *)this + 28) + *((_DWORD *)this + 97);
          *((_DWORD *)this + 28) = v39;
          v40 = *((_DWORD *)this + 98);
          if ( v39 >= v40 )
          {
            *((_DWORD *)this + 27) = v38 + 1;
            *((_DWORD *)this + 28) = v39 - v40;
          }
        }
        v41 = *((_DWORD *)this + 20);
        *((_DWORD *)this + 19) += *((_DWORD *)this + 36);
        v42 = *((_DWORD *)this + 37) + v41;
        v43 = *((_DWORD *)this + 38);
        v44 = *((_DWORD *)this + 19);
        *((_DWORD *)this + 20) = v42;
        if ( v42 >= v43 )
        {
          *((_DWORD *)this + 19) = v44 + 1;
          *((_DWORD *)this + 20) = v42 - v43;
          v45 = *((_DWORD *)this + 29) + *((_DWORD *)this + 96);
          *((_DWORD *)this + 29) = v45;
          v46 = *((_DWORD *)this + 30) + *((_DWORD *)this + 97);
          *((_DWORD *)this + 30) = v46;
          v47 = *((_DWORD *)this + 98);
          if ( v46 >= v47 )
          {
            *((_DWORD *)this + 29) = v45 + 1;
            *((_DWORD *)this + 30) = v46 - v47;
          }
        }
        v48 = *((_DWORD *)this + 22);
        *((_DWORD *)this + 21) += *((_DWORD *)this + 39);
        v49 = *((_DWORD *)this + 40) + v48;
        v50 = *((_DWORD *)this + 41);
        v51 = *((_DWORD *)this + 21);
        *((_DWORD *)this + 22) = v49;
        if ( v49 >= v50 )
        {
          *((_DWORD *)this + 21) = v51 + 1;
          *((_DWORD *)this + 22) = v49 - v50;
          v52 = *((_DWORD *)this + 31) + *((_DWORD *)this + 93);
          *((_DWORD *)this + 31) = v52;
          v53 = *((_DWORD *)this + 32) + *((_DWORD *)this + 94);
          *((_DWORD *)this + 32) = v53;
          v54 = *((_DWORD *)this + 95);
          if ( v53 >= v54 )
          {
            *((_DWORD *)this + 31) = v52 + 1;
            *((_DWORD *)this + 32) = v53 - v54;
          }
        }
        v55 = *((_DWORD *)this + 42) + *((_DWORD *)this + 23);
        v56 = *((_DWORD *)this + 24);
        *((_DWORD *)this + 23) = v55;
        v57 = *((_DWORD *)this + 43) + v56;
        *((_DWORD *)this + 24) = v57;
        v58 = *((_DWORD *)this + 44);
        if ( v57 >= v58 )
        {
          *((_DWORD *)this + 23) = v55 + 1;
          *((_DWORD *)this + 24) = v57 - v58;
        }
        v59 = *((_DWORD *)this + 25) + *((_DWORD *)this + 57);
        v60 = *((_DWORD *)this + 26);
        *((_DWORD *)this + 25) = v59;
        v61 = *((_DWORD *)this + 58) + v60;
        *((_DWORD *)this + 26) = v61;
        v62 = *((_DWORD *)this + 59);
        if ( v61 >= v62 )
        {
          *((_DWORD *)this + 25) = v59 + 1;
          *((_DWORD *)this + 26) = v61 - v62;
        }
        v63 = *((_DWORD *)this + 60) + *((_DWORD *)this + 27);
        *((_DWORD *)this + 27) = v63;
        v64 = *((_DWORD *)this + 28) + *((_DWORD *)this + 61);
        *((_DWORD *)this + 28) = v64;
        v65 = *((_DWORD *)this + 62);
        if ( v64 >= v65 )
        {
          *((_DWORD *)this + 27) = v63 + 1;
          *((_DWORD *)this + 28) = v64 - v65;
        }
        v66 = *((_DWORD *)this + 29) + *((_DWORD *)this + 63);
        v67 = *((_DWORD *)this + 30);
        *((_DWORD *)this + 29) = v66;
        v68 = *((_DWORD *)this + 64) + v67;
        *((_DWORD *)this + 30) = v68;
        v69 = *((_DWORD *)this + 65);
        if ( v68 >= v69 )
        {
          *((_DWORD *)this + 29) = v66 + 1;
          *((_DWORD *)this + 30) = v68 - v69;
        }
        v70 = *((_DWORD *)this + 66) + *((_DWORD *)this + 31);
        v71 = *((_DWORD *)this + 32);
        *((_DWORD *)this + 31) = v70;
        v72 = *((_DWORD *)this + 67) + v71;
        *((_DWORD *)this + 32) = v72;
        v73 = *((_DWORD *)this + 68);
        if ( v72 >= v73 )
        {
          *((_DWORD *)this + 31) = v70 + 1;
          *((_DWORD *)this + 32) = v72 - v73;
        }
        ++v10;
        --v23;
      }
      while ( v23 );
    }
  }
  return v9;
}
