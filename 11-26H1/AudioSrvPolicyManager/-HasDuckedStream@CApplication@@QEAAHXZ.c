/*
 * XREFs of ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x18002BF3C
 * Callers:
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x180011710 (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@_N@Z @ 0x18002BD34 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCAppl.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18001EA10 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?HasDuckedStream@CProcess@@QEAAHXZ @ 0x180023B4C (-HasDuckedStream@CProcess@@QEAAHXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::HasDuckedStream(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  CProcess *v3; // rcx
  unsigned int v4; // esi
  _QWORD *v5; // rax
  CProcess **Next; // rax
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+38h] [rbp+10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v9 = v2;
  v4 = 0;
  v5 = (_QWORD *)*((_QWORD *)this + 9);
  v8 = v5;
  while ( v5 )
  {
    Next = (CProcess **)ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext((__int64)v3, &v8);
    v3 = *Next;
    if ( !*((_DWORD *)*Next + 104) && (unsigned int)CProcess::HasDuckedStream(v3) )
    {
      v4 = 1;
      break;
    }
    v5 = v8;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v4;
}
