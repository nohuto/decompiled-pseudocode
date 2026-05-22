/*
 * XREFs of ??0TargetingInfo@KeyboardProcessor@@QEAA@AEBU01@@Z @ 0x1800131C8
 * Callers:
 *     ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800129A0 (-OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     _lambda_ebc29ddd5dd0a3c27fbc9fad58cec528_::operator() @ 0x180012F7C (_lambda_ebc29ddd5dd0a3c27fbc9fad58cec528_--operator().c)
 *     ??$_Emplace_reallocate@AEAUTargetingInfo@KeyboardProcessor@@@?$vector@UTargetingInfo@KeyboardProcessor@@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@AEAAPEAUTargetingInfo@KeyboardProcessor@@QEAU23@AEAU23@@Z @ 0x18008753C (--$_Emplace_reallocate@AEAUTargetingInfo@KeyboardProcessor@@@-$vector@UTargetingInfo@KeyboardPro.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
KeyboardProcessor::TargetingInfo *__fastcall KeyboardProcessor::TargetingInfo::TargetingInfo(
        KeyboardProcessor::TargetingInfo *this,
        const struct KeyboardProcessor::TargetingInfo *a2)
{
  KeyboardProcessor::TargetingInfo *v4; // rax
  const struct KeyboardProcessor::TargetingInfo *v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx

  v4 = this;
  v5 = a2;
  v6 = 2LL;
  v7 = 128LL;
  do
  {
    *(_OWORD *)v4 = *(_OWORD *)v5;
    *((_OWORD *)v4 + 1) = *((_OWORD *)v5 + 1);
    *((_OWORD *)v4 + 2) = *((_OWORD *)v5 + 2);
    *((_OWORD *)v4 + 3) = *((_OWORD *)v5 + 3);
    *((_OWORD *)v4 + 4) = *((_OWORD *)v5 + 4);
    *((_OWORD *)v4 + 5) = *((_OWORD *)v5 + 5);
    *((_OWORD *)v4 + 6) = *((_OWORD *)v5 + 6);
    v4 = (KeyboardProcessor::TargetingInfo *)((char *)v4 + 128);
    *((_OWORD *)v4 - 1) = *((_OWORD *)v5 + 7);
    v5 = (const struct KeyboardProcessor::TargetingInfo *)((char *)v5 + 128);
    --v6;
  }
  while ( v6 );
  *(_OWORD *)v4 = *(_OWORD *)v5;
  *((_OWORD *)v4 + 1) = *((_OWORD *)v5 + 1);
  *((_OWORD *)v4 + 2) = *((_OWORD *)v5 + 2);
  *((_OWORD *)v4 + 3) = *((_OWORD *)v5 + 3);
  *((_OWORD *)v4 + 4) = *((_OWORD *)v5 + 4);
  *((_OWORD *)v4 + 5) = *((_OWORD *)v5 + 5);
  *((_OWORD *)v4 + 6) = *((_OWORD *)v5 + 6);
  v8 = *((_QWORD *)a2 + 46);
  *((_QWORD *)this + 46) = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 8LL))(v8, 128LL);
  v9 = *((_QWORD *)a2 + 47);
  *((_QWORD *)this + 47) = v9;
  if ( v9 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 8LL))(v9, v7);
  return this;
}
