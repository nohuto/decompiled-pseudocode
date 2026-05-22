/*
 * XREFs of ?SetContext@KernelContextProvider@@QEAAXPEBUMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@Z @ 0x18006FD2C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE_const___::_Do_call @ 0x18006FB50 (std--_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_.c)
 * Callees:
 *     ?_Tidy@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ @ 0x180046678 (-_Tidy@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ @ 0x18010C4B0 (-_Tidy@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ.c)
 *     ??$?0AEAUMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@$0A@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAA@AEAUMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@Z @ 0x18010C50C (--$-0AEAUMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@$0A@$0A@@-$variant@Umonostate@std@@UInputConfigC.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall KernelContextProvider::SetContext(
        KernelContextProvider *this,
        const struct MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE *a2)
{
  __int64 *i; // rbx
  __int64 v4[3]; // [rsp+20h] [rbp-28h] BYREF
  char v5; // [rsp+38h] [rbp-10h]

  *((_OWORD *)this + 8) = *(_OWORD *)a2;
  std::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>(v4);
  for ( i = (__int64 *)*((_QWORD *)this + 4);
        ;
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)i[2] + 24LL))(i[2], v4) )
  {
    i = (__int64 *)*i;
    if ( i == *((__int64 **)this + 4) )
      break;
  }
  if ( v5 != -1LL && v5 && v5 != 1LL )
  {
    if ( v5 == 2LL )
    {
      std::vector<DisplayOcclusionRect>::_Tidy(v4);
    }
    else if ( v5 == 3LL )
    {
      std::vector<INPUT_SPACE_PAYLOAD>::_Tidy(v4);
    }
  }
}
