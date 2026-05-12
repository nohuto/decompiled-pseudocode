/*
 * XREFs of sub_1400B0394 @ 0x1400B0394
 * Callers:
 *     sub_14003B2E8 @ 0x14003B2E8 (sub_14003B2E8.c)
 * Callees:
 *     sub_140037A5C @ 0x140037A5C (sub_140037A5C.c)
 *     sub_140037B0C @ 0x140037B0C (sub_140037B0C.c)
 *     sub_14003BCD4 @ 0x14003BCD4 (sub_14003BCD4.c)
 *     sub_14003F840 @ 0x14003F840 (sub_14003F840.c)
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

char __fastcall sub_1400B0394(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // r15
  int v6; // ebx
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // r9
  _DWORD *v10; // rax
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // rax
  unsigned int v16; // esi
  _DWORD *v17; // rbx
  unsigned int v18; // edx
  unsigned int v19; // r8d
  unsigned int v20; // r9d
  unsigned __int64 v21; // rcx
  unsigned int i; // edi
  char *v23; // r9
  __int128 v24; // xmm1
  __int64 v25; // r8
  int *v26; // r9
  __int64 v27; // r11
  int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned __int64 v33; // r9
  __int64 v34; // rcx
  unsigned int j; // edi
  __int64 v36; // r9
  __int128 v37; // xmm1
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r11
  int v41; // ecx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  int v46; // [rsp+30h] [rbp-D0h] BYREF
  int v47; // [rsp+34h] [rbp-CCh] BYREF
  int v48; // [rsp+38h] [rbp-C8h] BYREF
  int v49; // [rsp+3Ch] [rbp-C4h] BYREF
  int v50; // [rsp+40h] [rbp-C0h] BYREF
  int v51; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v52; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v53[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v54; // [rsp+70h] [rbp-90h]
  __int64 v55; // [rsp+78h] [rbp-88h]
  _BYTE v56[16]; // [rsp+80h] [rbp-80h] BYREF
  int *v57; // [rsp+90h] [rbp-70h]
  __int64 v58; // [rsp+98h] [rbp-68h]
  int *v59; // [rsp+A0h] [rbp-60h]
  __int64 v60; // [rsp+A8h] [rbp-58h]
  int *v61; // [rsp+B0h] [rbp-50h]
  __int64 v62; // [rsp+B8h] [rbp-48h]
  int *v63; // [rsp+C0h] [rbp-40h]
  __int64 v64; // [rsp+C8h] [rbp-38h]
  __int128 *v65; // [rsp+D0h] [rbp-30h]
  int v66; // [rsp+D8h] [rbp-28h]
  int v67; // [rsp+DCh] [rbp-24h]
  __int128 *v68; // [rsp+E0h] [rbp-20h]
  int v69; // [rsp+E8h] [rbp-18h]
  int v70; // [rsp+ECh] [rbp-14h]
  int *v71; // [rsp+F0h] [rbp-10h]
  int v72; // [rsp+F8h] [rbp-8h]
  int v73; // [rsp+FCh] [rbp-4h]
  int *v74; // [rsp+100h] [rbp+0h]
  __int64 v75; // [rsp+108h] [rbp+8h]
  int *v76; // [rsp+110h] [rbp+10h]
  __int64 v77; // [rsp+118h] [rbp+18h]
  __int64 *v78; // [rsp+120h] [rbp+20h]
  __int64 v79; // [rsp+128h] [rbp+28h]
  __int128 v80; // [rsp+130h] [rbp+30h] BYREF
  int v81[4]; // [rsp+140h] [rbp+40h] BYREF
  char v82; // [rsp+150h] [rbp+50h]
  __int128 v83; // [rsp+158h] [rbp+58h] BYREF
  __int128 v84; // [rsp+168h] [rbp+68h]
  __int64 v85; // [rsp+178h] [rbp+78h]
  char v86; // [rsp+180h] [rbp+80h]
  int Dst[16]; // [rsp+190h] [rbp+90h] BYREF

  v4 = a3;
  v80 = 0LL;
  memset_0(Dst, 0, sizeof(Dst));
  v6 = 0;
  v7 = 0;
  sub_1400403EC(*(_QWORD *)(a1 + 16), (__int64)&v80);
  sub_14003BCD4((wchar_t *)Dst, 32LL, L"%s", *((_QWORD *)&v80 + 1));
  v9 = *(unsigned int *)(a2 + 8);
  if ( v4 >= 40 * v9 + 16 && (_DWORD)v9 )
  {
    v10 = (_DWORD *)(a2 + 32);
    v8 = (unsigned int)v9;
    do
    {
      v6 += *(v10 - 3);
      v7 += *v10;
      v10 += 10;
      --v8;
    }
    while ( v8 );
  }
  if ( (unsigned int)dword_140168178 > 5 && sub_14003F840(v8, 0x400000000000LL) )
  {
    v55 = 16LL;
    v54 = a1 + 5064;
    sub_140037B0C((__int64)v56, Dst);
    v46 = v11;
    v57 = &v46;
    v58 = v12;
    v59 = &v47;
    v61 = &v48;
    v47 = v6;
    v60 = v12;
    v48 = v7;
    v62 = v12;
    sub_140037A5C(v13, (unsigned __int8 *)dword_140158161, v14, v11, 7u, v53);
  }
  v15 = *(unsigned int *)(a2 + 8);
  if ( v4 >= 40 * v15 + 16 )
  {
    LOBYTE(v15) = 0;
    *(_QWORD *)&v80 = 0LL;
    BYTE8(v80) = 0;
    v16 = 0;
    v83 = 0LL;
    v85 = 0LL;
    v84 = 0LL;
    v86 = 0;
    *(_OWORD *)v81 = 0LL;
    v82 = 0;
    while ( v16 < *(_DWORD *)(a2 + 8) )
    {
      LOBYTE(v15) = v16;
      v17 = (_DWORD *)(a2 + 8 * (v16 + 4LL * v16 + 2));
      v18 = v17[1];
      v19 = v18;
      if ( v18 )
      {
        v20 = v17[3];
        if ( v20 >= 0x28 )
        {
          v15 = (unsigned int)v17[2];
          v21 = (unsigned __int64)v18 << 7;
          if ( v15 >= v21 && v20 + 8 * (v16 + 4 * v16 + 2) + (v18 << 7) <= (unsigned int)v4 )
          {
            for ( i = 0; ; ++i )
            {
              v19 = v17[1];
              if ( i >= v19 )
                break;
              v23 = (char *)v17 + (unsigned int)v17[3];
              v15 = *((_QWORD *)v23 + 2);
              *(_QWORD *)&v80 = v15;
              BYTE8(v80) = 0;
              v83 = *(_OWORD *)(v23 + 24);
              v84 = *(_OWORD *)(v23 + 40);
              v85 = *((_QWORD *)v23 + 7);
              v86 = 0;
              v24 = *((_OWORD *)v23 + 4);
              v82 = 0;
              *(_OWORD *)v81 = v24;
              if ( (unsigned int)dword_140168178 > 5 )
              {
                LOBYTE(v15) = sub_14003F840(v21, 0x400000000000LL);
                if ( (_BYTE)v15 )
                {
                  v55 = 16LL;
                  v54 = a1 + 5064;
                  sub_140037B0C((__int64)v56, Dst);
                  v28 = *v26;
                  v57 = &v48;
                  v47 = v26[1];
                  v59 = &v47;
                  v46 = v26[2];
                  v61 = &v46;
                  v49 = v26[3];
                  v63 = &v49;
                  v29 = v27;
                  v48 = v28;
                  v58 = 4LL;
                  v60 = 4LL;
                  v62 = 4LL;
                  v64 = 4LL;
                  do
                    ++v29;
                  while ( *((_BYTE *)&v81[-4] + v29) );
                  v67 = 0;
                  v66 = v29 + 1;
                  v65 = &v80;
                  v30 = v27;
                  do
                    ++v30;
                  while ( *((_BYTE *)&v83 + v30) );
                  v70 = 0;
                  v69 = v30 + 1;
                  v68 = &v83;
                  v31 = v27;
                  do
                    ++v31;
                  while ( *((_BYTE *)v81 + v31) );
                  v73 = 0;
                  v72 = v31 + 1;
                  v71 = v81;
                  LOBYTE(v15) = sub_140037A5C(
                                  (__int64)v81,
                                  (unsigned __int8 *)dword_14015849C,
                                  v25,
                                  (__int64)v26,
                                  0xBu,
                                  v53);
                }
              }
            }
          }
        }
      }
      v32 = (unsigned int)v17[4];
      if ( (_DWORD)v32 )
      {
        v33 = (unsigned int)v17[6];
        if ( (unsigned int)v33 >= 0x28 )
        {
          v15 = (unsigned int)v17[3];
          if ( v33 >= v15 + ((unsigned __int64)v19 << 7) )
          {
            v15 = (unsigned int)v17[5];
            v34 = 136 * v32;
            if ( v15 >= 136 * v32 )
            {
              LODWORD(v15) = 8 * (v16 + 4 * v16 + 2) + v33 + 136 * v32;
              if ( (unsigned int)v15 <= (unsigned int)v4 )
              {
                for ( j = 0; j < v17[4]; ++j )
                {
                  v36 = (__int64)&v17[34 * j] + (unsigned int)v17[6];
                  v15 = *(_QWORD *)(v36 + 24);
                  *(_QWORD *)&v80 = v15;
                  BYTE8(v80) = 0;
                  v83 = *(_OWORD *)(v36 + 32);
                  v84 = *(_OWORD *)(v36 + 48);
                  v85 = *(_QWORD *)(v36 + 64);
                  v86 = 0;
                  v37 = *(_OWORD *)(v36 + 72);
                  v82 = 0;
                  *(_OWORD *)v81 = v37;
                  if ( (unsigned int)dword_140168178 > 5 )
                  {
                    LOBYTE(v15) = sub_14003F840(v34, 0x400000000000LL);
                    if ( (_BYTE)v15 )
                    {
                      v55 = 16LL;
                      v54 = a1 + 5064;
                      sub_140037B0C((__int64)v56, Dst);
                      v41 = *(_DWORD *)v39;
                      v57 = &v49;
                      v48 = *(_DWORD *)(v39 + 8);
                      v59 = &v48;
                      v47 = *(_DWORD *)(v39 + 12);
                      v61 = &v47;
                      v46 = *(_DWORD *)(v39 + 16);
                      v63 = &v46;
                      v42 = v40;
                      v49 = v41;
                      v58 = 4LL;
                      v60 = 4LL;
                      v62 = 4LL;
                      v64 = 4LL;
                      do
                        ++v42;
                      while ( *((_BYTE *)&v81[-4] + v42) );
                      v67 = 0;
                      v66 = v42 + 1;
                      v65 = &v80;
                      v43 = v40;
                      do
                        ++v43;
                      while ( *((_BYTE *)&v83 + v43) );
                      v70 = 0;
                      v69 = v43 + 1;
                      v68 = &v83;
                      v44 = v40;
                      do
                        ++v44;
                      while ( *((_BYTE *)v81 + v44) );
                      v73 = 0;
                      v72 = v44 + 1;
                      v50 = *(_DWORD *)(v39 + 4);
                      v74 = &v50;
                      v51 = *(_DWORD *)(v39 + 20);
                      v76 = &v51;
                      v52 = *(_QWORD *)(v39 + 88);
                      v78 = &v52;
                      v71 = v81;
                      v75 = 4LL;
                      v77 = 4LL;
                      v79 = 8LL;
                      LOBYTE(v15) = sub_140037A5C((__int64)v81, (unsigned __int8 *)dword_140156EE8, v38, v39, 0xEu, v53);
                    }
                  }
                }
              }
            }
          }
        }
      }
      ++v16;
    }
  }
  return v15;
}
