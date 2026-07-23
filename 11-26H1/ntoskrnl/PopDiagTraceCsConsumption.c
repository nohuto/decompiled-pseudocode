/*
 * XREFs of PopDiagTraceCsConsumption @ 0x140B38374
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140421FC8 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PopDiagTraceCsConsumption(int *a1)
{
  unsigned __int64 v1; // r8
  int v2; // eax
  unsigned int v3; // r9d
  __int64 v4; // r10
  char v5; // r11
  __int128 *v6; // rcx
  ULONG *p_Size; // rax
  __int64 v8; // rdx
  __int128 v10; // [rsp+30h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = *a1;
  v3 = a1[14];
  v4 = *((_QWORD *)a1 + 18);
  v5 = *((_BYTE *)a1 + 136);
  v10 = 0LL;
  LODWORD(v10) = v2;
  WORD2(v10) = v1 / 0x3938700;
  if ( v1 )
  {
    BYTE6(v10) = 100LL * *((_QWORD *)a1 + 5) / v1;
    BYTE7(v10) = 100LL * *((_QWORD *)a1 + 6) / v1;
    BYTE10(v10) = 100LL * *((_QWORD *)a1 + 8) / v1;
    BYTE11(v10) = 100LL * *((_QWORD *)a1 + 9) / v1;
    BYTE13(v10) = 100LL * *((_QWORD *)a1 + 11) / v1;
    BYTE14(v10) = 100LL * *((_QWORD *)a1 + 12) / v1;
    if ( v4 == -1 )
      HIBYTE(v10) = -1;
    else
      HIBYTE(v10) = 100 * v4 / v1;
  }
  BYTE12(v10) = v5;
  v6 = &v10;
  if ( v3 > 0xFFFF )
    LOWORD(v3) = -1;
  p_Size = &UserData.Size;
  WORD4(v10) = v3;
  v8 = 4LL;
  do
  {
    *((_QWORD *)p_Size - 1) = v6;
    v6 = (__int128 *)((char *)v6 + 4);
    *(_QWORD *)p_Size = 4LL;
    p_Size += 4;
    --v8;
  }
  while ( v8 );
  return EtwWrite(PopDiagHandle, &POP_ETW_EVENT_CS_CONSUMPTION_PERFTRACK, 0LL, 4u, &UserData);
}
