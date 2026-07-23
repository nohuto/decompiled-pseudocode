/*
 * XREFs of PiUEventGetProcessImagePath @ 0x140B0E020
 * Callers:
 *     PiUEventMovePendingEventToSynchronousQueue @ 0x140775AE8 (PiUEventMovePendingEventToSynchronousQueue.c)
 *     PiUEventNotifyClient @ 0x14095B248 (PiUEventNotifyClient.c)
 *     PiUEventDequeuePendingEventWorker @ 0x1409A764C (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventHandleGetEvent @ 0x1409A7900 (PiUEventHandleGetEvent.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     RtlStringCbCopyNW @ 0x14047FFEC (RtlStringCbCopyNW.c)
 *     PsLookupProcessByProcessId @ 0x1408F5AA0 (PsLookupProcessByProcessId.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiUEventGetProcessImagePath(void *a1, _QWORD *a2)
{
  NTSTATUS v3; // eax
  PVOID v4; // rbx
  STRSAFE_PCNZWCH *v5; // rdi
  __int64 v6; // rbp
  wchar_t *Pool2; // rax
  void *v8; // r11
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  *a2 = L"unknown";
  Object = 0LL;
  v3 = PsLookupProcessByProcessId(a1, (PEPROCESS *)&Object);
  v4 = Object;
  if ( v3 >= 0 )
  {
    v5 = (STRSAFE_PCNZWCH *)*((_QWORD *)Object + 106);
    if ( v5 )
    {
      if ( *(_WORD *)v5 )
      {
        v6 = *(unsigned __int16 *)v5;
        Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
        if ( Pool2 )
        {
          if ( RtlStringCbCopyNW(Pool2, v6 + 2, v5[1], *(unsigned __int16 *)v5) >= 0 )
            *a2 = v8;
          else
            ExFreePoolWithTag(v8, 0x59706E50u);
        }
      }
    }
  }
  if ( v4 )
    ObfDereferenceObjectWithTag(v4, 0x746C6644u);
}
