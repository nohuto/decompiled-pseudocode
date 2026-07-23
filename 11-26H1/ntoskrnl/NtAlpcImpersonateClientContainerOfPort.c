/*
 * XREFs of NtAlpcImpersonateClientContainerOfPort @ 0x1407C3470
 * Callers:
 *     DifNtAlpcImpersonateClientContainerOfPortWrapper @ 0x140670880 (DifNtAlpcImpersonateClientContainerOfPortWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObDereferenceObjectDeferDelete @ 0x140264BE0 (ObDereferenceObjectDeferDelete.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PsGetWorkOnBehalfThread @ 0x140458EE0 (PsGetWorkOnBehalfThread.c)
 *     IoThreadToProcess @ 0x140469B20 (IoThreadToProcess.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x140470480 (PsEncodeThreadWorkOnBehalfTicket.c)
 *     PoEnergyEstimationEnabled @ 0x140475F40 (PoEnergyEstimationEnabled.c)
 *     PsImpersonateContainerOfThread @ 0x1404AB3F8 (PsImpersonateContainerOfThread.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     AlpcpLookupMessage @ 0x14098FA50 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 *     AlpcpCaptureIdMessage @ 0x140A94098 (AlpcpCaptureIdMessage.c)
 */

NTSTATUS __cdecl NtAlpcImpersonateClientContainerOfPort(HANDLE PortHandle, PPORT_MESSAGE Message, ULONG Flags)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID v5; // rsi
  signed int v6; // edi
  int v7; // r9d
  ULONG_PTR v8; // r14
  __int64 v9; // rcx
  struct _KTHREAD *v10; // r12
  struct _KTHREAD *WorkOnBehalfThread; // rax
  struct _KTHREAD *v12; // r15
  struct _KTHREAD *v13; // rcx
  void *Teb; // r8
  __int64 v15; // r8
  int v17; // [rsp+30h] [rbp-48h] BYREF
  int v18[3]; // [rsp+34h] [rbp-44h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-38h] BYREF
  PVOID Object; // [rsp+48h] [rbp-30h] BYREF
  __int64 v21; // [rsp+50h] [rbp-28h] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+90h] [rbp+18h]
  signed int v23; // [rsp+98h] [rbp+20h] BYREF

  v23 = 0;
  v18[0] = 0;
  BugCheckParameter2 = 0LL;
  v17 = 0;
  v21 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = 0LL;
  Object = 0LL;
  if ( Flags )
  {
    v6 = -1073741811;
  }
  else
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    AlpcpCaptureIdMessage(Message, &v17, &v23);
    Object = 0LL;
    v6 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    v5 = Object;
    if ( v6 >= 0 )
    {
      if ( (*((_BYTE *)Object + 416) & 6) == 6
        && KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)*((_QWORD *)Object + 3) )
      {
        v6 = AlpcpLookupMessage((_DWORD)Object, v17, v23, v7, (__int64)&BugCheckParameter2);
        if ( v6 >= 0 )
        {
          v8 = BugCheckParameter2;
          if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) == 0 )
          {
            v9 = *(_QWORD *)(BugCheckParameter2 + 16);
            v6 = v9 == 0 ? 0xC0000702 : 0;
            v23 = v6;
            if ( v9 )
            {
              v10 = *(struct _KTHREAD **)(BugCheckParameter2 + 32);
              if ( v10 )
              {
                WorkOnBehalfThread = (struct _KTHREAD *)PsGetWorkOnBehalfThread(
                                                          *(struct _KTHREAD **)(BugCheckParameter2 + 32),
                                                          v18);
                v12 = WorkOnBehalfThread;
                if ( WorkOnBehalfThread )
                {
                  PsImpersonateContainerOfThread(WorkOnBehalfThread);
                  if ( v18[0] )
                    ObDereferenceObjectDeferDelete(v12);
                }
                else if ( IoThreadToProcess(v10)[3].UserWaitTime || (unsigned __int8)PoEnergyEstimationEnabled() )
                {
                  v12 = v10;
                  PsImpersonateContainerOfThread(v10);
                }
                else
                {
                  v12 = 0LL;
                }
                if ( v12 )
                {
                  v13 = KeGetCurrentThread();
                  if ( (v13->MiscFlags & 0x400) != 0 || v13->ApcStateIndex == 1 )
                    Teb = 0LL;
                  else
                    Teb = v13->Teb;
                  if ( Teb )
                  {
                    PsEncodeThreadWorkOnBehalfTicket((__int64)v12, &v21);
                    *(_QWORD *)(v15 + 696) = v21;
                  }
                }
              }
            }
            AlpcpUnlockMessage(v8);
          }
          else
          {
            AlpcpUnlockMessage(BugCheckParameter2);
            v6 = -1073740029;
          }
        }
      }
      else
      {
        v6 = -1073741790;
      }
    }
  }
  if ( v5 )
    ObfDereferenceObject(v5);
  KeLeaveCriticalRegion();
  return v6;
}
