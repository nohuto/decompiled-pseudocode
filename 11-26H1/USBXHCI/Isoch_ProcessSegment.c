/*
 * XREFs of Isoch_ProcessSegment @ 0x140015B5C
 * Callers:
 *     Isoch_CalculateBytesTransferred @ 0x140015A8C (Isoch_CalculateBytesTransferred.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDD @ 0x140024070 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDDDL @ 0x14004D334 (WPP_RECORDER_SF_DDDDL.c)
 *     WPP_RECORDER_SF_DDL @ 0x14004D46C (WPP_RECORDER_SF_DDL.c)
 */

char __fastcall Isoch_ProcessSegment(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6,
        int *a7)
{
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v11; // rbx
  char v13; // bp
  __int64 v14; // rax
  __int64 v15; // r9
  unsigned __int64 v16; // r13
  __int64 v17; // rbx
  unsigned __int64 v18; // rdi
  _UNKNOWN **v19; // rdx
  int v20; // r8d
  unsigned int v21; // r8d
  unsigned int v22; // r9d
  unsigned __int64 i; // rbx
  int v24; // ebx
  int v26; // edx
  int v27; // edx
  int v28; // edx
  int v29; // edx
  __int64 v30; // [rsp+98h] [rbp+10h]
  __int64 v31; // [rsp+A8h] [rbp+20h]

  v7 = *a2;
  v9 = *(_QWORD *)(a4 + 16);
  v11 = *(_QWORD *)(a4 + 24);
  v30 = v7;
  v13 = 0;
  v14 = *(_DWORD *)(a4 + 44) & 0xFFFFFFF0;
  v15 = 16LL * a5;
  v16 = v14 + v9 - 16;
  v31 = v9;
  v17 = v15 + v11;
  v18 = v15 + v9;
  v19 = &WPP_RECORDER_INITIALIZED;
  while ( v18 <= v16 )
  {
    if ( v17 == *(_QWORD *)a3 )
      v13 = 1;
    v20 = (unsigned __int16)*(_DWORD *)(v18 + 12) >> 10;
    switch ( v20 )
    {
      case 1:
      case 5:
        if ( v13 )
        {
          v21 = *(unsigned __int8 *)(a3 + 11);
          if ( v21 <= 0x17 )
          {
            if ( v21 != 23 )
            {
              if ( v21 == 2 || v21 == 3 || v21 == 4 || v21 == 6 )
                goto LABEL_23;
              if ( v21 != 20 )
                goto LABEL_45;
              goto LABEL_25;
            }
            if ( !*(_BYTE *)(a1[5] + 719LL) )
              goto LABEL_25;
            if ( (*(_DWORD *)(v18 + 8) & 0x1FFFFu) < (*(_DWORD *)(a3 + 8) & 0xFFFFFFu)
              && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v28 = *(unsigned __int8 *)(a1[6] + 143LL);
              LOBYTE(v28) = 2;
              WPP_RECORDER_SF_DDDD(
                *(_QWORD *)(a1[7] + 80LL),
                v28,
                14,
                30,
                (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
                *(_BYTE *)(a1[6] + 143LL),
                *(_DWORD *)(a1[7] + 152LL),
                *(_BYTE *)(v18 + 8),
                *(_BYTE *)(a3 + 8));
            }
          }
          else
          {
            if ( v21 != 26 )
            {
              if ( v21 != 27 )
              {
                if ( v21 == 28 )
                {
                  *a7 = *(_DWORD *)(a3 + 8) & 0xFFFFFF;
                }
                else
                {
                  if ( v21 == 31 || v21 == 36 )
                    goto LABEL_23;
LABEL_45:
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    v27 = *(unsigned __int8 *)(a1[6] + 143LL);
                    LOBYTE(v27) = 2;
                    WPP_RECORDER_SF_DDL(*(_QWORD *)(a1[7] + 80LL), v27, v21, 31);
                  }
                }
              }
LABEL_25:
              for ( i = v18; i < v16; i += 16LL )
              {
                if ( (unsigned __int8)HIBYTE(*(_WORD *)(i + 12)) >> 2 != 1
                  && (unsigned __int8)HIBYTE(*(_WORD *)(i + 12)) >> 2 != 5 )
                {
                  if ( (unsigned __int8)HIBYTE(*(_WORD *)(i + 12)) >> 2 == 6 )
                    break;
                  if ( (unsigned __int8)HIBYTE(*(_WORD *)(i + 12)) >> 2 == 7 )
                  {
                    v24 = *(unsigned __int16 *)(i + 2);
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                      && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    {
                      LOBYTE(v19) = 5;
                      WPP_RECORDER_SF_DDDD(
                        *(_QWORD *)(a1[7] + 80LL),
                        (_DWORD)v19,
                        14,
                        33,
                        (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
                        *(_BYTE *)(a1[6] + 143LL),
                        *(_DWORD *)(a1[7] + 152LL),
                        *((_DWORD *)a2 + 12),
                        v24 + 1);
                    }
                    *(_DWORD *)(v30 + 100) = v24 + 1;
                    *((_DWORD *)a2 + 12) = v24 + 1;
                    break;
                  }
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    v29 = *(unsigned __int8 *)(a1[6] + 143LL);
                    LOBYTE(v29) = 2;
                    WPP_RECORDER_SF_DDL(
                      *(_QWORD *)(a1[7] + 80LL),
                      v29,
                      (unsigned __int8)HIBYTE(*(_WORD *)(i + 12)) >> 2,
                      34);
                  }
                }
              }
LABEL_36:
              if ( v13 )
                *a6 = (__int64)(v18 - v31) >> 4;
              return v13;
            }
LABEL_23:
            v22 = *(_DWORD *)(a3 + 8) & 0xFFFFFF;
            if ( (*(_DWORD *)(v18 + 8) & 0x1FFFFu) < v22
              && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_DDDDL(*(_QWORD *)(a1[7] + 80LL), *(unsigned __int8 *)(a1[6] + 143LL), v21, v22);
            }
          }
          *a7 += (*(_DWORD *)(v18 + 8) & 0x1FFFF) - (*(_DWORD *)(a3 + 8) & 0xFFFFFF);
          goto LABEL_25;
        }
        *a7 += *(_DWORD *)(v18 + 8) & 0x1FFFF;
        break;
      case 6:
        goto LABEL_36;
      case 7:
        if ( v13 )
          goto LABEL_25;
        *a7 = 0;
        break;
      default:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v26 = *(unsigned __int8 *)(a1[6] + 143LL);
          LOBYTE(v26) = 2;
          WPP_RECORDER_SF_DDL(*(_QWORD *)(a1[7] + 80LL), v26, v20, 32);
          v19 = &WPP_RECORDER_INITIALIZED;
        }
        if ( v13 )
          goto LABEL_25;
        break;
    }
    v18 += 16LL;
    v17 += 16LL;
  }
  return v13;
}
