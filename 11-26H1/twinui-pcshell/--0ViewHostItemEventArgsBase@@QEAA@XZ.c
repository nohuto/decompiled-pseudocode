/*
 * XREFs of ??0ViewHostItemEventArgsBase@@QEAA@XZ @ 0x180401988
 * Callers:
 *     ??$MakeAndInitialize@VViewHostItemEventArgs@@V1@AEBW4ViewHostItemEventType@Holographic@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAVViewHostItemEventArgs@@AEBW4ViewHostItemEventType@Holographic@Shell@Internal@Windows@@$$QEAPEAUIPropertySet@Collections@Foundation@8@@Z @ 0x180400584 (--$MakeAndInitialize@VViewHostItemEventArgs@@V1@AEBW4ViewHostItemEventType@Holographic@Shell@Int.c)
 *     ??0ViewHostItemPropertyChangedArgs@@QEAA@XZ @ 0x1804019D0 (--0ViewHostItemPropertyChangedArgs@@QEAA@XZ.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800463AC (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 */

ViewHostItemEventArgsBase *__fastcall ViewHostItemEventArgsBase::ViewHostItemEventArgsBase(
        ViewHostItemEventArgsBase *this)
{
  ViewHostItemEventArgsBase *result; // rax

  Microsoft::WRL::FtmBase::FtmBase((ViewHostItemEventArgsBase *)((char *)this + 8));
  *(_QWORD *)this = &ViewHostItemEventArgsBase::`vftable'{for `Windows::Internal::Shell::Holographic::IViewHostItemEventArgs'};
  *((_QWORD *)this + 1) = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  result = this;
  *((_QWORD *)this + 7) = 0LL;
  return result;
}
