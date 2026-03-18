/*
 * XREFs of ?ActivateResourceTrigger@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1401BF314
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400AA7E0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1400ABE60 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1400ABF84 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ActivateResourceTrigger(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned int a3)
{
  struct DirectComposition::CResourceMarshaler *v5; // rax
  struct DirectComposition::CResourceMarshaler *v6; // rbx
  int v7; // r11d
  char v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0;
  v5 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
  v6 = v5;
  if ( v5 )
  {
    v7 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, _QWORD, char *))(*(_QWORD *)v5 + 224LL))(
           v5,
           this,
           a3,
           &v9);
    if ( v7 >= 0 && v9 )
      DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v6);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v7;
}
