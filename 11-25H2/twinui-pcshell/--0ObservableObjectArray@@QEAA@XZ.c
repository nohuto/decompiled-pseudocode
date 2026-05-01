/*
 * XREFs of ??0ObservableObjectArray@@QEAA@XZ @ 0x18049F630
 * Callers:
 *     ??0SwitchItemCollection@@QEAA@XZ @ 0x18049F680 (--0SwitchItemCollection@@QEAA@XZ.c)
 *     ??0VirtualDesktopItemCollection@@QEAA@XZ @ 0x1804A08A4 (--0VirtualDesktopItemCollection@@QEAA@XZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VObservableObjectArray@@UIObservableObjectArrayChanged@@UIObservableObjectArrayChangedBeginEnd@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$ChainInterfaces@UISwitchItemFilteredCollection@@UIObservableObjectArray@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@WRL@Microsoft@@QEAA@XZ @ 0x1804A1C30 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VObservableObjectArray@@UIObservableOb.c)
 * Callees:
 *     ??0CGITRegistrationList@@QEAA@XZ @ 0x18007FB98 (--0CGITRegistrationList@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
ObservableObjectArray *__fastcall ObservableObjectArray::ObservableObjectArray(ObservableObjectArray *this)
{
  *(_QWORD *)this = &ObservableObjectArray::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  CGITRegistrationList::CGITRegistrationList((ObservableObjectArray *)((char *)this + 48));
  CGITRegistrationList::CGITRegistrationList((ObservableObjectArray *)((char *)this + 96));
  return this;
}
