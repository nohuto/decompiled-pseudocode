/*
 * XREFs of _anonymous_namespace_::MonitorEventRegistration::_scalar_deleting_destructor_ @ 0x18049A820
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$EventRegistration@UIObservableObjectArray@@UIObservableObjectArrayChangedBeginEnd@@@EventRegistrationHelpers@@UEAA@XZ @ 0x18049A724 (--1-$EventRegistration@UIObservableObjectArray@@UIObservableObjectArrayChangedBeginEnd@@@EventRe.c)
 */

void *__fastcall anonymous_namespace_::MonitorEventRegistration::_scalar_deleting_destructor_(void *a1, char a2)
{
  EventRegistrationHelpers::EventRegistration<IObservableObjectArray,IObservableObjectArrayChangedBeginEnd>::~EventRegistration<IObservableObjectArray,IObservableObjectArrayChangedBeginEnd>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
