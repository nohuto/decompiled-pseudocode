/*
 * XREFs of ?GetDeviceProductInfo@AugmentedInputDeviceCollection@@IEAAJKPEAG00@Z @ 0x1800D284C
 * Callers:
 *     ?OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800D2970 (-OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180064414 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AugmentedInputDeviceCollection::GetDeviceProductInfo(
        AugmentedInputDeviceCollection *this,
        int a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5)
{
  __int64 v7; // rcx
  int Device; // ebx
  __int64 v9; // rdx
  int v11; // ebx
  struct RIMDevice *v12; // [rsp+30h] [rbp-38h] BYREF
  _OWORD v13[2]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v14; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v12 = 0LL;
  memset(v13, 0, sizeof(v13));
  v14 = 0LL;
  Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v12, 0LL);
  if ( Device < 0 )
  {
    v9 = 132LL;
    goto LABEL_3;
  }
  v11 = RIMGetDeviceProperties(*(_QWORD *)(v7 + 80), *((_QWORD *)v12 + 2), v13);
  if ( (v11 & 0xC0000000) == 0xC0000000 )
  {
    Device = v11 | 0x10000000;
    if ( Device >= 0 )
      return (unsigned int)Device;
    v9 = 134LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return (unsigned int)Device;
  }
  *a3 = WORD4(v13[0]);
  *a4 = WORD5(v13[0]);
  *a5 = WORD6(v13[0]);
  return 0LL;
}
