/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18000670C
 * Callers:
 *     ??$ForEachSession@UIAudioSessionInfo@@@CProcess@@IEAAJ$$QEAV?$function@$$A6AXPEAUIAudioSessionInfo@@PEA_N@Z@std@@@Z @ 0x180023080 (--$ForEachSession@UIAudioSessionInfo@@@CProcess@@IEAAJ$$QEAV-$function@$$A6AXPEAUIAudioSessionIn.c)
 *     ??1?$vector@V?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18002DE08 (--1-$vector@V-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$c.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006744 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v3);
      v3 += 8LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
