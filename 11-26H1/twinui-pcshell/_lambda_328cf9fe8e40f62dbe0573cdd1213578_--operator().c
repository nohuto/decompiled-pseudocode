/*
 * XREFs of _lambda_328cf9fe8e40f62dbe0573cdd1213578_::operator() @ 0x1800B7F54
 * Callers:
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800B7BF0 (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     ??$TaskflowImmersiveShellBroker_StartupTaskExecuted@AEBG@TaskFlowDataEngineTelemetry@@SAXAEBG@Z @ 0x1800B80F8 (--$TaskflowImmersiveShellBroker_StartupTaskExecuted@AEBG@TaskFlowDataEngineTelemetry@@SAXAEBG@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     GetTimestamp @ 0x1802C62B4 (GetTimestamp.c)
 *     ??A?$bitset@$0N@@std@@QEAA?AVreference@01@_K@Z @ 0x1803F625C (--A-$bitset@$0N@@std@@QEAA-AVreference@01@_K@Z.c)
 */

int *__fastcall lambda_328cf9fe8e40f62dbe0573cdd1213578_::operator()(
        int **a1,
        unsigned __int16 a2,
        __int64 a3,
        const char *a4)
{
  int *v4; // rax
  __int64 v6; // rdi
  int v7; // ecx
  _QWORD *v8; // rax
  const char *v9; // r9
  int v10; // ecx
  _QWORD *v11; // rax
  int *result; // rax
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int16 v15; // [rsp+48h] [rbp+10h] BYREF

  v4 = a1[1];
  v6 = a2;
  v15 = a2;
  v7 = *(unsigned __int16 *)v4;
  if ( **a1 >= v7 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x6F,
      (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      a4);
  if ( a2 >= (unsigned __int16)v7 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x70,
      (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      a4);
  v8 = (_QWORD *)std::bitset<13>::operator[](a1[2], v13, a2);
  v10 = *(_DWORD *)(*v8 + 4LL * (v8[1] >> 5));
  if ( _bittest(&v10, v8[1] & 0x1F) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x71,
      (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      v9);
  TaskFlowDataEngineTelemetry::TaskflowImmersiveShellBroker_StartupTaskExecuted<unsigned short const &>(&v15);
  *(_QWORD *)&a1[3][2 * **a1 + 2] = GetTimestamp();
  *((_WORD *)a1[4] + **a1) = v6;
  v11 = (_QWORD *)std::bitset<13>::operator[](a1[2], v13, v6);
  *(_DWORD *)(*v11 + 4LL * (v11[1] >> 5)) |= 1 << (v11[1] & 0x1F);
  result = *a1;
  ++**a1;
  return result;
}
