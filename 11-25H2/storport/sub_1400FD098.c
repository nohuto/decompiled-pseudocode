/*
 * XREFs of sub_1400FD098 @ 0x1400FD098
 * Callers:
 *     sub_14010A138 @ 0x14010A138 (sub_14010A138.c)
 * Callees:
 *     sub_140107454 @ 0x140107454 (sub_140107454.c)
 *     sub_140112680 @ 0x140112680 (sub_140112680.c)
 *     sub_1401130D0 @ 0x1401130D0 (sub_1401130D0.c)
 *     sub_140113264 @ 0x140113264 (sub_140113264.c)
 *     sub_1401133D8 @ 0x1401133D8 (sub_1401133D8.c)
 *     sub_1401135B8 @ 0x1401135B8 (sub_1401135B8.c)
 *     sub_1401138CC @ 0x1401138CC (sub_1401138CC.c)
 *     sub_140113BA0 @ 0x140113BA0 (sub_140113BA0.c)
 *     sub_140113D7C @ 0x140113D7C (sub_140113D7C.c)
 *     sub_140113EA8 @ 0x140113EA8 (sub_140113EA8.c)
 */

__int64 __fastcall sub_1400FD098(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  _BYTE *v7; // rsi
  char v8; // r14
  unsigned int v9; // r15d
  unsigned int v10; // r10d
  unsigned int *v11; // r9
  __int64 v12; // rax
  _BYTE *v13; // r11
  unsigned __int64 v14; // r8
  char v15; // r11
  unsigned __int8 v16; // r14
  unsigned int v17; // r15d
  unsigned int v18; // r10d
  unsigned int *v19; // r9
  __int64 v20; // rax
  unsigned __int64 v21; // r8
  ULONG CurrentProcessorNumber; // eax
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rdx
  ULONG v26; // r15d
  char v27; // cl
  unsigned int v29; // eax

  v3 = 0;
  if ( *(_BYTE *)(a2 + 2) != 40 )
  {
    v16 = *(_BYTE *)(a2 + 10);
    v7 = (_BYTE *)(a2 + 72);
    goto LABEL_41;
  }
  v7 = 0LL;
  v8 = 0;
  if ( !*(_DWORD *)(a2 + 20) )
  {
    v9 = *(_DWORD *)(a2 + 56);
    v10 = 0;
    if ( v9 )
    {
      v11 = (unsigned int *)(a2 + 120);
      do
      {
        v12 = *v11;
        v13 = v7;
        if ( (unsigned int)v12 >= 0x80 )
        {
          v14 = *(unsigned int *)(a2 + 16);
          if ( (unsigned int)v12 < (unsigned int)v14 )
          {
            if ( *(_DWORD *)(v12 + a2) == 64 )
            {
              if ( v12 + 40 <= v14 )
              {
                if ( *(_BYTE *)(v12 + a2 + 10) )
                  v7 = (_BYTE *)(v12 + a2 + 24);
                break;
              }
            }
            else if ( *(_DWORD *)(v12 + a2) == 65 )
            {
              if ( v12 + 56 <= v14 )
              {
                v8 = 1;
                if ( !*(_BYTE *)(v12 + a2 + 10) )
                  break;
                v7 = (_BYTE *)(v12 + a2 + 24);
              }
            }
            else if ( *(_DWORD *)(v12 + a2) == 66 && v12 + 40 <= v14 )
            {
              v7 = (_BYTE *)(v12 + a2 + 32);
              if ( !*(_DWORD *)(v12 + a2 + 12) )
                v7 = v13;
              break;
            }
            if ( v8 )
              break;
          }
        }
        ++v10;
        ++v11;
      }
      while ( v10 < v9 );
    }
  }
  v15 = 0;
  v16 = 0;
  if ( !*(_DWORD *)(a2 + 20) )
  {
    v17 = *(_DWORD *)(a2 + 56);
    v18 = 0;
    if ( v17 )
    {
      v19 = (unsigned int *)(a2 + 120);
      do
      {
        v20 = *v19;
        if ( (unsigned int)v20 >= 0x80 )
        {
          v21 = *(unsigned int *)(a2 + 16);
          if ( (unsigned int)v20 < (unsigned int)v21 )
          {
            if ( *(_DWORD *)(v20 + a2) == 64 )
            {
              if ( v20 + 40 <= v21 )
              {
                v16 = *(_BYTE *)(v20 + a2 + 10);
                break;
              }
            }
            else if ( *(_DWORD *)(v20 + a2) == 65 )
            {
              if ( v20 + 56 <= v21 )
              {
                v16 = *(_BYTE *)(v20 + a2 + 10);
                v15 = 1;
              }
            }
            else if ( *(_DWORD *)(v20 + a2) == 66 && v20 + 40 <= v21 )
            {
              break;
            }
            if ( v15 )
              break;
          }
        }
        ++v18;
        ++v19;
      }
      while ( v18 < v17 );
    }
  }
LABEL_41:
  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  LOBYTE(v25) = 6;
  v26 = CurrentProcessorNumber;
  if ( !v7 || v16 < 6u )
  {
LABEL_80:
    LOBYTE(v24) = 32;
    goto LABEL_81;
  }
  v27 = *v7;
  if ( *v7 == 0xA2 || v27 == -75 )
    goto LABEL_52;
  if ( (*(_BYTE *)(a1 + 112) & 2) != 0 && *(_DWORD *)(a1 + 64) )
  {
    if ( v27 != -96 )
    {
      if ( v27 == 37 || v27 == -98 )
        return (unsigned int)sub_1401138CC(a1, v25, a2, v7);
LABEL_52:
      if ( v27 == 77 )
        return (unsigned int)sub_140113264(a1, v25, a2, v7);
      if ( v27 == 18 )
        return (unsigned int)sub_1401130D0(a1, v25, a2, v7);
      if ( ((v27 - 26) & 0xBF) == 0 )
        return (unsigned int)sub_1401135B8(a1, v25, a2, v7);
      if ( ((v27 - 21) & 0xBF) == 0 )
        return (unsigned int)sub_1401133D8(a1, v25, a2, v7);
      switch ( v27 )
      {
        case 47:
        case -113:
        case 0:
        case 27:
          *(_BYTE *)(a2 + 3) = 1;
          break;
        case 53:
          v29 = sub_140113D7C(a1, a3, a2, v24, CurrentProcessorNumber);
LABEL_73:
          v3 = v29;
          if ( v29 == -2147483631 || v29 == -1073741300 )
          {
            sub_140107454(a1, a3, v26);
            return 259;
          }
          return v3;
        case 66:
          v29 = sub_140113EA8(a1, a3, a2, (_DWORD)v7, CurrentProcessorNumber);
          goto LABEL_73;
        case 40:
        case -120:
        case 42:
        case -118:
          v29 = sub_140113BA0(a1, a3, a2, (_DWORD)v7, CurrentProcessorNumber);
          goto LABEL_73;
        default:
          LOBYTE(v24) = 32;
          LOBYTE(v23) = 5;
          sub_140112680(a2, v25, v23, v24, 0);
          return (unsigned int)-1073741808;
      }
      return v3;
    }
    goto LABEL_80;
  }
  LOBYTE(v24) = 37;
  LOBYTE(v25) = 8;
LABEL_81:
  LOBYTE(v23) = 5;
  sub_140112680(a2, v25, v23, v24, 0);
  return 3221225488LL;
}
