/*
 * XREFs of ?OnHitTest@ActivationProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801A90D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VActivationContext@@V1@AEAW4SPATIAL_INPUT_ACTIVATION_POLICY@@_N@Details@WRL@Microsoft@@YAJPEAPEAVActivationContext@@AEAW4SPATIAL_INPUT_ACTIVATION_POLICY@@$$QEA_N@Z @ 0x1801A8EF8 (--$MakeAndInitialize@VActivationContext@@V1@AEAW4SPATIAL_INPUT_ACTIVATION_POLICY@@_N@Details@WRL.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ActivationProcessor::OnHitTest(
        ActivationProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  __int64 *v4; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  __int64 (__fastcall ***v8)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rdi
  int v10; // eax
  unsigned int v11; // edi
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v14; // [rsp+58h] [rbp+20h] BYREF

  *(_DWORD *)a4 = 1;
  v4 = (__int64 *)((char *)a4 + 8);
  if ( *((_QWORD *)a4 + 1) || (*(_BYTE *)a2 & 0x1B) == 0 || (*((_DWORD *)a2 + 8) & 0x2004) != 0x2004 )
  {
    *(_DWORD *)a4 = 0;
    return 0LL;
  }
  v12[0] = 0LL;
  v14 = 0;
  v5 = Microsoft::WRL::Details::MakeAndInitialize<ActivationContext,ActivationContext,enum SPATIAL_INPUT_ACTIVATION_POLICY &,bool>(
         v12,
         (_DWORD *)a3 + 24,
         &v14);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12[0];
    v9 = **(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v12[0];
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v4);
    v10 = v9(v8, &GUID_00000000_0000_0000_c000_000000000046, v4);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x37,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\activation\\system\\lib\\activa"
             "tionprocessor.cpp",
        (const char *)(unsigned int)v10);
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v8)[2])(v8);
      return v11;
    }
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v8)[2])(v8);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x36,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\activation\\system\\lib\\activationprocessor.cpp",
    (const char *)(unsigned int)v5);
  if ( v12[0] )
    (*(void (__fastcall **)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)v12[0] + 16LL))((__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12[0]);
  return v6;
}
