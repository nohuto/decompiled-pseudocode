/*
 * XREFs of ?PickSize@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@AEBAI_K@Z @ 0x1800390AC
 * Callers:
 *     ?RemoveAll@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@QEAAXXZ @ 0x18001C3C8 (-RemoveAll@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_poli.c)
 *     ?FreeNode@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180038640 (-FreeNode@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_polic.c)
 *     ?NewNode@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@AEAAPEAVCNode@12@AEBQEAUIUnknown@@II@Z @ 0x180038F24 (-NewNode@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy.c)
 *     ?Rehash@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@QEAAXI@Z @ 0x180039894 (-Rehash@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlMap<IUnknown *,wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>>>::PickSize(
        __int64 a1,
        __int64 a2)
{
  double v2; // xmm1_8
  unsigned __int64 v3; // rax
  double v4; // xmm1_8
  unsigned __int64 v5; // rcx
  int v6; // eax
  unsigned int *v7; // rdx
  __int64 result; // rax

  if ( a2 < 0 )
    v2 = (double)(int)(a2 & 1 | ((unsigned __int64)a2 >> 1)) + (double)(int)(a2 & 1 | ((unsigned __int64)a2 >> 1));
  else
    v2 = (double)(int)a2;
  v3 = 0LL;
  v4 = v2 / *(float *)(a1 + 20);
  if ( v4 >= 9.223372036854776e18 )
  {
    v4 = v4 - 9.223372036854776e18;
    if ( v4 < 9.223372036854776e18 )
      v3 = 0x8000000000000000uLL;
  }
  v5 = v3 + (unsigned int)(int)v4;
  v6 = 0;
  if ( v5 > 0xFFFFFFFF )
  {
    LODWORD(v5) = -1;
    goto LABEL_10;
  }
  if ( (unsigned int)v5 > 0x11 )
  {
LABEL_10:
    v7 = `ATL::CAtlMap<IUnknown *,wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>>>::PickSize'::`2'::s_anPrimes;
    do
    {
      ++v6;
      ++v7;
    }
    while ( (unsigned int)v5 > *v7 );
  }
  result = `ATL::CAtlMap<IUnknown *,wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>>>::PickSize'::`2'::s_anPrimes[v6];
  if ( (_DWORD)result == -1 )
    return (unsigned int)v5;
  return result;
}
