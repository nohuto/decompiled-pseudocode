/*
 * XREFs of sub_1400EBA60 @ 0x1400EBA60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400BD5E0 @ 0x1400BD5E0 (sub_1400BD5E0.c)
 *     sub_1400C6FB0 @ 0x1400C6FB0 (sub_1400C6FB0.c)
 *     sub_1400DBC50 @ 0x1400DBC50 (sub_1400DBC50.c)
 *     sub_1400EB5E0 @ 0x1400EB5E0 (sub_1400EB5E0.c)
 *     sub_1400F06E8 @ 0x1400F06E8 (sub_1400F06E8.c)
 *     sub_1400F23BC @ 0x1400F23BC (sub_1400F23BC.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 */

void __fastcall sub_1400EBA60(_DWORD *SystemArgument2, __int64 *a2, unsigned int *a3)
{
  char v5; // r12
  unsigned int v6; // edx
  unsigned int v7; // edx
  int v8; // ecx
  unsigned int v9; // edx
  bool v10; // zf
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // esi
  __int64 v15; // rdx
  int v16; // r14d
  bool v17; // zf
  int v18; // ecx
  unsigned int v19; // edx
  bool v20; // zf
  char v21; // cl
  char *v22; // rax
  _DWORD *v23; // rdx
  _BYTE *v24; // rax
  __int64 v25; // rcx
  const char *v26; // rdi
  __int64 v27; // r8
  __int16 v28; // cx
  __int64 v29; // r9
  int v30; // [rsp+C8h] [rbp-70h]
  int v31; // [rsp+D8h] [rbp-60h]
  int v32; // [rsp+E8h] [rbp-50h]
  char v33; // [rsp+108h] [rbp-30h]

  if ( !a2 )
    return;
  v5 = 0;
  if ( !a3 )
    return;
  *(_WORD *)(*a2 + 4260) = *((_WORD *)a3 + 7);
  v6 = *(unsigned __int16 *)(*a2 + 4260);
  if ( ((v6 >> 9) & 7) == 0 )
  {
    v19 = v6 >> 1;
    if ( (unsigned __int8)v19 > 0x80u )
    {
      if ( (unsigned __int8)v19 == 129 )
        goto LABEL_27;
      v13 = (unsigned __int8)v19 - 130;
      if ( (unsigned __int8)v19 == 130 )
      {
        v14 = -1073741661;
        goto LABEL_28;
      }
      goto LABEL_90;
    }
    if ( (unsigned __int8)v19 == 128 )
      goto LABEL_27;
    if ( (unsigned __int8)v19 > 0xEu )
    {
      if ( (unsigned __int8)v19 <= 0x16u )
      {
        if ( (unsigned __int8)v19 == 22
          || (unsigned __int8)v19 == 15
          || (unsigned __int8)v19 == 16
          || (unsigned __int8)v19 == 17
          || (unsigned __int8)v19 == 18
          || (unsigned __int8)v19 == 19 )
        {
          goto LABEL_27;
        }
        v8 = (unsigned __int8)v19 - 20;
        if ( (unsigned __int8)v19 != 20 )
        {
LABEL_101:
          if ( v8 == 1 )
            goto LABEL_102;
LABEL_110:
          v14 = -1073741435;
          goto LABEL_28;
        }
LABEL_62:
        v14 = -1073741436;
        goto LABEL_28;
      }
      if ( (unsigned __int8)v19 == 24 )
        goto LABEL_27;
      if ( (unsigned __int8)v19 == 25 || (unsigned __int8)v19 == 26 )
      {
        v14 = -1073741643;
        goto LABEL_28;
      }
      if ( (unsigned __int8)v19 != 27 )
      {
        if ( (unsigned __int8)v19 == 28 )
          goto LABEL_110;
        v20 = (unsigned __int8)v19 == 30;
        goto LABEL_109;
      }
    }
    else
    {
      if ( (unsigned __int8)v19 == 14 )
        goto LABEL_27;
      if ( (unsigned __int8)v19 > 7u )
      {
        if ( (unsigned __int8)v19 != 8 && (unsigned __int8)v19 != 9 && (unsigned __int8)v19 != 10 )
        {
          if ( (unsigned __int8)v19 == 11 )
            goto LABEL_27;
          v13 = (unsigned __int8)v19 - 12;
          if ( (unsigned __int8)v19 == 12 )
          {
            v14 = -1073740758;
            goto LABEL_28;
          }
          goto LABEL_90;
        }
      }
      else if ( (unsigned __int8)v19 != 7 )
      {
        if ( !(_BYTE)v19 )
        {
          v14 = 0;
          goto LABEL_28;
        }
        if ( (unsigned __int8)v19 == 1 || (unsigned __int8)v19 == 2 )
          goto LABEL_27;
        if ( (unsigned __int8)v19 == 3 || (unsigned __int8)v19 == 4 )
          goto LABEL_110;
        v18 = (unsigned __int8)v19 - 5;
        v17 = (unsigned __int8)v19 == 5;
LABEL_60:
        if ( !v17 && v18 != 1 )
          goto LABEL_110;
        goto LABEL_62;
      }
    }
    v14 = -1073741248;
    goto LABEL_28;
  }
  if ( ((v6 >> 9) & 7) != 1 )
  {
    if ( ((v6 >> 9) & 7) != 2 )
      goto LABEL_110;
    v7 = v6 >> 1;
    switch ( (unsigned __int8)v7 )
    {
      case 0x80u:
        goto LABEL_110;
      case 0x81u:
        goto LABEL_110;
      case 0x82u:
        goto LABEL_110;
      case 0x83u:
        goto LABEL_110;
      case 0x84u:
        goto LABEL_110;
    }
    v8 = (unsigned __int8)v7 - 133;
    if ( (unsigned __int8)v7 == 133 )
      goto LABEL_110;
    goto LABEL_101;
  }
  v9 = v6 >> 1;
  if ( (unsigned __int8)v9 > 0x80u )
  {
    if ( (unsigned __int8)v9 == 129 )
      goto LABEL_27;
    v13 = (unsigned __int8)v9 - 130;
    if ( (unsigned __int8)v9 == 130 )
      goto LABEL_102;
LABEL_90:
    v20 = v13 == 1;
LABEL_109:
    if ( !v20 )
      goto LABEL_110;
    goto LABEL_27;
  }
  if ( (unsigned __int8)v9 == 128 )
    goto LABEL_27;
  if ( (unsigned __int8)v9 > 0x11u )
  {
    if ( (unsigned __int8)v9 <= 0x1Au )
    {
      switch ( (unsigned __int8)v9 )
      {
        case 0x1Au:
        case 0x12u:
        case 0x13u:
          goto LABEL_62;
        case 0x14u:
          v14 = -1073741800;
          goto LABEL_28;
        case 0x15u:
          goto LABEL_110;
        case 0x16u:
          goto LABEL_62;
      }
      v18 = (unsigned __int8)v9 - 24;
      v17 = (unsigned __int8)v9 == 24;
      goto LABEL_60;
    }
    if ( (unsigned __int8)v9 == 27 )
    {
      v14 = -1073741637;
      goto LABEL_28;
    }
    if ( (unsigned __int8)v9 == 28 )
      goto LABEL_27;
    if ( (unsigned __int8)v9 != 30 )
    {
      v11 = (unsigned __int8)v9 - 31;
      v10 = (unsigned __int8)v9 == 31;
      goto LABEL_24;
    }
LABEL_102:
    v14 = -1073741790;
    goto LABEL_28;
  }
  if ( (unsigned __int8)v9 == 17 )
    goto LABEL_51;
  if ( (unsigned __int8)v9 <= 9u )
  {
    if ( (unsigned __int8)v9 == 9
      || !(_BYTE)v9
      || (unsigned __int8)v9 == 1
      || (unsigned __int8)v9 == 2
      || (unsigned __int8)v9 == 3 )
    {
      goto LABEL_27;
    }
    v11 = (unsigned __int8)v9 - 5;
    v10 = (unsigned __int8)v9 == 5;
LABEL_24:
    if ( v10 )
      goto LABEL_27;
    v12 = v11 - 1;
    if ( !v12 )
      goto LABEL_27;
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_27;
    goto LABEL_90;
  }
  if ( (unsigned __int8)v9 != 10 )
  {
    if ( (unsigned __int8)v9 != 11 )
    {
      if ( (unsigned __int8)v9 == 12
        || (unsigned __int8)v9 == 13
        || (unsigned __int8)v9 == 14
        || (unsigned __int8)v9 == 15 )
      {
        goto LABEL_27;
      }
      if ( (unsigned __int8)v9 != 16 )
        goto LABEL_110;
    }
LABEL_51:
    v14 = -2147483210;
    goto LABEL_28;
  }
LABEL_27:
  v14 = -1073741808;
LABEL_28:
  if ( (*((_QWORD *)SystemArgument2 + 121) & 1) == 0
    || (*((_QWORD *)SystemArgument2 + 121) & 2) != 0
    || (*((_QWORD *)SystemArgument2 + 121) & 4) != 0
    || (*((_QWORD *)SystemArgument2 + 121) & 8) != 0
    || (*((_QWORD *)SystemArgument2 + 121) & 0x10) != 0
    || *((_QWORD *)SystemArgument2 + 159) && **((_DWORD **)SystemArgument2 + 159) )
  {
    goto LABEL_133;
  }
  v15 = *a2;
  v16 = *(unsigned __int8 *)(*a2 + 4136);
  if ( v14 < 0 )
  {
    if ( (byte_1401694FA & 1) != 0 )
    {
      v25 = *(unsigned __int16 *)(v15 + 4260);
      v26 = (const char *)&dword_140149108;
      v27 = *a3;
      if ( *((_QWORD *)SystemArgument2 + 94) )
        v26 = (const char *)*((_QWORD *)SystemArgument2 + 94);
      v33 = (unsigned __int16)v25 >> 1;
      LOWORD(v25) = (unsigned __int16)v25 >> 9;
      LOBYTE(v25) = v25 & 7;
      sub_1400DBC50(
        v25,
        v15,
        v27,
        *(_DWORD *)(*((_QWORD *)SystemArgument2 + 16) + 56LL),
        *((_QWORD *)SystemArgument2 + 16) + 1032LL,
        *(const wchar_t **)(*((_QWORD *)SystemArgument2 + 16) + 1016LL),
        *((const char **)SystemArgument2 + 99),
        *((_WORD *)SystemArgument2 + 2),
        0,
        *((_BYTE *)SystemArgument2 + 744),
        v26,
        (const char *)SystemArgument2 + 800,
        (const char *)SystemArgument2 + 841,
        "Get log page for AER",
        "DW0",
        v27,
        "LogPageId",
        v16,
        byte_1401489C4,
        0,
        byte_1401489C4,
        0,
        byte_1401489C4,
        0,
        byte_1401489C4,
        v30,
        byte_1401489C4,
        v31,
        byte_1401489C4,
        v32,
        v14,
        0,
        v25,
        v33);
    }
    if ( (_BYTE)v16 != 4 )
      goto LABEL_133;
    v28 = *(_WORD *)(*a2 + 4260);
    if ( (v28 & 0xE00) != 0x200 || (v28 & 0x1FE) != 0x12 )
      goto LABEL_133;
    v23 = 0LL;
LABEL_132:
    sub_1400BD5E0((char *)SystemArgument2, v23);
    goto LABEL_133;
  }
  if ( v16 != 2 )
  {
    if ( v16 == 3 )
    {
      v24 = *(_BYTE **)(v15 + 4160);
      if ( v24 )
        sub_1400A870C(
          (__int64)SystemArgument2,
          1,
          4,
          (__int64)L"Firmware Activation Starting Async Event",
          L"Active Slot",
          *v24 & 7,
          L"Pending Activate Slot",
          (*v24 >> 4) & 7,
          &dword_140149108,
          0,
          &dword_140149108,
          0,
          (void *)&dword_140149108,
          0,
          (void *)&dword_140149108,
          0,
          (void *)&dword_140149108,
          0,
          (void *)&dword_140149108,
          0);
      goto LABEL_133;
    }
    if ( v16 != 4 )
    {
      switch ( v16 )
      {
        case 8:
          v22 = *(char **)(v15 + 4160);
          if ( v22 )
            sub_1400A870C(
              (__int64)SystemArgument2,
              1,
              4,
              (__int64)L"Telemetry Controller Initiated Async Event",
              L"LogPageIdentifier",
              *v22,
              &dword_140149108,
              0,
              &dword_140149108,
              0,
              &dword_140149108,
              0,
              (void *)&dword_140149108,
              0,
              (void *)&dword_140149108,
              0,
              (void *)&dword_140149108,
              0,
              (void *)&dword_140149108,
              0);
          break;
        case 128:
          a3 = *(unsigned int **)(v15 + 4160);
          if ( a3 )
          {
            v21 = *((_BYTE *)a3 + 8);
            if ( v21 )
              sub_1400A870C(
                (__int64)SystemArgument2,
                1,
                4,
                (__int64)L"Reservation Notification Async Event",
                L"NamespaceID",
                a3[3],
                L"LogPageType",
                v21,
                L"Log Page Count",
                *(_QWORD *)a3,
                L"Available Log Page Count",
                *((_BYTE *)a3 + 9),
                (void *)&dword_140149108,
                0,
                (void *)&dword_140149108,
                0,
                (void *)&dword_140149108,
                0,
                (void *)&dword_140149108,
                0);
          }
          break;
        case 129:
          a3 = *(unsigned int **)(v15 + 4160);
          if ( a3 )
            sub_1400A870C(
              (__int64)SystemArgument2,
              1,
              4,
              (__int64)L"Sanitize Async Event",
              L"Sanitize Status",
              *((_BYTE *)a3 + 2) & 7,
              L"Sanitize Progress",
              *(_WORD *)a3,
              L"Sanitize Command CDW10",
              a3[1],
              L"Global Data Erased",
              (*((_WORD *)a3 + 1) & 0x80LL) != 0,
              (void *)&dword_140149108,
              0,
              (void *)&dword_140149108,
              0,
              (void *)&dword_140149108,
              0,
              (void *)&dword_140149108,
              0);
          break;
      }
      goto LABEL_133;
    }
    v23 = *(_DWORD **)(v15 + 4160);
    goto LABEL_132;
  }
  v5 = sub_1400F06E8(SystemArgument2, *(_QWORD *)(v15 + 4160));
LABEL_133:
  _interlockedbittestandreset((volatile signed __int32 *)(*a2 + 4256), 3u);
  v29 = *(_QWORD *)(*a2 + 4160);
  if ( v29 )
    sub_1400F5FEC((_DWORD)SystemArgument2, *(_DWORD *)(*a2 + 4248), (_DWORD)a3, v29, *(_QWORD *)(*a2 + 4168));
  sub_140122C20(SystemArgument2, a2);
  if ( v5 )
  {
    sub_1400C6FB0(SystemArgument2);
  }
  else
  {
    sub_1400EB5E0((__int64)SystemArgument2);
    if ( (int)sub_1400F23BC(SystemArgument2) < 0 )
      *((_QWORD *)SystemArgument2 + 17) |= 0x40000000uLL;
  }
}
