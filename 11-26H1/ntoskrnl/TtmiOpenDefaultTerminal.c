/*
 * XREFs of TtmiOpenDefaultTerminal @ 0x1407F1A70
 * Callers:
 *     TtmpDispatchOpenTerminal @ 0x1407EDC44 (TtmpDispatchOpenTerminal.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     TtmiLogError @ 0x1409F66D8 (TtmiLogError.c)
 */

__int64 __fastcall TtmiOpenDefaultTerminal(__int64 a1, ACCESS_MASK a2, KPROCESSOR_MODE a3, HANDLE *a4)
{
  void *v4; // rcx
  NTSTATUS v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // rdx
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(void **)(a1 + 24);
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(
         v4,
         a2,
         (POBJECT_TYPE)PspSiloMonitorLock.WaitBlock[2].WaitListEntry.Flink,
         0,
         &Object,
         0LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v11 = (unsigned int)v8;
    v12 = 925LL;
LABEL_5:
    TtmiLogError("TtmiOpenDefaultTerminal", v12, v11, v10);
    return v9;
  }
  v9 = ObOpenObjectByPointer(
         Object,
         a3 == 0 ? 0x200 : 0,
         0LL,
         a2,
         (POBJECT_TYPE)PspSiloMonitorLock.WaitBlock[2].WaitListEntry.Flink,
         a3,
         a4);
  ObfDereferenceObject(Object);
  if ( (v9 & 0x80000000) != 0 )
  {
    v10 = v9;
    v11 = v9;
    v12 = 950LL;
    goto LABEL_5;
  }
  return v9;
}
