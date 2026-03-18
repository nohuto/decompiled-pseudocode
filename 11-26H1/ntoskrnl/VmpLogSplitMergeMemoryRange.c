/*
 * XREFs of VmpLogSplitMergeMemoryRange @ 0x14081EA20
 * Callers:
 *     VmSplitMemoryRange @ 0x140B1D5D0 (VmSplitMemoryRange.c)
 *     VmMergeMemoryRanges @ 0x140B21780 (VmMergeMemoryRanges.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     PsGetProcessId @ 0x140466BE0 (PsGetProcessId.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404E33C4 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

char __fastcall VmpLogSplitMergeMemoryRange(__int64 a1, int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  _UNKNOWN **v5; // rax
  unsigned __int64 QuantumTarget; // rbx
  __int64 v9; // r8
  unsigned __int8 *v10; // rdx
  unsigned int *v11; // rax
  int v13; // [rsp+28h] [rbp-61h]
  int v14; // [rsp+30h] [rbp-59h]
  unsigned int ProcessId; // [rsp+48h] [rbp-41h] BYREF
  unsigned int v16; // [rsp+4Ch] [rbp-3Dh] BYREF
  __int64 v17; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v18[2]; // [rsp+58h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+68h] [rbp-21h] BYREF
  unsigned int *p_ProcessId; // [rsp+88h] [rbp-1h]
  __int64 v21; // [rsp+90h] [rbp+7h]
  __int64 *v22; // [rsp+98h] [rbp+Fh]
  __int64 v23; // [rsp+A0h] [rbp+17h]
  __int64 *v24; // [rsp+A8h] [rbp+1Fh]
  __int64 v25; // [rsp+B0h] [rbp+27h]
  unsigned int *v26; // [rsp+B8h] [rbp+2Fh]
  __int64 v27; // [rsp+C0h] [rbp+37h]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+57h] BYREF

  v5 = &retaddr;
  QuantumTarget = stru_140F066E8.QuantumTarget;
  if ( a2 )
  {
    if ( *(_DWORD *)stru_140F066E8.QuantumTarget > 5u )
    {
      LOBYTE(v5) = tlgKeywordOn(stru_140F066E8.QuantumTarget, 128LL);
      if ( (_BYTE)v5 )
      {
        ProcessId = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
        v24 = v18;
        p_ProcessId = &ProcessId;
        v10 = (unsigned __int8 *)&byte_1400535FF;
        v17 = a3;
        v22 = &v17;
        v16 = a5;
        v11 = &v16;
        v18[0] = a4;
LABEL_8:
        v26 = v11;
        v21 = 4LL;
        v23 = 8LL;
        v25 = 8LL;
        v27 = 4LL;
        LOBYTE(v5) = tlgWriteEx_EtwWriteEx(QuantumTarget, v10, v9, 0, v13, v14, 6u, &v19);
      }
    }
  }
  else if ( *(_DWORD *)stru_140F066E8.QuantumTarget > 5u )
  {
    LOBYTE(v5) = tlgKeywordOn(stru_140F066E8.QuantumTarget, 128LL);
    if ( (_BYTE)v5 )
    {
      v16 = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
      v24 = &v17;
      p_ProcessId = &v16;
      v10 = (unsigned __int8 *)&byte_140052FDD;
      v18[0] = a3;
      v22 = v18;
      ProcessId = a5;
      v11 = &ProcessId;
      v17 = a4;
      goto LABEL_8;
    }
  }
  return (char)v5;
}
