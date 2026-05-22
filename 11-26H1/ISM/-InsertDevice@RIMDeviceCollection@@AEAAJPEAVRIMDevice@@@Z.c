/*
 * XREFs of ?InsertDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x18008E18C
 * Callers:
 *     ?AttachDevice@RIMDeviceCollection@@AEAAJPEAX0KPEAPEAVRIMDevice@@@Z @ 0x18007C0C0 (-AttachDevice@RIMDeviceCollection@@AEAAJPEAX0KPEAPEAVRIMDevice@@@Z.c)
 * Callees:
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180064414 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall RIMDeviceCollection::InsertDevice(RIMDeviceCollection *this, void **a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  unsigned int Device; // edx
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 i; // rax
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_DWORD *)this + 668) >= 0x100u )
  {
    v3 = -2147024882;
    v4 = 989LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)v3,
      v10);
    return v3;
  }
  Device = RIMDeviceCollection::FindDevice(this, 0, a2[2], 0LL, 0LL);
  if ( Device != -2147023728 )
  {
    v3 = -2147024883;
    v4 = 997LL;
    goto LABEL_3;
  }
  for ( i = 0LL; (unsigned int)i < 0x100; i = (unsigned int)(i + 1) )
  {
    if ( *(_QWORD *)(v7 + 8 * i + 624) == v8 )
    {
      *(_QWORD *)(v7 + 8 * i + 624) = a2;
      ++*(_DWORD *)(v7 + 2672);
      return 0;
    }
  }
  return Device;
}
