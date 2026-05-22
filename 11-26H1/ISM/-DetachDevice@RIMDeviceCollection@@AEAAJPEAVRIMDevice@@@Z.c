/*
 * XREFs of ?DetachDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x18007E15C
 * Callers:
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x18004506C (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 *     ?OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z @ 0x180083360 (-OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x1800D34C4 (-RemoveDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RIMDeviceCollection::DetachDevice(RIMDeviceCollection *this, struct RIMDevice *a2)
{
  unsigned int *v2; // rbx
  int v5; // eax
  unsigned int v6; // esi
  int v8; // ebx
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (unsigned int *)*((_QWORD *)a2 + 4);
  if ( v2 )
  {
    v5 = (*(__int64 (__fastcall **)(RIMDeviceCollection *, _QWORD))(*(_QWORD *)this + 80LL))(this, *v2);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x468,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
        (const char *)(unsigned int)v5,
        v10);
      return v6;
    }
    if ( v2[1] )
    {
      if ( v2[1] != 256 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 2) + 64LL))(
               *((_QWORD *)this + 2),
               v2);
        if ( v8 < 0 )
        {
          v9 = 1143LL;
LABEL_8:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v9,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
            (const char *)(unsigned int)v8,
            v10);
          return (unsigned int)v8;
        }
      }
    }
  }
  v8 = RIMDeviceCollection::RemoveDevice(this, a2);
  if ( v8 < 0 )
  {
    v9 = 1147LL;
    goto LABEL_8;
  }
  return 0LL;
}
