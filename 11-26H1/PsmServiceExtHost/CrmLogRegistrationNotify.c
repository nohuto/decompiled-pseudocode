/*
 * XREFs of CrmLogRegistrationNotify @ 0x180020F28
 * Callers:
 *     CrmRegistrationNotify @ 0x180020C30 (CrmRegistrationNotify.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180043410 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall CrmLogRegistrationNotify(__int64 a1, __int64 a2, int a3, bool a4, int a5)
{
  int v5; // r10d
  void *v7; // rdx
  int v8; // r8d
  char v9; // r9
  __int64 v10; // r11
  int v11; // [rsp+20h] [rbp-81h]
  bool v12; // [rsp+30h] [rbp-71h] BYREF
  _BYTE v13[3]; // [rsp+31h] [rbp-70h] BYREF
  int v14; // [rsp+34h] [rbp-6Dh] BYREF
  __int64 v15; // [rsp+38h] [rbp-69h] BYREF
  __int64 v16; // [rsp+40h] [rbp-61h] BYREF
  __int64 v17; // [rsp+48h] [rbp-59h] BYREF
  char v18[32]; // [rsp+50h] [rbp-51h] BYREF
  UUID *v19; // [rsp+70h] [rbp-31h]
  __int64 v20; // [rsp+78h] [rbp-29h]
  __int64 *v21; // [rsp+80h] [rbp-21h]
  __int64 v22; // [rsp+88h] [rbp-19h]
  __int64 *v23; // [rsp+90h] [rbp-11h]
  __int64 v24; // [rsp+98h] [rbp-9h]
  bool *v25; // [rsp+A0h] [rbp-1h]
  __int64 v26; // [rsp+A8h] [rbp+7h]
  bool *v27; // [rsp+B0h] [rbp+Fh]
  __int64 v28; // [rsp+B8h] [rbp+17h]
  int *v29; // [rsp+C0h] [rbp+1Fh]
  __int64 v30; // [rsp+C8h] [rbp+27h]
  __int64 *v31; // [rsp+D0h] [rbp+2Fh]
  __int64 v32; // [rsp+D8h] [rbp+37h]

  v5 = a5;
  if ( a5 < 0 )
  {
    if ( (unsigned int)dword_1800E12E8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1800E12E8, 0x400000000002LL) )
    {
      v22 = 8LL;
      v19 = &Uuid;
      v17 = *(_QWORD *)(a1 + 16);
      v21 = &v17;
      v12 = v8 != 0;
      v15 = *(_QWORD *)(v10 + 56);
      v23 = &v15;
      v25 = &v12;
      v29 = &v14;
      v31 = &v16;
      v27 = v13;
      v7 = &unk_1800CCC69;
      v11 = 9;
      v24 = 8LL;
      v13[0] = v9;
      v16 = 0x2000000LL;
      v32 = 8LL;
      goto LABEL_7;
    }
  }
  else if ( (unsigned int)dword_1800E12E8 > 5 && (qword_1800E12F8 & 2) != 0 && (qword_1800E1300 & 2) == qword_1800E1300 )
  {
    v12 = a4;
    v19 = &Uuid;
    v16 = *(_QWORD *)(a1 + 16);
    v13[0] = a3 != 0;
    v22 = 8LL;
    v21 = &v16;
    v15 = *(_QWORD *)(a2 + 56);
    v23 = &v15;
    v25 = v13;
    v29 = &v14;
    v27 = &v12;
    v7 = &unk_1800CCB63;
    v11 = 8;
    v24 = 8LL;
LABEL_7:
    v20 = 16LL;
    v26 = 1LL;
    v28 = 1LL;
    v14 = v5;
    v30 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(&dword_1800E12E8, v7, 0LL, 0LL, v11, v18);
  }
}
