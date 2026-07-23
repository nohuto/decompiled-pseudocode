/*
 * XREFs of PopPlTraceLogPowerPlane @ 0x1406159DC
 * Callers:
 *     PopPlRegisterPowerPlane @ 0x140507D2C (PopPlRegisterPowerPlane.c)
 *     PopDiagTraceControlCallback @ 0x140AC29B0 (PopDiagTraceControlCallback.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

int __fastcall PopPlTraceLogPowerPlane(unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  int *v3; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  unsigned __int16 *v7; // rcx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r14
  _QWORD *v10; // r15
  __int64 v11; // rcx
  int v12; // edx
  int v14; // [rsp+28h] [rbp-E0h]
  int v15; // [rsp+30h] [rbp-D8h]
  int v16; // [rsp+48h] [rbp-C0h] BYREF
  int v17; // [rsp+4Ch] [rbp-BCh] BYREF
  int v18; // [rsp+50h] [rbp-B8h] BYREF
  int v19; // [rsp+54h] [rbp-B4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20[2]; // [rsp+58h] [rbp-B0h] BYREF
  int *v21; // [rsp+78h] [rbp-90h]
  __int64 v22; // [rsp+80h] [rbp-88h]
  __int64 *v23; // [rsp+88h] [rbp-80h]
  __int64 v24; // [rsp+90h] [rbp-78h]
  __int64 *v25; // [rsp+98h] [rbp-70h]
  __int64 v26; // [rsp+A0h] [rbp-68h] BYREF
  __int64 *v27; // [rsp+A8h] [rbp-60h]
  __int64 v28; // [rsp+B0h] [rbp-58h] BYREF
  __int64 *v29; // [rsp+B8h] [rbp-50h]
  __int64 v30; // [rsp+C0h] [rbp-48h] BYREF
  int *v31; // [rsp+C8h] [rbp-40h]
  __int64 v32; // [rsp+D0h] [rbp-38h] BYREF
  int *v33; // [rsp+D8h] [rbp-30h]
  __int64 v34; // [rsp+E0h] [rbp-28h]
  int *v35; // [rsp+E8h] [rbp-20h]
  __int64 v36; // [rsp+F0h] [rbp-18h]
  unsigned __int16 *v37; // [rsp+F8h] [rbp-10h]
  __int64 v38; // [rsp+100h] [rbp-8h]

  v3 = (int *)(a1 + 24);
  LOWORD(v17) = 0;
  if ( (unsigned int)dword_140E07560 > 5 )
  {
    LOWORD(v16) = 1;
    v21 = &v16;
    v22 = 2LL;
    v23 = &v26;
    v25 = (__int64 *)*((_QWORD *)a1 + 1);
    v26 = *a1;
    v18 = *v3;
    v27 = (__int64 *)&v18;
    v19 = *((_DWORD *)a1 + 7);
    v29 = (__int64 *)&v19;
    v24 = 2LL;
    v28 = 4LL;
    v30 = 4LL;
    tlgWriteEx_EtwWriteEx((__int64)&dword_140E07560, (unsigned __int8 *)&byte_140051053, a3, 1u, v14, v15, 7u, v20);
  }
  v5 = *(_QWORD *)v3;
  v6 = 0LL;
  if ( *(_QWORD *)v3 )
  {
    do
    {
      v7 = *(unsigned __int16 **)(*((_QWORD *)a1 + 7) + 8 * v6);
      LOWORD(v17) = 4;
      if ( (unsigned int)dword_140E07560 > 5 )
      {
        LOWORD(v16) = 1;
        v21 = &v16;
        v22 = 2LL;
        v23 = &v26;
        v25 = (__int64 *)*((_QWORD *)v7 + 1);
        v26 = *v7;
        v27 = &v30;
        v29 = (__int64 *)*((_QWORD *)a1 + 1);
        v30 = *a1;
        v19 = *((_DWORD *)v7 + 18);
        v31 = &v19;
        v18 = *((_DWORD *)v7 + 8);
        v33 = &v18;
        v35 = &v17;
        v37 = v7 + 18;
        v24 = 2LL;
        v28 = 2LL;
        v32 = 4LL;
        v34 = 4LL;
        v36 = 2LL;
        v38 = 32LL;
        tlgWriteEx_EtwWriteEx(
          (__int64)&dword_140E07560,
          (unsigned __int8 *)&byte_140050FBB,
          a3,
          1u,
          v14,
          v15,
          0xBu,
          v20);
      }
      v5 = *(_QWORD *)v3;
      ++v6;
    }
    while ( v6 < *(_QWORD *)v3 );
    v3 = (int *)(a1 + 24);
  }
  v8 = 0LL;
  if ( v5 )
  {
    do
    {
      v5 = *((_QWORD *)a1 + 7);
      v9 = 0LL;
      v10 = *(_QWORD **)(v5 + 8 * v8);
      if ( v10[9] )
      {
        do
        {
          v5 = v10[10];
          v11 = *(_QWORD *)(v5 + 8 * v9);
          v12 = *(unsigned __int16 *)(v11 + 24);
          LOWORD(v17) = *(_WORD *)(v11 + 24);
          if ( (unsigned int)dword_140E07560 > 5 )
          {
            v23 = (__int64 *)v11;
            v21 = &v16;
            LOWORD(v16) = 1;
            v25 = &v28;
            v27 = (__int64 *)v10[1];
            v28 = *(unsigned __int16 *)v10;
            v29 = &v32;
            v31 = (int *)*((_QWORD *)a1 + 1);
            v32 = *a1;
            v33 = &v17;
            v35 = (int *)(v11 + 32);
            v22 = 2LL;
            v36 = (unsigned int)(8 * v12);
            v24 = 16LL;
            v26 = 2LL;
            v30 = 2LL;
            v34 = 2LL;
            LODWORD(v5) = tlgWriteEx_EtwWriteEx(
                            (__int64)&dword_140E07560,
                            (unsigned __int8 *)&word_140050F2E,
                            a3,
                            1u,
                            v14,
                            v15,
                            0xAu,
                            v20);
          }
          ++v9;
        }
        while ( v9 < v10[9] );
      }
      ++v8;
    }
    while ( v8 < *(_QWORD *)v3 );
  }
  return v5;
}
