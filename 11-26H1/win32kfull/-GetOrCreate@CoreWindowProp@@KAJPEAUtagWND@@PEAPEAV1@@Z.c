/*
 * XREFs of ?GetOrCreate@CoreWindowProp@@KAJPEAUtagWND@@PEAPEAV1@@Z @ 0x140245638
 * Callers:
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1402453DC (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1402455CC (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 * Callees:
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x14000FD08 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x14003A3D0 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     ??$CreateWindowProp@VCoreWindowProp@@@CWindowProp@@SAJPEAPEAVCoreWindowProp@@@Z @ 0x140294664 (--$CreateWindowProp@VCoreWindowProp@@@CWindowProp@@SAJPEAPEAVCoreWindowProp@@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CoreWindowProp::GetOrCreate(struct tagWND *a1, struct CoreWindowProp **a2)
{
  int Window; // ebx

  *a2 = 0LL;
  Window = 0;
  if ( !(unsigned int)CWindowProp::GetProp<CoreWindowProp>((__int64)a1, (__int64 *)a2) )
  {
    Window = CWindowProp::CreateWindowProp<CoreWindowProp>(a2);
    if ( Window >= 0 && !(unsigned int)CWindowProp::SetProp(*a2, (unsigned __int64)a1) )
    {
      (**(void (__fastcall ***)(_QWORD))*a2)(*a2);
      *a2 = 0LL;
      return (unsigned int)-1073741790;
    }
  }
  return (unsigned int)Window;
}
