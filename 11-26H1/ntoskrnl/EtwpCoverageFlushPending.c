/*
 * XREFs of EtwpCoverageFlushPending @ 0x140B433F0
 * Callers:
 *     EtwpCoverageReset @ 0x140829D38 (EtwpCoverageReset.c)
 *     EtwpCoverageResetCP @ 0x140829F60 (EtwpCoverageResetCP.c)
 *     EtwpFlushCoverage @ 0x14082A2A8 (EtwpFlushCoverage.c)
 *     EtwpCoverageRecord @ 0x140B0E2F8 (EtwpCoverageRecord.c)
 *     EtwpCoverageFlushWorkItemCallback @ 0x140B43DD0 (EtwpCoverageFlushWorkItemCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeCancelTimer2 @ 0x1403AA4E0 (KeCancelTimer2.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

int *__fastcall EtwpCoverageFlushPending(int **a1)
{
  int *result; // rax
  int *v3; // rsi
  unsigned __int64 v4; // rdi
  int *v5; // rcx
  __int16 v6; // dx
  unsigned __int16 v7; // dx
  __int64 v8; // rcx
  __int16 v9; // [rsp+38h] [rbp-59h] BYREF
  int v10; // [rsp+3Ch] [rbp-55h] BYREF
  int v11; // [rsp+40h] [rbp-51h] BYREF
  int v12; // [rsp+44h] [rbp-4Dh] BYREF
  int v13; // [rsp+48h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+58h] [rbp-39h] BYREF
  int *v15; // [rsp+78h] [rbp-19h]
  __int64 v16; // [rsp+80h] [rbp-11h]
  int *v17; // [rsp+88h] [rbp-9h]
  __int64 v18; // [rsp+90h] [rbp-1h]
  int *v19; // [rsp+98h] [rbp+7h]
  __int64 v20; // [rsp+A0h] [rbp+Fh]
  int *v21; // [rsp+A8h] [rbp+17h]
  __int64 v22; // [rsp+B0h] [rbp+1Fh]
  __int16 *v23; // [rsp+B8h] [rbp+27h]
  __int64 v24; // [rsp+C0h] [rbp+2Fh]
  __int64 v25; // [rsp+C8h] [rbp+37h]
  int v26; // [rsp+D0h] [rbp+3Fh]
  int v27; // [rsp+D4h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+5Fh] BYREF

  result = (int *)&retaddr;
  if ( *((_DWORD *)a1 + 16) )
  {
    v3 = a1[5];
    v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v9 = *((_WORD *)a1 + 32);
    if ( (unsigned int)dword_140E08FB8 > 5 && tlgKeywordOn((__int64)&dword_140E08FB8, 0x400000000000LL) )
    {
      v5 = *a1;
      v6 = *((_WORD *)v3 + 12);
      v10 = **a1;
      v15 = &v10;
      v16 = 4LL;
      v11 = v5[1];
      v17 = &v11;
      v18 = 4LL;
      v12 = v4 - v5[4];
      v19 = &v12;
      v20 = 4LL;
      v13 = v4 - v5[5];
      v21 = &v13;
      v23 = &v9;
      v7 = v6 - *((_QWORD *)v3 + 4);
      v25 = *((_QWORD *)v3 + 4);
      v26 = v7;
      v22 = 4LL;
      v24 = 2LL;
      v27 = 0;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E08FB8,
        (unsigned __int8 *)byte_140054713,
        0LL,
        0LL,
        8u,
        &v14);
    }
    *((_QWORD *)v3 + 4) = *((_QWORD *)v3 + 3);
    v8 = (__int64)(*a1 + 60);
    *((_DWORD *)a1 + 16) = 0;
    KeCancelTimer2(v8);
    result = *a1;
    (*a1)[4] = v4;
  }
  return result;
}
