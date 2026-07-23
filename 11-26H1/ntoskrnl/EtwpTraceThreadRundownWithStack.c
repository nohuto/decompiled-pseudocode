/*
 * XREFs of EtwpTraceThreadRundownWithStack @ 0x1406CB674
 * Callers:
 *     EtwpThreadEnumCallback @ 0x1409BDBC0 (EtwpThreadEnumCallback.c)
 * Callees:
 *     KeSetPriorityThread @ 0x140204620 (KeSetPriorityThread.c)
 *     KeQueryPriorityThread @ 0x1402053B0 (KeQueryPriorityThread.c)
 *     KeInsertQueueApc @ 0x14020AE70 (KeInsertQueueApc.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     KeInitializeApc @ 0x14044ED90 (KeInitializeApc.c)
 *     KeRemoveQueueApc @ 0x140460EE0 (KeRemoveQueueApc.c)
 *     EtwpTraceThreadRundown @ 0x14051ED18 (EtwpTraceThreadRundown.c)
 *     Feature_EtwThreadStackRundownPriority__private_IsEnabledDeviceUsageNoInline @ 0x1406CB8A0 (Feature_EtwThreadStackRundownPriority__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

NTSTATUS __fastcall EtwpTraceThreadRundownWithStack(PKTHREAD Thread, __int64 a2)
{
  KPRIORITY PriorityThread; // r14d
  _BYTE *v5; // rsi
  KPRIORITY v6; // eax
  NTSTATUS result; // eax
  int v8; // eax
  __int128 Object; // [rsp+40h] [rbp-79h] BYREF
  char *v10; // [rsp+50h] [rbp-69h]
  LARGE_INTEGER Timeout; // [rsp+58h] [rbp-61h] BYREF
  _BYTE v12[96]; // [rsp+60h] [rbp-59h] BYREF
  __int128 v13; // [rsp+C0h] [rbp+7h] BYREF
  _QWORD v14[2]; // [rsp+D0h] [rbp+17h] BYREF

  memset_0(v12, 0, 0x58uLL);
  v10 = 0LL;
  Object = 0LL;
  Timeout.QuadPart = 0LL;
  PriorityThread = 0;
  v13 = 0LL;
  if ( Thread != KeGetCurrentThread() && ((__int64)Thread[1].Queue & 4) == 0 && !*(_BYTE *)(a2 + 67) )
  {
    v10 = (char *)&Object + 8;
    *((_QWORD *)&Object + 1) = (char *)&Object + 8;
    LOWORD(Object) = 1;
    BYTE2(Object) = 6;
    DWORD1(Object) = 0;
    KeInitializeApc((__int64)v12, (__int64)Thread, 0, (__int64)EtwpThreadRundownApc, 0LL, 0LL, 0, 0LL);
    v5 = (_BYTE *)(a2 + 76);
    if ( (unsigned int)Feature_EtwThreadStackRundownPriority__private_IsEnabledDeviceUsageNoInline() )
    {
      *(_DWORD *)(a2 + 72) = 0;
      *v5 = 0;
      PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
      v6 = KeQueryPriorityThread(Thread);
      *(_DWORD *)(a2 + 72) = v6;
      if ( v6 < PriorityThread )
      {
        *v5 = 1;
        *(_DWORD *)(a2 + 72) = KeSetPriorityThread(Thread, PriorityThread);
      }
    }
    if ( (unsigned __int8)KeInsertQueueApc((__int64)v12, (__int64)&Object, a2, 0) )
    {
      Timeout.QuadPart = EtwpOneMs * (unsigned int)EtwpStackCaptureTimeout;
      result = KeWaitForSingleObject(&Object, WrExecutive, 0, 0, &Timeout);
      if ( result != 258 )
        return result;
      if ( !KeRemoveQueueApc((__int64)v12) )
        return KeWaitForSingleObject(&Object, WrExecutive, 0, 0, 0LL);
      if ( (unsigned int)Feature_EtwThreadStackRundownPriority__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( *v5 )
          KeSetPriorityThread(Thread, *(_DWORD *)(a2 + 72));
        LODWORD(v13) = Thread[1].CurrentRunTime;
        DWORD1(v13) = Thread[1].CycleTime;
        v8 = *(_DWORD *)(a2 + 72);
        DWORD2(v13) = v8;
        if ( *(_BYTE *)(a2 + 76) )
          HIDWORD(v13) = PriorityThread - v8;
        v14[1] = 16LL;
        v14[0] = &v13;
        EtwTraceKernelEvent((int)v14, 1, 2u, 1384, 256);
      }
    }
  }
  return EtwpTraceThreadRundown((__int64)Thread, a2);
}
