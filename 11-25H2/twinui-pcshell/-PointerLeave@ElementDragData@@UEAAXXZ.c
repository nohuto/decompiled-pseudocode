/*
 * XREFs of ?PointerLeave@ElementDragData@@UEAAXXZ @ 0x1804C98A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D48C8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1801419D8 (-ContinueOnCurrentThread@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ElementDragData::PointerLeave(ElementDragData *this)
{
  _BYTE v2[88]; // [rsp+20h] [rbp-58h] BYREF

  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (__int64)this + 184,
    (__int64)v2);
  if ( *((_DWORD *)this + 128) != 3 )
  {
    *(_QWORD *)((char *)this + 92) = 0LL;
    *(_QWORD *)((char *)this + 100) = 0LL;
    *((_DWORD *)this + 27) = 0;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 464LL))(*((_QWORD *)this + 5));
  }
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v2);
}
