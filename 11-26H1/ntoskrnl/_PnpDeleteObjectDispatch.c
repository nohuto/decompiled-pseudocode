/*
 * XREFs of _PnpDeleteObjectDispatch @ 0x140898534
 * Callers:
 *     _PnpDeleteObject @ 0x140898410 (_PnpDeleteObject.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     _PnpObjectRaiseDeleteEvent @ 0x140774C4C (_PnpObjectRaiseDeleteEvent.c)
 *     _PnpCtxGetObjectDispatchCallback @ 0x140A81690 (_PnpCtxGetObjectDispatchCallback.c)
 */

__int64 __fastcall PnpDeleteObjectDispatch(__int64 a1, __int64 a2, int a3, int a4)
{
  int ObjectDispatchCallback; // ebx
  __int64 v10; // [rsp+30h] [rbp-58h] BYREF
  _DWORD v11[16]; // [rsp+40h] [rbp-48h] BYREF

  v10 = 0LL;
  memset_0(v11, 0, sizeof(v11));
  if ( (_WORD)a4 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    ObjectDispatchCallback = PnpCtxGetObjectDispatchCallback(a1, (unsigned int)a3, &v10);
    if ( ObjectDispatchCallback >= 0 )
    {
      if ( v10 )
      {
        v11[0] = a4;
        ObjectDispatchCallback = guard_dispatch_icall_no_overrides(a1, a2);
        if ( ObjectDispatchCallback >= 0 && a3 >= 7 )
          PnpObjectRaiseDeleteEvent(a1, a2);
      }
      else
      {
        return (unsigned int)-1073741822;
      }
    }
  }
  return (unsigned int)ObjectDispatchCallback;
}
