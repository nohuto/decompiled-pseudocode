/*
 * XREFs of ?DecrementCounter@CDwmNotifyBatch@@IEAAXPEAUHWND__@@@Z @ 0x1402E695C
 * Callers:
 *     ??0CDwmSwpNotifyBatch@@QEAA@PEAUtagSMWP@@@Z @ 0x140046A10 (--0CDwmSwpNotifyBatch@@QEAA@PEAUtagSMWP@@@Z.c)
 *     _lambda_d3317ad6738a121a75864f2401651563_::_lambda_invoker_cdecl_ @ 0x1402E6890 (_lambda_d3317ad6738a121a75864f2401651563_--_lambda_invoker_cdecl_.c)
 *     _lambda_d8af0bc767968272ab227b7dacb99926_::_lambda_invoker_cdecl_ @ 0x1402E68F0 (_lambda_d8af0bc767968272ab227b7dacb99926_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ??$GetProp@VCDwmWindowNotifyBatchProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCDwmWindowNotifyBatchProp@@@Z @ 0x1402E690C (--$GetProp@VCDwmWindowNotifyBatchProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCDwmWindowNotifyBatch.c)
 *     DwmAsyncWindowNotifyBatchEnd @ 0x140347854 (DwmAsyncWindowNotifyBatchEnd.c)
 */

void __fastcall CDwmNotifyBatch::DecrementCounter(CDwmNotifyBatch *this, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  CDwmNotifyBatch *v5; // rbp
  void *v7; // rax
  CDwmNotifyBatch *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = this;
  v2 = HMValidateHandleNoSecure(a2, 1);
  if ( v2 )
  {
    if ( *(char *)(*(_QWORD *)(v2 + 40) + 19LL) >= 0 )
    {
      v8 = 0LL;
      if ( CWindowProp::GetProp<CDwmWindowNotifyBatchProp>(v2, (__int64 *)&v8) )
      {
        v5 = v8;
        if ( (*((_DWORD *)v8 + 7))-- == 1 )
        {
          v7 = (void *)ReferenceDwmApiPort(v4, v3);
          DwmAsyncWindowNotifyBatchEnd(v7);
          *((_QWORD *)v5 + 4) = 0LL;
        }
      }
    }
  }
}
