/*
 * XREFs of ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1402455CC
 * Callers:
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     ?RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z @ 0x1402E16E0 (-RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?GetOrCreate@CoreWindowProp@@KAJPEAUtagWND@@PEAPEAV1@@Z @ 0x140245638 (-GetOrCreate@CoreWindowProp@@KAJPEAUtagWND@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CoreWindowProp::ChangeRole(struct tagWND *a1, int a2, unsigned __int8 a3)
{
  int v4; // edi
  int v5; // edx
  int v7; // ebx
  struct CoreWindowProp *v8; // [rsp+48h] [rbp+20h] BYREF

  v4 = a3;
  v8 = 0LL;
  v5 = CoreWindowProp::GetOrCreate(a1, &v8);
  if ( v5 >= 0 )
  {
    v7 = a2 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        *((_DWORD *)v8 + 6) = v4;
      }
      else
      {
        UserSetLastError(87);
        return (unsigned int)-1073741811;
      }
    }
    else
    {
      *((_DWORD *)v8 + 7) = v4;
    }
  }
  return (unsigned int)v5;
}
