/*
 * XREFs of ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x18002126C
 * Callers:
 *     ?FreePlexes@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@AEAAXXZ @ 0x18001C464 (-FreePlexes@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_pol.c)
 *     ?RemoveAll@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXXZ @ 0x18002035C (-RemoveAll@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x1800210A8 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?RemoveAll@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAXXZ @ 0x1800211FC (-RemoveAll@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAtlPlex::FreeDataChain(ATL::CAtlPlex **this)
{
  ATL::CAtlPlex *v1; // rbx

  if ( this )
  {
    do
    {
      v1 = *this;
      free(this);
      this = (ATL::CAtlPlex **)v1;
    }
    while ( v1 );
  }
}
