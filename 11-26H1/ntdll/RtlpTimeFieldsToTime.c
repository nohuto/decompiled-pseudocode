/*
 * XREFs of RtlpTimeFieldsToTime @ 0x18009FF20
 * Callers:
 *     RtlCutoverTimeToSystemTime @ 0x18009FCD0 (RtlCutoverTimeToSystemTime.c)
 *     RtlTimeFieldsToTime @ 0x18009FF10 (RtlTimeFieldsToTime.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpTimeFieldsToTime(__int16 *a1, __int64 *a2, __int64 *a3)
{
  _LEAP_SECOND_DATA *LeapSecondData; // r9
  unsigned int Count; // esi
  unsigned int v7; // r11d
  unsigned int v8; // ecx
  int v9; // ecx
  int v10; // edx
  unsigned int v11; // r8d
  __int64 v12; // rbx
  int v13; // r10d
  int v14; // edi
  __int16 *v15; // r14
  int v16; // ecx
  __int64 v17; // r13
  int v18; // eax
  __int64 v20; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int16 v25; // r8
  __int64 v26; // r13
  int v27; // edi
  __int64 v28; // rbp
  unsigned int v29; // r10d
  __int16 *v30; // r14
  int v31; // edx
  __int64 v32; // r8
  int v33; // eax
  __int64 QuadPart; // r10
  __int64 v36; // r10
  __int64 v37; // r10
  __int64 v38; // rdx
  signed __int32 v39[8]; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v40; // [rsp+20h] [rbp-58h]
  __int64 v41; // [rsp+28h] [rbp-50h]
  unsigned int v42; // [rsp+30h] [rbp-48h]
  __int64 v43; // [rsp+38h] [rbp-40h]
  __int128 v44; // [rsp+40h] [rbp-38h]
  unsigned int v45; // [rsp+98h] [rbp+20h]
  unsigned int v46; // [rsp+98h] [rbp+20h]

  LeapSecondData = NtCurrentPeb()->LeapSecondData;
  if ( !LeapSecondData || !LeapSecondData->Enabled )
    return RtlpTimeFieldsToTimeNoLeapSeconds(a1);
  Count = LeapSecondData->Count;
  _InterlockedOr(v39, 0);
  v7 = 0;
  v8 = NtCurrentPeb()->LeapSecondFlags & 1;
  if ( a3 )
    v43 = *a3;
  else
    v43 = 0LL;
  if ( v8 )
  {
    v24 = *((_QWORD *)a1 + 1) >> 16;
    v44 = *(_OWORD *)a1;
    if ( (_WORD)v24 == 60 )
    {
      v25 = 59;
      v8 |= 2u;
    }
    else
    {
      v25 = WORD5(v44);
    }
    v26 = (unsigned int)SWORD1(v44);
    v27 = SWORD2(v44) - 1;
    v42 = SWORD3(v44);
    v46 = v25;
    v28 = (unsigned int)(v26 - 1);
    if ( SWORD1(v44) >= 1
      && SWORD2(v44) >= 1
      && (unsigned int)((__int16)v44 - 1601) <= 0x722A
      && (unsigned int)v28 <= 0xB )
    {
      v30 = LeapYearDaysPrecedingMonth;
      if ( (__int16)v44 != 400 * ((__int16)v44 / 0x190u)
        && ((__int16)v44 == 100 * ((__int16)v44 / 0x64u) || (v44 & 3) != 0) )
      {
        v31 = NormalYearDaysPrecedingMonth[v26];
        v32 = 2 * v28;
        v33 = NormalYearDaysPrecedingMonth[v28];
      }
      else
      {
        v31 = LeapYearDaysPrecedingMonth[v26];
        v32 = 2 * v28;
        v33 = LeapYearDaysPrecedingMonth[v28];
      }
      v41 = v32;
      if ( (__int16)v27 < v31 - v33
        && v42 <= 0x17
        && v46 <= 0x3B
        && (unsigned int)SWORD4(v44) <= 0x3B
        && (unsigned int)SWORD6(v44) <= 0x3E7 )
      {
        if ( (__int16)v44 - 1600 != 400 * (((__int16)v44 - 1600) / 0x190u)
          && ((__int16)v44 - 1600 == 100 * (((__int16)v44 - 1600) / 0x64u) || (v44 & 3) != 0) )
        {
          v30 = NormalYearDaysPrecedingMonth;
        }
        v29 = (__int16)v44 - 1601;
        v20 = 10000
            * (SWORD6(v44)
             + 1000 * (v46 + 60 * (SWORD4(v44) + 60 * v42))
             + 86400000LL
             * (int)(v27 + (v29 >> 2) + 365 * v29 + v29 / 0x190 - v29 / 0x64 + *(__int16 *)((char *)v30 + v41)));
        while ( v7 < Count )
        {
          QuadPart = LeapSecondData->Data[v7].QuadPart;
          if ( QuadPart < 0 )
          {
            v37 = (QuadPart & 0x7FFFFFFFFFFFFFFFLL) - v43;
            if ( v20 < v37 + 10000000 )
            {
              if ( v20 >= v37 )
                return 0;
              break;
            }
            v20 -= 10000000LL;
          }
          else
          {
            v36 = QuadPart - v43;
            if ( v20 < v36 + 10000000 )
            {
              if ( v20 >= v36 )
                v8 |= 4u;
              break;
            }
            v20 += 10000000LL;
          }
          ++v7;
        }
        if ( (v8 & 2) == 0 )
          goto LABEL_27;
        if ( v8 >= 4 )
        {
          v20 += 10000000LL;
          goto LABEL_27;
        }
      }
    }
    return 0;
  }
  v9 = a1[1];
  v10 = a1[2];
  v11 = *a1;
  v45 = a1[3];
  v12 = (unsigned int)(v9 - 1);
  v40 = a1[4];
  v13 = v10 - 1;
  v14 = a1[5];
  v42 = a1[6];
  LODWORD(v41) = v14;
  if ( v9 < 1 || v10 < 1 || v11 - 1601 > 0x722A || (unsigned int)v12 > 0xB )
    return 0;
  v15 = LeapYearDaysPrecedingMonth;
  if ( v11 != 400 * (v11 / 0x190) && (v11 == 100 * (v11 / 0x64) || (v11 & 3) != 0) )
  {
    v16 = NormalYearDaysPrecedingMonth[v9];
    v17 = v12;
    v18 = NormalYearDaysPrecedingMonth[v12];
  }
  else
  {
    v16 = LeapYearDaysPrecedingMonth[v9];
    v17 = v12;
    v18 = LeapYearDaysPrecedingMonth[v12];
  }
  if ( (__int16)v13 >= v16 - v18 || (unsigned int)v41 > 0x3B || v42 > 0x3E7 || v40 > 0x3B || v45 > 0x17 )
    return 0;
  if ( v11 - 1600 != 400 * ((v11 - 1600) / 0x190) && (v11 - 1600 == 100 * ((v11 - 1600) / 0x64) || (v11 & 3) != 0) )
    v15 = NormalYearDaysPrecedingMonth;
  v20 = 10000
      * (v42
       + 1000 * ((_DWORD)v41 + 60 * (v40 + 60 * v45))
       + 86400000LL
       * (int)(v13 + ((v11 - 1601) >> 2) + 365 * (v11 - 1601) + (v11 - 1601) / 0x190 - (v11 - 1601) / 0x64 + v15[v17]));
  while ( v7 < Count )
  {
    v22 = LeapSecondData->Data[v7].QuadPart;
    if ( v22 >= 0 )
    {
      v38 = v22 - v43;
      if ( v20 < v38 + 10000000 )
      {
        if ( v20 < v38 )
          break;
        v20 = 2 * v20 - v38;
      }
      else
      {
        v20 += 10000000LL;
      }
    }
    else
    {
      v23 = (v22 & 0x7FFFFFFFFFFFFFFFLL) - v43;
      if ( v20 < v23 + 10000000 )
      {
        if ( v20 < v23 )
          break;
        return 0;
      }
      v20 -= 10000000LL;
    }
    ++v7;
  }
LABEL_27:
  *a2 = v20;
  return 1;
}
