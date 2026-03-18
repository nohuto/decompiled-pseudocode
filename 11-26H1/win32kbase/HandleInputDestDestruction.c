/*
 * XREFs of HandleInputDestDestruction @ 0x1400D0AC8
 * Callers:
 *     HandleFullWindowDestruction @ 0x1400D0A30 (HandleFullWindowDestruction.c)
 *     HandleBaseWindowDestruction @ 0x14021B6B0 (HandleBaseWindowDestruction.c)
 * Callees:
 *     _HMPheFromObject @ 0x1400488F0 (_HMPheFromObject.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400D0B5C (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1400D0BF0 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1400D0D68 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?Clear@MouseOwner@CMouseProcessor@@QEAAXXZ @ 0x14010B1A0 (-Clear@MouseOwner@CMouseProcessor@@QEAAXXZ.c)
 */

void __fastcall HandleInputDestDestruction(__int64 a1, int a2, int a3)
{
  __int64 v4; // rcx
  __int64 MouseProcessor; // rax
  CMouseProcessor::MouseOwner *v6; // rbx
  _BYTE v7[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  if ( (*(_BYTE *)(HMPheFromObject(*(_DWORD **)(a1 + 80), a2, a3) + 25) & 1) == 0 )
  {
    AtomicExecutionCheck::AtomicExecutionCheck(v7);
    MouseProcessor = anonymous_namespace_::GetMouseProcessor(v4);
    if ( MouseProcessor )
    {
      v6 = (CMouseProcessor::MouseOwner *)(MouseProcessor + 3784);
      if ( (unsigned __int8)CInputDest::operator==(MouseProcessor + 3784, a1) )
        CMouseProcessor::MouseOwner::Clear(v6);
    }
    if ( v7[0] )
      --*(_DWORD *)(v8 + 28);
  }
}
