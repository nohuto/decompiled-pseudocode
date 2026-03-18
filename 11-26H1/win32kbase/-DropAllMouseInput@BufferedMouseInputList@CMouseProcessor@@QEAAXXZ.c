/*
 * XREFs of ?DropAllMouseInput@BufferedMouseInputList@CMouseProcessor@@QEAAXXZ @ 0x140189064
 * Callers:
 *     ?HandleMITTermination@CMouseProcessor@@AEAAXXZ @ 0x140188F9C (-HandleMITTermination@CMouseProcessor@@AEAAXXZ.c)
 *     ?ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z @ 0x140224964 (-ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z.c)
 * Callees:
 *     ?DropUserModeInputBuffer@Mouse@InputTraceLogging@@SAXXZ @ 0x1401890B4 (-DropUserModeInputBuffer@Mouse@InputTraceLogging@@SAXXZ.c)
 *     ??_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z @ 0x140222A08 (--_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z.c)
 */

void __fastcall CMouseProcessor::BufferedMouseInputList::DropAllMouseInput(
        CMouseProcessor::BufferedMouseInputList *this)
{
  unsigned int v2; // edx
  _QWORD **v3; // rbx
  _QWORD *v4; // rcx
  _QWORD *v5; // rax

  InputTraceLogging::Mouse::DropUserModeInputBuffer();
  v3 = (_QWORD **)((char *)this + 8);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v4[1] != v3 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v3 = v5;
    v5[1] = v3;
    if ( v4 )
      CMouseProcessor::MouseInputMessage::`scalar deleting destructor'(v4, v2);
  }
}
