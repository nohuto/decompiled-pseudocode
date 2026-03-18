/*
 * XREFs of RootHub_Read30PortSpeeds @ 0x140036FD0
 * Callers:
 *     RootHub_UcxEvtGet30PortInfo @ 0x14004AA30 (RootHub_UcxEvtGet30PortInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x140008EA0 (WPP_RECORDER_SF_D.c)
 *     XilRegister_ReadUlong @ 0x14000B620 (XilRegister_ReadUlong.c)
 *     WPP_RECORDER_SF_DDDD @ 0x140024070 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_ddddd @ 0x140033CC8 (WPP_RECORDER_SF_ddddd.c)
 */

__int64 __fastcall RootHub_Read30PortSpeeds(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned __int16 a4,
        __int64 a5,
        unsigned __int16 a6,
        unsigned __int8 a7)
{
  unsigned int v7; // ebp
  unsigned __int16 v10; // di
  __int64 v11; // r9
  unsigned __int16 v12; // r13
  unsigned int Ulong; // eax
  char v14; // r13
  unsigned int v15; // ebx
  int v16; // eax
  unsigned int v17; // r13d
  unsigned int v18; // r10d
  int v19; // ecx
  unsigned __int16 v20; // di
  unsigned __int16 v21; // r13
  __int64 v22; // rax
  int v23; // edx
  unsigned __int16 v24; // di
  int v25; // ecx
  int v26; // r9d
  unsigned __int16 v27; // di
  unsigned __int16 v28; // di
  unsigned __int16 v29; // di
  __int64 v31; // [rsp+28h] [rbp-80h]
  __int64 v32; // [rsp+30h] [rbp-78h]
  __int64 v33; // [rsp+38h] [rbp-70h]
  __int64 v34; // [rsp+40h] [rbp-68h]
  __int64 v35; // [rsp+48h] [rbp-60h]
  unsigned __int16 v36; // [rsp+50h] [rbp-58h]
  int v37; // [rsp+54h] [rbp-54h]
  __int64 v38; // [rsp+60h] [rbp-48h]
  unsigned __int16 *v40; // [rsp+C0h] [rbp+18h]

  v40 = a3;
  v7 = 0;
  v37 = 0;
  v10 = 0;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  v38 = v11;
  *a3 = 0;
  if ( a6 )
  {
    v12 = 0;
    v36 = 0;
    while ( v12 < a6 )
    {
      Ulong = XilRegister_ReadUlong(v11, (unsigned int *)(a5 + 4LL * v12));
      v14 = Ulong;
      v15 = Ulong;
      v16 = v37;
      v17 = v14 & 0xF;
      if ( _bittest(&v16, v17) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            2,
            11,
            197,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            v17);
        return (unsigned int)-1073741811;
      }
      v37 |= 1 << v17;
      v18 = HIWORD(v15);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v35) = (v15 >> 8) & 1;
        LODWORD(v34) = (unsigned __int8)v15 >> 6;
        LODWORD(v33) = HIWORD(v15);
        LODWORD(v32) = (v15 >> 4) & 3;
        LODWORD(v31) = v17;
        WPP_RECORDER_SF_ddddd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          (unsigned __int8)v15 >> 6,
          0xBu,
          0xC6u,
          (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
          v31,
          v32,
          v33,
          v34,
          v35);
        LOWORD(v18) = HIWORD(v15);
      }
      if ( v10 < a4 )
      {
        if ( !a7 || (v19 = 0x4000, v17 <= 4) )
          v19 = 0;
        *(_DWORD *)(a2 + 4LL * v10) = v19 ^ v15 & 0x30;
        *(_WORD *)(a2 + 4LL * v10 + 2) = v18;
        *(_DWORD *)(a2 + 4LL * v10) ^= ((unsigned __int8)v15 ^ (unsigned __int8)*(_DWORD *)(a2 + 4LL * v10)) & 0xF;
      }
      if ( (v15 & 0xC0) == 0x80 )
      {
        if ( v10 < a4 )
          *(_DWORD *)(a2 + 4LL * v10) = *(_DWORD *)(a2 + 4LL * v10) & 0xFFFFFF3F | 0x40;
        v20 = v10 + 1;
        v21 = v36 + 1;
        if ( (unsigned __int16)(v36 + 1) >= a6 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v26 = 199;
            goto LABEL_40;
          }
          return (unsigned int)-1073741811;
        }
        v22 = XilRegister_ReadUlong(v38, (unsigned int *)(a5 + 4LL * v21));
        if ( (v22 & 0xF) != (v15 & 0xF) || (v22 & 0xC0) != 0xC0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v34) = (unsigned __int8)v22 >> 6;
            LODWORD(v33) = v22 & 0xF;
            LODWORD(v32) = (unsigned __int8)v15 >> 6;
            LODWORD(v31) = v15 & 0xF;
            WPP_RECORDER_SF_DDDD(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
              2u,
              0xBu,
              0xC8u,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
              v31,
              v32,
              v33,
              v34);
          }
          return (unsigned int)-1073741811;
        }
        if ( v20 < a4 )
        {
          if ( !a7 || (v23 = 0x4000, (v15 & 0xF) <= 4) )
            v23 = 0;
          *(_DWORD *)(a2 + 4LL * v20) = v23 ^ v22 & 0x30;
          *(_WORD *)(a2 + 4LL * v20 + 2) = WORD1(v22);
          *(_DWORD *)(a2 + 4LL * v20) = *(_DWORD *)(a2 + 4LL * v20) ^ ((unsigned __int8)v22 ^ (unsigned __int8)*(_DWORD *)(a2 + 4LL * v20)) & 0xF | 0xC0;
        }
        v10 = v20 + 1;
      }
      else
      {
        if ( (v15 & 0xC0) != 0 )
        {
          if ( (v15 & 0xC0) == 0xC0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v26 = 201;
LABEL_40:
              WPP_RECORDER_SF_D(
                *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                2,
                11,
                v26,
                (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                v15 & 0xF);
            }
            return (unsigned int)-1073741811;
          }
        }
        else
        {
          if ( v10 < a4 )
            *(_DWORD *)(a2 + 4LL * v10) &= 0xFFFFFF3F;
          v24 = v10 + 1;
          if ( v24 < a4 )
          {
            if ( !a7 || (v25 = 0x4000, (v15 & 0xF) <= 4) )
              v25 = 0;
            *(_DWORD *)(a2 + 4LL * v24) = v25 ^ v15 & 0x30;
            *(_WORD *)(a2 + 4LL * v24 + 2) = HIWORD(v15);
            *(_DWORD *)(a2 + 4LL * v24) = v15 & 0xF ^ *(_DWORD *)(a2 + 4LL * v24) & 0xFFFFFFB0 | 0x80;
          }
          v10 = v24 + 1;
        }
        v21 = v36;
      }
      v11 = v38;
      v12 = v21 + 1;
      v36 = v12;
    }
    a3 = v40;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        4,
        11,
        202,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
      a3 = v40;
    }
    if ( a4 )
    {
      *(_DWORD *)a2 = 52;
      *(_WORD *)(a2 + 2) = 5;
    }
    if ( a4 > 1u )
    {
      *(_DWORD *)(a2 + 4) = 180;
      *(_WORD *)(a2 + 6) = 5;
    }
    v10 = 2;
    if ( a7 )
    {
      if ( a4 > 2u )
      {
        *(_DWORD *)(a2 + 8) = 16437;
        *(_WORD *)(a2 + 10) = 10;
      }
      if ( a4 > 3u )
      {
        *(_DWORD *)(a2 + 12) = 16565;
        *(_WORD *)(a2 + 14) = 10;
      }
      v10 = 4;
    }
    if ( a7 >= 2u )
    {
      if ( v10 < a4 )
      {
        *(_DWORD *)(a2 + 4LL * v10) = 16438;
        *(_WORD *)(a2 + 4LL * v10 + 2) = 10;
      }
      v27 = v10 + 1;
      if ( v27 < a4 )
      {
        *(_DWORD *)(a2 + 4LL * v27) = 16566;
        *(_WORD *)(a2 + 4LL * v27 + 2) = 10;
      }
      v28 = v27 + 1;
      if ( v28 < a4 )
      {
        *(_DWORD *)(a2 + 4LL * v28) = 16439;
        *(_WORD *)(a2 + 4LL * v28 + 2) = 20;
      }
      v29 = v28 + 1;
      if ( v29 < a4 )
      {
        *(_DWORD *)(a2 + 4LL * v29) = 16567;
        *(_WORD *)(a2 + 4LL * v29 + 2) = 20;
      }
      v10 = v29 + 1;
    }
  }
  *a3 = v10;
  return v7;
}
