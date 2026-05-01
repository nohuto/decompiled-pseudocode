/*
 * XREFs of _lambda_328cf9fe8e40f62dbe0573cdd1213578_::operator() @ 0x1801DDFA0
 * Callers:
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801DDBB0 (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     ??$TaskflowImmersiveShellBroker_StartupTaskExecuted@AEBG@TaskFlowDataEngineTelemetry@@SAXAEBG@Z @ 0x1801DE084 (--$TaskflowImmersiveShellBroker_StartupTaskExecuted@AEBG@TaskFlowDataEngineTelemetry@@SAXAEBG@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029752C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     GetTimestamp @ 0x1802CEDF4 (GetTimestamp.c)
 */

int *__fastcall lambda_328cf9fe8e40f62dbe0573cdd1213578_::operator()(
        int **a1,
        unsigned __int16 a2,
        __int64 a3,
        const char *a4)
{
  int v6; // ecx
  unsigned __int64 v7; // rsi
  int v8; // ebp
  __int64 Timestamp; // rax
  int *v10; // r8
  int *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int16 v13; // [rsp+38h] [rbp+10h] BYREF

  v13 = a2;
  v6 = *(unsigned __int16 *)a1[1];
  if ( **a1 >= v6 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x6F,
      (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      a4);
  if ( a2 >= (unsigned __int16)v6 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x70,
      (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      a4);
  v7 = (unsigned __int64)a2 >> 5;
  v8 = 1 << (a2 & 0x1F);
  if ( (v8 & a1[2][v7]) != 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x71,
      (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      a4);
  TaskFlowDataEngineTelemetry::TaskflowImmersiveShellBroker_StartupTaskExecuted<unsigned short const &>(&v13);
  Timestamp = GetTimestamp();
  v10 = *a1;
  *(_QWORD *)&a1[3][2 * **a1 + 2] = Timestamp;
  *((_WORD *)a1[4] + *v10) = a2;
  result = a1[2];
  result[v7] |= v8;
  ++*v10;
  return result;
}
