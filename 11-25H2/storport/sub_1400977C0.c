/*
 * XREFs of sub_1400977C0 @ 0x1400977C0
 * Callers:
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 * Callees:
 *     sub_1400215B0 @ 0x1400215B0 (sub_1400215B0.c)
 *     sub_140021760 @ 0x140021760 (sub_140021760.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140055C18 @ 0x140055C18 (sub_140055C18.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14005A3AC @ 0x14005A3AC (sub_14005A3AC.c)
 *     sub_14006CED0 @ 0x14006CED0 (sub_14006CED0.c)
 *     sub_140090338 @ 0x140090338 (sub_140090338.c)
 *     sub_14009038C @ 0x14009038C (sub_14009038C.c)
 *     sub_140090698 @ 0x140090698 (sub_140090698.c)
 *     sub_14009E318 @ 0x14009E318 (sub_14009E318.c)
 *     sub_1400B4D38 @ 0x1400B4D38 (sub_1400B4D38.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400977C0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r15
  int v5; // r14d
  int v7; // ebx
  PDEVICE_OBJECT v8; // rcx
  unsigned __int16 v9; // dx
  _BYTE *v10; // rax
  char v11; // al
  unsigned int *v12; // rdx
  unsigned int v13; // ecx
  __int64 v14; // rax
  _DWORD *v15; // rcx
  __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  PDEVICE_OBJECT v21; // rcx
  unsigned __int16 v22; // dx
  unsigned int v23; // ecx
  _DWORD *v24; // rcx
  __int64 v25; // rcx
  unsigned int v26; // ecx
  unsigned int v27; // edx
  int v28; // ecx
  unsigned int v29; // edx
  unsigned int v30; // edx
  __int64 v31; // rax
  bool v32; // zf
  unsigned __int64 v33; // rcx
  __int64 v34; // rdx
  int *v35; // rax
  const EVENT_DESCRIPTOR *v36; // rdx
  __int64 v37; // rdx
  char v38; // r12
  _BYTE *v39; // r9
  unsigned __int8 v40; // r10
  char v41; // di
  char v42; // si
  char v43; // r11
  char *v44; // r11
  unsigned int v45; // r15d
  unsigned __int64 v46; // rsi
  __int64 v47; // r8
  int v48; // ecx
  char v49; // cl
  char v50; // r8
  _BYTE *v51; // rax
  unsigned int v52; // eax
  unsigned __int64 v53; // r8
  char v54; // al
  __int64 v56; // [rsp+20h] [rbp-89h]
  __int64 v57; // [rsp+28h] [rbp-81h]
  __int64 v58; // [rsp+30h] [rbp-79h]
  __int64 v59; // [rsp+38h] [rbp-71h]
  __int64 v60; // [rsp+40h] [rbp-69h]
  __int64 v61; // [rsp+48h] [rbp-61h]
  char v62; // [rsp+70h] [rbp-39h]
  char v63; // [rsp+71h] [rbp-38h]
  char v64; // [rsp+72h] [rbp-37h]
  unsigned int v65; // [rsp+74h] [rbp-35h]
  GUID v66; // [rsp+B0h] [rbp+7h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = *(_QWORD *)(a2 + 24);
  v5 = 0;
  v7 = 0;
  if ( *(_DWORD *)(a1 + 1036) || *(_DWORD *)(a1 + 1044) || *(_DWORD *)(a1 + 1040) || (*(_BYTE *)(a1 + 506) & 1) != 0 )
  {
    v8 = off_140168120;
    if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120
      || (HIDWORD(off_140168120->Timer) & 0x10) == 0
      || BYTE1(off_140168120->Timer) < 2u )
    {
      goto LABEL_108;
    }
    v9 = 40;
    goto LABEL_107;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 112LL) & 2) != 0 && !sub_1400215B0(a1, 31) )
  {
    v8 = off_140168120;
    if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120
      || (HIDWORD(off_140168120->Timer) & 0x10) == 0
      || BYTE1(off_140168120->Timer) < 2u )
    {
      goto LABEL_108;
    }
    v9 = 41;
LABEL_107:
    sub_140055C18((__int64)v8->AttachedDevice, v9, (__int64)&unk_14014D880, a1);
LABEL_108:
    v7 = -1073741637;
    goto LABEL_109;
  }
  v10 = *(_BYTE **)(a1 + 112);
  if ( v10 )
  {
    v11 = *v10 & 0x1F;
    if ( v11 )
    {
      if ( v11 != 20 )
      {
        v8 = off_140168120;
        if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120
          || (HIDWORD(off_140168120->Timer) & 0x10) == 0
          || BYTE1(off_140168120->Timer) < 2u )
        {
          goto LABEL_108;
        }
        v9 = 42;
        goto LABEL_107;
      }
    }
  }
  if ( *(_DWORD *)(v2 + 16) < 0x24u )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 0x10) != 0
      && BYTE1(off_140168120->Timer) >= 2u )
    {
      sub_140055C18((__int64)off_140168120->AttachedDevice, 0x2Bu, (__int64)&unk_14014D880, a1);
    }
    v7 = -1073741820;
    goto LABEL_109;
  }
  if ( *(_DWORD *)v3 == 36 && *(_DWORD *)(v3 + 4) == 36 )
  {
    if ( !*(_BYTE *)(v3 + 8) )
    {
      if ( *(_BYTE *)(a1 + 3368) )
      {
        v12 = *(unsigned int **)(a1 + 560);
        v13 = *v12;
        *v12 &= ~2u;
        if ( (v13 & 4) == 0 )
          *v12 = v13 & 0xFFFFFFFC;
        v14 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 3408) = -1LL;
        *(_BYTE *)(a1 + 3368) = 0;
        *(_QWORD *)(a1 + 3380) = 0LL;
        *(_QWORD *)(a1 + 3388) = 0LL;
        *(_DWORD *)(a1 + 3376) = 0;
        if ( (*(_BYTE *)(v14 + 112) & 2) == 0 )
          goto LABEL_43;
        if ( !(unsigned int)sub_140090338() )
          sub_14009038C();
        v15 = *(_DWORD **)(a1 + 24);
        if ( *v15 == 1094997074 )
          v16 = (__int64)(v15 + 94);
        else
          v16 = *v15 == 1314275652 ? (__int64)(v15 + 42) : 0LL;
        v7 = sub_140021760(v16);
        if ( v7 >= 0 )
        {
LABEL_43:
          if ( (*(_BYTE *)(a1 + 506) & 2) != 0 )
          {
            if ( (byte_1401694F4 & 4) != 0 )
            {
              v17 = *(_DWORD *)(a1 + 104);
              sub_140090698(
                v17 >> 8,
                &stru_14014AC70,
                a1 + 242,
                *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4720LL),
                *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
                *(_QWORD *)(a1 + 24) + 5064LL,
                v17,
                SBYTE1(v17),
                SBYTE2(v17),
                a1 + 2104,
                (const char *)(a1 + 168),
                (const char *)(a1 + 177),
                (const char *)(a1 + 242),
                3);
            }
            sub_1400B4D38(a1);
            *(_BYTE *)(a1 + 506) &= ~2u;
          }
          sub_14009E318(a1);
          *(_BYTE *)(a1 + 3396) = 1;
          v7 = 0;
        }
      }
      else if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
             && (HIDWORD(off_140168120->Timer) & 0x10) != 0
             && BYTE1(off_140168120->Timer) >= 2u )
      {
        sub_140055C18((__int64)off_140168120->AttachedDevice, 0x2Du, (__int64)&unk_14014D880, a1);
      }
      goto LABEL_109;
    }
    v18 = *(_DWORD *)(v3 + 20);
    if ( v18 >= 0x3E8 && v18 == 1000 * (v18 / 0x3E8) )
    {
      v19 = *(_DWORD *)(v3 + 24);
      if ( v19 >= 0x3E8 && v19 == 1000 * (v19 / 0x3E8) )
      {
        v20 = *(_DWORD *)(v3 + 16);
        if ( v20 == -1 || v20 == 500 * (v20 / 0x1F4) )
        {
          v23 = *(_DWORD *)(v3 + 28);
          if ( v23 == -1 || v23 == 500 * (v23 / 0x1F4) )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 112LL) & 2) == 0 )
              goto LABEL_73;
            if ( !(unsigned int)sub_140090338() )
              sub_14009038C();
            v24 = *(_DWORD **)(a1 + 24);
            if ( *v24 == 1094997074 )
              v25 = (__int64)(v24 + 94);
            else
              v25 = *v24 == 1314275652 ? (__int64)(v24 + 42) : 0LL;
            v7 = sub_140021760(v25);
            if ( v7 >= 0 )
            {
LABEL_73:
              *(_DWORD *)(a1 + 3372) = *(_DWORD *)(v3 + 12);
              *(_DWORD *)(a1 + 3384) = *(_DWORD *)(v3 + 20) / 0x3E8u;
              v26 = *(_DWORD *)(v3 + 16);
              if ( v26 == -1 )
                v27 = -1;
              else
                v27 = v26 / 0x1F4;
              *(_DWORD *)(a1 + 3392) = v27;
              *(_DWORD *)(a1 + 3388) = *(_DWORD *)(v3 + 24) / 0x3E8u;
              v28 = *(_DWORD *)(v3 + 32);
              *(_DWORD *)(a1 + 3380) = v28;
              v29 = *(_DWORD *)(v3 + 28);
              if ( v29 == -1 )
                v30 = -1;
              else
                v30 = v29 / 0x1F4;
              *(_DWORD *)(a1 + 3376) = v30;
              if ( *(_DWORD *)(a1 + 3392) == -1 && !v28 && v30 == -1 )
              {
                sub_14009E318(a1);
              }
              else if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3400), 1, 0) )
              {
                sub_14005A3AC(*(_QWORD *)(a1 + 24));
              }
              v31 = 10000000
                  * (*(_DWORD *)(a1 + 3384) + 1 + ((unsigned int)(*(_DWORD *)(a1 + 3376) + *(_DWORD *)(a1 + 3392)) >> 1));
              if ( (unsigned int)v31 > 0x11E1A300 )
                v31 = 300000000LL;
              *(_QWORD *)(a1 + 3408) = v31;
              if ( !*(_BYTE *)(a1 + 3368) )
              {
                sub_14006CED0(*(int **)(a1 + 560), 1);
                *(_BYTE *)(a1 + 3368) = 1;
                *(_BYTE *)(a1 + 3396) = 1;
              }
            }
            goto LABEL_109;
          }
          v21 = off_140168120;
          if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120
            || (HIDWORD(off_140168120->Timer) & 0x10) == 0
            || BYTE1(off_140168120->Timer) < 2u )
          {
            goto LABEL_102;
          }
          v22 = 49;
        }
        else
        {
          v21 = off_140168120;
          if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120
            || (HIDWORD(off_140168120->Timer) & 0x10) == 0
            || BYTE1(off_140168120->Timer) < 2u )
          {
            goto LABEL_102;
          }
          v22 = 48;
        }
      }
      else
      {
        v21 = off_140168120;
        if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120
          || (HIDWORD(off_140168120->Timer) & 0x10) == 0
          || BYTE1(off_140168120->Timer) < 2u )
        {
          goto LABEL_102;
        }
        v22 = 47;
      }
    }
    else
    {
      v21 = off_140168120;
      if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120
        || (HIDWORD(off_140168120->Timer) & 0x10) == 0
        || BYTE1(off_140168120->Timer) < 2u )
      {
        goto LABEL_102;
      }
      v22 = 46;
    }
  }
  else
  {
    v21 = off_140168120;
    if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120
      || (HIDWORD(off_140168120->Timer) & 0x10) == 0
      || BYTE1(off_140168120->Timer) < 2u )
    {
      goto LABEL_102;
    }
    v22 = 44;
  }
  sub_140055C18((__int64)v21->AttachedDevice, v22, (__int64)&unk_14014D880, a1);
LABEL_102:
  v7 = -1073741811;
LABEL_109:
  v32 = byte_140168DAA == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v32 )
    goto LABEL_175;
  v66 = 0LL;
  IoGetActivityIdIrp(a2, &v66);
  v34 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v34 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_175;
    v36 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_174;
  }
  if ( *(_BYTE *)v34 != 15 )
  {
    if ( *(_BYTE *)v34 != 27 )
      goto LABEL_175;
    if ( *(_BYTE *)(v34 + 1) == 7 && !*(_DWORD *)(v34 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v35 = *(int **)(a2 + 56);
        if ( v35 )
          v5 = *v35;
        LODWORD(v57) = *(_DWORD *)(a2 + 48);
        LODWORD(v56) = v5;
        sub_140056AB0(v33, v34, &v66, a2, v56, v57);
      }
      goto LABEL_175;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_175;
    v36 = &stru_140149FE8;
LABEL_174:
    LODWORD(v56) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v33, v36, &v66, a2, v56);
    goto LABEL_175;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_175;
  v37 = *(_QWORD *)(v34 + 8);
  v38 = 0;
  v39 = 0LL;
  v62 = 0;
  v40 = 0;
  v63 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  if ( *(_BYTE *)(v37 + 2) != 40 )
  {
    v49 = *(_BYTE *)(v37 + 72);
    v39 = *(_BYTE **)(v37 + 32);
    v40 = *(_BYTE *)(v37 + 11);
    v38 = *(_BYTE *)(v37 + 4);
    if ( !*(_BYTE *)(v37 + 2) )
      goto LABEL_150;
    goto LABEL_175;
  }
  v44 = 0LL;
  v64 = 0;
  if ( *(_DWORD *)(v37 + 20) )
    goto LABEL_175;
  v45 = 0;
  v65 = *(_DWORD *)(v37 + 56);
  if ( !v65 )
    goto LABEL_147;
  while ( 1 )
  {
    v33 = *(unsigned int *)(v37 + 4LL * v45 + 120);
    if ( (unsigned int)v33 >= 0x80 )
    {
      v46 = *(unsigned int *)(v37 + 16);
      if ( (unsigned int)v33 < (unsigned int)v46 )
        break;
    }
LABEL_140:
    if ( ++v45 >= v65 )
      goto LABEL_146;
  }
  v47 = (unsigned int)v33;
  v48 = *(_DWORD *)(v37 + v33) - 64;
  if ( v48 )
  {
    v33 = (unsigned int)(v48 - 1);
    if ( (_DWORD)v33 )
    {
      if ( (_DWORD)v33 == 1 )
      {
        v33 = v47 + 40;
        if ( v47 + 40 <= v46 )
        {
          if ( *(_DWORD *)(v37 + v47 + 12) )
            v44 = (char *)(v47 + v37 + 32);
          v39 = *(_BYTE **)(v37 + v47 + 24);
          goto LABEL_145;
        }
      }
    }
    else
    {
      v33 = v47 + 56;
      if ( v47 + 56 <= v46 )
      {
        v64 = 1;
        if ( *(_BYTE *)(v37 + v47 + 10) )
          v44 = (char *)(v47 + v37 + 24);
        v38 = *(_BYTE *)(v37 + v47 + 8);
        v39 = *(_BYTE **)(v37 + v47 + 16);
        v40 = *(_BYTE *)(v37 + v47 + 9);
      }
    }
    goto LABEL_139;
  }
  v33 = v47 + 40;
  if ( v47 + 40 > v46 )
  {
LABEL_139:
    if ( v64 )
      goto LABEL_146;
    goto LABEL_140;
  }
  if ( *(_BYTE *)(v37 + v47 + 10) )
    v44 = (char *)(v47 + v37 + 24);
  v39 = *(_BYTE **)(v37 + v47 + 16);
LABEL_145:
  v40 = *(_BYTE *)(v37 + v47 + 9);
  v38 = *(_BYTE *)(v37 + v47 + 8);
LABEL_146:
  v42 = 0;
LABEL_147:
  if ( v44 )
  {
    v49 = *v44;
    v43 = 0;
LABEL_150:
    LOBYTE(v33) = v49 - 8;
    if ( (v33 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v37 + 3) == 1 || !v39 || !v40 )
        goto LABEL_170;
      v50 = 0;
      v33 = (unsigned __int64)&v39[v40];
      v51 = v39 + 8;
      if ( (unsigned __int8)((*v39 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v51 <= v33 )
        {
          v50 = 1;
          v42 = v39[2];
          v41 = v39[1] & 0xF;
          v43 = v39[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v51 <= v33 )
        {
          v41 = v39[2] & 0xF;
          v52 = v40;
          if ( (unsigned int)(unsigned __int8)v39[7] + 8 <= v40 )
            v52 = (unsigned __int8)v39[7] + 8;
          v33 = (unsigned __int64)(v39 + 13);
          v53 = (unsigned __int64)&v39[v52];
          if ( (unsigned __int64)(v39 + 13) > v53 )
            v62 = 0;
          else
            v62 = v39[12];
          if ( (unsigned __int64)(v39 + 14) > v53 )
            v63 = 0;
          else
            v63 = *(_BYTE *)v33;
          v50 = 1;
        }
        v43 = v63;
        v42 = v62;
      }
      if ( v50 )
      {
        LOBYTE(v5) = v42;
        v54 = v43;
      }
      else
      {
LABEL_170:
        v41 = 0;
        v54 = 0;
      }
      LOBYTE(v61) = v54;
      LOBYTE(v60) = v5;
      LOBYTE(v59) = v41;
      LOBYTE(v58) = v38;
      LOBYTE(v57) = *(_BYTE *)(v37 + 3);
      LODWORD(v56) = *(_DWORD *)(a2 + 48);
      sub_140052E64(v33, v37, &v66, a2, v56, v57, v58, v59, v60, v61, a2);
    }
  }
LABEL_175:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v7;
}
