/*
 * XREFs of ?Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z @ 0x140056464
 * Callers:
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1400554CC (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     DirectComposition::Memory::AllocateAndClear @ 0x140048E6C (DirectComposition--Memory--AllocateAndClear.c)
 *     ?Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z @ 0x1400565C0 (-Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1400566AC (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CEvent::Create(
        enum _EVENT_TYPE a1,
        int a2,
        struct DirectComposition::CEvent **a3)
{
  struct DirectComposition::CEvent *v4; // rdi
  unsigned int v5; // edx
  NTSTATUS v6; // ebx
  struct DirectComposition::CEvent *v7; // rcx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *EventHandle; // [rsp+88h] [rbp+28h] BYREF

  v4 = (struct DirectComposition::CEvent *)DirectComposition::Memory::AllocateAndClear(0x10uLL, 0x76654344u, a2 != 0);
  if ( v4 )
  {
    EventHandle = 0LL;
    memset(&ObjectAttributes.Length + 1, 0, 20);
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    v6 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
    v7 = v4;
    if ( v6 < 0
      || (v6 = DirectComposition::CEvent::Initialize(v4, EventHandle, 1), ObCloseHandle(EventHandle, 0), v7 = v4, v6 < 0) )
    {
      DirectComposition::CEvent::`scalar deleting destructor'(v7, v5);
    }
    else
    {
      *a3 = v4;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v6;
}
