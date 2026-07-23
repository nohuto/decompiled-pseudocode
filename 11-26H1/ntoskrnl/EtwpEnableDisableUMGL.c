/*
 * XREFs of EtwpEnableDisableUMGL @ 0x140A99A14
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x140A99808 (EtwpEnableDisableSpecialGuids.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     EtwpDisablePerProcessTracing @ 0x14082E698 (EtwpDisablePerProcessTracing.c)
 *     EtwpUpdateProcessTracingCallback @ 0x14082E870 (EtwpUpdateProcessTracingCallback.c)
 *     PsLookupProcessByProcessId @ 0x1408F5AA0 (PsLookupProcessByProcessId.c)
 */

__int64 __fastcall EtwpEnableDisableUMGL(
        __int64 a1,
        char a2,
        unsigned __int16 a3,
        char a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int a7)
{
  char v7; // r14
  NTSTATUS v10; // ebx
  __int64 v11; // rdi
  __int64 v14; // rsi
  char v15; // al
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  PEPROCESS Process; // [rsp+38h] [rbp-30h] BYREF
  __int16 v18; // [rsp+78h] [rbp+10h]

  v7 = a3;
  v10 = 0;
  if ( !a2 && a7 && a5 >= 2 )
    return 3221225659LL;
  if ( a1 == EtwpHostSiloState )
    v11 = MmWriteableSharedUserData + 896;
  else
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1288LL) + 550LL;
  if ( (unsigned int)a3 < *(_DWORD *)(a1 + 16) && a3 )
  {
    KeWaitForSingleObject(&stru_140F03830.Header.WaitListHead.Blink, Executive, 0, 0, 0LL);
    if ( a2 )
    {
      LOBYTE(v18) = v7;
      HIBYTE(v18) = a4;
      *(_WORD *)(v11 + 2LL * a5) = v18;
      v16 = 0LL;
      Process = 0LL;
      if ( a7 )
      {
        LODWORD(v16) = a5;
        BYTE4(v16) = 1;
        v14 = a7;
        do
        {
          v10 = PsLookupProcessByProcessId((HANDLE)*a6, &Process);
          if ( v10 >= 0 )
          {
            EtwpUpdateProcessTracingCallback(Process, (int *)&v16);
            ObfDereferenceObjectWithTag(Process, 0x746C6644u);
          }
          ++a6;
          --v14;
        }
        while ( v14 );
      }
    }
    else
    {
      v15 = *(_BYTE *)(v11 + 2LL * a5);
      if ( v15 == v7 )
      {
        *(_WORD *)(v11 + 2LL * a5) = 0;
        if ( a5 <= 1 )
          EtwpDisablePerProcessTracing(a5);
      }
      else
      {
        v10 = v15 != 0 ? -1073741734 : -1073741054;
      }
    }
    KeReleaseMutex((PRKMUTEX)&stru_140F03830.Header.WaitListHead.Blink, 0);
  }
  else
  {
    return (unsigned int)-1073741816;
  }
  return (unsigned int)v10;
}
