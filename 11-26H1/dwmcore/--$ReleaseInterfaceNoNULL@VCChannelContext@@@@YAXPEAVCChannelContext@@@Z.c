/*
 * XREFs of ??$ReleaseInterfaceNoNULL@VCChannelContext@@@@YAXPEAVCChannelContext@@@Z @ 0x180163A7C
 * Callers:
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18016303C (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z @ 0x180163570 (-DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z.c)
 *     ?ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETCALLBACKID@@@Z @ 0x180165080 (-ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETCALLBACKID.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ReleaseInterfaceNoNULL<CChannelContext>(volatile signed __int32 *a1)
{
  int v2; // edi
  int v3; // edi
  __int64 result; // rax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1 )
  {
    v2 = _InterlockedDecrement(a1 + 2);
    if ( v2 < -1 )
      result = wil::details::in1diag3::Log_Hr(
                 retaddr,
                 (void *)0x26,
                 (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
                 (const char *)0x8007029CLL,
                 v5);
    if ( !v2 )
    {
      if ( _InterlockedAdd(a1 + 2, 1u) <= 0 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x18,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v5);
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 24LL))(a1);
      v3 = _InterlockedDecrement(a1 + 2);
      if ( v3 < -1 )
        result = wil::details::in1diag3::Log_Hr(
                   retaddr,
                   (void *)0x26,
                   (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
                   (const char *)0x8007029CLL,
                   v5);
      if ( !v3 )
      {
        if ( _InterlockedDecrement(a1 + 2) < -1 )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x26,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v5);
        return (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 16LL))(a1, 1LL);
      }
    }
  }
  return result;
}
