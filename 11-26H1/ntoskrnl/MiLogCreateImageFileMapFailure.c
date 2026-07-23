/*
 * XREFs of MiLogCreateImageFileMapFailure @ 0x140886120
 * Callers:
 *     MiBuildImageControlArea @ 0x140A6279C (MiBuildImageControlArea.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x140453678 (_tlgCreate1Sz_char.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall MiLogCreateImageFileMapFailure(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v5; // r11d
  int v6; // r9d
  __int64 v7; // r8
  __int64 v8; // r10
  int v9; // [rsp+20h] [rbp-71h]
  int v10; // [rsp+28h] [rbp-69h]
  int v11; // [rsp+40h] [rbp-51h] BYREF
  int v12; // [rsp+44h] [rbp-4Dh] BYREF
  __int64 v13; // [rsp+48h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v15[16]; // [rsp+70h] [rbp-21h] BYREF
  _DWORD *v16; // [rsp+80h] [rbp-11h]
  __int64 v17; // [rsp+88h] [rbp-9h]
  __int64 v18; // [rsp+90h] [rbp-1h]
  _DWORD v19[2]; // [rsp+98h] [rbp+7h] BYREF
  int *v20; // [rsp+A0h] [rbp+Fh]
  __int64 v21; // [rsp+A8h] [rbp+17h]
  int *v22; // [rsp+B0h] [rbp+1Fh]
  __int64 v23; // [rsp+B8h] [rbp+27h]
  __int64 *v24; // [rsp+C0h] [rbp+2Fh]
  __int64 v25; // [rsp+C8h] [rbp+37h]

  if ( *(_DWORD *)stru_140E366D8.FirstArgument > 2u
    && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000004000LL) )
  {
    tlgCreate1Sz_char((__int64)v15, "SectionAlignmentIssue");
    v11 = v6;
    v25 = (unsigned int)(v5 + 8);
    v16 = v19;
    v18 = *(_QWORD *)(v7 + 96);
    v19[0] = *(unsigned __int16 *)(v7 + 88);
    v20 = &v11;
    v12 = a5;
    v22 = &v12;
    v24 = &v13;
    v17 = 2LL;
    v19[1] = v5;
    v21 = 4LL;
    v23 = 4LL;
    v13 = 0x1000000LL;
    tlgWriteEx_EtwWriteEx(v8, (unsigned __int8 *)&byte_14005B511, v7, v5 + 1, v9, v10, v5 + 8, &v14);
  }
}
