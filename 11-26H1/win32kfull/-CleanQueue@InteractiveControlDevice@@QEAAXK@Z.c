/*
 * XREFs of ?CleanQueue@InteractiveControlDevice@@QEAAXK@Z @ 0x1402FC860
 * Callers:
 *     ?QueueInput@InteractiveControlDevice@@QEAAXPEAU_LIST_ENTRY@@PEAVInteractiveControlInput@@@Z @ 0x1402FD570 (-QueueInput@InteractiveControlDevice@@QEAAXPEAU_LIST_ENTRY@@PEAVInteractiveControlInput@@@Z.c)
 * Callees:
 *     ??_GInteractiveControlInput@@QEAAPEAXI@Z @ 0x1402FC7F0 (--_GInteractiveControlInput@@QEAAPEAXI@Z.c)
 */

void __fastcall InteractiveControlDevice::CleanQueue(InteractiveControlDevice *this)
{
  InteractiveControlInput *v2; // rcx
  unsigned __int64 v3; // rdi
  __int64 v4; // rax
  InteractiveControlInput *v5; // rbx

  v2 = (InteractiveControlInput *)*((_QWORD *)this + 3);
  v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  while ( v2 != (InteractiveControlDevice *)((char *)this + 16) && (unsigned int)(v3 - *((_DWORD *)v2 + 7)) >= 0x1388 )
  {
    v4 = *(_QWORD *)v2;
    if ( *(InteractiveControlInput **)(*(_QWORD *)v2 + 8LL) != v2
      || (v5 = (InteractiveControlInput *)*((_QWORD *)v2 + 1), *(InteractiveControlInput **)v5 != v2) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    InteractiveControlInput::`scalar deleting destructor'(v2, 1);
    --*((_DWORD *)this + 8);
    v2 = v5;
  }
}
