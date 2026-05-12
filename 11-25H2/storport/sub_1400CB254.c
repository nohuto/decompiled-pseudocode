/*
 * XREFs of sub_1400CB254 @ 0x1400CB254
 * Callers:
 *     sub_1400D5D7C @ 0x1400D5D7C (sub_1400D5D7C.c)
 *     sub_1400D629C @ 0x1400D629C (sub_1400D629C.c)
 * Callees:
 *     sub_140037A5C @ 0x140037A5C (sub_140037A5C.c)
 *     sub_140037B0C @ 0x140037B0C (sub_140037B0C.c)
 *     sub_14003F840 @ 0x14003F840 (sub_14003F840.c)
 *     sub_14004DAE8 @ 0x14004DAE8 (sub_14004DAE8.c)
 *     sub_14006B358 @ 0x14006B358 (sub_14006B358.c)
 *     sub_140078064 @ 0x140078064 (sub_140078064.c)
 *     sub_14008DDF0 @ 0x14008DDF0 (sub_14008DDF0.c)
 *     sub_1400C95F8 @ 0x1400C95F8 (sub_1400C95F8.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_14017AF58 @ 0x14017AF58 (sub_14017AF58.c)
 *     sub_14017B0EC @ 0x14017B0EC (sub_14017B0EC.c)
 */

__int64 __fastcall sub_1400CB254(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v5; // esi
  __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // rcx
  const char *v9; // r8
  int v10; // r11d
  __int64 v11; // rdx
  __int16 v12; // r9
  __int64 v13; // rax
  int v14; // ecx
  const int *v15; // rdx
  const int *v16; // rdx
  bool v17; // cf
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  char v22; // [rsp+88h] [rbp-80h] BYREF
  int v23; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v24; // [rsp+90h] [rbp-78h] BYREF
  int v25; // [rsp+94h] [rbp-74h] BYREF
  int v26; // [rsp+98h] [rbp-70h] BYREF
  __int64 v27; // [rsp+A0h] [rbp-68h] BYREF
  _DWORD Dst[4]; // [rsp+A8h] [rbp-60h] BYREF
  char v29; // [rsp+B8h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+108h] [rbp+0h] BYREF
  __int64 *v31; // [rsp+128h] [rbp+20h]
  int v32; // [rsp+130h] [rbp+28h]
  int v33; // [rsp+134h] [rbp+2Ch]
  __int64 v34; // [rsp+138h] [rbp+30h]
  int v35; // [rsp+140h] [rbp+38h]
  int v36; // [rsp+144h] [rbp+3Ch]
  int *v37; // [rsp+148h] [rbp+40h]
  int v38; // [rsp+150h] [rbp+48h]
  int v39; // [rsp+154h] [rbp+4Ch]
  int *v40; // [rsp+158h] [rbp+50h]
  int v41; // [rsp+160h] [rbp+58h]
  int v42; // [rsp+164h] [rbp+5Ch]
  char v43[16]; // [rsp+168h] [rbp+60h] BYREF
  char *v44; // [rsp+178h] [rbp+70h]
  int v45; // [rsp+180h] [rbp+78h]
  int v46; // [rsp+184h] [rbp+7Ch]
  char v47[16]; // [rsp+188h] [rbp+80h] BYREF
  int *v48; // [rsp+198h] [rbp+90h]
  int v49; // [rsp+1A0h] [rbp+98h]
  int v50; // [rsp+1A4h] [rbp+9Ch]
  int *v51; // [rsp+1A8h] [rbp+A0h]
  int v52; // [rsp+1B0h] [rbp+A8h]
  int v53; // [rsp+1B4h] [rbp+ACh]

  memset_0(Dst, 0, 0x58uLL);
  if ( (*(_DWORD *)(a1 + 144) & 0x1000LL) != 0 && !(unsigned __int8)sub_14017B0EC(a1 + 1144, v2) )
  {
    v5 = sub_14017AF58(v3, *(_QWORD *)(a1 + 32), a1 + 176);
    if ( v5 < 0 )
      goto LABEL_15;
    Dst[0] = 1;
    if ( (int)sub_14006B358((int *)(a1 + 1144), (__int64)Dst) >= 0 && (v29 & 2) != 0 )
      *(_DWORD *)(a1 + 976) |= 8u;
  }
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_DWORD *)(a1 + 224);
  if ( v7 > *(_DWORD *)(v6 + 152) )
    *(_DWORD *)(v6 + 152) = v7;
  v5 = sub_14004DAE8((PUNICODE_STRING)(a1 + 40), 1, (unsigned int *)(a1 + 56), (int *)a1);
  if ( v5 >= 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 400) + 4LL) == 5 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 576) + 4LL) = -1;
      if ( sub_14008DDF0(*(struct _DEVICE_OBJECT **)(a1 + 32), (int *)(*(_QWORD *)(a1 + 576) + 4LL)) < 0 )
        *(_DWORD *)(*(_QWORD *)(a1 + 576) + 4LL) = -2;
      sub_140078064(*(PDEVICE_OBJECT *)(a1 + 8), (_QWORD *)(*(_QWORD *)(a1 + 160) + 32LL));
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1012) = 14;
  }
LABEL_15:
  if ( (byte_1401694F7 & 8) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 1136);
    if ( v8 )
    {
      v9 = (const char *)&dword_140149108;
      v10 = *(_DWORD *)(v8 + 744);
      if ( *(_QWORD *)(v8 + 752) )
        v9 = *(const char **)(v8 + 752);
    }
    else
    {
      v9 = byte_1401489C4;
      LOBYTE(v10) = 0;
    }
    if ( v8 )
      v12 = *(_WORD *)(v8 + 4);
    else
      LOBYTE(v12) = 0;
    v11 = (*(_QWORD *)(a1 + 144) & 1) != 0 ? 20 : 17;
    sub_1400C95F8(
      a1 + 1032,
      v11,
      (__int64)v9,
      *(_DWORD *)(a1 + 56),
      a1 + 1032,
      *(const wchar_t **)(a1 + 1016),
      v12,
      v11,
      *(const wchar_t **)(a1 + 1024),
      v10,
      v9,
      *(_QWORD *)(a1 + 144),
      *(_DWORD *)(a1 + 976),
      v5,
      *(_DWORD *)(a1 + 1012));
  }
  if ( (unsigned int)dword_140168178 > 5 && sub_14003F840(v4, 0x400000000000LL) )
  {
    v33 = 0;
    v36 = 0;
    v39 = 0;
    v31 = &v27;
    v34 = a1 + 1032;
    v23 = *(_DWORD *)(a1 + 56);
    v37 = &v23;
    v13 = *(_QWORD *)(a1 + 1136);
    v27 = 0x1000000LL;
    v32 = 8;
    v35 = 16;
    v38 = 4;
    if ( v13 )
      v14 = *(unsigned __int16 *)(v13 + 4);
    else
      v14 = 0;
    v15 = *(const int **)(a1 + 1016);
    v42 = 0;
    v24 = v14;
    v40 = &v24;
    v41 = 4;
    sub_140037B0C((__int64)v43, v15);
    v16 = *(const int **)(a1 + 1024);
    v17 = (*(_BYTE *)(a1 + 144) & 1) != 0;
    v45 = 1;
    v46 = 0;
    v22 = v17 ? 20 : 17;
    v44 = &v22;
    sub_140037B0C((__int64)v47, v16);
    v18 = *(unsigned int *)(a1 + 380);
    v50 = 0;
    v53 = 0;
    v48 = &v25;
    v51 = &v26;
    v25 = v18;
    v49 = 4;
    v26 = v5;
    v52 = 4;
    sub_140037A5C(v18, (unsigned __int8 *)dword_14015AB7D, v19, v20, 0xBu, &v30);
  }
  return (unsigned int)v5;
}
