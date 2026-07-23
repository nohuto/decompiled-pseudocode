/*
 * XREFs of PopDetermineBucketFrequencies @ 0x14060389C
 * Callers:
 *     PopRegisterEnergyEstimation @ 0x140603C50 (PopRegisterEnergyEstimation.c)
 * Callees:
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     __report_rangecheckfailure @ 0x1405246B0 (__report_rangecheckfailure.c)
 */

__int64 PopDetermineBucketFrequencies()
{
  __int64 v0; // rbx
  unsigned int i; // eax
  __int64 Prcb; // rax
  __int64 v3; // r11
  __int64 v4; // rcx
  unsigned int v5; // r9d
  unsigned int v6; // r10d
  unsigned int v7; // edx
  __int64 v8; // r9
  _DWORD *v9; // r10
  __int64 v10; // rax
  unsigned int v11; // r8d
  BOOL v12; // ecx
  int v13; // ebx
  unsigned int v14; // r8d
  int *v15; // rdi
  unsigned int v16; // esi
  __int64 v17; // r13
  int v18; // r11d
  int v19; // ecx
  unsigned int v20; // r12d
  int v21; // r15d
  int v22; // eax
  unsigned int *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // r10
  __int64 v27; // r11
  __int64 v28; // rcx
  _WORD *v29; // r9
  _DWORD *v30; // r8
  unsigned int v31; // eax
  __int64 result; // rax
  _DWORD v33[4]; // [rsp+20h] [rbp-38h]
  __int64 v34; // [rsp+30h] [rbp-28h]
  __int128 v35; // [rsp+38h] [rbp-20h] BYREF
  __int64 v36; // [rsp+48h] [rbp-10h]
  _BYTE v38[8]; // [rsp+A8h] [rbp+50h]
  unsigned int v39; // [rsp+B0h] [rbp+58h] BYREF
  int v40; // [rsp+B8h] [rbp+60h]

  v36 = 0LL;
  v35 = 0LL;
  v39 = 0;
  v0 = *(unsigned int *)stru_140F12EA0.IptSaveArea;
  for ( i = 0; i < (unsigned int)v0; ++i )
  {
    *(&v40 + i) = 10000;
    v33[i] = 0;
    v33[i + 2] = 0;
    v38[i] = 1;
    if ( i >= 2 )
LABEL_18:
      _report_rangecheckfailure();
    v38[i + 6] = 0;
  }
  *((_QWORD *)&v35 + 1) = qword_140E0B498;
  *(_QWORD *)&v35 = &PpmPerfStatesRegistered;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v39, (unsigned __int16 **)&v35) )
  {
    Prcb = KeGetPrcb(v39);
    v3 = *(_QWORD *)(Prcb + 35264);
    v4 = (unsigned int)(*(_DWORD *)stru_140F12EA0.IptSaveArea - 1);
    v5 = *(_DWORD *)(v3 + 456);
    if ( (unsigned int)*(unsigned __int8 *)(Prcb + 35352) < *(_DWORD *)stru_140F12EA0.IptSaveArea )
      v4 = *(unsigned __int8 *)(Prcb + 35352);
    v38[v4 + 6] = 1;
    v6 = *(_DWORD *)(v3 + 468) * v5 / 0x64;
    v7 = *(_DWORD *)(v3 + 460) * v5 / 0x64;
    if ( v6 < *(&v40 + (unsigned int)v4) )
      *(&v40 + (unsigned int)v4) = v6;
    if ( v7 > v33[(unsigned int)v4] )
      v33[(unsigned int)v4] = v7;
    if ( v5 > v33[(unsigned int)v4 + 2] )
      v33[(unsigned int)v4 + 2] = v5;
    if ( !*(_BYTE *)(v3 + 504) )
    {
      if ( (unsigned int)v4 >= 2 )
        goto LABEL_18;
      v38[(unsigned int)v4] = 0;
    }
  }
  if ( (_DWORD)v0 )
  {
    v8 = 0LL;
    v9 = (char *)stru_140F12EA0.IptSaveArea + 60;
    v34 = v0;
    v10 = v0;
    do
    {
      if ( v38[v8 + 6] )
      {
        v11 = v33[v8];
        v12 = v38[v8] == 0;
        if ( v11 >= 0x2710 )
        {
          v11 = 10000;
          v12 = 1;
          if ( v33[v8 + 2] < 0x2710u )
            v11 = v33[v8 + 2];
        }
        v13 = *(&v40 + v8) * *(&v40 + v8);
        v14 = v11 * v11 - v13;
        if ( v12 )
          v14 = 4 * v14 / 3;
        v15 = v9 - 7;
        v16 = v14;
        v17 = 4LL;
        do
        {
          v18 = 0;
          v19 = 10000;
          v20 = v13 + (v16 >> 2);
          v15[4] = v20 - (v14 >> 3);
          if ( v20 < 0x5F5E100 )
          {
            v21 = 20;
            do
            {
              if ( v19 == v18 || !v21 )
                break;
              v18 = v19;
              --v21;
              v22 = v20 - v19 * v19;
              if ( v22 <= 0 )
              {
                if ( v22 < 0 )
                  v22 -= v19;
              }
              else
              {
                v22 += v19;
              }
              v19 += v22 / (2 * v19);
            }
            while ( v19 );
          }
          *v15++ = v19;
          v16 += v14;
          --v17;
        }
        while ( v17 );
        if ( *v9 > 0x64u )
        {
          v23 = v9 - 3;
          v24 = 4LL;
          do
          {
            *v23 = 100 * *v23 / *v9;
            ++v23;
            --v24;
          }
          while ( v24 );
        }
        v10 = v34;
      }
      ++v8;
      v9 += 14;
      v34 = --v10;
    }
    while ( v10 );
  }
  *((_QWORD *)&v35 + 1) = qword_140E0B498;
  *(_QWORD *)&v35 = &PpmPerfStatesRegistered;
  LOWORD(v36) = 0;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v39, (unsigned __int16 **)&v35);
    if ( (_DWORD)result )
      break;
    v25 = KeGetPrcb(v39);
    v26 = v25;
    v27 = 4LL;
    v28 = (unsigned int)(*(_DWORD *)stru_140F12EA0.IptSaveArea - 1);
    if ( (unsigned int)*(unsigned __int8 *)(v25 + 35352) < *(_DWORD *)stru_140F12EA0.IptSaveArea )
      v28 = *(unsigned __int8 *)(v25 + 35352);
    v29 = (_WORD *)(v25 + 35468);
    v30 = (char *)stru_140F12EA0.IptSaveArea + 56 * v28 + 32;
    do
    {
      v31 = 100 * *v30++;
      *v29++ = v31 / *(_DWORD *)(*(_QWORD *)(v26 + 35264) + 456LL);
      --v27;
    }
    while ( v27 );
  }
  return result;
}
