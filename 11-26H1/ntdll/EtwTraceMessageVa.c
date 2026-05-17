/*
 * XREFs of EtwTraceMessageVa @ 0x1800BD900
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x180056660 (RtlNtStatusToDosError.c)
 *     EtwpTraceUmMessage @ 0x1800BD9EC (EtwpTraceUmMessage.c)
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceMessageVa(__int64 a1, int a2, _DWORD *a3, __int16 a4, _QWORD *a5)
{
  unsigned int v5; // ebx
  int v7; // ecx
  _QWORD *v8; // rax
  NTSTATUS v9; // eax
  int v11; // [rsp+30h] [rbp-38h] BYREF
  __int16 v12; // [rsp+34h] [rbp-34h]
  _BYTE v13[18]; // [rsp+36h] [rbp-32h] BYREF
  int v14; // [rsp+48h] [rbp-20h]
  int v15; // [rsp+4Ch] [rbp-1Ch]
  _QWORD *v16; // [rsp+50h] [rbp-18h]

  v5 = 0;
  v11 = 0;
  memset(v13, 0, sizeof(v13));
  if ( (a1 & 0x1000000) != 0 )
    return EtwpTraceUmMessage(a1, a2, (_DWORD)a3, a4, (__int64)a5);
  v7 = 0;
  if ( *a5 )
  {
    v8 = a5;
    do
    {
      ++v7;
      v8 += 2;
    }
    while ( *v8 );
  }
  v12 = a4;
  v14 = a2;
  if ( (a2 & 4) != 0 )
  {
    *(_DWORD *)&v13[2] = *a3;
  }
  else if ( (a2 & 2) != 0 )
  {
    *(_OWORD *)&v13[2] = *(_OWORD *)a3;
  }
  v16 = a5;
  v15 = 16 * v7 + 8;
  v9 = NtTraceEvent(a1, 512LL, 40LL, &v11);
  if ( v9 )
    return RtlNtStatusToDosError(v9);
  return v5;
}
