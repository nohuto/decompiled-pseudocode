/*
 * XREFs of ?_Do_call@?$_Func_impl_no_alloc@V_lambda_0710d3cdf540c4cb20e3a91ad1e2b396_@@JPEAUIAudioProcessingObject@@U_GUID@@I@std@@EEAAJ$$QEAPEAUIAudioProcessingObject@@$$QEAU_GUID@@$$QEAI@Z @ 0x180066990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 std::_Func_impl_no_alloc<_lambda_0710d3cdf540c4cb20e3a91ad1e2b396_,long,IAudioProcessingObject *,_GUID,unsigned int>::_Do_call(
        __int64 a1,
        int (__fastcall ****a2)(_QWORD, GUID *, __int64 *),
        __int64 a3,
        ...)
{
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  bool v5; // cl
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v7 = va_arg(va1, _QWORD);
  v4 = *a2;
  v7 = 0LL;
  v5 = 1;
  if ( !**(_BYTE **)(a1 + 8) )
  {
    v7 = 0LL;
    if ( (**v4)(v4, &GUID_25385759_3236_4101_a943_25693dfb5d2d, (__int64 *)va) < 0 )
      v5 = 0;
  }
  **(_BYTE **)(a1 + 8) = v5;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return 0LL;
}
