/*
 * XREFs of RtlpHpTlLogVAChange @ 0x18006F198
 * Callers:
 *     RtlpHpSegMgrReserve @ 0x18006EA9C (RtlpHpSegMgrReserve.c)
 *     RtlpHpFreeVA @ 0x18006EE10 (RtlpHpFreeVA.c)
 *     RtlpHpAllocVA @ 0x18006EF50 (RtlpHpAllocVA.c)
 *     RtlpHpLargeAlloc @ 0x18006FE4C (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeReAlloc @ 0x1800710A8 (RtlpHpLargeReAlloc.c)
 *     RtlpHpLargeFree @ 0x18008058C (RtlpHpLargeFree.c)
 *     RtlpHpSegMgrCommit @ 0x18008A260 (RtlpHpSegMgrCommit.c)
 *     RtlpHpHeapDestroy @ 0x1800DFE7C (RtlpHpHeapDestroy.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1800E0740 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008AD00 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

void __fastcall RtlpHpTlLogVAChange(int a1, __int64 a2, __int64 a3, int a4)
{
  __int64 *v4; // rax
  const int *v5; // rdx
  int v6; // [rsp+30h] [rbp-29h] BYREF
  __int64 v7; // [rsp+38h] [rbp-21h] BYREF
  _QWORD v8[2]; // [rsp+40h] [rbp-19h] BYREF
  __int64 v9[6]; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v10; // [rsp+80h] [rbp+27h]
  __int64 v11; // [rsp+88h] [rbp+2Fh]
  int *v12; // [rsp+90h] [rbp+37h]
  __int64 v13; // [rsp+98h] [rbp+3Fh]

  switch ( a1 )
  {
    case 0x1000:
      if ( (unsigned int)dword_1801C4680 <= 5 )
        return;
      v8[0] = a2;
      v10 = &v7;
      v5 = &dword_18019AF75;
      goto LABEL_13;
    case 0x2000:
      if ( (unsigned int)dword_1801C4680 <= 5 )
        return;
      v8[0] = a2;
      v10 = &v7;
      v5 = (const int *)&unk_18019AE55;
      goto LABEL_13;
    case 0x4000:
      if ( (unsigned int)dword_1801C4680 <= 5 )
        return;
      v8[0] = a2;
      v10 = &v7;
      v5 = (const int *)&unk_18019AE1E;
LABEL_13:
      v4 = v8;
      v7 = a3;
      goto LABEL_14;
  }
  if ( a1 == 0x8000 && (unsigned int)dword_1801C4680 > 5 )
  {
    v7 = a2;
    v4 = &v7;
    v8[0] = a3;
    v10 = v8;
    v5 = (const int *)&unk_18019AF3F;
LABEL_14:
    v9[4] = (__int64)v4;
    v12 = &v6;
    v9[5] = 8LL;
    v11 = 8LL;
    v6 = a4;
    v13 = 4LL;
    tlgWriteTransfer_EtwEventWriteTransfer((int)&dword_1801C4680, (int)v5, a3, a4, 5u, (__int64)v9);
  }
}
