/*
 * XREFs of ??$Make@VCCortanaShownEventArgs@@AEAURect@Foundation@Windows@@AEA_N@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCCortanaShownEventArgs@@@12@AEAURect@Foundation@Windows@@AEA_N@Z @ 0x1801D0224
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x18023B458 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1801D031C (--0-$RuntimeClass@U-$RuntimeClassFlags@$00@WRL@Microsoft@@UICortanaShownEventArgs@Experience@She.c)
 *     ?Attach@?$ComPtr@VCCortanaShownEventArgs@@@WRL@Microsoft@@QEAAXPEAVCCortanaShownEventArgs@@@Z @ 0x1801D037C (-Attach@-$ComPtr@VCCortanaShownEventArgs@@@WRL@Microsoft@@QEAAXPEAVCCortanaShownEventArgs@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make<CCortanaShownEventArgs,Windows::Foundation::Rect &,bool &>(
        _QWORD *a1,
        const __m128i *a2,
        __int8 *a3)
{
  __m128i *v6; // rax
  __m128i *v7; // rdi
  __int8 v9; // bl
  __m128i v10; // xmm6

  *a1 = 0LL;
  v6 = (__m128i *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    v9 = *a3;
    v10 = _mm_loadu_si128(a2);
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>(v6);
    v7[3].m128i_i8[0] = v9;
    v7->m128i_i64[0] = (__int64)&CCortanaShownEventArgs::`vftable'{for `Windows::Internal::Shell::Experience::ICortanaShownEventArgs'};
    v7->m128i_i64[1] = (__int64)&CCortanaShownEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
    v7[2] = v10;
    Microsoft::WRL::ComPtr<CCortanaShownEventArgs>::Attach(a1, v7);
  }
  return a1;
}
