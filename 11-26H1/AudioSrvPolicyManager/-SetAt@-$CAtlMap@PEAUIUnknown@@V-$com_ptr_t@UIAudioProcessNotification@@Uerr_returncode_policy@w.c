/*
 * XREFs of ?SetAt@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIUnknown@@AEBV?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18003A044
 * Callers:
 *     ?RegisterProcessNotification@CProcess@@UEAAJPEAUIAudioProcessNotification@@PEAUIUnknown@@@Z @ 0x180039640 (-RegisterProcessNotification@CProcess@@UEAAJPEAUIAudioProcessNotification@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18002E7E8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??4?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x180037C48 (--4-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@.c)
 *     ?GetNode@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@AEBAPEAVCNode@12@AEBQEAUIUnknown@@AEAI1AEAPEAV312@@Z @ 0x1800387E0 (-GetNode@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy.c)
 *     ?InitHashTable@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@QEAA_NI_N@Z @ 0x180038B98 (-InitHashTable@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_.c)
 *     ?NewNode@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@AEAAPEAVCNode@12@AEBQEAUIUnknown@@II@Z @ 0x180038F24 (-NewNode@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CAtlMap<IUnknown *,wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>>>::SetAt(
        __int64 a1,
        unsigned int *a2,
        __int64 *a3)
{
  __int64 Node; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  unsigned int v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  v13 = 0;
  LODWORD(v16) = 0;
  Node = ATL::CAtlMap<IUnknown *,wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>>>::GetNode(
           a1,
           a2,
           (int *)&v13,
           (unsigned int *)&v16,
           v14);
  v7 = Node;
  if ( Node )
  {
    wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>::operator=((__int64 *)(Node + 8), a3);
  }
  else
  {
    if ( !*(_QWORD *)a1
      && !ATL::CAtlMap<IUnknown *,wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>>>::InitHashTable(
            a1,
            *(_DWORD *)(a1 + 16),
            1) )
    {
      ATL::AtlThrowImpl(-2147024882);
    }
    v8 = ATL::CAtlMap<IUnknown *,wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>>>::NewNode(
           a1,
           a2,
           v13,
           v16);
    v7 = v8;
    v16 = v8;
    try
    {
      wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>::operator=((__int64 *)(v8 + 8), a3);
    }
    catch ( ... )
    {
      if ( !v16 )
        ATL::AtlThrowImpl(-2147467259);
      v10 = (unsigned int)(*(_DWORD *)(v16 + 24) % *(_DWORD *)(a1 + 16));
      if ( v16 == *(_QWORD *)(*(_QWORD *)a1 + 8 * v10) )
      {
        v11 = 0LL;
      }
      else
      {
        v11 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v10);
        if ( *(_QWORD *)(v11 + 16) != v16 )
        {
          v12 = *(_QWORD *)(v11 + 16);
          do
          {
            v11 = v12;
            v12 = *(_QWORD *)(v12 + 16);
          }
          while ( v12 != v16 );
        }
      }
      ATL::CAtlMap<IUnknown *,wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>>>::RemoveNode(
        a1,
        v16,
        v11);
      throw;
    }
  }
  return v7;
}
