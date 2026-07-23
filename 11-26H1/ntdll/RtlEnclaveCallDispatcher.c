/*
 * XREFs of RtlEnclaveCallDispatcher @ 0x180162F90
 * Callers:
 *     <none>
 * Callees:
 *     LdrpIssueEnclaveCall @ 0x180091110 (LdrpIssueEnclaveCall.c)
 *     ZwCallEnclave @ 0x180160090 (ZwCallEnclave.c)
 */

// positive sp value has been detected, the output may be wrong!
NTSTATUS __fastcall RtlEnclaveCallDispatcher(void *a1, LPVOID (__cdecl *a2)(LPVOID), ULONG a3, PVOID a4)
{
  ULONG i; // eax
  NTSTATUS result; // eax
  _QWORD *v7; // [rsp-20h] [rbp-20h]
  PVOID v8; // [rsp-18h] [rbp-18h] BYREF
  void *v9; // [rsp-10h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h]

  if ( a2 )
  {
    v8 = a4;
    for ( i = LdrpIssueEnclaveCall(a2, a3, &v8); ; i = -1073741811 )
    {
      result = ZwCallEnclave(0LL, a1, i, &v8);
      a4 = v8;
      if ( v9 )
        break;
      v8 = 0LL;
    }
  }
  else
  {
    result = a3;
  }
  *v7 = a4;
  retaddr = v9;
  return result;
}
