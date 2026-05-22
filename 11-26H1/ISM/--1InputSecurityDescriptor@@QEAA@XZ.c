/*
 * XREFs of ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18007AFA0
 * Callers:
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x180043C0C (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     ?Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z @ 0x180043F5C (-Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180055204 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ @ 0x1800D1D1C (-InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ.c)
 *     ?Initialize@CursorManager@@IEAAJXZ @ 0x180162B88 (-Initialize@CursorManager@@IEAAJXZ.c)
 *     ?Initialize@ButtonRecognizer@@IEAAJXZ @ 0x1801AAA5C (-Initialize@ButtonRecognizer@@IEAAJXZ.c)
 *     _DWMCursorBroker::Initialize_::_1_::dtor$1 @ 0x1801D6694 (_DWMCursorBroker--Initialize_--_1_--dtor$1.c)
 *     _ButtonRecognizer::Initialize_::_1_::dtor$0 @ 0x1801D6CF6 (_ButtonRecognizer--Initialize_--_1_--dtor$0.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$0 @ 0x1801D73F4 (_DWMInputRouter--Initialize_--_1_--dtor$0.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$1 @ 0x1801D7406 (_DWMInputRouter--Initialize_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall InputSecurityDescriptor::~InputSecurityDescriptor(InputSecurityDescriptor *this)
{
  void *v2; // rcx

  v2 = *(void **)this;
  if ( v2 )
  {
    if ( *((_BYTE *)this + 8) )
      FreeTransientObjectSecurityDescriptor(v2);
    else
      LocalFree(v2);
    *(_QWORD *)this = 0LL;
  }
}
