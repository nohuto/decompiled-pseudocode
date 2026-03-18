/*
 * XREFs of ?CompleteFrameFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z @ 0x14020CA88
 * Callers:
 *     rimGetCompleteFrameFromIVCompleteFrame @ 0x14020D8E4 (rimGetCompleteFrameFromIVCompleteFrame.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400F39AC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::RIM::CompleteFrameFromContainer(
        struct RIMDEV *const a1,
        const struct RIMCOMPLETEFRAME *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  int v5; // r11d
  __int64 v6; // rcx
  int v7; // edx
  int v8; // ecx
  int v9; // [rsp+30h] [rbp-69h] BYREF
  int v10; // [rsp+34h] [rbp-65h] BYREF
  int v11; // [rsp+38h] [rbp-61h] BYREF
  __int64 v12; // [rsp+40h] [rbp-59h] BYREF
  __int64 v13; // [rsp+48h] [rbp-51h] BYREF
  __int64 v14; // [rsp+50h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+60h] [rbp-39h] BYREF
  __int64 *v16; // [rsp+80h] [rbp-19h]
  __int64 v17; // [rsp+88h] [rbp-11h]
  __int64 *v18; // [rsp+90h] [rbp-9h]
  __int64 v19; // [rsp+98h] [rbp-1h]
  __int64 *v20; // [rsp+A0h] [rbp+7h]
  __int64 v21; // [rsp+A8h] [rbp+Fh]
  int *v22; // [rsp+B0h] [rbp+17h]
  __int64 v23; // [rsp+B8h] [rbp+1Fh]
  int *v24; // [rsp+C0h] [rbp+27h]
  __int64 v25; // [rsp+C8h] [rbp+2Fh]
  int *v26; // [rsp+D0h] [rbp+37h]
  __int64 v27; // [rsp+D8h] [rbp+3Fh]

  if ( (unsigned int)dword_1402A9E40 > 4 && tlgKeywordOn((__int64)&dword_1402A9E40, 256LL) )
  {
    v6 = v2 + 448;
    if ( v2 )
      v7 = *(unsigned __int16 *)(*(_QWORD *)v6 + 18LL);
    else
      v7 = 0;
    v9 = v7;
    if ( v2 )
      v8 = *(unsigned __int16 *)(*(_QWORD *)v6 + 16LL);
    else
      v8 = 0;
    v12 = *(_QWORD *)(v3 + 48);
    v10 = v8;
    v26 = &v9;
    v14 = v2;
    v24 = &v10;
    v21 = 8LL;
    v22 = &v11;
    v20 = &v12;
    v18 = &v13;
    v16 = &v14;
    v19 = 8LL;
    v17 = 8LL;
    v11 = v5;
    v13 = v4;
    v27 = 4LL;
    v25 = 4LL;
    v23 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1402A9E40, byte_140285B0A, 0LL, 0LL, 8u, &v15);
  }
}
