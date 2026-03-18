/*
 * XREFs of ?SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z @ 0x1400A9D68
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400AA7E0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?ReturnResourceLifetimeTag@CResourceMarshaler@DirectComposition@@QEAAXPEAVCDeletedNotificationList@2@@Z @ 0x1400A9AE0 (-ReturnResourceLifetimeTag@CResourceMarshaler@DirectComposition@@QEAAXPEAVCDeletedNotificationLi.c)
 *     ?EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ @ 0x1400A9CBC (-EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1400ABE60 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceDeletedNotificationTag(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        __int64 a3)
{
  struct DirectComposition::CResourceMarshaler *v5; // rax
  DirectComposition::CResourceMarshaler *v6; // rdi
  int v7; // ebx
  bool v9; // zf

  v5 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
  v6 = v5;
  if ( !v5 || *((_QWORD *)v5 + 6) )
  {
    return (unsigned int)-1073741790;
  }
  else if ( a3 )
  {
    v7 = DirectComposition::CDeletedNotificationList::EnsureTagAllocation((DirectComposition::CApplicationChannel *)((char *)this + 528));
    if ( v7 >= 0 )
    {
      v9 = *((_QWORD *)v6 + 3) == 1LL;
      *((_QWORD *)v6 + 6) = a3;
      if ( v9 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(DirectComposition::CResourceMarshaler *))(*(_QWORD *)v6 + 24LL))(v6) )
          DirectComposition::CResourceMarshaler::ReturnResourceLifetimeTag(
            v6,
            (DirectComposition::CApplicationChannel *)((char *)this + 528));
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
