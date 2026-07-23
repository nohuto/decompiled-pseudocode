/*
 * XREFs of EtwpPsProvTraceImage @ 0x140A8B330
 * Callers:
 *     EtwpTraceImageUnload @ 0x14046F868 (EtwpTraceImageUnload.c)
 *     PerfLogImageLoad @ 0x140A8B0E0 (PerfLogImageLoad.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpPsProvTraceImage(unsigned __int16 *a1, ULONGLONG a2, __int16 a3, int a4)
{
  const EVENT_DESCRIPTOR *v5; // rdx
  NTSTATUS result; // eax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-39h] BYREF
  ULONGLONG v8; // [rsp+50h] [rbp-29h]
  __int64 v9; // [rsp+58h] [rbp-21h]
  ULONGLONG v10; // [rsp+60h] [rbp-19h]
  __int64 v11; // [rsp+68h] [rbp-11h]
  ULONGLONG v12; // [rsp+70h] [rbp-9h]
  __int64 v13; // [rsp+78h] [rbp-1h]
  ULONGLONG v14; // [rsp+80h] [rbp+7h]
  __int64 v15; // [rsp+88h] [rbp+Fh]
  ULONGLONG v16; // [rsp+90h] [rbp+17h]
  __int64 v17; // [rsp+98h] [rbp+1Fh]
  __int64 v18; // [rsp+A0h] [rbp+27h]
  int v19; // [rsp+A8h] [rbp+2Fh]
  int v20; // [rsp+ACh] [rbp+33h]
  __int64 *v21; // [rsp+B0h] [rbp+37h]
  __int64 v22; // [rsp+B8h] [rbp+3Fh]

  if ( a3 == 5121 )
  {
    v5 = &ImageLoad;
  }
  else
  {
    if ( a3 != 5122 )
      return result;
    v5 = (const EVENT_DESCRIPTOR *)ImageUnload;
  }
  UserData.Ptr = a2;
  *(_QWORD *)&UserData.Size = 8LL;
  v8 = a2 + 8;
  v9 = 8LL;
  v10 = a2 + 16;
  v11 = 4LL;
  v12 = a2 + 20;
  v13 = 4LL;
  v14 = a2 + 24;
  v15 = 4LL;
  v16 = a2 + 32;
  v18 = *((_QWORD *)a1 + 1);
  v19 = *a1;
  v21 = &EtwpNull;
  v17 = 8LL;
  v20 = 0;
  v22 = 2LL;
  return EtwWriteEx((REGHANDLE)stru_140F03830.Affinity, v5, 0LL, a4 != 0, 0LL, 0LL, 8u, &UserData);
}
