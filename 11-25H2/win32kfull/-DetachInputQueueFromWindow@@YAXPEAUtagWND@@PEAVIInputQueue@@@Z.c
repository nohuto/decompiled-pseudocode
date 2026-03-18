/*
 * XREFs of ?DetachInputQueueFromWindow@@YAXPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1401F7BE0
 * Callers:
 *     UserDetachQueueFromInputWindow @ 0x1400D81D8 (UserDetachQueueFromInputWindow.c)
 * Callees:
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x14001F8E0 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x14005C114 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ?DetachInputQueue@CInputQueueProp@@QEAAXPEAVIInputQueue@@@Z @ 0x1401F7C48 (-DetachInputQueue@CInputQueueProp@@QEAAXPEAVIInputQueue@@@Z.c)
 */

void __fastcall DetachInputQueueFromWindow(struct tagWND *a1, struct IInputQueue *a2)
{
  struct IInputQueue *v4; // rdx
  CInputQueueProp *v5; // rdi
  CInputQueueProp *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)a1 + 95) & 0x40000000) != 0 )
  {
    v6 = 0LL;
    CWindowProp::GetProp<CInputQueueProp>((__int64)a1, (__int64 *)&v6);
    v4 = a2;
    v5 = v6;
    CInputQueueProp::DetachInputQueue(v6, v4);
    if ( !*((_DWORD *)v5 + 8) )
    {
      CWindowProp::RemoveAndDeleteProp(v5);
      *((_DWORD *)a1 + 95) &= ~0x40000000u;
    }
  }
}
