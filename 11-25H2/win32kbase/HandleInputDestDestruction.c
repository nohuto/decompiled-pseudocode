/*
 * XREFs of HandleInputDestDestruction @ 0x140039868
 * Callers:
 *     HandleFullWindowDestruction @ 0x1400397D0 (HandleFullWindowDestruction.c)
 *     HandleBaseWindowDestruction @ 0x140216250 (HandleBaseWindowDestruction.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140039670 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140039698 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140039910 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x140039A7C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     _HMPheFromObject @ 0x14003F320 (_HMPheFromObject.c)
 *     ?Clear@MouseOwner@CMouseProcessor@@QEAAXXZ @ 0x14012A060 (-Clear@MouseOwner@CMouseProcessor@@QEAAXXZ.c)
 */

void __fastcall HandleInputDestDestruction(__int64 a1)
{
  __int64 MouseProcessor; // rax
  CMouseProcessor::MouseOwner *v3; // rbx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( (*(_BYTE *)(HMPheFromObject(*(_QWORD *)(a1 + 80)) + 25) & 1) == 0 )
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v4);
    MouseProcessor = anonymous_namespace_::GetMouseProcessor();
    if ( MouseProcessor )
    {
      v3 = (CMouseProcessor::MouseOwner *)(MouseProcessor + 3776);
      if ( (unsigned __int8)CInputDest::operator==(MouseProcessor + 3776, a1) )
        CMouseProcessor::MouseOwner::Clear(v3);
    }
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v4);
  }
}
