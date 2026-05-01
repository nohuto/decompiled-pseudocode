/*
 * XREFs of ??0CCortanaShownEventArgs@@QEAA@URect@Foundation@Windows@@_N@Z @ 0x1801D02C4
 * Callers:
 *     ??$Make@VCCortanaShownEventArgs@@AEAURect@Foundation@Windows@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCCortanaShownEventArgs@@@12@AEAURect@Foundation@Windows@@@Z @ 0x1802BDF00 (--$Make@VCCortanaShownEventArgs@@AEAURect@Foundation@Windows@@@Details@WRL@Microsoft@@YA-AV-$Com.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1801D031C (--0-$RuntimeClass@U-$RuntimeClassFlags@$00@WRL@Microsoft@@UICortanaShownEventArgs@Experience@She.c)
 */

__int64 __fastcall CCortanaShownEventArgs::CCortanaShownEventArgs(__int64 a1, __int128 *a2, char a3)
{
  __int128 v6; // xmm0
  __int64 result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>(a1);
  v6 = *a2;
  *(_QWORD *)a1 = &CCortanaShownEventArgs::`vftable'{for `Windows::Internal::Shell::Experience::ICortanaShownEventArgs'};
  *(_QWORD *)(a1 + 8) = &CCortanaShownEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
  result = a1;
  *(_BYTE *)(a1 + 48) = a3;
  *(_OWORD *)(a1 + 32) = v6;
  return result;
}
