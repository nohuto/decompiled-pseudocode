/*
 * XREFs of Bulk_Stage_EstimateRequiredTrbs @ 0x140017A60
 * Callers:
 *     Bulk_PrepareStage @ 0x140017060 (Bulk_PrepareStage.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDDD @ 0x140015804 (WPP_RECORDER_SF_DDDDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x140024070 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDDqDDDDD @ 0x1400387BC (WPP_RECORDER_SF_DDDqDDDDD.c)
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x140044C80 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall Bulk_Stage_EstimateRequiredTrbs(__int64 *a1)
{
  __int64 v1; // rdx
  int v3; // eax
  __int64 v4; // rbp
  __int64 v5; // r12
  unsigned int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // r9
  int v9; // r8d
  int v10; // edx
  _QWORD *v11; // rax
  __int64 *v12; // r13
  unsigned __int64 v13; // r15
  unsigned int i; // r14d
  unsigned int v15; // ecx
  unsigned int v16; // eax
  unsigned int v17; // edx
  unsigned int v18; // edi
  unsigned __int64 v19; // r9
  __int64 v20; // rcx
  unsigned int v21; // ebx
  __int64 v22; // r15
  unsigned int v23; // r8d
  __int64 v24; // r8
  int v25; // edx
  int v26; // eax
  __int64 result; // rax
  unsigned int v28; // edi
  __int64 v29; // rcx
  __int64 v30; // rbx
  int v31; // eax
  unsigned __int16 v32; // ax
  unsigned int v33; // edx
  int v34; // [rsp+20h] [rbp-88h]
  unsigned int v35; // [rsp+B0h] [rbp+8h]
  unsigned int v36; // [rsp+C0h] [rbp+18h]

  v1 = *a1;
  v3 = *(_DWORD *)(*a1 + 76);
  v4 = *(_QWORD *)(*a1 + 56);
  if ( v3 && (unsigned int)(v3 - 1) > 1 )
  {
    v5 = *((unsigned int *)a1 + 10);
    v6 = *(_DWORD *)(*(_QWORD *)(v4 + 56) + 160LL);
    v7 = (unsigned int)v5;
    if ( v6 <= (unsigned int)v5 )
      v7 = v6;
    v36 = v7;
    *((_DWORD *)a1 + 20) = ((unsigned __int64)(v7 + 8190) >> 12) + 1;
    v8 = *(_QWORD *)(v1 + 48);
    v9 = *(unsigned __int16 *)(v8 + 2);
    if ( v9 == 56 )
    {
LABEL_8:
      v10 = v9 - 8;
LABEL_9:
      if ( v9 != 56 )
      {
        switch ( v10 )
        {
          case '1':
          case '2':
            goto LABEL_35;
          default:
            break;
        }
      }
      v11 = *(_QWORD **)(v8 + 48);
      if ( v11 && *v11 )
      {
        v12 = (__int64 *)a1[6];
        LODWORD(v13) = 0;
        for ( i = 0; (_DWORD)v5; v12 = (__int64 *)*v12 )
        {
          v15 = *((_DWORD *)v12 + 10);
          v16 = v5;
          v17 = v15;
          if ( (unsigned int)v5 < v15 )
            v17 = v5;
          LODWORD(v5) = v5 - v15;
          v35 = v17;
          v18 = v17;
          if ( v16 < v15 )
            LODWORD(v5) = 0;
          if ( v17 )
          {
            do
            {
              v19 = v12[4] + *((unsigned int *)v12 + 11) + (unsigned __int64)(v17 - v18);
              v20 = (*((_WORD *)v12 + 16) + (unsigned __int16)*((_DWORD *)v12 + 11) + (_WORD)v17 - (_WORD)v18) & 0xFFF;
              if ( i + v18 < v36 )
              {
                i = v18;
                v22 = v18 + 4095LL;
                v18 = 0;
                v13 = (unsigned __int64)(v20 + v22) >> 12;
                v21 = v13;
              }
              else
              {
                v21 = v13 + ((v20 + (unsigned __int64)(v36 - i) + 4095) >> 12);
                LODWORD(v13) = 0;
                v18 += i - v36;
                i = 0;
              }
              v23 = v21 + *((_DWORD *)a1 + 21);
              *((_DWORD *)a1 + 21) = v23;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                WPP_RECORDER_SF_DDDqDDDDD(
                  *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
                  *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 143LL),
                  v23,
                  v19,
                  v34,
                  *(_BYTE *)(*(_QWORD *)(v4 + 48) + 143LL),
                  *(_DWORD *)(*(_QWORD *)(v4 + 56) + 152LL),
                  *(_DWORD *)(v4 + 64),
                  v19,
                  v21,
                  v18,
                  v13,
                  i,
                  v23);
              }
              v24 = *(unsigned int *)(v4 + 196);
              if ( v21 >= (unsigned int)v24 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_DDDDD(
                  *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
                  3u,
                  v24,
                  0x1Fu,
                  (__int64)&WPP_b35432f3067b3bf93fefc5589952cfde_Traceguids);
              if ( v21 > *((_DWORD *)a1 + 20) )
              {
                *((_DWORD *)a1 + 20) = v21;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  {
                    v25 = *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 143LL);
                    LOBYTE(v25) = 5;
                    WPP_RECORDER_SF_DDDD(
                      *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
                      v25,
                      14,
                      32,
                      (__int64)&WPP_b35432f3067b3bf93fefc5589952cfde_Traceguids,
                      *(_BYTE *)(*(_QWORD *)(v4 + 48) + 143LL),
                      *(_DWORD *)(*(_QWORD *)(v4 + 56) + 152LL),
                      *(_DWORD *)(v4 + 64),
                      v21);
                  }
                }
              }
              v17 = v35;
            }
            while ( v18 );
          }
        }
      }
      else
      {
LABEL_35:
        *((_DWORD *)a1 + 21) = (v5
                              + 4095
                              + (unsigned __int64)((*(_DWORD *)(a1[6] + 32) + *(_DWORD *)(a1[6] + 44)) & 0xFFF)) >> 12;
      }
    }
    else
    {
      v10 = v9 - 8;
      switch ( *(_WORD *)(v8 + 2) )
      {
        case 8:
        case 9:
        case 0xA:
        case 0x32:
        case 0x37:
          goto LABEL_8;
        case 0x39:
        case 0x3A:
          *((_DWORD *)a1 + 21) = ((unsigned __int64)(v5 + 4095) >> 12) + 1;
          break;
        default:
          goto LABEL_9;
      }
    }
    v26 = ++*((_DWORD *)a1 + 21) + 1;
  }
  else
  {
    v26 = 2;
    *((_DWORD *)a1 + 20) = 2;
  }
  *((_DWORD *)a1 + 21) = v26;
  result = *(_QWORD *)(v4 + 40);
  v28 = *((_DWORD *)a1 + 10);
  if ( _bittest64((const signed __int64 *)(result + 736), 0x22u) )
  {
    v29 = *(_QWORD *)(v4 + 48);
    if ( *(_DWORD *)(v29 + 40) )
    {
      v30 = *(_QWORD *)(v4 + 56);
      result = *(unsigned __int8 *)(v30 + 98);
      if ( (result & 0x80u) != 0LL )
      {
        result = *(unsigned int *)(v29 + 20);
        if ( (unsigned int)result <= 1 )
        {
          if ( (unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline()
            && !*(_WORD *)(v30 + 100)
            && *(_BYTE *)(v30 + 39)
            && ((v31 = *(_DWORD *)(v30 + 128), v31 == 5) || v31 == 1) )
          {
            v32 = *(_WORD *)(v30 + 105);
          }
          else
          {
            v32 = *(_WORD *)(v30 + 100) & 0x7FF;
          }
          v33 = v28 % v32;
          result = v28 / v32;
          if ( v33 )
          {
            Feature_EUSB2__private_IsEnabledDeviceUsageNoInline();
            result = Feature_EUSB2__private_IsEnabledDeviceUsageNoInline();
            ++*((_DWORD *)a1 + 20);
            ++*((_DWORD *)a1 + 21);
          }
        }
      }
    }
  }
  return result;
}
