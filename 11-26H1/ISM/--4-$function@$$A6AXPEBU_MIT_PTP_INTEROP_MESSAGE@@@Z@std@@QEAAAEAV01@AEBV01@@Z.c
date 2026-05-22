/*
 * XREFs of ??4?$function@$$A6AXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800F104C
 * Callers:
 *     ?Initialize@?$KernelInputConnection@U_MIT_HAPTIC_NOTIFICATION_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_HAPTIC_NOTIFICATION_MESSAGE@@@Z@std@@@Z @ 0x1800F1B88 (-Initialize@-$KernelInputConnection@U_MIT_HAPTIC_NOTIFICATION_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMes.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z@std@@@Z @ 0x1800F1D6C (-Initialize@-$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@QEAAXAEBV-$ComPtr@.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_PTP_INTEROP_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z@std@@@Z @ 0x1800F1F3C (-Initialize@-$KernelInputConnection@U_MIT_PTP_INTEROP_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSess.c)
 * Callees:
 *     ?_Reset_move@?$_Func_class@XPEBUMIT_INPUTSTREAM_ENDED_MESSAGE@@@std@@IEAAX$$QEAV12@@Z @ 0x1800412DC (-_Reset_move@-$_Func_class@XPEBUMIT_INPUTSTREAM_ENDED_MESSAGE@@@std@@IEAAX$$QEAV12@@Z.c)
 *     ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x180041338 (--1-$_Func_class@X$$V@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<void (_MIT_PTP_INTEROP_MESSAGE const *)>::operator=(__int64 a1, __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, _BYTE *); // rcx
  _BYTE *v4; // rax
  __int64 v5; // rdx
  _BYTE v7[56]; // [rsp+20h] [rbp-39h] BYREF
  _BYTE *v8; // [rsp+58h] [rbp-1h]
  _BYTE v9[56]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v10; // [rsp+98h] [rbp+3Fh]

  v8 = 0LL;
  v3 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  if ( v3 )
  {
    v4 = (_BYTE *)(**v3)(v3, v7);
    v8 = v4;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 == v7 || *(_QWORD *)(a1 + 56) == a1 )
  {
    v10 = 0LL;
    std::_Func_class<void,MIT_INPUTSTREAM_ENDED_MESSAGE const *>::_Reset_move((__int64)v9, (__int64)v7);
    std::_Func_class<void,MIT_INPUTSTREAM_ENDED_MESSAGE const *>::_Reset_move((__int64)v7, a1);
    std::_Func_class<void,MIT_INPUTSTREAM_ENDED_MESSAGE const *>::_Reset_move(a1, (__int64)v9);
    std::_Func_class<void,>::~_Func_class<void,>((__int64)v9, v5);
  }
  else
  {
    v8 = *(_BYTE **)(a1 + 56);
    *(_QWORD *)(a1 + 56) = v4;
  }
  std::_Func_class<void,>::~_Func_class<void,>((__int64)v7, a2);
  return a1;
}
