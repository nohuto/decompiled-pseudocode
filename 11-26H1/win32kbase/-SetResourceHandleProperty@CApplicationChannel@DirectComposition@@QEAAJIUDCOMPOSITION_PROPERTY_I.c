/*
 * XREFs of ?SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIUDCOMPOSITION_PROPERTY_ID@@PEAX@Z @ 0x1400A9E08
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400AA7E0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1400ABE60 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1400ABF84 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceHandleProperty(
        DirectComposition::CApplicationChannel *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4)
{
  struct DirectComposition::CResourceMarshaler *v7; // rax
  struct DirectComposition::CResourceMarshaler *v8; // rdi
  int v9; // r11d
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF

  v11[0] = 0;
  v7 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(a1, a2);
  v8 = v7;
  if ( v7 )
  {
    v9 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, __int64, _BYTE *))(*(_QWORD *)v7 + 256LL))(
           v7,
           a3,
           a4,
           v11);
    if ( v9 >= 0 && v11[0] )
      DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a1, v8);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v9;
}
