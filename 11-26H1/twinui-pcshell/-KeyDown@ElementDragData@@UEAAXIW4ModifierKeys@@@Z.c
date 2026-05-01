/*
 * XREFs of ?KeyDown@ElementDragData@@UEAAXIW4ModifierKeys@@@Z @ 0x1804DB820
 * Callers:
 *     <none>
 * Callees:
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800B32E8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180133E4C (-ContinueOnCurrentThread@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAA.c)
 *     ?CancelDrag@ElementDragData@@AEAAXXZ @ 0x1804DB0EC (-CancelDrag@ElementDragData@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ElementDragData::KeyDown(ElementDragData *a1, int a2)
{
  int v4; // eax
  _BYTE v5[88]; // [rsp+20h] [rbp-58h] BYREF

  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (__int64)a1 + 184,
    (__int64)v5);
  v4 = *((_DWORD *)a1 + 128);
  if ( v4 != 3 && v4 != 2 && a2 == 27 )
    ElementDragData::CancelDrag(a1);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v5);
}
