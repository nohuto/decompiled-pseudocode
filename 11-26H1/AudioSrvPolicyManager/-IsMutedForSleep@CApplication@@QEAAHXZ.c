/*
 * XREFs of ?IsMutedForSleep@CApplication@@QEAAHXZ @ 0x18002BFD0
 * Callers:
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x180011710 (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@_N@Z @ 0x18002BD34 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCAppl.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18001EA10 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ @ 0x18001F2E0 (-GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ.c)
 */

__int64 __fastcall CApplication::IsMutedForSleep(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  CProcess *v3; // rcx
  _QWORD *v4; // rax
  unsigned int v5; // esi
  CProcess **Next; // rax
  _QWORD *v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v4 = (_QWORD *)*((_QWORD *)this + 9);
  v5 = 0;
  v8 = v4;
  while ( v4 )
  {
    Next = (CProcess **)ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext((__int64)v3, &v8);
    v3 = *Next;
    if ( !*((_DWORD *)*Next + 104) && CProcess::GetSessionDisplayPolicyVolume(v3) < 0.000099999997 )
    {
      v5 = 1;
      break;
    }
    v4 = v8;
  }
  if ( v1 )
    LeaveCriticalSection(v1);
  return v5;
}
