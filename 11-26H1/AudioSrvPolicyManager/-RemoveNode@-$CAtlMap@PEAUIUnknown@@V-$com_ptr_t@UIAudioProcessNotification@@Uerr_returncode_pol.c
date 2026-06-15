/*
 * XREFs of ?RemoveNode@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@AEAAXPEAVCNode@12@0@Z @ 0x180039AB0
 * Callers:
 *     ?UnregisterProcessNotification@CProcess@@UEAAJPEAUIAudioProcessNotification@@PEAUIUnknown@@@Z @ 0x18003A500 (-UnregisterProcessNotification@CProcess@@UEAAJPEAUIAudioProcessNotification@@PEAUIUnknown@@@Z.c)
 *     _ATL::CAtlMap_IUnknown___wil::com_ptr_t_IAudioProcessNotification_wil::err_returncode_policy__ATL::CElementTraits_IUnknown____ATL::CElementTraits_wil::com_ptr_t_IAudioProcessNotification_wil::err_returncode_policy_____::SetAt_::_1_::catch$1 @ 0x18004DFE2 (_ATL--CAtlMap_IUnknown___wil--com_ptr_t_IAudioProcessNotification_wil--err_returnco_ea_18004DFE2.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18002E7E8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlMap<IUnknown *,wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>>>::RemoveNode(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  if ( a3 )
    *(_QWORD *)(a3 + 16) = *(_QWORD *)(a2 + 16);
  else
    *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 24) % *(_DWORD *)(a1 + 16))) = *(_QWORD *)(a2 + 16);
  ATL::CAtlMap<IUnknown *,wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>>>::FreeNode(
    a1,
    a2);
}
