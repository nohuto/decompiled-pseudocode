/*
 * XREFs of ?PropertyChangeHelper@TextInputStateAdapter@@AEAAJG_N@Z @ 0x1801D2AB0
 * Callers:
 *     ?OnConnected@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801D2910 (-OnConnected@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?OnPropertyChanged@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@G@Z @ 0x1801D2A00 (-OnPropertyChanged@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@G@Z.c)
 * Callees:
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     McTemplateU0sqq_EventWriteTransfer @ 0x1801A0CB4 (McTemplateU0sqq_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TextInputStateAdapter::PropertyChangeHelper(TextInputStateAdapter *this, unsigned __int16 a2)
{
  unsigned int v2; // esi
  unsigned int v4; // ebx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9
  unsigned int v10; // ecx
  _BYTE v11[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v13; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+48h] [rbp-B8h] BYREF
  int v16; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A0h] BYREF
  int v20; // [rsp+68h] [rbp-98h]
  __m128i si128; // [rsp+70h] [rbp-90h] BYREF
  __int128 v22; // [rsp+80h] [rbp-80h] BYREF
  int v23; // [rsp+90h] [rbp-70h]
  _BYTE v24[96]; // [rsp+A0h] [rbp-60h] BYREF

  v2 = a2;
  v14 = 0LL;
  v17 = 0LL;
  if ( a2 >= 0x28u || !*((_BYTE *)this + a2 + 57) )
    goto LABEL_16;
  v12 = 0;
  v18 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  v13 = 0;
  v11[0] = 0;
  v16 = 0;
  memset_0(v24, 0, 0x58uLL);
  v15 = -1;
  v19 = 0LL;
  v20 = 0;
  v23 = 0;
  v22 = 0LL;
  if ( v2 > 0x15 )
  {
    if ( v2 <= 0x1F )
    {
      switch ( v2 )
      {
        case 0x1Fu:
          v6 = (*(__int64 (__fastcall **)(_QWORD, __int16 *))(**((_QWORD **)this + 5) + 280LL))(
                 *((_QWORD *)this + 5),
                 &v13);
          v4 = v6;
          if ( v6 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_17;
            v9 = 1147LL;
            goto LABEL_42;
          }
          v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int16 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                 *((_QWORD *)this + 3),
                 (unsigned __int16)v2,
                 &v13,
                 2LL);
          v4 = v6;
          if ( v6 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_17;
            v9 = 1213LL;
            goto LABEL_42;
          }
          goto LABEL_16;
        case 0x16u:
          v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 208LL))(
                 *((_QWORD *)this + 5),
                 v24);
          v4 = v6;
          if ( v6 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_17;
            v9 = 986LL;
            goto LABEL_42;
          }
          v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                 *((_QWORD *)this + 3),
                 (unsigned __int16)v2,
                 v24,
                 88LL);
          v4 = v6;
          if ( v6 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_17;
            v9 = 1298LL;
            goto LABEL_42;
          }
          goto LABEL_16;
        case 0x17u:
          v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 216LL))(
                 *((_QWORD *)this + 5),
                 &v17);
          v4 = v6;
          if ( v6 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_17;
            v9 = 992LL;
            goto LABEL_42;
          }
          v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                 *((_QWORD *)this + 3),
                 (unsigned __int16)v2,
                 &v17,
                 8LL);
          v4 = v6;
          if ( v6 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_17;
            v9 = 1280LL;
            goto LABEL_42;
          }
          goto LABEL_16;
        case 0x18u:
          v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 224LL))(
                 *((_QWORD *)this + 5),
                 v11);
          v4 = v6;
          if ( v6 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_17;
            v9 = 1055LL;
            goto LABEL_42;
          }
          break;
        case 0x19u:
          v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 232LL))(
                 *((_QWORD *)this + 5),
                 v11);
          v4 = v6;
          if ( v6 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_17;
            v9 = 1127LL;
            goto LABEL_42;
          }
          break;
        case 0x1Au:
          v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 240LL))(
                 *((_QWORD *)this + 5),
                 v11);
          v4 = v6;
          if ( v6 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_17;
            v9 = 1137LL;
            goto LABEL_42;
          }
          break;
        case 0x1Bu:
          v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 248LL))(*((_QWORD *)this + 5), &v12);
          v4 = v6;
          if ( v6 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_17;
            v9 = 1132LL;
            goto LABEL_42;
          }
          goto LABEL_77;
        case 0x1Du:
          v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 264LL))(
                 *((_QWORD *)this + 5),
                 &v18);
          v4 = v6;
          if ( v6 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_17;
            v9 = 1079LL;
            goto LABEL_42;
          }
          v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                 *((_QWORD *)this + 3),
                 (unsigned __int16)v2,
                 &v18,
                 8LL);
          v4 = v6;
          if ( v6 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_17;
            v9 = 1222LL;
            goto LABEL_42;
          }
          goto LABEL_16;
        case 0x1Eu:
          v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 272LL))(
                 *((_QWORD *)this + 5),
                 v11);
          v4 = v6;
          if ( v6 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_17;
            v9 = 1142LL;
            goto LABEL_42;
          }
          break;
      }
      goto LABEL_64;
    }
    switch ( v2 )
    {
      case ' ':
        v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 288LL))(
               *((_QWORD *)this + 5),
               &v14);
        v4 = v6;
        if ( v6 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_17;
          v9 = 1152LL;
          goto LABEL_42;
        }
        v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               (unsigned __int16)v2,
               &v14,
               8LL);
        v4 = v6;
        if ( v6 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_17;
          v9 = 1271LL;
          goto LABEL_42;
        }
        goto LABEL_16;
      case '!':
        v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 296LL))(*((_QWORD *)this + 5), v11);
        v4 = v6;
        if ( v6 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_17;
          v9 = 1157LL;
          goto LABEL_42;
        }
        goto LABEL_64;
      case '"':
        v6 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 5) + 304LL))(
               *((_QWORD *)this + 5),
               &v22);
        v4 = v6;
        if ( v6 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_17;
          v9 = 1162LL;
          goto LABEL_42;
        }
        v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               (unsigned __int16)v2,
               &v22,
               20LL);
        v4 = v6;
        if ( v6 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_17;
          v9 = 1335LL;
          goto LABEL_42;
        }
        goto LABEL_16;
      case '#':
        v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 312LL))(
               *((_QWORD *)this + 5),
               &v14);
        v4 = v6;
        if ( v6 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_17;
          v9 = 1167LL;
          goto LABEL_42;
        }
        break;
      case '$':
        v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 320LL))(
               *((_QWORD *)this + 5),
               &v14);
        v4 = v6;
        if ( v6 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_17;
          v9 = 1172LL;
          goto LABEL_42;
        }
        break;
      case '%':
        v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 328LL))(*((_QWORD *)this + 5), v11);
        v4 = v6;
        if ( v6 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_17;
          v9 = 1177LL;
          goto LABEL_42;
        }
        goto LABEL_64;
      case '&':
        v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 336LL))(
               *((_QWORD *)this + 5),
               &v17);
        v4 = v6;
        if ( v6 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_17;
          v9 = 998LL;
          goto LABEL_42;
        }
        v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               (unsigned __int16)v2,
               &v17,
               8LL);
        v4 = v6;
        if ( v6 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_17;
          v9 = 1289LL;
          goto LABEL_42;
        }
        goto LABEL_16;
      case '\'':
        v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 344LL))(*((_QWORD *)this + 5), v11);
        v4 = v6;
        if ( v6 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_17;
          v9 = 1061LL;
          goto LABEL_42;
        }
        goto LABEL_64;
      default:
        v10 = v2 - 38;
LABEL_163:
        if ( v10 != 1 )
          goto LABEL_16;
LABEL_64:
        v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               (unsigned __int16)v2,
               v11,
               1LL);
        v4 = v6;
        if ( v6 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_17;
          v9 = 1240LL;
          goto LABEL_42;
        }
        goto LABEL_16;
    }
LABEL_183:
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
           *((_QWORD *)this + 3),
           (unsigned __int16)v2,
           &v14,
           8LL);
    v4 = v6;
    if ( v6 < 0 )
    {
      if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
        goto LABEL_17;
      v9 = 1261LL;
      goto LABEL_42;
    }
    goto LABEL_16;
  }
  if ( v2 == 21 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 200LL))(*((_QWORD *)this + 5), &v16);
    v4 = v6;
    if ( v6 < 0 )
    {
      if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
        goto LABEL_17;
      v9 = 1049LL;
      goto LABEL_42;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *, __int64))(**((_QWORD **)this + 3) + 24LL))(
           *((_QWORD *)this + 3),
           21LL,
           &v16,
           4LL);
    v4 = v6;
    if ( v6 < 0 )
    {
      if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
        goto LABEL_17;
      v9 = 1249LL;
      goto LABEL_42;
    }
    goto LABEL_16;
  }
  if ( v2 > 9 )
  {
    switch ( v2 )
    {
      case 0xAu:
        v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 112LL))(*((_QWORD *)this + 5), &v12);
        v4 = v6;
        if ( v6 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_17;
          v9 = 1073LL;
          goto LABEL_42;
        }
        goto LABEL_77;
      case 0xDu:
        v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 136LL))(*((_QWORD *)this + 5), &v12);
        v4 = v6;
        if ( v6 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_17;
          v9 = 1022LL;
          goto LABEL_42;
        }
        goto LABEL_77;
      case 0xEu:
        v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 144LL))(*((_QWORD *)this + 5), &v12);
        v4 = v6;
        if ( v6 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_17;
          v9 = 1112LL;
          goto LABEL_42;
        }
        goto LABEL_77;
      case 0xFu:
        v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 152LL))(*((_QWORD *)this + 5), &v12);
        v4 = v6;
        if ( v6 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_17;
          v9 = 1117LL;
          goto LABEL_42;
        }
        goto LABEL_77;
      case 0x10u:
        v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 160LL))(
               *((_QWORD *)this + 5),
               &v19);
        v4 = v6;
        if ( v6 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_17;
          v9 = 1122LL;
          goto LABEL_42;
        }
        v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               (unsigned __int16)v2,
               &v19,
               12LL);
        v4 = v6;
        if ( v6 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_17;
          v9 = 1317LL;
          goto LABEL_42;
        }
        goto LABEL_16;
      case 0x12u:
        v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 176LL))(*((_QWORD *)this + 5), &v12);
        v4 = v6;
        if ( v6 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_17;
          v9 = 1028LL;
          goto LABEL_42;
        }
        if ( *((_DWORD *)this + 25) == v12 )
          goto LABEL_16;
        goto LABEL_77;
      case 0x13u:
        v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 184LL))(*((_QWORD *)this + 5), v11);
        v4 = v6;
        if ( v6 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_17;
          v9 = 1037LL;
          goto LABEL_42;
        }
        goto LABEL_64;
      case 0x14u:
        v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 192LL))(*((_QWORD *)this + 5), v11);
        v4 = v6;
        if ( v6 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_17;
          v9 = 1043LL;
          goto LABEL_42;
        }
        goto LABEL_64;
    }
    v10 = v2 - 19;
    goto LABEL_163;
  }
  switch ( v2 )
  {
    case 9u:
      v6 = (*(__int64 (__fastcall **)(_QWORD, __m128i *))(**((_QWORD **)this + 5) + 104LL))(
             *((_QWORD *)this + 5),
             &si128);
      v4 = v6;
      if ( v6 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_17;
        v9 = 1085LL;
        goto LABEL_42;
      }
LABEL_52:
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __m128i *, __int64))(**((_QWORD **)this + 3) + 24LL))(
             *((_QWORD *)this + 3),
             (unsigned __int16)v2,
             &si128,
             16LL);
      v4 = v6;
      if ( v6 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_17;
        v9 = 1308LL;
        goto LABEL_42;
      }
      goto LABEL_16;
    case 0u:
      v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 32LL))(*((_QWORD *)this + 5), &v12);
      v4 = v6;
      if ( v6 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_17;
        v9 = 1097LL;
        goto LABEL_42;
      }
      goto LABEL_77;
    case 1u:
      v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 40LL))(*((_QWORD *)this + 5), &v14);
      v4 = v6;
      if ( v6 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_17;
        v9 = 1102LL;
        goto LABEL_42;
      }
      goto LABEL_183;
    case 2u:
      v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 48LL))(*((_QWORD *)this + 5), &v12);
      v4 = v6;
      if ( v6 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        {
          v9 = 980LL;
          goto LABEL_42;
        }
        goto LABEL_17;
      }
      goto LABEL_77;
    case 3u:
      v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 56LL))(*((_QWORD *)this + 5), &v14);
      v4 = v6;
      if ( v6 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        {
          v9 = 1004LL;
          goto LABEL_42;
        }
        goto LABEL_17;
      }
      goto LABEL_183;
    case 4u:
      v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 64LL))(*((_QWORD *)this + 5), &v15);
      v4 = v6;
      if ( v6 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        {
          v9 = 1010LL;
          goto LABEL_42;
        }
        goto LABEL_17;
      }
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, __int64))(**((_QWORD **)this + 3) + 24LL))(
             *((_QWORD *)this + 3),
             (unsigned __int16)v2,
             &v15,
             4LL);
      v4 = v6;
      if ( v6 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        {
          v9 = 1326LL;
          goto LABEL_42;
        }
        goto LABEL_17;
      }
LABEL_16:
      v4 = 0;
      goto LABEL_17;
    case 5u:
      v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 72LL))(*((_QWORD *)this + 5), &v12);
      v4 = v6;
      if ( v6 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        {
          v9 = 1016LL;
          goto LABEL_42;
        }
        goto LABEL_17;
      }
      goto LABEL_77;
    case 6u:
      v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 80LL))(*((_QWORD *)this + 5), &v12);
      v4 = v6;
      if ( v6 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        {
          v9 = 1107LL;
          goto LABEL_42;
        }
        goto LABEL_17;
      }
      goto LABEL_77;
  }
  if ( v2 != 7 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, __m128i *))(**((_QWORD **)this + 5) + 96LL))(*((_QWORD *)this + 5), &si128);
    v4 = v6;
    if ( v6 < 0 )
    {
      if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
      {
        v9 = 1067LL;
LABEL_42:
        McTemplateU0sqq_EventWriteTransfer(v8, v7, "TextInputStateAdapter::PropertyChangeHelper", v9, v6);
        goto LABEL_17;
      }
      goto LABEL_17;
    }
    goto LABEL_52;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 88LL))(*((_QWORD *)this + 5), &v12);
  v4 = v6;
  if ( v6 >= 0 )
  {
LABEL_77:
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, __int64))(**((_QWORD **)this + 3) + 24LL))(
           *((_QWORD *)this + 3),
           (unsigned __int16)v2,
           &v12,
           4LL);
    v4 = v6;
    if ( v6 < 0 )
    {
      if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
        goto LABEL_17;
      v9 = 1204LL;
      goto LABEL_42;
    }
    goto LABEL_16;
  }
  if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
  {
    v9 = 1091LL;
    goto LABEL_42;
  }
LABEL_17:
  MsgRelease(v14);
  MsgRelease(v17);
  return v4;
}
