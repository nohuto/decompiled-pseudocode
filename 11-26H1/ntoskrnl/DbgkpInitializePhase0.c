/*
 * XREFs of DbgkpInitializePhase0 @ 0x140CBBC48
 * Callers:
 *     DbgkInitialize @ 0x140CBBBC0 (DbgkInitialize.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObCreateObjectType @ 0x14077E5D0 (ObCreateObjectType.c)
 *     DbgkpInitializePhase0SiloState @ 0x14078D0E4 (DbgkpInitializePhase0SiloState.c)
 *     DbgkpGetServerSiloState @ 0x140B1F0AC (DbgkpGetServerSiloState.c)
 *     CmSiRWLockInitialize @ 0x140B63600 (CmSiRWLockInitialize.c)
 */

void DbgkpInitializePhase0()
{
  char *ServerSiloState; // rax
  __int64 v1; // rbx
  _KPROCESS **p_Process; // rcx
  __int64 v3; // rcx
  UNICODE_STRING v4; // [rsp+20h] [rbp-39h] BYREF
  __int16 v5; // [rsp+30h] [rbp-29h] BYREF
  char v6; // [rsp+32h] [rbp-27h]
  int v7; // [rsp+38h] [rbp-21h]
  int v8; // [rsp+3Ch] [rbp-1Dh]
  int v9; // [rsp+40h] [rbp-19h]
  int v10; // [rsp+44h] [rbp-15h]
  int v11; // [rsp+48h] [rbp-11h]
  int v12; // [rsp+4Ch] [rbp-Dh]
  __int64 v13; // [rsp+54h] [rbp-5h]
  int v14; // [rsp+5Ch] [rbp+3h]
  void (__fastcall *v15)(__int64, __int64, __int64, unsigned __int64); // [rsp+70h] [rbp+17h]
  void (__stdcall *v16)(POPLOCK); // [rsp+78h] [rbp+1Fh]

  *(_QWORD *)&v4.Length = 1572886LL;
  v4.Buffer = L"DebugObject";
  memset_0(&v5, 0, 0x78uLL);
  *(_DWORD *)&EmpParseLock.ApcStateFill[8] = 1;
  EmpParseLock.WaitStatus = (volatile __int64)&EmpParseLock.ApcStateFill[40];
  *(_QWORD *)&EmpParseLock.ApcStateFill[40] = &EmpParseLock.ApcStateFill[40];
  EmpParseLock.ApcState.ApcListHead[1].Flink = 0LL;
  *(_DWORD *)&EmpParseLock.ApcStateFill[24] = 0;
  *(_WORD *)&EmpParseLock.ApcStateFill[32] = 1;
  EmpParseLock.ApcStateFill[34] = 6;
  *(_DWORD *)&EmpParseLock.ApcStateFill[36] = 0;
  ServerSiloState = DbgkpGetServerSiloState(0LL);
  if ( (int)DbgkpInitializePhase0SiloState(ServerSiloState) >= 0 )
  {
    v5 = 120;
    v16 = AlpcMessageDeleteProcedure;
    v7 = 0;
    v15 = DbgkpCloseObject;
    v13 = 512LL;
    v1 = 8LL;
    v12 = 2031631;
    v6 |= 8u;
    v11 = 2031631;
    v8 = 131073;
    v9 = 131074;
    v10 = 1179648;
    v14 = 0;
    if ( (int)ObCreateObjectType(&v4, &v5, 0LL, (__int64)&DbgkDebugObjectType) >= 0 )
    {
      p_Process = &stru_140E3EAA8.SavedApcState.Process;
      do
      {
        CmSiRWLockInitialize((PRTL_RUN_ONCE)p_Process);
        p_Process = (_KPROCESS **)(v3 + 16);
        --v1;
      }
      while ( v1 );
    }
  }
}
