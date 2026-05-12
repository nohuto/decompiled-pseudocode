/*
 * XREFs of sub_140019004 @ 0x140019004
 * Callers:
 *     sub_140018EE0 @ 0x140018EE0 (sub_140018EE0.c)
 * Callees:
 *     sub_140019D84 @ 0x140019D84 (sub_140019D84.c)
 *     sub_14001A23C @ 0x14001A23C (sub_14001A23C.c)
 *     sub_14001A620 @ 0x14001A620 (sub_14001A620.c)
 *     sub_14001B0D0 @ 0x14001B0D0 (sub_14001B0D0.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_1400556F8 @ 0x1400556F8 (sub_1400556F8.c)
 *     sub_140056A18 @ 0x140056A18 (sub_140056A18.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14005D584 @ 0x14005D584 (sub_14005D584.c)
 *     sub_14005D618 @ 0x14005D618 (sub_14005D618.c)
 *     sub_140068140 @ 0x140068140 (sub_140068140.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_140178370 @ 0x140178370 (sub_140178370.c)
 *     sub_140178FA0 @ 0x140178FA0 (sub_140178FA0.c)
 *     sub_140179B58 @ 0x140179B58 (sub_140179B58.c)
 *     sub_140179BF8 @ 0x140179BF8 (sub_140179BF8.c)
 *     sub_14017A040 @ 0x14017A040 (sub_14017A040.c)
 *     sub_1401AEAD8 @ 0x1401AEAD8 (sub_1401AEAD8.c)
 *     sub_1401B0538 @ 0x1401B0538 (sub_1401B0538.c)
 *     sub_1401B0790 @ 0x1401B0790 (sub_1401B0790.c)
 *     sub_1401B1224 @ 0x1401B1224 (sub_1401B1224.c)
 */

__int64 __fastcall sub_140019004(__int64 a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v3; // rcx
  int v4; // ebx
  char v5; // r12
  int v7; // edx
  BOOLEAN v8; // r14
  unsigned int v9; // eax
  unsigned int v10; // r15d
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // r14d
  bool v16; // zf
  char *v17; // rcx
  __int64 v18; // rdx
  int *v19; // rax
  unsigned __int64 v20; // rdx
  char *v21; // rax
  char v22; // si
  unsigned int v23; // eax
  char v24; // r13
  char v25; // r11
  char v26; // al
  __int64 v27; // rcx
  char v28; // r15
  _BYTE *v29; // r9
  unsigned __int8 v30; // r10
  char *v31; // r11
  unsigned int v32; // r8d
  unsigned int *v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // r14
  char v36; // cl
  char v37; // r8
  char v38; // [rsp+60h] [rbp-19h]
  char v39; // [rsp+61h] [rbp-18h]
  unsigned int v40; // [rsp+64h] [rbp-15h]
  int v41; // [rsp+6Ch] [rbp-Dh]
  unsigned __int64 v42; // [rsp+70h] [rbp-9h]
  __int128 v43; // [rsp+78h] [rbp-1h] BYREF
  __int128 v44; // [rsp+88h] [rbp+Fh] BYREF

  v3 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 336);
  LOBYTE(v4) = 0;
  v5 = 0;
  v44 = 0LL;
  v8 = ExAcquireRundownProtectionCacheAware(v3);
  v9 = v8 == 0 ? 0xC0000056 : 0;
  v10 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL);
  v40 = v9;
  if ( byte_140168DAA )
  {
    IoGetActivityIdIrp(a2, &v44);
    if ( v10 > 0x16 || (v12 = 4718720, !_bittest(&v12, v10)) )
    {
      if ( (byte_1401694F2 & 0x20) != 0 )
        sub_140056A18(v11, v7, (unsigned int)&v44, a2, v10, 0, *(_QWORD *)(a1 + 8));
    }
    v9 = v8 == 0 ? 0xC0000056 : 0;
  }
  if ( v8 )
  {
    v5 = 1;
    goto LABEL_9;
  }
  if ( (v10 == 2 || v10 == 20) && *(_DWORD *)(a1 + 88) == 5 )
  {
LABEL_9:
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 2) != 0
      && BYTE1(off_140168120->Timer) >= 4u )
    {
      sub_1400556F8(off_140168120->AttachedDevice, 12LL, &unk_14014A2D8, a1, a2, v10);
    }
    if ( v10 > 7 )
    {
      switch ( v10 )
      {
        case 8u:
          v13 = sub_14005D618(a1, a2);
          break;
        case 9u:
          v13 = sub_1401AEAD8(a1, a2);
          break;
        case 0xDu:
          v13 = sub_140178FA0(a1, a2);
          break;
        case 0x13u:
          if ( byte_140168DAA && (byte_1401694F2 & 0x20) != 0 )
            sub_140056A18(
              *(_QWORD *)(a2 + 184),
              v7,
              (unsigned int)&v44,
              a2,
              v10,
              *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL),
              *(_QWORD *)(a1 + 8));
          v13 = sub_14005D584(a1, a2);
          break;
        case 0x14u:
          v13 = sub_1401B1224(a1, a2);
          break;
        case 0x16u:
          if ( byte_140168DAA && (byte_1401694F2 & 0x20) != 0 )
            sub_140056A18(
              *(_QWORD *)(a2 + 184),
              v7,
              (unsigned int)&v44,
              a2,
              v10,
              *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL),
              *(_QWORD *)(a1 + 8));
          v13 = sub_14001A23C(a1, a2);
          break;
        case 0x17u:
          v5 = 0;
          v13 = sub_1401B0538(a1, a2);
          break;
        default:
          ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 336));
          v5 = 0;
          if ( byte_140168DAA )
          {
            v43 = 0LL;
            IoGetActivityIdIrp(a2, &v43);
            if ( (byte_1401694F2 & 0x20) != 0 )
              sub_140052F3C(v27, &unk_140149FE8, &v43, a2, *(_DWORD *)(a2 + 48));
          }
          v13 = sub_14001B0D0(*(_QWORD *)(a1 + 24), a2);
          break;
      }
      goto LABEL_15;
    }
    switch ( v10 )
    {
      case 7u:
        if ( byte_140168DAA && (byte_1401694F2 & 0x20) != 0 )
          sub_140056A18(
            *(_QWORD *)(a2 + 184),
            v7,
            (unsigned int)&v44,
            a2,
            7,
            *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL),
            *(_QWORD *)(a1 + 8));
        v13 = sub_14001A620(a1, a2);
        break;
      case 0u:
        v13 = sub_140019D84((PVOID)a1, (PIRP)a2);
        break;
      case 1u:
        v13 = sub_140179B58(a1, a2);
        break;
      case 2u:
        v5 = 0;
        v13 = sub_1401B0790(a1, a2);
        break;
      case 3u:
        goto LABEL_83;
      case 4u:
        v13 = sub_14017A040(a1, a2);
        break;
      case 5u:
        v13 = sub_140179BF8(a1, a2);
        break;
      default:
LABEL_83:
        v13 = sub_140178370(a1, a2);
        break;
    }
LABEL_15:
    v14 = v13;
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 2) != 0
      && BYTE1(off_140168120->Timer) >= 4u )
    {
      sub_140068140(off_140168120->AttachedDevice, 13LL, &unk_14014A2D8, a1, a2, v10, v13);
    }
    if ( v5 )
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 336));
    return v14;
  }
  v16 = byte_140168DAA == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v9;
  if ( v16 )
    goto LABEL_48;
  v43 = 0LL;
  IoGetActivityIdIrp(a2, &v43);
  v18 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v18 == 14 )
  {
    if ( (byte_1401694F2 & 8) != 0 )
      sub_140052F3C(v17, &unk_140148B18, &v43, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_48;
  }
  if ( *(_BYTE *)v18 != 15 )
  {
    if ( *(_BYTE *)v18 == 27 )
    {
      if ( *(_BYTE *)(v18 + 1) == 7 && !*(_DWORD *)(v18 + 8) )
      {
        if ( (byte_1401694F2 & 0x40) != 0 )
        {
          v19 = *(int **)(a2 + 56);
          if ( v19 )
            v4 = *v19;
          sub_140056AB0((_DWORD)v17, v18, (unsigned int)&v43, a2, v4, *(_DWORD *)(a2 + 48));
        }
      }
      else if ( (byte_1401694F2 & 0x20) != 0 )
      {
        sub_140052F3C(v17, &unk_140149FE8, &v43, a2, *(_DWORD *)(a2 + 48));
      }
    }
    goto LABEL_48;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_48;
  v20 = *(_QWORD *)(v18 + 8);
  v28 = 0;
  v29 = 0LL;
  v38 = 0;
  v30 = 0;
  v22 = 0;
  v25 = 0;
  v24 = 0;
  if ( *(_BYTE *)(v20 + 2) != 40 )
  {
    v36 = *(_BYTE *)(v20 + 72);
    v29 = *(_BYTE **)(v20 + 32);
    v30 = *(_BYTE *)(v20 + 11);
    v28 = *(_BYTE *)(v20 + 4);
    if ( !*(_BYTE *)(v20 + 2) )
      goto LABEL_132;
    goto LABEL_48;
  }
  v31 = 0LL;
  v39 = 0;
  if ( *(_DWORD *)(v20 + 20) )
    goto LABEL_48;
  LODWORD(v17) = 0;
  v41 = 0;
  if ( !*(_DWORD *)(v20 + 56) )
    goto LABEL_129;
  v32 = *(_DWORD *)(v20 + 56);
  v33 = (unsigned int *)(v20 + 120);
  v42 = v20 + 120;
  while ( 1 )
  {
    v34 = *v33;
    if ( (unsigned int)v34 >= 0x80 )
    {
      v35 = *(unsigned int *)(v20 + 16);
      if ( (unsigned int)v34 < (unsigned int)v35 )
        break;
    }
LABEL_122:
    LODWORD(v17) = (_DWORD)v17 + 1;
    v33 = (unsigned int *)(v42 + 4);
    v41 = (int)v17;
    v42 += 4LL;
    if ( (unsigned int)v17 >= v32 )
      goto LABEL_129;
  }
  if ( *(_DWORD *)(v34 + v20) != 64 )
  {
    LODWORD(v17) = *(_DWORD *)(v34 + v20) - 65;
    if ( *(_DWORD *)(v34 + v20) == 65 )
    {
      LODWORD(v17) = v34 + 56;
      if ( v34 + 56 <= v35 )
      {
        v39 = 1;
        if ( *(_BYTE *)(v34 + v20 + 10) )
          v31 = (char *)(v34 + v20 + 24);
        v28 = *(_BYTE *)(v34 + v20 + 8);
        v29 = *(_BYTE **)(v34 + v20 + 16);
        v30 = *(_BYTE *)(v34 + v20 + 9);
      }
    }
    else if ( *(_DWORD *)(v34 + v20) == 66 )
    {
      LODWORD(v17) = v34 + 40;
      if ( v34 + 40 <= v35 )
      {
        if ( *(_DWORD *)(v34 + v20 + 12) )
          v31 = (char *)(v34 + v20 + 32);
        v29 = *(_BYTE **)(v34 + v20 + 24);
        goto LABEL_128;
      }
    }
    goto LABEL_120;
  }
  LODWORD(v17) = v34 + 40;
  if ( v34 + 40 > v35 )
  {
LABEL_120:
    if ( v39 )
      goto LABEL_129;
    LODWORD(v17) = v41;
    v32 = *(_DWORD *)(v20 + 56);
    goto LABEL_122;
  }
  if ( *(_BYTE *)(v34 + v20 + 10) )
    v31 = (char *)(v34 + v20 + 24);
  v29 = *(_BYTE **)(v34 + v20 + 16);
LABEL_128:
  v30 = *(_BYTE *)(v34 + v20 + 9);
  v28 = *(_BYTE *)(v34 + v20 + 8);
LABEL_129:
  if ( v31 )
  {
    v36 = *v31;
    v25 = 0;
LABEL_132:
    LOBYTE(v17) = v36 - 8;
    if ( ((unsigned __int8)v17 & 0x5D) == 0 )
    {
      v37 = *(_BYTE *)(v20 + 3);
      if ( v37 == 1 || !v29 || !v30 )
        goto LABEL_71;
      LOBYTE(v20) = 0;
      v17 = &v29[v30];
      v21 = v29 + 8;
      if ( (unsigned __int8)((*v29 & 0x7F) - 114) <= 1u )
      {
        if ( v21 <= v17 )
        {
          LOBYTE(v20) = 1;
          v25 = v29[2];
          v22 = v29[1] & 0xF;
          v24 = v29[3];
        }
      }
      else
      {
        if ( v21 <= v17 )
        {
          v22 = v29[2] & 0xF;
          v23 = v30;
          if ( (unsigned int)(unsigned __int8)v29[7] + 8 <= v30 )
            v23 = (unsigned __int8)v29[7] + 8;
          v17 = v29 + 13;
          v20 = (unsigned __int64)&v29[v23];
          if ( (unsigned __int64)(v29 + 13) > v20 )
            v38 = 0;
          else
            v38 = v29[12];
          if ( (unsigned __int64)(v29 + 14) <= v20 )
            v24 = *v17;
          LOBYTE(v20) = 1;
        }
        v25 = v38;
      }
      if ( (_BYTE)v20 )
      {
        LOBYTE(v4) = v25;
        v26 = v24;
      }
      else
      {
LABEL_71:
        v22 = 0;
        v26 = 0;
      }
      sub_140052E64((_DWORD)v17, v20, (unsigned int)&v43, a2, *(_DWORD *)(a2 + 48), v37, v28, v22, v4, v26, a2);
    }
  }
LABEL_48:
  IofCompleteRequest((PIRP)a2, 0);
  return v40;
}
