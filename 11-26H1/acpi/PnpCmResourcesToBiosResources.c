/*
 * XREFs of PnpCmResourcesToBiosResources @ 0x1400B8A44
 * Callers:
 *     ACPIInitStartDevice @ 0x1400420EC (ACPIInitStartDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001B3DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_L @ 0x1400385BC (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_LL @ 0x14004EF4C (WPP_RECORDER_SF_LL.c)
 *     PnpiCmResourceToBiosAddress @ 0x1400B92DC (PnpiCmResourceToBiosAddress.c)
 *     PnpiCmResourceToBiosAddressDouble @ 0x1400B93D0 (PnpiCmResourceToBiosAddressDouble.c)
 *     PnpiCmResourceToBiosAddressQuad @ 0x1400B94C8 (PnpiCmResourceToBiosAddressQuad.c)
 *     PnpiCmResourceToBiosExtendedIrq @ 0x1400B9598 (PnpiCmResourceToBiosExtendedIrq.c)
 */

__int64 __fastcall PnpCmResourcesToBiosResources(__int64 a1, __int64 a2, unsigned __int8 *a3, unsigned int a4)
{
  unsigned __int8 v4; // r14
  unsigned int v5; // esi
  __int64 v6; // r15
  __int64 v9; // r10
  signed int v10; // ebx
  unsigned __int64 v11; // rdi
  unsigned __int8 *v12; // rax
  void *v13; // rdx
  unsigned __int16 v14; // r13
  int v15; // r9d
  int v16; // edx
  unsigned int v17; // edx
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // edx
  char v21; // al
  unsigned int v22; // edx
  __int16 v23; // ax
  unsigned int m; // ecx
  __int64 v25; // rdx
  char v26; // al
  char v27; // cl
  __int16 v28; // ax
  char v29; // cl
  unsigned int k; // ecx
  unsigned __int16 v31; // ax
  char v32; // cl
  unsigned int v33; // edx
  int v34; // eax
  char v35; // dl
  unsigned int j; // ecx
  bool v37; // cf
  char v38; // al
  char v39; // r8
  char v40; // r9
  unsigned int i; // ecx
  char v42; // al
  signed int v43; // eax
  unsigned int v44; // edx
  unsigned int v46; // ecx
  unsigned int v47; // eax
  _BYTE *v48; // rbp
  unsigned __int64 v50; // [rsp+90h] [rbp+18h]

  v4 = *a3;
  v5 = 0;
  v6 = a4;
  v9 = a1;
  v10 = 0;
  v11 = (unsigned __int64)a3;
  v12 = &a3[a4];
  while ( 1 )
  {
    v50 = (unsigned __int64)v12;
    v13 = &WPP_52f1d9ae2bb33d21e69d5020d30b72bd_Traceguids;
    if ( (v4 & 0x80u) == 0 )
    {
      v14 = (v4 & 7) + 1;
      v4 &= 0x78u;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_9;
      v15 = 10;
      goto LABEL_8;
    }
    if ( v11 >= (unsigned __int64)(v12 - 2) )
      goto LABEL_133;
    v14 = *(_WORD *)(v11 + 1) + 3;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 11;
LABEL_8:
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_LL(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v13,
        14,
        v15,
        (__int64)&WPP_52f1d9ae2bb33d21e69d5020d30b72bd_Traceguids,
        v4,
        v14);
      v9 = a1;
      v13 = &WPP_52f1d9ae2bb33d21e69d5020d30b72bd_Traceguids;
    }
LABEL_9:
    if ( v4 == 120 )
      break;
    v16 = v4;
    if ( v4 > 0x85u )
    {
      switch ( v4 )
      {
        case 0x86u:
          if ( (unsigned __int64)&a3[v6 - v11] < 0xC )
            return (unsigned int)-1072431089;
          *(_BYTE *)(v11 + 3) = 0;
          v44 = 0;
          *(_QWORD *)(v11 + 4) = 0LL;
          while ( v44 < *(_DWORD *)(a2 + 16) )
          {
            v18 = 5LL * v44;
            if ( *(_BYTE *)(a2 + 20LL * v44 + 20) == 3 )
            {
              *(_DWORD *)(v11 + 4) = *(_DWORD *)(a2 + 20LL * v44 + 24);
              v34 = *(_DWORD *)(a2 + 20LL * v44 + 32) >> 8;
LABEL_120:
              *(_DWORD *)(v11 + 8) = v34;
LABEL_121:
              v21 = (*(_BYTE *)(a2 + 4 * v18 + 22) & 1) == 0;
LABEL_122:
              *(_BYTE *)(v11 + 3) = v21;
LABEL_123:
              *(_BYTE *)(a2 + 4 * v18 + 20) = 0;
              goto LABEL_124;
            }
            ++v44;
          }
          goto LABEL_124;
        case 0x87u:
          if ( (unsigned __int64)&a3[v6 - v11] < 0x1A )
            return (unsigned int)-1072431089;
          v43 = PnpiCmResourceToBiosAddressDouble(v11, a2, 3LL);
          goto LABEL_111;
        case 0x88u:
          if ( (unsigned __int64)&a3[v6 - v11] < 0x10 )
            return (unsigned int)-1072431089;
          v43 = PnpiCmResourceToBiosAddress(v11, a2, 3LL);
          goto LABEL_111;
        case 0x89u:
          if ( (unsigned __int64)&a3[v6 - v11] < 9 )
            return (unsigned int)-1072431089;
          v43 = PnpiCmResourceToBiosExtendedIrq(v9, v11, a2);
          goto LABEL_111;
        case 0x8Au:
          if ( (unsigned __int64)&a3[v6 - v11] < 0x2E )
            return (unsigned int)-1072431089;
          v43 = PnpiCmResourceToBiosAddressQuad(v11, a2, 3LL);
LABEL_111:
          v10 = v43;
          goto LABEL_112;
        case 0x8Cu:
          if ( (unsigned __int64)&a3[v6 - v11] < 0x17 )
            return (unsigned int)-1072431089;
          v38 = *(_BYTE *)(v11 + 4);
          v39 = 0;
          if ( v38 == 1 )
          {
            v40 = 0;
LABEL_93:
            for ( i = 0; i < *(_DWORD *)(a2 + 16); ++i )
            {
              v42 = *(_BYTE *)(a2 + 20LL * i + 20);
              if ( v40 )
              {
                if ( v42 == 2 && (*(_BYTE *)(a2 + 20LL * i + 22) & 0x10) != 0 )
                {
LABEL_98:
                  v39 = 1;
                  *(_BYTE *)(a2 + 20LL * i + 20) = 0;
                  break;
                }
              }
              else if ( v42 == -124 )
              {
                goto LABEL_98;
              }
            }
          }
          else if ( !v38 )
          {
            v40 = 1;
            goto LABEL_93;
          }
          v37 = v39 != 0;
LABEL_100:
          v10 = v37 ? 0 : 0xC0000001;
          goto LABEL_112;
        case 0x8Du:
          return (unsigned int)((unsigned __int64)&a3[v6 - v11] < 0x12 ? -1072431089 : -1073741822);
        case 0x8Eu:
          if ( (unsigned __int64)&a3[v6 - v11] < 0xC )
            return (unsigned int)-1072431089;
          v35 = 0;
          for ( j = 0; j < *(_DWORD *)(a2 + 16); ++j )
          {
            if ( *(_BYTE *)(a2 + 20LL * j + 20) == 0x84 )
            {
              v35 = 1;
              *(_BYTE *)(a2 + 20LL * j + 20) = 0;
              break;
            }
          }
          v37 = v35 != 0;
          goto LABEL_100;
      }
      goto LABEL_79;
    }
    switch ( v4 )
    {
      case 0x85u:
        if ( (unsigned __int64)&a3[v6 - v11] < 0x14 )
          return (unsigned int)-1072431089;
        *(_BYTE *)(v11 + 3) = 0;
        v33 = 0;
        *(_QWORD *)(v11 + 4) = 0LL;
        *(_QWORD *)(v11 + 12) = 0LL;
        while ( v33 < *(_DWORD *)(a2 + 16) )
        {
          v18 = 5LL * v33;
          if ( *(_BYTE *)(a2 + 20LL * v33 + 20) == 3 )
          {
            *(_DWORD *)(v11 + 16) = *(_DWORD *)(a2 + 20LL * v33 + 32);
            v34 = *(_DWORD *)(a2 + 20LL * v33 + 24);
            *(_DWORD *)(v11 + 4) = v34;
            goto LABEL_120;
          }
          ++v33;
        }
        goto LABEL_124;
      case 0x20u:
        if ( (unsigned __int64)&a3[v6 - v11] < 4 )
          return (unsigned int)-1072431089;
        *(_WORD *)(v11 + 1) = 0;
        for ( k = 0; k < *(_DWORD *)(a2 + 16); ++k )
        {
          v25 = 5LL * k;
          if ( *(_BYTE *)(a2 + 20LL * k + 20) == 2 )
          {
            v31 = *(_WORD *)(a2 + 20LL * k + 24);
            if ( v31 < 0x10u )
            {
              *(_WORD *)(v11 + 1) = 1 << v31;
              if ( (*(_BYTE *)v11 & 7) == 3 )
              {
                *(_BYTE *)(v11 + 3) = 0;
                v32 = (*(_BYTE *)(a2 + 20LL * k + 22) & 1) != 0 ? 1 : 8;
                *(_BYTE *)(v11 + 3) = v32;
                if ( *(_BYTE *)(a2 + 4 * v25 + 21) == 3 )
                  *(_BYTE *)(v11 + 3) = v32 | 0x10;
              }
LABEL_55:
              *(_BYTE *)(a2 + 4 * v25 + 20) = 0;
              goto LABEL_124;
            }
          }
        }
        goto LABEL_124;
      case 0x28u:
        if ( (unsigned __int64)&a3[v6 - v11] < 3 )
          return (unsigned int)-1072431089;
        *(_BYTE *)(v11 + 1) = 0;
        for ( m = 0; m < *(_DWORD *)(a2 + 16); ++m )
        {
          v25 = 5LL * m;
          if ( *(_BYTE *)(a2 + 20LL * m + 20) == 4 )
          {
            v26 = 1 << *(_DWORD *)(a2 + 20LL * m + 24);
            v27 = 0;
            *(_BYTE *)(v11 + 1) = v26;
            *(_BYTE *)(v11 + 2) = 0;
            if ( (*(_BYTE *)(a2 + 4 * v25 + 22) & 8) != 0 )
            {
              *(_BYTE *)(v11 + 2) = 4;
              v27 = 4;
            }
            v28 = *(_WORD *)(a2 + 4 * v25 + 22);
            if ( (v28 & 0x10) != 0 )
            {
              v29 = v27 | 0x20;
            }
            else if ( (v28 & 0x20) != 0 )
            {
              v29 = v27 | 0x40;
            }
            else
            {
              if ( (v28 & 0x40) == 0 )
                goto LABEL_55;
              v29 = v27 | 0x60;
            }
            *(_BYTE *)(v11 + 2) = v29;
            goto LABEL_55;
          }
        }
        goto LABEL_124;
    }
    if ( v4 != 48 && v4 != 56 )
    {
      if ( v4 == 64 )
      {
        if ( (unsigned __int64)&a3[v6 - v11] < 8 )
          return (unsigned int)-1072431089;
        *(_BYTE *)(v11 + 1) = 0;
        v22 = 0;
        *(_DWORD *)(v11 + 2) = 0;
        *(_WORD *)(v11 + 6) = 0;
        while ( v22 < *(_DWORD *)(a2 + 16) )
        {
          v18 = 5LL * v22;
          if ( *(_BYTE *)(a2 + 20LL * v22 + 20) == 1 )
          {
            v23 = *(_WORD *)(a2 + 20LL * v22 + 24);
            *(_WORD *)(v11 + 2) = v23;
            *(_WORD *)(v11 + 4) = v23;
            *(_BYTE *)(v11 + 6) = 1;
            *(_BYTE *)(v11 + 7) = *(_BYTE *)(a2 + 20LL * v22 + 32);
            if ( (*(_BYTE *)(a2 + 20LL * v22 + 22) & 0x10) != 0 )
              *(_BYTE *)(v11 + 1) = 1;
            goto LABEL_123;
          }
          ++v22;
        }
        goto LABEL_124;
      }
      if ( v4 == 72 )
      {
        if ( (unsigned __int64)&a3[v6 - v11] < 4 )
          return (unsigned int)-1072431089;
        *(_BYTE *)(v11 + 3) = 0;
        v20 = 0;
        *(_WORD *)(v11 + 1) = 0;
        while ( v20 < *(_DWORD *)(a2 + 16) )
        {
          v18 = 5LL * v20;
          if ( *(_BYTE *)(a2 + 20LL * v20 + 20) == 1 && (*(_BYTE *)(a2 + 20LL * v20 + 22) & 4) != 0 )
          {
            *(_WORD *)(v11 + 1) = *(_WORD *)(a2 + 20LL * v20 + 24);
            v21 = *(_BYTE *)(a2 + 20LL * v20 + 32);
            goto LABEL_122;
          }
          ++v20;
        }
        goto LABEL_124;
      }
      if ( v4 != 112 )
      {
        if ( v4 == 129 )
        {
          if ( (unsigned __int64)&a3[v6 - v11] < 0xC )
            return (unsigned int)-1072431089;
          *(_BYTE *)(v11 + 3) = 0;
          v17 = 0;
          *(_QWORD *)(v11 + 4) = 0LL;
          while ( v17 < *(_DWORD *)(a2 + 16) )
          {
            v18 = 5LL * v17;
            if ( *(_BYTE *)(a2 + 20LL * v17 + 20) == 3 && (*(_BYTE *)(a2 + 20LL * v17 + 22) & 0x10) != 0 )
            {
              v19 = *(_DWORD *)(a2 + 20LL * v17 + 24) >> 8;
              *(_WORD *)(v11 + 6) = v19;
              *(_WORD *)(v11 + 4) = v19;
              *(_WORD *)(v11 + 10) = *(_DWORD *)(a2 + 20LL * v17 + 32) >> 8;
              goto LABEL_121;
            }
            ++v17;
          }
LABEL_124:
          v10 = 0;
          goto LABEL_125;
        }
LABEL_79:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 2;
          WPP_RECORDER_SF_L(
            WPP_GLOBAL_Control->DeviceExtension,
            v16,
            14,
            13,
            (__int64)&WPP_52f1d9ae2bb33d21e69d5020d30b72bd_Traceguids,
            v4);
        }
      }
    }
LABEL_112:
    if ( v10 < 0 )
      return (unsigned int)v10;
LABEL_125:
    v11 += v14;
    v12 = (unsigned __int8 *)v50;
    if ( v11 >= v50 )
      goto LABEL_133;
    v4 = *(_BYTE *)v11;
    v9 = a1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v13,
      14,
      12,
      (__int64)&WPP_52f1d9ae2bb33d21e69d5020d30b72bd_Traceguids);
  }
LABEL_133:
  v46 = *(_DWORD *)(a2 + 16);
  v47 = 0;
  if ( v46 )
  {
    v48 = (_BYTE *)(a2 + 20);
    while ( *v48 )
    {
      ++v47;
      v48 += 20;
      if ( v47 >= v46 )
        goto LABEL_137;
    }
    return 0LL;
  }
  else
  {
LABEL_137:
    if ( v47 == v46 )
      return (unsigned int)-1073741823;
    return v5;
  }
}
