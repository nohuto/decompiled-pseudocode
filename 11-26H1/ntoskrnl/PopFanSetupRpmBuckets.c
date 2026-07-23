/*
 * XREFs of PopFanSetupRpmBuckets @ 0x140B37048
 * Callers:
 *     PopFanWorker @ 0x140B36AD0 (PopFanWorker.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopFanSetNoiseImpact @ 0x1407DEF20 (PopFanSetNoiseImpact.c)
 */

void __fastcall PopFanSetupRpmBuckets(__int64 a1)
{
  unsigned int v1; // r14d
  unsigned int v3; // esi
  unsigned int v4; // edi
  unsigned int i; // r11d
  unsigned int v6; // r10d
  unsigned int v7; // r10d
  unsigned int v8; // r13d
  unsigned int v9; // r12d
  unsigned int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // r8d
  unsigned __int8 *v13; // rdx
  ULONG v14; // [rsp+28h] [rbp-69h]
  unsigned int v15; // [rsp+38h] [rbp-59h] BYREF
  __int64 v16; // [rsp+40h] [rbp-51h] BYREF
  int v17; // [rsp+48h] [rbp-49h]
  int v18; // [rsp+4Ch] [rbp-45h]
  struct _EVENT_DATA_DESCRIPTOR v19[2]; // [rsp+58h] [rbp-39h] BYREF
  __int64 *v20; // [rsp+78h] [rbp-19h]
  __int64 v21; // [rsp+80h] [rbp-11h]
  unsigned int *v22; // [rsp+88h] [rbp-9h]
  __int64 v23; // [rsp+90h] [rbp-1h]
  unsigned int *v24; // [rsp+98h] [rbp+7h]
  __int64 v25; // [rsp+A0h] [rbp+Fh]
  __int64 v26; // [rsp+A8h] [rbp+17h]
  __int64 v27; // [rsp+B0h] [rbp+1Fh]

  v1 = *(_DWORD *)(a1 + 108);
  v16 = 0x500000002LL;
  v17 = 5;
  v18 = 5;
  if ( !v1 )
  {
    if ( (unsigned int)dword_140E07560 <= 2 )
      return;
    v15 = 0;
    v20 = &v16;
    v13 = (unsigned __int8 *)&unk_14004F360;
    v22 = &v15;
    v14 = 4;
LABEL_23:
    v23 = 4LL;
    goto LABEL_24;
  }
  v3 = 0;
  v4 = 0;
  for ( i = 0; ; ++i )
  {
    if ( i >= 4 )
    {
      *(_DWORD *)(a1 + 128) = v3;
      if ( (unsigned int)dword_140E07560 > 4 )
      {
        v20 = &v16;
        LOWORD(v15) = v3;
        v22 = (unsigned int *)(a1 + 112);
        v24 = &v15;
        v26 = a1 + 132;
        v27 = 4 * (unsigned int)(unsigned __int16)v3;
        v16 = a1;
        v21 = 8LL;
        v23 = 16LL;
        v25 = 2LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E07560,
          (unsigned __int8 *)&word_14004F236,
          0LL,
          0LL,
          6u,
          v19);
      }
      PopFanSetNoiseImpact(a1, 1);
      return;
    }
    v6 = *(_DWORD *)(a1 + 4LL * i + 112);
    if ( v6 != v4 )
      break;
LABEL_13:
    ;
  }
  if ( v6 <= v4 || v6 % v1 )
  {
    if ( (unsigned int)dword_140E07560 <= 2 )
      return;
    v23 = 16LL;
    v20 = &v16;
    v13 = (unsigned __int8 *)byte_14004F281;
    v22 = (unsigned int *)(a1 + 112);
    v14 = 4;
LABEL_24:
    v16 = a1;
    v21 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07560, v13, 0LL, 0LL, v14, v19);
    return;
  }
  v7 = v6 - v4;
  v8 = 0;
  v9 = v7 / v1;
  v10 = v7;
  if ( v7 / v1 >= *((_DWORD *)&v16 + i) )
    v9 = *((_DWORD *)&v16 + i);
  while ( 1 )
  {
    v15 = v10;
    if ( v8 >= v9 )
    {
      v4 = *(_DWORD *)(a1 + 4LL * i + 112);
      goto LABEL_13;
    }
    if ( v3 >= 0x11 )
      break;
    v11 = v3++;
    v12 = v10 / v9 - v10 / v9 % v1;
    v10 = v7 + v15;
    *(_DWORD *)(a1 + 4 * v11 + 132) = v4 + v12;
    ++v8;
  }
  if ( (unsigned int)dword_140E07560 > 2 )
  {
    v15 = v3;
    v20 = &v16;
    v13 = (unsigned __int8 *)&word_14004F2C6;
    v25 = 16LL;
    v22 = &v15;
    v27 = 68LL;
    v24 = (unsigned int *)(a1 + 112);
    v26 = a1 + 132;
    v14 = 6;
    goto LABEL_23;
  }
}
