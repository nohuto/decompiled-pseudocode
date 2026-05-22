/*
 * XREFs of ?RemoveDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x1800D34C4
 * Callers:
 *     ?DetachDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x18007E15C (-DetachDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z.c)
 * Callees:
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180064414 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RIMDeviceCollection::RemoveDevice(RIMDeviceCollection *this, struct RIMDevice *a2)
{
  void *v2; // r8
  int Device; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v8; // rdi
  void (__fastcall ***v9)(_QWORD, __int64); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = (void *)*((_QWORD *)a2 + 2);
  v11 = 0;
  Device = RIMDeviceCollection::FindDevice(this, 0, v2, 0LL, &v11);
  v6 = Device;
  if ( Device >= 0 )
  {
    v8 = v11;
    v9 = *(void (__fastcall ****)(_QWORD, __int64))(v5 + 8LL * v11 + 624);
    if ( v9 )
      (**v9)(v9, 1LL);
    *((_QWORD *)this + v8 + 78) = 0LL;
    --*((_DWORD *)this + 668);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x400,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return v6;
  }
}
