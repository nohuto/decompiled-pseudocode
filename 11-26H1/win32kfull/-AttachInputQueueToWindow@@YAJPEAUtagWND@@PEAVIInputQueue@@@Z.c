/*
 * XREFs of ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x14013E5A0
 * Callers:
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z @ 0x14013E448 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z.c)
 * Callees:
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x14000FD08 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1400369B4 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x14004E2F8 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ?AttachInputQueue@CInputQueueProp@@QEAAJPEAVIInputQueue@@@Z @ 0x14013E668 (-AttachInputQueue@CInputQueueProp@@QEAAJPEAVIInputQueue@@@Z.c)
 *     ??$CreateWindowProp@VCInputQueueProp@@@CWindowProp@@SAJPEAPEAVCInputQueueProp@@@Z @ 0x14013E7A0 (--$CreateWindowProp@VCInputQueueProp@@@CWindowProp@@SAJPEAPEAVCInputQueueProp@@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall AttachInputQueueToWindow(struct tagWND *a1, struct IInputQueue *a2)
{
  bool v2; // zf
  CInputQueueProp *v5; // rdi
  int v6; // esi
  CInputQueueProp *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*((_DWORD *)a1 + 95) & 0x40000000) == 0;
  v8 = 0LL;
  if ( v2 )
  {
    v6 = CWindowProp::CreateWindowProp<CInputQueueProp>(&v8);
    if ( v6 < 0 )
      return (unsigned int)v6;
    v5 = v8;
    if ( !(unsigned int)CWindowProp::SetProp(v8, (unsigned __int64)a1) )
    {
      (**(void (__fastcall ***)(CInputQueueProp *))v5)(v5);
      return (unsigned int)-1073741790;
    }
    *((_DWORD *)a1 + 95) |= 0x40000000u;
  }
  else
  {
    CWindowProp::GetProp<CInputQueueProp>((__int64)a1, (__int64 *)&v8);
    v5 = v8;
  }
  v6 = CInputQueueProp::AttachInputQueue(v5, a2);
  if ( v6 < 0 && !*((_DWORD *)v5 + 8) )
  {
    CWindowProp::RemoveAndDeleteProp(v5);
    *((_DWORD *)a1 + 95) &= ~0x40000000u;
  }
  return (unsigned int)v6;
}
