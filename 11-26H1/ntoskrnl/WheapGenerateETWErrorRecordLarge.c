/*
 * XREFs of WheapGenerateETWErrorRecordLarge @ 0x1406DB370
 * Callers:
 *     WheapGenerateETWEvents @ 0x1403E2E58 (WheapGenerateETWEvents.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall WheapGenerateETWErrorRecordLarge(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned int v2; // ebx
  unsigned int v3; // esi
  __int64 v4; // rdi
  ULONGLONG v5; // r14
  int v6; // eax
  unsigned int v7; // [rsp+48h] [rbp-9h] BYREF
  int v8; // [rsp+4Ch] [rbp-5h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+7h] BYREF
  int *v10; // [rsp+68h] [rbp+17h]
  __int64 v11; // [rsp+70h] [rbp+1Fh]
  unsigned int *v12; // [rsp+78h] [rbp+27h]
  __int64 v13; // [rsp+80h] [rbp+2Fh]
  __int64 v14; // [rsp+88h] [rbp+37h]
  int v15; // [rsp+90h] [rbp+3Fh]
  int v16; // [rsp+94h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF

  result = (unsigned __int64)&retaddr;
  v2 = *(_DWORD *)(a1 + 20);
  v3 = 0;
  v8 = 0;
  v4 = a1;
  if ( v2 )
  {
    v5 = a1 + 96;
    do
    {
      if ( v3 + 61427 < v2 )
        v6 = 61427;
      else
        v6 = v2 - v3;
      v7 = v6;
      v10 = &v8;
      v15 = v6;
      v12 = &v7;
      UserData.Ptr = v5;
      *(_QWORD *)&UserData.Size = 4LL;
      v11 = 4LL;
      v13 = 4LL;
      v14 = v4;
      v16 = 0;
      EtwWriteEx(
        *(REGHANDLE *)&CmpContextListLock.SchedulerApcFill5[80],
        &EVENT_WHEA_ERROR_PART,
        0LL,
        0,
        0LL,
        0LL,
        4u,
        &UserData);
      result = v7;
      v3 += v7;
      v4 += v7;
      ++v8;
    }
    while ( v3 < v2 );
  }
  return result;
}
