/*
 * XREFs of ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x180028870
 * Callers:
 *     ?NewNode@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCHostedAppInteractivity@@PEAV312@1@Z @ 0x1800287C8 (-NewNode@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 *     ?NewNode@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@AEAAPEAVCNode@12@AEBQEAUIUnknown@@II@Z @ 0x180038F24 (-NewNode@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy.c)
 *     ?NewNode@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCPickerHostContext@@PEAV312@1@Z @ 0x180041134 (-NewNode@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL.c)
 * Callees:
 *     <none>
 */

struct ATL::CAtlPlex *__fastcall ATL::CAtlPlex::Create(
        struct ATL::CAtlPlex **a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v4; // r9
  struct ATL::CAtlPlex *result; // rax

  if ( a2 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < a3 )
      return 0LL;
    v4 = a3 * a2;
    if ( ~(a3 * a2) < 8 )
      return 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  result = (struct ATL::CAtlPlex *)malloc(v4 + 8);
  if ( result )
  {
    *(_QWORD *)result = *a1;
    *a1 = result;
    return result;
  }
  return 0LL;
}
