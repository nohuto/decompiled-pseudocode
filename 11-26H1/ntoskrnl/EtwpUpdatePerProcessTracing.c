/*
 * XREFs of EtwpUpdatePerProcessTracing @ 0x140AB0700
 * Callers:
 *     EtwpUpdateTrace @ 0x140AB081C (EtwpUpdateTrace.c)
 *     EtwpStartLogger @ 0x140AB0F2C (EtwpStartLogger.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     EtwpUpdateProcessTracingCallback @ 0x14082E870 (EtwpUpdateProcessTracingCallback.c)
 *     PsLookupProcessByProcessId @ 0x1408F5AA0 (PsLookupProcessByProcessId.c)
 *     EtwpGetFlagExtension @ 0x140AB1FF0 (EtwpGetFlagExtension.c)
 */

LONG __fastcall EtwpUpdatePerProcessTracing(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  __int64 v4; // rbp
  _WORD *FlagExtension; // rax
  int v9; // edx
  unsigned int *v10; // rbx
  __int64 v11; // rsi
  unsigned __int16 v12; // ax
  unsigned int v13; // ecx
  __int64 v14; // rdi
  PEPROCESS Process; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF
  __int16 v18; // [rsp+70h] [rbp+18h]

  v4 = a4;
  v17 = 0LL;
  Process = 0LL;
  v18 = 0;
  KeWaitForSingleObject(&stru_140F03830.Header.WaitListHead.Blink, Executive, 0, 0, 0LL);
  LOBYTE(v18) = a3;
  if ( a2 == EtwpHostSiloState )
    *(_WORD *)(MmWriteableSharedUserData + 2 * v4 + 896) = v18;
  else
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 1288LL) + 2 * v4 + 550) = v18;
  FlagExtension = (_WORD *)EtwpGetFlagExtension(a1, 2LL);
  if ( FlagExtension )
  {
    v10 = (unsigned int *)(FlagExtension + 2);
    LODWORD(v17) = v4;
    v11 = (unsigned int)(v9 + 2);
    v12 = 4 * *FlagExtension - (v9 + 2);
    BYTE4(v17) = 1;
    v13 = v12 >> 2;
    if ( v13 )
    {
      v14 = v13;
      do
      {
        if ( PsLookupProcessByProcessId((HANDLE)*v10, &Process) >= 0 )
        {
          EtwpUpdateProcessTracingCallback(Process, (int *)&v17);
          ObfDereferenceObjectWithTag(Process, 0x746C6644u);
        }
        v10 = (unsigned int *)((char *)v10 + v11);
        --v14;
      }
      while ( v14 );
    }
  }
  return KeReleaseMutex((PRKMUTEX)&stru_140F03830.Header.WaitListHead.Blink, 0);
}
