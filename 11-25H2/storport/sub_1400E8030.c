/*
 * XREFs of sub_1400E8030 @ 0x1400E8030
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400BC8A4 @ 0x1400BC8A4 (sub_1400BC8A4.c)
 *     sub_1400DBC50 @ 0x1400DBC50 (sub_1400DBC50.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 *     sub_1400E8D20 @ 0x1400E8D20 (sub_1400E8D20.c)
 *     sub_1400EB5E0 @ 0x1400EB5E0 (sub_1400EB5E0.c)
 *     sub_1400F0FF4 @ 0x1400F0FF4 (sub_1400F0FF4.c)
 *     sub_1400F23BC @ 0x1400F23BC (sub_1400F23BC.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122670 @ 0x140122670 (sub_140122670.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 *     sub_140130F80 @ 0x140130F80 (sub_140130F80.c)
 */

__int64 *__fastcall sub_1400E8030(__int64 SystemArgument2, __int64 a2, __int64 a3)
{
  __int64 *result; // rax
  __int64 *v7; // r15
  char v8; // bp
  unsigned int v9; // edi
  bool v10; // r13
  unsigned int v11; // edx
  unsigned int v12; // edx
  int v13; // ecx
  unsigned int v14; // edx
  bool v15; // zf
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // r11d
  bool v20; // zf
  int v21; // ecx
  unsigned int v22; // edx
  bool v23; // zf
  char v24; // cl
  __int64 v25; // rcx
  unsigned __int16 v26; // bp
  const char *v27; // r10
  __int64 v28; // r8
  __int64 v29; // rax
  int v30; // [rsp+C8h] [rbp-A0h]
  int v31; // [rsp+D8h] [rbp-90h]
  int v32; // [rsp+E8h] [rbp-80h]
  __int128 v33; // [rsp+110h] [rbp-58h]
  __int128 v34; // [rsp+120h] [rbp-48h] BYREF
  __int128 v35; // [rsp+130h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+168h] [rbp+0h] BYREF

  result = (__int64 *)&retaddr;
  v33 = 0uLL;
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v34 = 0LL;
  if ( !a2 || !a3 )
    return result;
  *(_WORD *)(*(_QWORD *)a2 + 4260LL) = *(_WORD *)(a3 + 14);
  v11 = *(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL);
  if ( ((v11 >> 9) & 7) == 0 )
  {
    v22 = v11 >> 1;
    if ( (unsigned __int8)v22 > 0x80u )
    {
      if ( (unsigned __int8)v22 == 129 )
        goto LABEL_27;
      v18 = (unsigned __int8)v22 - 130;
      if ( (unsigned __int8)v22 == 130 )
      {
        v19 = -1073741661;
        goto LABEL_28;
      }
      goto LABEL_90;
    }
    if ( (unsigned __int8)v22 == 128 )
      goto LABEL_27;
    if ( (unsigned __int8)v22 > 0xEu )
    {
      if ( (unsigned __int8)v22 <= 0x16u )
      {
        if ( (unsigned __int8)v22 == 22
          || (unsigned __int8)v22 == 15
          || (unsigned __int8)v22 == 16
          || (unsigned __int8)v22 == 17
          || (unsigned __int8)v22 == 18
          || (unsigned __int8)v22 == 19 )
        {
          goto LABEL_27;
        }
        v13 = (unsigned __int8)v22 - 20;
        if ( (unsigned __int8)v22 != 20 )
        {
LABEL_101:
          if ( v13 == 1 )
            goto LABEL_102;
LABEL_110:
          v19 = -1073741435;
          goto LABEL_28;
        }
LABEL_62:
        v19 = -1073741436;
        goto LABEL_28;
      }
      if ( (unsigned __int8)v22 == 24 )
        goto LABEL_27;
      if ( (unsigned __int8)v22 == 25 || (unsigned __int8)v22 == 26 )
      {
        v19 = -1073741643;
        goto LABEL_28;
      }
      if ( (unsigned __int8)v22 != 27 )
      {
        if ( (unsigned __int8)v22 == 28 )
          goto LABEL_110;
        v23 = (unsigned __int8)v22 == 30;
        goto LABEL_109;
      }
    }
    else
    {
      if ( (unsigned __int8)v22 == 14 )
        goto LABEL_27;
      if ( (unsigned __int8)v22 > 7u )
      {
        if ( (unsigned __int8)v22 != 8 && (unsigned __int8)v22 != 9 && (unsigned __int8)v22 != 10 )
        {
          if ( (unsigned __int8)v22 == 11 )
            goto LABEL_27;
          v18 = (unsigned __int8)v22 - 12;
          if ( (unsigned __int8)v22 == 12 )
          {
            v19 = -1073740758;
            goto LABEL_28;
          }
          goto LABEL_90;
        }
      }
      else if ( (unsigned __int8)v22 != 7 )
      {
        if ( !(_BYTE)v22 )
        {
          v19 = 0;
          goto LABEL_28;
        }
        if ( (unsigned __int8)v22 == 1 || (unsigned __int8)v22 == 2 )
          goto LABEL_27;
        if ( (unsigned __int8)v22 == 3 || (unsigned __int8)v22 == 4 )
          goto LABEL_110;
        v21 = (unsigned __int8)v22 - 5;
        v20 = (unsigned __int8)v22 == 5;
LABEL_60:
        if ( !v20 && v21 != 1 )
          goto LABEL_110;
        goto LABEL_62;
      }
    }
    v19 = -1073741248;
    goto LABEL_28;
  }
  if ( ((v11 >> 9) & 7) != 1 )
  {
    if ( ((v11 >> 9) & 7) != 2 )
      goto LABEL_110;
    v12 = v11 >> 1;
    switch ( (unsigned __int8)v12 )
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
    v13 = (unsigned __int8)v12 - 133;
    if ( (unsigned __int8)v12 == 133 )
      goto LABEL_110;
    goto LABEL_101;
  }
  v14 = v11 >> 1;
  if ( (unsigned __int8)v14 > 0x80u )
  {
    if ( (unsigned __int8)v14 == 129 )
      goto LABEL_27;
    v18 = (unsigned __int8)v14 - 130;
    if ( (unsigned __int8)v14 == 130 )
      goto LABEL_102;
LABEL_90:
    v23 = v18 == 1;
LABEL_109:
    if ( !v23 )
      goto LABEL_110;
    goto LABEL_27;
  }
  if ( (unsigned __int8)v14 == 128 )
    goto LABEL_27;
  if ( (unsigned __int8)v14 > 0x11u )
  {
    if ( (unsigned __int8)v14 <= 0x1Au )
    {
      switch ( (unsigned __int8)v14 )
      {
        case 0x1Au:
        case 0x12u:
        case 0x13u:
          goto LABEL_62;
        case 0x14u:
          v19 = -1073741800;
          goto LABEL_28;
        case 0x15u:
          goto LABEL_110;
        case 0x16u:
          goto LABEL_62;
      }
      v21 = (unsigned __int8)v14 - 24;
      v20 = (unsigned __int8)v14 == 24;
      goto LABEL_60;
    }
    if ( (unsigned __int8)v14 == 27 )
    {
      v19 = -1073741637;
      goto LABEL_28;
    }
    if ( (unsigned __int8)v14 == 28 )
      goto LABEL_27;
    if ( (unsigned __int8)v14 != 30 )
    {
      v16 = (unsigned __int8)v14 - 31;
      v15 = (unsigned __int8)v14 == 31;
      goto LABEL_24;
    }
LABEL_102:
    v19 = -1073741790;
    goto LABEL_28;
  }
  if ( (unsigned __int8)v14 == 17 )
    goto LABEL_51;
  if ( (unsigned __int8)v14 <= 9u )
  {
    if ( (unsigned __int8)v14 == 9
      || !(_BYTE)v14
      || (unsigned __int8)v14 == 1
      || (unsigned __int8)v14 == 2
      || (unsigned __int8)v14 == 3 )
    {
      goto LABEL_27;
    }
    v16 = (unsigned __int8)v14 - 5;
    v15 = (unsigned __int8)v14 == 5;
LABEL_24:
    if ( v15 )
      goto LABEL_27;
    v17 = v16 - 1;
    if ( !v17 )
      goto LABEL_27;
    v18 = v17 - 1;
    if ( !v18 )
      goto LABEL_27;
    goto LABEL_90;
  }
  if ( (unsigned __int8)v14 != 10 )
  {
    if ( (unsigned __int8)v14 != 11 )
    {
      if ( (unsigned __int8)v14 == 12
        || (unsigned __int8)v14 == 13
        || (unsigned __int8)v14 == 14
        || (unsigned __int8)v14 == 15 )
      {
        goto LABEL_27;
      }
      if ( (unsigned __int8)v14 != 16 )
        goto LABEL_110;
    }
LABEL_51:
    v19 = -2147483210;
    goto LABEL_28;
  }
LABEL_27:
  v19 = -1073741808;
LABEL_28:
  if ( (*(_QWORD *)(SystemArgument2 + 968) & 1) != 0
    && (*(_QWORD *)(SystemArgument2 + 968) & 2) == 0
    && (*(_QWORD *)(SystemArgument2 + 968) & 4) == 0
    && (*(_QWORD *)(SystemArgument2 + 968) & 8) == 0
    && (*(_QWORD *)(SystemArgument2 + 968) & 0x10) == 0
    && (!*(_QWORD *)(SystemArgument2 + 1272) || !**(_DWORD **)(SystemArgument2 + 1272)) )
  {
    v10 = 1;
    if ( v19 < 0 )
    {
      v26 = *(_WORD *)(*(_QWORD *)a2 + 4260LL);
      if ( ((v26 >> 9) & 7) == 1 )
        v10 = (v26 & 0x1FE) != 10;
      if ( (byte_1401694FA & 1) != 0 )
      {
        v27 = (const char *)&dword_140149108;
        if ( *(_QWORD *)(SystemArgument2 + 752) )
          v27 = *(const char **)(SystemArgument2 + 752);
        sub_1400DBC50(
          SystemArgument2 + 841,
          SystemArgument2 + 800,
          *(_QWORD *)(SystemArgument2 + 128) + 1032LL,
          *(_DWORD *)(*(_QWORD *)(SystemArgument2 + 128) + 56LL),
          *(_QWORD *)(SystemArgument2 + 128) + 1032LL,
          *(const wchar_t **)(*(_QWORD *)(SystemArgument2 + 128) + 1016LL),
          *(const char **)(SystemArgument2 + 792),
          *(_WORD *)(SystemArgument2 + 4),
          0,
          *(_BYTE *)(SystemArgument2 + 744),
          v27,
          (const char *)(SystemArgument2 + 800),
          (const char *)(SystemArgument2 + 841),
          "Async Event Request Command",
          "DW0",
          *(_DWORD *)a3,
          byte_1401489C4,
          0,
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
          v19,
          0,
          (v26 >> 9) & 7,
          v26 >> 1);
        v8 = 0;
      }
      else
      {
        v8 = 0;
      }
      goto LABEL_151;
    }
    v8 = *(_BYTE *)(a3 + 2);
    sub_1400A870C(
      SystemArgument2,
      1,
      4,
      (__int64)L"Async Event Request completed successfully",
      L"AsyncEventType",
      *(_BYTE *)a3 & 7,
      L"AsyncEventInfo",
      *(_BYTE *)(a3 + 1),
      L"LogPage",
      v8,
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
    switch ( *(_DWORD *)a3 & 7 )
    {
      case 0:
        v24 = *(_BYTE *)(a3 + 1);
        v9 = 64;
        if ( v24 )
        {
          switch ( *(_BYTE *)(a3 + 1) )
          {
            case 1:
              sub_1400A870C(
                SystemArgument2,
                1,
                2,
                (__int64)L"Asynchronous Event Notification : Invalid Doorbell Write",
                L"Asynchronous Event Info",
                v24,
                L"LogPage",
                v8,
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
              sub_1400E8D20(SystemArgument2);
              *((_QWORD *)&v33 + 1) = 2LL;
              break;
            case 2:
              sub_1400A870C(
                SystemArgument2,
                1,
                2,
                (__int64)L"Asynchronous Event Notification : Diagnostic Failure",
                L"Asynchronous Event Info",
                v24,
                L"LogPage",
                v8,
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
              *(_QWORD *)&v33 = 32LL;
              break;
            case 3:
              sub_1400A870C(
                SystemArgument2,
                1,
                2,
                (__int64)L"Asynchronous Event Notification : Persistent Internal Device Error",
                L"Asynchronous Event Info",
                v24,
                L"LogPage",
                v8,
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
              if ( (*(_DWORD *)(*(_QWORD *)(SystemArgument2 + 920) + 28LL) & 2) != 0 )
                sub_1400E8D20(SystemArgument2);
              *(_QWORD *)&v33 = 64LL;
              break;
            case 4:
              sub_1400A870C(
                SystemArgument2,
                1,
                2,
                (__int64)L"Asynchronous Event Notification : Transient Internal Device Error",
                L"Asynchronous Event Info",
                v24,
                L"LogPage",
                v8,
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
              *(_QWORD *)&v33 = 128LL;
              break;
            case 5:
              sub_1400A870C(
                SystemArgument2,
                1,
                2,
                (__int64)L"Asynchronous Event Notification : Firmware Image Load Error",
                L"Asynchronous Event Info",
                v24,
                L"LogPage",
                v8,
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
              *(_QWORD *)&v33 = 256LL;
              break;
            default:
              *(_QWORD *)&v33 = 4096LL;
              break;
          }
        }
        else
        {
          sub_1400A870C(
            SystemArgument2,
            1,
            2,
            (__int64)L"Asynchronous Event Notification : Write to Invalid Doorbell Register",
            L"Asynchronous Event Info",
            0,
            L"LogPage",
            v8,
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
          *((_QWORD *)&v33 + 1) = 1LL;
        }
        v25 = *(_QWORD *)(SystemArgument2 + 128);
        v35 = v33;
        sub_140130F80(v25, &v35, 0LL, 0LL);
        break;
      case 1:
        goto LABEL_43;
      case 2:
        if ( !*(_BYTE *)(a3 + 1) )
        {
          _interlockedbittestandset((volatile signed __int32 *)(SystemArgument2 + 1072), 1u);
          if ( !_interlockedbittestandset((volatile signed __int32 *)(SystemArgument2 + 1072), 2u) )
          {
            _interlockedbittestandreset((volatile signed __int32 *)(SystemArgument2 + 1072), 1u);
            v9 = 4096;
          }
          break;
        }
        if ( *(_BYTE *)(a3 + 1) == 1 || *(_BYTE *)(a3 + 1) == 2 )
          goto LABEL_43;
        if ( *(unsigned __int8 *)(a3 + 1) != 239 )
          break;
        goto LABEL_125;
      case 6:
        if ( !*(_BYTE *)(a3 + 1) )
        {
          v9 = 64;
          break;
        }
        if ( (unsigned int)*(unsigned __int8 *)(a3 + 1) - 1 <= 1 )
          goto LABEL_43;
        break;
      default:
        if ( (*(_DWORD *)a3 & 7) == 7 && *(_BYTE *)(a3 + 1) != 1 )
        {
          if ( *(unsigned __int8 *)(a3 + 1) != 254 )
          {
LABEL_43:
            v9 = 512;
            break;
          }
          if ( (*(_DWORD *)(SystemArgument2 + 136) & 0x800000) == 0 )
            break;
LABEL_125:
          v9 = 4096;
        }
        break;
    }
  }
LABEL_151:
  _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)a2 + 4256LL), 3u);
  result = (__int64 *)sub_1400F0FF4(SystemArgument2, a2);
  if ( !v9 )
    goto LABEL_155;
  result = (__int64 *)sub_1401225EC(SystemArgument2);
  v7 = result;
  if ( !result )
    goto LABEL_155;
  result = (__int64 *)sub_1400E736C(SystemArgument2, v9, v28, (void **)&v34, (_QWORD *)&v34 + 1, 0);
  if ( (int)result < 0 )
    goto LABEL_155;
  LOBYTE(v28) = v8;
  v29 = *v7;
  *((_WORD *)v7 + 26) = *(_WORD *)(*(_QWORD *)(SystemArgument2 + 128) + 1092LL);
  *(_DWORD *)(*v7 + 4256) = *(_DWORD *)(v29 + 4256) | 1;
  *(_DWORD *)(*v7 + 4256) |= 0x20u;
  *(_DWORD *)(*v7 + 4256) |= 2u;
  *(_DWORD *)(*v7 + 4256) &= ~0x40u;
  *(_WORD *)(*v7 + 4252) = 0;
  *(_QWORD *)(*v7 + 4184) = 0LL;
  *(_QWORD *)(*v7 + 4192) = sub_1400EBA60;
  *(_QWORD *)(*v7 + 4200) = v7;
  *(_OWORD *)(*v7 + 4160) = v34;
  *(_DWORD *)(*v7 + 4248) = v9;
  sub_1400BC8A4(SystemArgument2, *v7 + 4096, v28, v9, *((__int64 *)&v34 + 1), -1, 0LL, 0, *v7, v7[1]);
  result = (__int64 *)sub_140122670((PVOID)SystemArgument2);
  if ( (int)result < 0 )
  {
LABEL_155:
    if ( (_QWORD)v34 )
      result = (__int64 *)sub_1400F5FEC(SystemArgument2, v9, v28, v34, *((__int64 *)&v34 + 1));
    if ( v7 )
      result = (__int64 *)sub_140122C20(SystemArgument2, v7);
    if ( v10 )
    {
      sub_1400EB5E0(SystemArgument2);
      result = (__int64 *)sub_1400F23BC((PVOID)SystemArgument2);
      if ( (int)result < 0 )
        *(_QWORD *)(SystemArgument2 + 136) |= 0x40000000uLL;
    }
  }
  return result;
}
