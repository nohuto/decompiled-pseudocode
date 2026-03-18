/*
 * XREFs of ?DropAllMouseInput@BufferedMouseInputList@CMouseProcessor@@QEAAXXZ @ 0x14019F714
 * Callers:
 *     ?MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ @ 0x1402213E0 (-MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ.c)
 *     ?ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z @ 0x140222078 (-ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z.c)
 * Callees:
 *     ?DropUserModeInputBuffer@Mouse@InputTraceLogging@@SAXXZ @ 0x14019F760 (-DropUserModeInputBuffer@Mouse@InputTraceLogging@@SAXXZ.c)
 *     ??_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z @ 0x14021F260 (--_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z.c)
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
    CMouseProcessor::MouseInputMessage::`scalar deleting destructor'(v4, v2);
  }
}
