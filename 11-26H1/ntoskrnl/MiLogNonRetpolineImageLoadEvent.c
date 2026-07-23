/*
 * XREFs of MiLogNonRetpolineImageLoadEvent @ 0x140B21560
 * Callers:
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x140873ACC (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MiLogRetpolineImageLoadEvents @ 0x140B214F4 (MiLogRetpolineImageLoadEvents.c)
 * Callees:
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

int __fastcall MiLogNonRetpolineImageLoadEvent(unsigned __int16 *a1, int a2, int a3)
{
  __int64 v3; // rax
  int v5; // [rsp+30h] [rbp-59h] BYREF
  int v6; // [rsp+34h] [rbp-55h] BYREF
  __int64 v7; // [rsp+38h] [rbp-51h] BYREF
  __int64 v8; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v10; // [rsp+70h] [rbp-19h]
  __int64 v11; // [rsp+78h] [rbp-11h]
  _DWORD *v12; // [rsp+80h] [rbp-9h]
  __int64 v13; // [rsp+88h] [rbp-1h]
  __int64 v14; // [rsp+90h] [rbp+7h]
  _DWORD v15[2]; // [rsp+98h] [rbp+Fh] BYREF
  int *v16; // [rsp+A0h] [rbp+17h]
  __int64 v17; // [rsp+A8h] [rbp+1Fh]
  int *v18; // [rsp+B0h] [rbp+27h]
  __int64 v19; // [rsp+B8h] [rbp+2Fh]
  __int64 *v20; // [rsp+C0h] [rbp+37h]
  __int64 v21; // [rsp+C8h] [rbp+3Fh]

  if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u
    && (*((_QWORD *)stru_140E366D8.FirstArgument + 2) & 0x400000000000LL) != 0 )
  {
    v3 = *((_QWORD *)stru_140E366D8.FirstArgument + 3) & 0x400000000000LL;
    if ( v3 == *((_QWORD *)stru_140E366D8.FirstArgument + 3) )
    {
      v5 = a2;
      v7 = 1LL;
      v10 = &v7;
      v11 = 8LL;
      v12 = v15;
      v14 = *((_QWORD *)a1 + 1);
      v15[0] = *a1;
      v16 = &v5;
      v18 = &v6;
      v8 = 2164260864LL;
      v20 = &v8;
      v13 = 2LL;
      v15[1] = 0;
      v17 = 4LL;
      v6 = a3;
      v19 = 4LL;
      v21 = 8LL;
      LODWORD(v3) = tlgWriteAgg((__int64)stru_140E366D8.FirstArgument, (unsigned __int8 *)&word_1400591E2, 0LL, 8u, &v9);
    }
  }
  return v3;
}
