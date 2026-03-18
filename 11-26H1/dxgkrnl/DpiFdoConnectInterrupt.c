/*
 * XREFs of DpiFdoConnectInterrupt @ 0x1404264AC
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 * Callees:
 *     memset @ 0x1400A5E00 (memset.c)
 *     DpiLdaGetInterruptIrqlForChain @ 0x1404266E4 (DpiLdaGetInterruptIrqlForChain.c)
 */

__int64 __fastcall DpiFdoConnectInterrupt(_QWORD *a1)
{
  __int64 v1; // rbx
  unsigned __int8 v2; // si
  __int64 v4; // r15
  NTSTATUS InterruptIrqlForChain; // eax
  NTSTATUS v6; // edi
  __int64 v7; // rax
  unsigned __int8 v8; // cl
  unsigned int v9; // edx
  __int64 v10; // r8
  unsigned __int8 *v11; // rax
  __int64 result; // rax
  _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int8 v14; // [rsp+90h] [rbp+20h] BYREF

  v1 = a1[8];
  v2 = 0;
  v14 = 0;
  v4 = *(_QWORD *)(v1 + 40);
  if ( *(_DWORD *)(v1 + 504) )
  {
    InterruptIrqlForChain = DpiLdaGetInterruptIrqlForChain(a1, &v14);
    v2 = v14;
    v6 = InterruptIrqlForChain;
  }
  else
  {
    v7 = *(_QWORD *)(v1 + 1312);
    v8 = 0;
    v6 = -1073741275;
    if ( v7 )
    {
      v9 = *(_DWORD *)(v7 + 16);
      if ( v9 )
      {
        v10 = v9;
        v11 = (unsigned __int8 *)(v7 + 24);
        do
        {
          if ( *(v11 - 4) == 2 && v8 < *v11 )
          {
            v8 = *v11;
            v6 = 0;
          }
          v11 += 20;
          --v10;
        }
        while ( v10 );
      }
      v2 = v8;
    }
  }
  if ( v6 < 0 )
  {
    if ( !*(_BYTE *)(v1 + 480)
      && !*(_BYTE *)(v1 + 2719)
      && !*(_BYTE *)(v1 + 1158)
      && !*(_BYTE *)(v1 + 2720)
      && !*(_BYTE *)(v1 + 2716)
      && !*(_BYTE *)(v1 + 2721) )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 504;
    }
    return (unsigned int)v6;
  }
  memset(&Parameters, 0, sizeof(Parameters));
  if ( *(_QWORD *)(v4 + 184) )
  {
    WdLogSingleEntry1(4LL);
    Parameters.FullySpecified.PhysicalDeviceObject = *(PDEVICE_OBJECT *)(v1 + 152);
    Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)(v1 + 1392);
    Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)DpiFdoMessageInterruptRoutine;
    Parameters.FullySpecified.SpinLock = *(PKSPIN_LOCK *)(v1 + 1480);
    Parameters.MessageBased.FallBackServiceRoutine = (PKSERVICE_ROUTINE)DpiFdoLineInterruptRoutine;
    WdLogGlobalForLineNumber = 538;
    Parameters.Version = 3;
    Parameters.FullySpecified.ServiceContext = a1;
    *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = v2;
    v6 = IoConnectInterruptEx(&Parameters);
    if ( v6 >= 0 )
    {
      *(_DWORD *)(v1 + 1384) = Parameters.Version;
      *(_QWORD *)(v1 + 1400) = *Parameters.FullySpecified.InterruptObject;
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 556;
      if ( v6 == -1073741275 )
        return (unsigned int)-1073741823;
    }
    return (unsigned int)v6;
  }
  if ( *(_BYTE *)(v1 + 1153) )
    return 3221226021LL;
  WdLogSingleEntry1(2LL);
  result = 3221225473LL;
  WdLogGlobalForLineNumber = 530;
  return result;
}
