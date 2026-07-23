/*
 * XREFs of PopFanUpdateSpeed @ 0x1407DEFE0
 * Callers:
 *     PopFanWorker @ 0x140B36AD0 (PopFanWorker.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     Feature_Servicing_FanNoiseLevel__private_IsEnabledDeviceUsageNoInline @ 0x14061058C (Feature_Servicing_FanNoiseLevel__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopSendFanNoiseChangeWnf @ 0x1407DF3EC (PopSendFanNoiseChangeWnf.c)
 *     PopFanFindBucketIndex @ 0x140B58448 (PopFanFindBucketIndex.c)
 *     PopFanUpdateStatistics @ 0x140B6BA6C (PopFanUpdateStatistics.c)
 */

unsigned __int8 __fastcall PopFanUpdateSpeed(__int64 a1, unsigned int a2)
{
  unsigned __int8 v4; // r15
  unsigned int v5; // edi
  int v6; // r14d
  unsigned int v7; // ecx
  unsigned int *v8; // rax
  int v9; // eax
  int v10; // ecx
  char v12; // [rsp+38h] [rbp-99h] BYREF
  char v13; // [rsp+39h] [rbp-98h] BYREF
  int v14; // [rsp+3Ch] [rbp-95h] BYREF
  __int64 v15; // [rsp+40h] [rbp-91h] BYREF
  int v16; // [rsp+48h] [rbp-89h] BYREF
  int v17; // [rsp+4Ch] [rbp-85h] BYREF
  __int64 v18; // [rsp+50h] [rbp-81h] BYREF
  int v19; // [rsp+58h] [rbp-79h]
  int v20; // [rsp+5Ch] [rbp-75h]
  int v21; // [rsp+60h] [rbp-71h] BYREF
  int v22; // [rsp+64h] [rbp-6Dh] BYREF
  int v23; // [rsp+68h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24[2]; // [rsp+78h] [rbp-59h] BYREF
  __int64 *v25; // [rsp+98h] [rbp-39h]
  __int64 v26; // [rsp+A0h] [rbp-31h]
  int *v27; // [rsp+A8h] [rbp-29h]
  __int64 v28; // [rsp+B0h] [rbp-21h]
  int *v29; // [rsp+B8h] [rbp-19h]
  __int64 v30; // [rsp+C0h] [rbp-11h]
  int *v31; // [rsp+C8h] [rbp-9h]
  __int64 v32; // [rsp+D0h] [rbp-1h]
  int *v33; // [rsp+D8h] [rbp+7h]
  __int64 v34; // [rsp+E0h] [rbp+Fh]
  __int64 *v35; // [rsp+E8h] [rbp+17h]
  __int64 v36; // [rsp+F0h] [rbp+1Fh]

  v18 = 0x200000001LL;
  v4 = 0;
  v21 = 0;
  v22 = 0;
  v5 = 3;
  v19 = 2;
  v20 = 3;
  if ( !*(_BYTE *)(a1 + 88) )
  {
    if ( *(_DWORD *)(a1 + 84) != a2 )
      *(_DWORD *)(a1 + 84) = a2;
    goto LABEL_33;
  }
  PopFanUpdateStatistics(a1);
  if ( *(_DWORD *)(a1 + 84) == a2 )
  {
LABEL_33:
    if ( (unsigned int)dword_140E07560 > 5 )
    {
      v18 = a1;
      v25 = &v18;
      LODWORD(v15) = *(_DWORD *)(a1 + 84);
      v26 = 8LL;
      v27 = (int *)&v15;
      v12 = *(_BYTE *)(a1 + 88);
      v29 = (int *)&v12;
      v13 = *(_BYTE *)(a1 + 200);
      v31 = (int *)&v13;
      v14 = v4;
      v33 = &v14;
      v28 = 4LL;
      v30 = 1LL;
      v32 = 1LL;
      v34 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07560, (unsigned __int8 *)byte_14004F079, 0LL, 0LL, 7u, v24);
    }
    return v4;
  }
  *(_DWORD *)(a1 + 84) = a2;
  if ( dword_140F102A8 == 1 )
  {
    v6 = 0;
    if ( a2 )
    {
      v7 = 0;
      v8 = (unsigned int *)(a1 + 112);
      while ( a2 > *v8 )
      {
        ++v7;
        ++v8;
        if ( v7 >= 4 )
          goto LABEL_13;
      }
      v5 = *((_DWORD *)&v18 + v7);
LABEL_13:
      v6 = v7 + 1;
    }
    else
    {
      v5 = 0;
    }
    if ( (unsigned int)Feature_Servicing_FanNoiseLevel__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( dword_140F102AC != v5 || dword_140F102B0 != v6 )
      {
        if ( (unsigned int)dword_140E07560 > 5 )
        {
          v17 = dword_140F102AC;
          v25 = &v18;
          v27 = &v17;
          v18 = a1;
          v29 = &v16;
          v23 = dword_140F102B0;
          v26 = 8LL;
          v31 = &v23;
          v33 = &v14;
          v35 = &v15;
          v28 = 4LL;
          v16 = v5;
          v30 = 4LL;
          v32 = 4LL;
          v14 = v6;
          v34 = 4LL;
          LODWORD(v15) = a2;
          v36 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E07560,
            (unsigned __int8 *)byte_14004F1A5,
            0LL,
            0LL,
            8u,
            v24);
        }
        if ( dword_140F102AC != v5 )
          PopSendFanNoiseChangeWnf(v5);
        dword_140F102AC = v5;
        dword_140F102B0 = v6;
      }
    }
    else if ( dword_140F102AC != v5 )
    {
      if ( (unsigned int)dword_140E07560 > 5 )
      {
        v16 = dword_140F102AC;
        v25 = &v15;
        v27 = &v16;
        v15 = a1;
        v29 = &v17;
        v26 = 8LL;
        v28 = 4LL;
        v17 = v5;
        v30 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E07560,
          (unsigned __int8 *)&word_14004F0EE,
          0LL,
          0LL,
          5u,
          v24);
      }
      PopSendFanNoiseChangeWnf(v5);
      dword_140F102AC = v5;
    }
  }
  else if ( (unsigned int)dword_140E07560 > 2 )
  {
    v18 = a1;
    v25 = &v18;
    LODWORD(v15) = dword_140F102A8;
    v26 = 8LL;
    v27 = (int *)&v15;
    v28 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07560, (unsigned __int8 *)byte_14004F14B, 0LL, 0LL, 4u, v24);
  }
  PopFanFindBucketIndex(a1, a2, &v22, &v21);
  v9 = v22;
  v10 = v21;
  if ( v22 != *(_DWORD *)(a1 + 100) || v21 != *(_DWORD *)(a1 + 104) )
  {
    *(_DWORD *)(a1 + 92) = v22;
    v4 = 1;
    *(_DWORD *)(a1 + 96) = v10;
  }
  if ( (unsigned int)dword_140E07560 > 5 )
  {
    LODWORD(v15) = v9;
    v25 = &v18;
    v27 = (int *)&v15;
    v14 = v10;
    v29 = &v14;
    v18 = a1;
    v26 = 8LL;
    v28 = 4LL;
    v30 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07560, (unsigned __int8 *)byte_14004F02B, 0LL, 0LL, 5u, v24);
    goto LABEL_33;
  }
  return v4;
}
