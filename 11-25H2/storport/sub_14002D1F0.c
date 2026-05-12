/*
 * XREFs of sub_14002D1F0 @ 0x14002D1F0
 * Callers:
 *     sub_14002D0D0 @ 0x14002D0D0 (sub_14002D0D0.c)
 * Callees:
 *     sub_140014708 @ 0x140014708 (sub_140014708.c)
 *     sub_14001B0D0 @ 0x14001B0D0 (sub_14001B0D0.c)
 *     sub_140021A00 @ 0x140021A00 (sub_140021A00.c)
 *     sub_1400392B0 @ 0x1400392B0 (sub_1400392B0.c)
 *     sub_14004093C @ 0x14004093C (sub_14004093C.c)
 *     sub_140046AC0 @ 0x140046AC0 (sub_140046AC0.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_14005674C @ 0x14005674C (sub_14005674C.c)
 *     sub_140056988 @ 0x140056988 (sub_140056988.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400589FC @ 0x1400589FC (sub_1400589FC.c)
 *     sub_14005A6E4 @ 0x14005A6E4 (sub_14005A6E4.c)
 *     sub_14005AC44 @ 0x14005AC44 (sub_14005AC44.c)
 *     sub_14005B208 @ 0x14005B208 (sub_14005B208.c)
 *     sub_14005B648 @ 0x14005B648 (sub_14005B648.c)
 *     sub_14005BA74 @ 0x14005BA74 (sub_14005BA74.c)
 *     sub_14005BF0C @ 0x14005BF0C (sub_14005BF0C.c)
 *     sub_14005C728 @ 0x14005C728 (sub_14005C728.c)
 *     sub_14005CBB0 @ 0x14005CBB0 (sub_14005CBB0.c)
 *     sub_14005D120 @ 0x14005D120 (sub_14005D120.c)
 *     sub_14005DB44 @ 0x14005DB44 (sub_14005DB44.c)
 *     sub_14005E41C @ 0x14005E41C (sub_14005E41C.c)
 *     sub_14005E958 @ 0x14005E958 (sub_14005E958.c)
 *     sub_14005ED10 @ 0x14005ED10 (sub_14005ED10.c)
 *     sub_14005F3C8 @ 0x14005F3C8 (sub_14005F3C8.c)
 *     sub_140060250 @ 0x140060250 (sub_140060250.c)
 *     sub_1400610C8 @ 0x1400610C8 (sub_1400610C8.c)
 *     sub_1400614E8 @ 0x1400614E8 (sub_1400614E8.c)
 *     sub_1400624CC @ 0x1400624CC (sub_1400624CC.c)
 *     sub_140062B5C @ 0x140062B5C (sub_140062B5C.c)
 *     sub_140062EFC @ 0x140062EFC (sub_140062EFC.c)
 *     sub_140063854 @ 0x140063854 (sub_140063854.c)
 *     sub_140063E68 @ 0x140063E68 (sub_140063E68.c)
 *     sub_1400642A8 @ 0x1400642A8 (sub_1400642A8.c)
 *     sub_140064694 @ 0x140064694 (sub_140064694.c)
 *     sub_140064B0C @ 0x140064B0C (sub_140064B0C.c)
 *     sub_140068140 @ 0x140068140 (sub_140068140.c)
 *     sub_14006C420 @ 0x14006C420 (sub_14006C420.c)
 *     sub_14007B8DC @ 0x14007B8DC (sub_14007B8DC.c)
 *     sub_14007BE40 @ 0x14007BE40 (sub_14007BE40.c)
 *     sub_14007C48C @ 0x14007C48C (sub_14007C48C.c)
 *     sub_14007CA18 @ 0x14007CA18 (sub_14007CA18.c)
 *     sub_14007D030 @ 0x14007D030 (sub_14007D030.c)
 *     sub_14007D5A8 @ 0x14007D5A8 (sub_14007D5A8.c)
 *     sub_14007DB98 @ 0x14007DB98 (sub_14007DB98.c)
 *     sub_14007E0B8 @ 0x14007E0B8 (sub_14007E0B8.c)
 *     sub_14007E56C @ 0x14007E56C (sub_14007E56C.c)
 *     sub_14007EAC0 @ 0x14007EAC0 (sub_14007EAC0.c)
 *     sub_14007F0A4 @ 0x14007F0A4 (sub_14007F0A4.c)
 *     sub_14007F650 @ 0x14007F650 (sub_14007F650.c)
 *     sub_14007FBF0 @ 0x14007FBF0 (sub_14007FBF0.c)
 *     sub_14008FCE8 @ 0x14008FCE8 (sub_14008FCE8.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 *     sub_14017869C @ 0x14017869C (sub_14017869C.c)
 *     sub_14017A21C @ 0x14017A21C (sub_14017A21C.c)
 *     sub_1401B259C @ 0x1401B259C (sub_1401B259C.c)
 *     sub_1401B2CE0 @ 0x1401B2CE0 (sub_1401B2CE0.c)
 */

__int64 __fastcall sub_14002D1F0(__int64 a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v3; // rcx
  _BYTE *v5; // r14
  BOOLEAN v6; // si
  __int64 v7; // r8
  int v8; // eax
  unsigned int v9; // ebp
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // rdx
  _DWORD *v15; // rax
  unsigned __int64 v16; // rdx
  char v17; // r13
  unsigned __int8 v18; // r11
  char v19; // di
  char v20; // r12
  char v21; // r15
  unsigned __int8 *v22; // rsi
  unsigned int v23; // ebp
  unsigned int v24; // r10d
  __int64 v25; // rcx
  unsigned __int64 v26; // r8
  __int64 v27; // r9
  int v28; // ecx
  int v29; // ecx
  unsigned __int64 v30; // rcx
  char *v31; // rcx
  char v32; // r8
  char *v33; // rax
  unsigned int v34; // eax
  unsigned int v36; // esi
  unsigned int v37; // eax
  unsigned __int64 v38; // rdx
  __int64 v39; // rcx
  _DWORD *v40; // rax
  __int64 v41; // r9
  char v42; // r12
  unsigned __int8 v43; // r11
  char v44; // r10
  char v45; // r13
  unsigned __int8 *v46; // r12
  unsigned int v47; // r15d
  unsigned int v48; // r10d
  __int64 v49; // rcx
  __int64 v50; // r8
  int v51; // ecx
  int v52; // ecx
  char v53; // r15
  unsigned __int64 v54; // rcx
  char *v55; // rcx
  char v56; // r8
  char *v57; // rax
  unsigned int v58; // eax
  char v59; // al
  unsigned int v60; // edx
  char v61; // [rsp+60h] [rbp-78h]
  char v62[3]; // [rsp+61h] [rbp-77h] BYREF
  unsigned int v63; // [rsp+64h] [rbp-74h]
  __int128 v64; // [rsp+68h] [rbp-70h] BYREF
  __int128 v65; // [rsp+78h] [rbp-60h] BYREF
  __int128 v66; // [rsp+88h] [rbp-50h] BYREF

  v62[0] = 0;
  v3 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 336);
  v66 = 0LL;
  v5 = 0LL;
  v6 = ExAcquireRundownProtectionCacheAware(v3);
  v8 = -1073741738;
  v9 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL);
  if ( v6 )
    v8 = 0;
  v63 = v8;
  if ( byte_140168DAA )
  {
    IoGetActivityIdIrp(a2, &v66);
    if ( v9 == 315396
      || (v10 = v9 - 315412, (unsigned int)v10 <= 0x34) && (v11 = 0x11000011000001LL, _bittest64(&v11, v10)) )
    {
      if ( (byte_1401694F3 & 1) != 0 )
        sub_140056988(
          *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL),
          (unsigned int)&unk_14014AFA8,
          (unsigned int)&v66,
          a2,
          **(_BYTE **)(a2 + 184),
          *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL),
          v9);
    }
    else if ( (byte_1401694F2 & 2) != 0 )
    {
      sub_140056988(
        *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL),
        (unsigned int)&unk_14014A0E8,
        (unsigned int)&v66,
        a2,
        **(_BYTE **)(a2 + 184),
        *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL),
        v9);
    }
    v8 = v63;
  }
  if ( !v6 )
  {
    v12 = byte_140168DAA == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = v8;
    if ( v12 )
      goto LABEL_70;
    v64 = 0LL;
    IoGetActivityIdIrp(a2, &v64);
    v14 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v14 == 14 )
    {
      if ( (byte_1401694F2 & 8) != 0 )
        sub_140052F3C(*(unsigned int *)(a2 + 48), &unk_140148B18, &v64, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_70;
    }
    if ( *(_BYTE *)v14 != 15 )
    {
      if ( *(_BYTE *)v14 == 27 )
      {
        if ( *(_BYTE *)(v14 + 1) != 7 || *(_DWORD *)(v14 + 8) )
        {
          if ( (byte_1401694F2 & 0x20) != 0 )
            sub_140052F3C(v13, &unk_140149FE8, &v64, a2, *(_DWORD *)(a2 + 48));
        }
        else if ( (byte_1401694F2 & 0x40) != 0 )
        {
          v15 = *(_DWORD **)(a2 + 56);
          if ( v15 )
            LODWORD(v5) = *v15;
          sub_140056AB0(v13, v14, (unsigned int)&v64, a2, (char)v5, *(_DWORD *)(a2 + 48));
        }
      }
      goto LABEL_70;
    }
    if ( byte_1401694F1 >= 0 )
      goto LABEL_70;
    v16 = *(_QWORD *)(v14 + 8);
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    if ( *(_BYTE *)(v16 + 2) == 40 )
    {
      v22 = 0LL;
      if ( *(_DWORD *)(v16 + 20) )
        goto LABEL_70;
      v23 = *(_DWORD *)(v16 + 56);
      v24 = 0;
      if ( !v23 )
        goto LABEL_47;
      while ( 1 )
      {
        v25 = *(unsigned int *)(v16 + 4LL * v24 + 120);
        if ( (unsigned int)v25 < 0x80 )
          goto LABEL_41;
        v26 = *(unsigned int *)(v16 + 16);
        if ( (unsigned int)v25 >= (unsigned int)v26 )
          goto LABEL_41;
        v27 = (unsigned int)v25;
        v28 = *(_DWORD *)(v25 + v16) - 64;
        if ( v28 )
        {
          v29 = v28 - 1;
          if ( v29 )
          {
            if ( v29 == 1 && v27 + 40 <= v26 )
            {
              if ( *(_DWORD *)(v27 + v16 + 12) )
                v22 = (unsigned __int8 *)(v27 + v16 + 32);
              v5 = *(_BYTE **)(v27 + v16 + 24);
              goto LABEL_46;
            }
            goto LABEL_41;
          }
          v30 = v27 + 56;
        }
        else
        {
          v30 = v27 + 40;
        }
        if ( v30 <= v26 )
        {
          if ( *(_BYTE *)(v27 + v16 + 10) )
            v22 = (unsigned __int8 *)(v27 + v16 + 24);
          v5 = *(_BYTE **)(v27 + v16 + 16);
LABEL_46:
          v17 = *(_BYTE *)(v27 + v16 + 8);
          v18 = *(_BYTE *)(v27 + v16 + 9);
LABEL_47:
          if ( v22 )
          {
            LODWORD(v31) = *v22;
            goto LABEL_50;
          }
          goto LABEL_70;
        }
LABEL_41:
        if ( ++v24 >= v23 )
          goto LABEL_47;
      }
    }
    LODWORD(v31) = *(unsigned __int8 *)(v16 + 72);
    v5 = *(_BYTE **)(v16 + 32);
    v18 = *(_BYTE *)(v16 + 11);
    v17 = *(_BYTE *)(v16 + 4);
    if ( *(_BYTE *)(v16 + 2) )
      goto LABEL_70;
LABEL_50:
    LOBYTE(v31) = (_BYTE)v31 - 8;
    if ( ((unsigned __int8)v31 & 0x5D) != 0 )
    {
LABEL_70:
      IofCompleteRequest((PIRP)a2, 0);
      return v63;
    }
    v32 = *(_BYTE *)(v16 + 3);
    if ( v32 == 1 || !v5 || !v18 )
      goto LABEL_66;
    LOBYTE(v16) = 0;
    v31 = &v5[v18];
    v33 = v5 + 8;
    if ( (unsigned __int8)((*v5 & 0x7F) - 114) <= 1u )
    {
      if ( v33 > v31 )
        goto LABEL_65;
      v20 = v5[2];
      v19 = v5[1] & 0xF;
      v21 = v5[3];
    }
    else
    {
      if ( v33 > v31 )
        goto LABEL_65;
      v19 = v5[2] & 0xF;
      v34 = v18;
      if ( (unsigned int)(unsigned __int8)v5[7] + 8 <= v18 )
        v34 = (unsigned __int8)v5[7] + 8;
      v31 = v5 + 13;
      v16 = (unsigned __int64)&v5[v34];
      if ( (unsigned __int64)(v5 + 13) <= v16 )
        v20 = v5[12];
      if ( (unsigned __int64)(v5 + 14) <= v16 )
        v21 = *v31;
    }
    LOBYTE(v16) = 1;
LABEL_65:
    if ( (_BYTE)v16 )
    {
LABEL_67:
      sub_140052E64((_DWORD)v31, v16, (unsigned int)&v64, a2, *(_DWORD *)(a2 + 48), v32, v17, v19, v20, v21, a2);
      goto LABEL_70;
    }
LABEL_66:
    v21 = 0;
    v20 = 0;
    v19 = 0;
    goto LABEL_67;
  }
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 0x10) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_140068140(off_140168120->AttachedDevice, 10LL, &unk_14014A2D8, a1, a2, HIWORD(v9), (v9 >> 2) & 0xFFF);
  }
  v36 = -1073741822;
  if ( !byte_1401687EA && byte_140168830 )
  {
    _InterlockedIncrement(&dword_1401687EC);
    v36 = ((__int64 (__fastcall *)(int *, __int64, __int64))qword_140168878)(&dword_1401681E8, a1, a2);
    _InterlockedDecrement(&dword_1401687EC);
  }
  if ( v36 != -1073741822 )
    goto LABEL_326;
  if ( !byte_1401687EA && byte_140168830 )
  {
    _InterlockedIncrement(&dword_1401687EC);
    ((void (__fastcall *)(int *, __int64, __int64))qword_140168858)(&dword_1401681E8, a1, a2);
    _InterlockedDecrement(&dword_1401687EC);
  }
  if ( v9 > 0x2D5F90 )
  {
    if ( v9 > 0x2DDCD8 )
    {
      if ( v9 > 0x32C000 )
      {
        if ( v9 != 3326008 )
          goto LABEL_261;
      }
      else if ( v9 != 3325952 )
      {
        switch ( v9 )
        {
          case 0x2DDF84u:
            if ( (unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8))
              && (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) == 0 )
            {
              goto LABEL_257;
            }
            v37 = sub_14007B8DC(a1, a2);
            break;
          case 0x2DDF88u:
            if ( (unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8))
              && (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) == 0 )
            {
              goto LABEL_257;
            }
            v37 = sub_14007E56C(a1, a2);
            break;
          case 0x2DDF8Cu:
            if ( (unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8))
              && (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) == 0 )
            {
              goto LABEL_257;
            }
            v37 = sub_14007FBF0(a1, a2);
            break;
          case 0x2DDF94u:
            if ( (unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8))
              && (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) == 0 )
            {
              goto LABEL_257;
            }
            v37 = sub_14007BE40(a1, a2);
            break;
          case 0x2DDF98u:
            if ( (unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8))
              && (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) == 0 )
            {
              goto LABEL_257;
            }
            v37 = sub_14007C48C(a1, a2);
            break;
          case 0x2DDF9Cu:
            if ( (unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8))
              && (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) == 0 )
            {
              goto LABEL_257;
            }
            v37 = sub_14007F0A4(a1, a2);
            break;
          case 0x2DDFA0u:
            if ( (unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8))
              && (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) == 0 )
            {
              goto LABEL_257;
            }
            v37 = sub_14007D030(a1, a2);
            break;
          case 0x2DDFA4u:
            if ( (unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8))
              && (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) == 0 )
            {
              goto LABEL_257;
            }
            v37 = sub_14007EAC0((CMSPAddress *)a1, (PIRP)a2);
            break;
          case 0x2DDFACu:
            if ( (unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8))
              && (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) == 0 )
            {
              goto LABEL_257;
            }
            v37 = sub_14007F650(a1, a2);
            break;
          case 0x2DDFB0u:
            if ( (unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8))
              && (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) == 0 )
            {
              goto LABEL_257;
            }
            v37 = sub_14007E0B8(a1, a2);
            break;
          default:
            goto LABEL_261;
        }
        goto LABEL_321;
      }
      v37 = sub_14001B0D0(*(struct _DEVICE_OBJECT **)(a1 + 24), (IRP *)a2);
      goto LABEL_321;
    }
    if ( v9 == 3005656 )
    {
      if ( !(unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8)) || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
      {
        v37 = sub_14005B648(a1, a2);
        goto LABEL_321;
      }
      goto LABEL_257;
    }
    if ( v9 > 0x2DD044 )
    {
      if ( v9 > 0x2DD684 )
      {
        if ( v9 == 3005444 )
        {
          if ( !(unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8))
            || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            v37 = sub_14005AC44(a1, a2);
            goto LABEL_321;
          }
          goto LABEL_257;
        }
        if ( v9 == 3005448 )
        {
          if ( !(unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8))
            || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            v37 = sub_14005A6E4(a1, a2);
            goto LABEL_321;
          }
          goto LABEL_257;
        }
      }
      else
      {
        switch ( v9 )
        {
          case 0x2DD684u:
            if ( !(unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              v37 = sub_1400610C8(a1, a2);
              goto LABEL_321;
            }
            goto LABEL_257;
          case 0x2DD04Cu:
            if ( !(unsigned int)sub_14005674C() )
            {
              v36 = -1073741637;
              goto LABEL_322;
            }
            v37 = sub_140064694(a1, a2);
            goto LABEL_321;
          case 0x2DD200u:
            if ( !(unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              v37 = sub_1400589FC(a1, a2);
              goto LABEL_321;
            }
            goto LABEL_257;
          case 0x2DD3C0u:
            if ( !(unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              v37 = sub_1400392B0(a1, a2);
              goto LABEL_321;
            }
            goto LABEL_257;
        }
      }
    }
    else
    {
      if ( v9 == 3002436 )
      {
        v37 = sub_140063E68(a1, a2);
        goto LABEL_321;
      }
      if ( v9 > 0x2D9CD0 )
      {
        if ( v9 == 2989268 )
        {
          if ( !(unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8))
            || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            v37 = sub_14005B208(a1, a2);
            goto LABEL_321;
          }
          goto LABEL_257;
        }
        if ( v9 == 2989282 )
        {
          if ( !(unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8))
            || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            v37 = sub_14005BF0C(a1, (PIRP)a2);
            goto LABEL_321;
          }
          goto LABEL_257;
        }
      }
      else
      {
        switch ( v9 )
        {
          case 0x2D9CD0u:
            if ( !(unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              v37 = sub_14005DB44(a1, a2);
              goto LABEL_321;
            }
            goto LABEL_257;
          case 0x2D5FA8u:
            if ( !(unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              v37 = sub_14007D5A8(a1, a2);
              goto LABEL_321;
            }
            goto LABEL_257;
          case 0x2D93F4u:
            if ( !(unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              v37 = sub_140063854(a1, a2);
              goto LABEL_321;
            }
            goto LABEL_257;
          case 0x2D93FCu:
            if ( !(unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              v37 = sub_140064B0C(a1, a2);
              goto LABEL_321;
            }
            goto LABEL_257;
        }
      }
    }
  }
  else
  {
    if ( v9 == 2973584 )
    {
      if ( !(unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8)) || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
      {
        v37 = sub_14007CA18(a1, a2);
        goto LABEL_321;
      }
      goto LABEL_257;
    }
    if ( v9 > 0x2D1680 )
    {
      if ( v9 > 0x2D4C1C )
      {
        switch ( v9 )
        {
          case 0x2D5000u:
            v37 = sub_14004093C(a1, a2);
            goto LABEL_321;
          case 0x2D5014u:
            if ( !(unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              v37 = sub_1400624CC(a1, a2);
              goto LABEL_321;
            }
            goto LABEL_257;
          case 0x2D5020u:
            v37 = sub_140062B5C(a1, a2);
            goto LABEL_321;
          case 0x2D5048u:
            v37 = sub_1400642A8(a1, a2);
            goto LABEL_321;
          case 0x2D5CDDu:
            if ( !(unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              v37 = sub_14005BA74(a1, (PIRP)a2);
              goto LABEL_321;
            }
            goto LABEL_257;
        }
      }
      else
      {
        if ( v9 == 2968604 )
        {
          v37 = sub_14008FCE8((PIRP)a2);
          goto LABEL_321;
        }
        if ( v9 > 0x2D1CA0 )
        {
          if ( v9 == 2956492 )
          {
            v37 = sub_1400614E8(a1, a2);
            goto LABEL_321;
          }
          if ( v9 == 2957184 )
          {
            if ( !(unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              v37 = sub_14007DB98(a1, a2);
              goto LABEL_321;
            }
            goto LABEL_257;
          }
        }
        else
        {
          switch ( v9 )
          {
            case 0x2D1CA0u:
              if ( !(unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8))
                || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
              {
                v37 = sub_14017869C(a1, a2);
                goto LABEL_321;
              }
              goto LABEL_257;
            case 0x2D1C00u:
              if ( !(unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8))
                || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
              {
                v37 = sub_140014708((_QWORD *)a1, a2);
                goto LABEL_321;
              }
              goto LABEL_257;
            case 0x2D1C94u:
              if ( !(unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8))
                || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
              {
                v37 = sub_14005CBB0(a1, a2);
                goto LABEL_321;
              }
              goto LABEL_257;
            case 0x2D1C98u:
              if ( !(unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8))
                || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
              {
                v37 = sub_14005E41C(a1, a2);
                goto LABEL_321;
              }
              goto LABEL_257;
          }
        }
      }
      goto LABEL_261;
    }
    if ( v9 == 2954880 )
    {
      if ( !(unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8)) || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
      {
        v37 = sub_14005D120(a1, a2);
        goto LABEL_321;
      }
      goto LABEL_257;
    }
    if ( v9 <= 0x4D014 )
    {
      if ( v9 != 315412 )
      {
        if ( v9 <= 0x4101C )
        {
          switch ( v9 )
          {
            case 0x4101Cu:
              v37 = sub_140060250(a1, a2);
              goto LABEL_321;
            case 0x4100Cu:
              v37 = sub_14005F3C8(a1, a2);
              goto LABEL_321;
            case 0x41010u:
              v37 = sub_14005ED10(a1, a2);
              goto LABEL_321;
            case 0x41018u:
              v37 = sub_14005E958(a1, a2);
LABEL_321:
              v36 = v37;
              goto LABEL_322;
          }
          goto LABEL_261;
        }
        if ( v9 != 315396 )
        {
          if ( v9 == 315400 )
          {
            if ( !(unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              v37 = sub_140021A00(a1, a2, 0, 0, 0, 2);
              goto LABEL_321;
            }
LABEL_257:
            v36 = sub_14006C420(*(_QWORD *)(a1 + 8), a2);
            if ( !v36 )
              v36 = 259;
            goto LABEL_322;
          }
          goto LABEL_261;
        }
LABEL_108:
        v37 = sub_1401B259C(a1, a2, 0LL);
        goto LABEL_321;
      }
LABEL_107:
      LOBYTE(v7) = 1;
      v37 = sub_1401B259C(a1, a2, v7);
      goto LABEL_321;
    }
    if ( v9 <= 0x2D11D4 )
    {
      switch ( v9 )
      {
        case 0x2D11D4u:
          v37 = sub_14017A21C(a1, a2);
          goto LABEL_321;
        case 0x4D038u:
          if ( !(unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8))
            || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            return sub_14005C728(a1, a2);
          }
          goto LABEL_257;
        case 0x4D044u:
          goto LABEL_108;
      }
      if ( v9 != 315464 )
        goto LABEL_261;
      goto LABEL_107;
    }
    if ( v9 == 2954232 )
    {
      if ( !(unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8)) || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
      {
        v37 = sub_140062EFC(a1, a2, v62);
        goto LABEL_321;
      }
      goto LABEL_257;
    }
    if ( v9 == 2954240 )
    {
      if ( !(unsigned __int8)sub_140046AC0(*(_QWORD *)(a1 + 8)) || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
      {
        v37 = sub_1401B2CE0(a1, a2);
        goto LABEL_321;
      }
      goto LABEL_257;
    }
  }
LABEL_261:
  v12 = byte_140168DAA == 0;
  v36 = -1073741637;
  *(_DWORD *)(a2 + 48) = -1073741637;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v12 )
    goto LABEL_317;
  v65 = 0LL;
  IoGetActivityIdIrp(a2, &v65);
  v39 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v39 == 14 )
  {
    if ( (byte_1401694F2 & 8) != 0 )
      sub_140052F3C(v39, &unk_140148B18, &v65, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_317;
  }
  if ( *(_BYTE *)v39 != 15 )
  {
    if ( *(_BYTE *)v39 == 27 )
    {
      if ( *(_BYTE *)(v39 + 1) != 7 || *(_DWORD *)(v39 + 8) )
      {
        if ( (byte_1401694F2 & 0x20) != 0 )
          sub_140052F3C(v39, &unk_140149FE8, &v65, a2, *(_DWORD *)(a2 + 48));
      }
      else if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v40 = *(_DWORD **)(a2 + 56);
        if ( v40 )
          LODWORD(v5) = *v40;
        sub_140056AB0(v39, v38, (unsigned int)&v65, a2, (char)v5, *(_DWORD *)(a2 + 48));
      }
    }
    goto LABEL_317;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_317;
  v41 = *(_QWORD *)(v39 + 8);
  v42 = 0;
  v43 = 0;
  v61 = 0;
  v44 = 0;
  v45 = 0;
  if ( *(_BYTE *)(v41 + 2) != 40 )
  {
    LODWORD(v55) = *(unsigned __int8 *)(v41 + 72);
    v5 = *(_BYTE **)(v41 + 32);
    v43 = *(_BYTE *)(v41 + 11);
    v53 = *(_BYTE *)(v41 + 4);
    if ( !*(_BYTE *)(v41 + 2) )
      goto LABEL_297;
    goto LABEL_317;
  }
  v46 = 0LL;
  if ( *(_DWORD *)(v41 + 20) )
    goto LABEL_317;
  v47 = *(_DWORD *)(v41 + 56);
  v48 = 0;
  if ( !v47 )
  {
LABEL_290:
    v53 = 0;
    goto LABEL_291;
  }
  while ( 1 )
  {
    v49 = *(unsigned int *)(v41 + 4LL * v48 + 120);
    if ( (unsigned int)v49 < 0x80 )
      goto LABEL_289;
    v38 = *(unsigned int *)(v41 + 16);
    if ( (unsigned int)v49 >= (unsigned int)v38 )
      goto LABEL_289;
    v50 = (unsigned int)v49;
    v51 = *(_DWORD *)(v41 + v49) - 64;
    if ( !v51 )
      break;
    v52 = v51 - 1;
    if ( !v52 )
    {
      v54 = v50 + 56;
      goto LABEL_288;
    }
    if ( v52 == 1 && v50 + 40 <= v38 )
    {
      if ( *(_DWORD *)(v41 + v50 + 12) )
        v46 = (unsigned __int8 *)(v50 + v41 + 32);
      v53 = *(_BYTE *)(v41 + v50 + 8);
      v5 = *(_BYTE **)(v41 + v50 + 24);
      v43 = *(_BYTE *)(v41 + v50 + 9);
      goto LABEL_291;
    }
LABEL_289:
    if ( ++v48 >= v47 )
      goto LABEL_290;
  }
  v54 = v50 + 40;
LABEL_288:
  if ( v54 > v38 )
    goto LABEL_289;
  if ( *(_BYTE *)(v41 + v50 + 10) )
    v46 = (unsigned __int8 *)(v50 + v41 + 24);
  v53 = *(_BYTE *)(v41 + v50 + 8);
  v5 = *(_BYTE **)(v41 + v50 + 16);
  v43 = *(_BYTE *)(v41 + v50 + 9);
LABEL_291:
  if ( v46 )
  {
    LODWORD(v55) = *v46;
    v44 = 0;
    v42 = 0;
LABEL_297:
    LOBYTE(v55) = (_BYTE)v55 - 8;
    if ( ((unsigned __int8)v55 & 0x5D) == 0 )
    {
      v56 = *(_BYTE *)(v41 + 3);
      if ( v56 == 1 || !v5 || !v43 )
        goto LABEL_315;
      LOBYTE(v38) = 0;
      v55 = &v5[v43];
      v57 = v5 + 8;
      if ( (unsigned __int8)((*v5 & 0x7F) - 114) <= 1u )
      {
        if ( v57 <= v55 )
        {
          LOBYTE(v38) = 1;
          v42 = v5[2];
          v44 = v5[1] & 0xF;
          v45 = v5[3];
        }
      }
      else
      {
        if ( v57 <= v55 )
        {
          v44 = v5[2] & 0xF;
          v58 = v43;
          if ( (unsigned int)(unsigned __int8)v5[7] + 8 <= v43 )
            v58 = (unsigned __int8)v5[7] + 8;
          v55 = v5 + 13;
          v38 = (unsigned __int64)&v5[v58];
          if ( (unsigned __int64)(v5 + 13) > v38 )
            v59 = 0;
          else
            v59 = v5[12];
          v61 = v59;
          if ( (unsigned __int64)(v5 + 14) <= v38 )
            v45 = *v55;
          LOBYTE(v38) = 1;
        }
        v42 = v61;
      }
      if ( !(_BYTE)v38 )
      {
LABEL_315:
        v45 = 0;
        v42 = 0;
        v44 = 0;
      }
      sub_140052E64((_DWORD)v55, v38, (unsigned int)&v65, a2, *(_DWORD *)(a2 + 48), v56, v53, v44, v42, v45, a2);
    }
  }
LABEL_317:
  IofCompleteRequest((PIRP)a2, 0);
LABEL_322:
  if ( !byte_1401687EA )
  {
    if ( byte_140168830 )
    {
      _InterlockedIncrement(&dword_1401687EC);
      v60 = ((__int64 (__fastcall *)(int *, __int64, __int64))qword_1401687F8)(&dword_1401681E8, a1, a2);
      _InterlockedDecrement(&dword_1401687EC);
      if ( v60 != -1073741822 )
        v36 = v60;
    }
  }
LABEL_326:
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 0x10) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_140068140(off_140168120->AttachedDevice, 11LL, &unk_14014A2D8, a1, a2, v9, v36);
  }
  if ( !v62[0] )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 336));
  return v36;
}
