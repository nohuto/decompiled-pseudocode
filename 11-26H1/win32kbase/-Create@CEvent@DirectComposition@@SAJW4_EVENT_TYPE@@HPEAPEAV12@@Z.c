/*
 * XREFs of ?Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z @ 0x1400B16B8
 * Callers:
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1400B0EA0 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     DirectComposition::Memory::AllocateAndClear @ 0x140045C9C (DirectComposition--Memory--AllocateAndClear.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1400AE780 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z @ 0x1400B1814 (-Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z.c)
 */

__int64 __fastcall DirectComposition::CEvent::Create(
        enum _EVENT_TYPE a1,
        int a2,
        struct DirectComposition::CEvent **a3)
{
  struct DirectComposition::CEvent *v4; // rdi
  NTSTATUS v5; // ebx
  DirectComposition::CEvent *v6; // rcx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *EventHandle; // [rsp+88h] [rbp+28h] BYREF

  v4 = (struct DirectComposition::CEvent *)DirectComposition::Memory::AllocateAndClear(0x10uLL, 0x76654344u, a2 != 0);
  if ( v4 )
  {
    EventHandle = 0LL;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
    v6 = v4;
    if ( v5 < 0
      || (v5 = DirectComposition::CEvent::Initialize(v4, EventHandle, 1), ObCloseHandle(EventHandle, 0), v6 = v4, v5 < 0) )
    {
      DirectComposition::CEvent::`scalar deleting destructor'(v6);
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
  return (unsigned int)v5;
}
