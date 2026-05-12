/*
 * XREFs of NvmeMapStatus @ 0x140100B88
 * Callers:
 *     NvmeNamespaceCompleteNvmRequest @ 0x140102130 (NvmeNamespaceCompleteNvmRequest.c)
 * Callees:
 *     SetSrbSenseData @ 0x140117078 (SetSrbSenseData.c)
 */

__int64 __fastcall NvmeMapStatus(__int64 a1)
{
  char v1; // bl
  unsigned int v3; // r8d
  unsigned int i; // edx
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int16 v7; // ax
  unsigned int v8; // r10d
  __int16 v9; // ax
  char v10; // r9
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  char v17; // dl
  char v18; // r8
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // r10d
  int v38; // ecx
  char v39; // al
  unsigned int v40; // r10d
  char v41; // al

  v1 = 0;
  if ( *(_BYTE *)(a1 + 2) == 40 )
  {
    v3 = *(_DWORD *)(a1 + 56);
    if ( v3 )
    {
      for ( i = 0; i < v3; ++i )
      {
        v5 = *(unsigned int *)(a1 + 4LL * i + 120);
        if ( (unsigned int)v5 >= 0x80 && (unsigned int)v5 < *(_DWORD *)(a1 + 16) )
        {
          v6 = a1 + v5;
          if ( *(_DWORD *)(a1 + v5) == 67 )
            goto LABEL_10;
        }
      }
    }
  }
  v6 = 0LL;
LABEL_10:
  v7 = *(_WORD *)(v6 + 86);
  v8 = v7;
  v9 = v7 & 0xE00;
  if ( v9 )
  {
    if ( v9 == 512 )
    {
      v37 = v8 >> 1;
      if ( (unsigned __int8)v37 > 0x80u )
      {
        if ( (unsigned __int8)v37 == 129 )
          goto LABEL_108;
        v38 = (unsigned __int8)v37 - 130;
        if ( (unsigned __int8)v37 == 130 )
        {
          SetSrbSenseData(a1, 4, 7, 36, 0);
          goto LABEL_116;
        }
      }
      else
      {
        if ( (unsigned __int8)v37 == 128 )
          goto LABEL_108;
        if ( (unsigned __int8)v37 <= 0x11u )
        {
          if ( (unsigned __int8)v37 == 17 )
            goto LABEL_90;
          if ( (unsigned __int8)v37 <= 9u )
          {
            if ( (unsigned __int8)v37 == 9 )
              goto LABEL_108;
            if ( !(_BYTE)v37 )
              goto LABEL_81;
            switch ( (unsigned __int8)v37 )
            {
              case 1u:
                v39 = 38;
                goto LABEL_109;
              case 2u:
              case 3u:
              case 5u:
LABEL_81:
                v39 = 0;
LABEL_109:
                v18 = 5;
                goto LABEL_110;
              case 6u:
                goto LABEL_108;
            }
            v38 = (unsigned __int8)v37 - 7;
            if ( (unsigned __int8)v37 == 7 )
              goto LABEL_81;
            goto LABEL_113;
          }
          switch ( (unsigned __int8)v37 )
          {
            case 0xAu:
              v39 = 49;
              v1 = 1;
              goto LABEL_109;
            case 0xBu:
              goto LABEL_90;
            case 0xCu:
            case 0xDu:
            case 0xEu:
            case 0xFu:
              goto LABEL_108;
            case 0x10u:
LABEL_90:
              v18 = 6;
LABEL_91:
              v39 = 0;
LABEL_110:
              v10 = v39;
              goto LABEL_138;
          }
LABEL_116:
          v18 = 0;
          goto LABEL_91;
        }
        if ( (unsigned __int8)v37 <= 0x1Au )
        {
          if ( (unsigned __int8)v37 != 26 && (unsigned __int8)v37 != 18 )
          {
            if ( (unsigned __int8)v37 != 19
              && (unsigned __int8)v37 != 20
              && (unsigned __int8)v37 != 21
              && (unsigned __int8)v37 != 22 )
            {
              if ( (unsigned int)(unsigned __int8)v37 - 24 <= 1 )
                goto LABEL_81;
              goto LABEL_116;
            }
            goto LABEL_108;
          }
          goto LABEL_90;
        }
        switch ( (unsigned __int8)v37 )
        {
          case 0x1Bu:
            goto LABEL_108;
          case 0x1Cu:
            goto LABEL_108;
          case 0x1Eu:
            goto LABEL_108;
          case 0x1Fu:
            goto LABEL_108;
          case 0x20u:
            goto LABEL_108;
        }
        v38 = (unsigned __int8)v37 - 33;
        if ( (unsigned __int8)v37 == 33 )
          goto LABEL_108;
      }
LABEL_113:
      if ( v38 != 1 )
        goto LABEL_116;
LABEL_108:
      v39 = 36;
      goto LABEL_109;
    }
    if ( v9 != 1024 )
      goto LABEL_136;
    v40 = v8 >> 1;
    switch ( (unsigned __int8)v40 )
    {
      case 0x80u:
        v10 = 3;
        break;
      case 0x81u:
        v41 = 3;
        v10 = 17;
        goto LABEL_135;
      case 0x82u:
        v41 = 3;
        v10 = 16;
        v1 = 1;
        goto LABEL_135;
      case 0x83u:
        v41 = 3;
        v10 = 16;
        goto LABEL_130;
      case 0x84u:
        v10 = 16;
        v1 = 3;
        break;
      case 0x85u:
        v41 = 14;
        v10 = 29;
        goto LABEL_135;
      case 0x86u:
        v41 = 7;
        v10 = 32;
LABEL_130:
        v1 = 2;
        goto LABEL_135;
      default:
        v41 = 0;
        v10 = 0;
LABEL_135:
        v18 = v41;
        goto LABEL_138;
    }
    v41 = 3;
    goto LABEL_135;
  }
  v10 = 35;
  v11 = (unsigned __int8)(v8 >> 1);
  if ( v11 > 0x23 )
  {
    v35 = v11 - 128;
    if ( !v35 )
    {
      v18 = 5;
      v10 = 33;
      goto LABEL_138;
    }
    v36 = v35 - 1;
    if ( v36 )
    {
      if ( v36 == 1 )
      {
        v17 = 4;
        v18 = 2;
        v1 = (v8 & 0x8000u) == 0;
        v10 = 4;
        return SetSrbSenseData(a1, v17, v18, v10, v1);
      }
      goto LABEL_136;
    }
LABEL_26:
    v18 = 3;
LABEL_137:
    v10 = 0;
    goto LABEL_138;
  }
  if ( (unsigned __int8)(v8 >> 1) == 35 )
  {
    v17 = 23;
    v18 = 5;
    v10 = 32;
    v1 = 2;
    return SetSrbSenseData(a1, v17, v18, v10, v1);
  }
  if ( v11 > 0xF )
  {
    v17 = 24;
    if ( v11 > 0x18 )
    {
      v30 = v11 - 25;
      if ( !v30 )
      {
        v18 = 5;
        v10 = 42;
        goto LABEL_138;
      }
      v31 = v30 - 1;
      if ( !v31 )
        goto LABEL_57;
      v32 = v31 - 1;
      if ( v32 )
      {
        v33 = v32 - 1;
        if ( v33 )
        {
          v34 = v33 - 1;
          if ( !v34 )
          {
            v10 = 4;
            v18 = 2;
            v1 = 4;
            return SetSrbSenseData(a1, v17, v18, v10, v1);
          }
          if ( v34 != 1 )
            goto LABEL_136;
          goto LABEL_57;
        }
        v17 = 4;
        v18 = 4;
LABEL_30:
        v10 = 0;
        return SetSrbSenseData(a1, v17, v18, v10, v1);
      }
LABEL_40:
      v18 = 11;
      goto LABEL_137;
    }
    if ( v11 == 24 )
      goto LABEL_57;
    v24 = v11 - 16;
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( v25 )
      {
        v26 = v25 - 1;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( !v27 )
            goto LABEL_57;
          v28 = v27 - 1;
          if ( !v28 )
            goto LABEL_57;
          v29 = v28 - 1;
          if ( v29 )
          {
            if ( v29 != 1 )
              goto LABEL_136;
            goto LABEL_57;
          }
        }
LABEL_28:
        v18 = 5;
        v10 = 32;
        goto LABEL_138;
      }
    }
LABEL_37:
    v18 = 5;
    goto LABEL_137;
  }
  if ( v11 == 15 )
    goto LABEL_37;
  if ( v11 > 7 )
  {
    v19 = v11 - 8;
    if ( !v19 )
      goto LABEL_40;
    v20 = v19 - 1;
    if ( !v20 )
      goto LABEL_40;
    v21 = v20 - 1;
    if ( !v21 )
      goto LABEL_40;
    v22 = v21 - 1;
    if ( !v22 )
    {
      v18 = 5;
      v10 = 32;
      v1 = 9;
      goto LABEL_138;
    }
    v23 = v22 - 1;
    if ( !v23 )
    {
      v18 = 5;
      v10 = 44;
      goto LABEL_138;
    }
    if ( v23 - 1 > 1 )
      goto LABEL_136;
    goto LABEL_37;
  }
  if ( v11 == 7 )
    goto LABEL_40;
  if ( !(unsigned __int8)(v8 >> 1) )
  {
    v17 = 1;
    v18 = 0;
    goto LABEL_30;
  }
  v12 = v11 - 1;
  if ( !v12 )
    goto LABEL_28;
  v13 = v12 - 1;
  if ( !v13 )
  {
LABEL_57:
    v18 = 5;
    v10 = 36;
    goto LABEL_138;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v18 = 5;
    goto LABEL_138;
  }
  v15 = v14 - 1;
  if ( !v15 )
    goto LABEL_26;
  v16 = v15 - 1;
  if ( !v16 )
  {
    v18 = 11;
    v1 = 8;
    v10 = 11;
LABEL_138:
    v17 = 4;
    return SetSrbSenseData(a1, v17, v18, v10, v1);
  }
  if ( v16 != 1 )
  {
LABEL_136:
    v18 = 0;
    goto LABEL_137;
  }
  v17 = 4;
  v10 = 68;
  v18 = 4;
  return SetSrbSenseData(a1, v17, v18, v10, v1);
}
