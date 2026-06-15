/*
 * XREFs of ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x18001B304
 * Callers:
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180019884 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x18001A5FC (-RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180005F0C (-RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@AEAAXXZ @ 0x18001A7B8 (-GetFreeNode@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@AEAAXXZ.c)
 *     ?GetActiveProcessCount@CApplication@@QEAAIXZ @ 0x18001A850 (-GetActiveProcessCount@CApplication@@QEAAIXZ.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18001BF6C (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??4?$com_ptr_t@VCApplication@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCApplication@@@Z @ 0x18002B0DC (--4-$com_ptr_t@VCApplication@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCApplication@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003AD8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::LinkProcess(CApplication *this, struct CProcess *a2)
{
  struct CProcess *v2; // r13
  CApplication *v3; // rbx
  struct _RTL_CRITICAL_SECTION *v4; // r15
  int v5; // edx
  int v6; // r11d
  _DWORD *v7; // rcx
  _DWORD *v8; // r8
  _DWORD *v9; // r9
  _DWORD *v10; // r10
  unsigned int v11; // r14d
  __int64 v12; // r12
  __int64 *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  ATL::CAtlException *v17; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+88h] [rbp+20h]

  v2 = a2;
  v3 = this;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  v21 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *((_DWORD *)v3 + 162) = *((_DWORD *)v2 + 105);
  v5 = *((_DWORD *)v2 + 106);
  *((_DWORD *)v3 + 163) = v5;
  *((_BYTE *)v3 + 720) = *((_BYTE *)v2 + 786);
  v6 = *((_DWORD *)v3 + 164) | *((_DWORD *)v2 + 111);
  *((_DWORD *)v3 + 164) = v6;
  v7 = (_DWORD *)((char *)v3 + 208);
  v8 = (_DWORD *)((char *)v3 + 216);
  v9 = (_DWORD *)((char *)v3 + 324);
  v10 = (_DWORD *)((char *)v3 + 328);
  if ( !v5 )
  {
    *v7 |= 1u;
    *v8 = 2;
    *v9 = 2;
    *v10 = 2;
  }
  if ( v6 )
  {
    *v7 |= 0x40u;
    *v8 = 2;
    *v9 = 2;
    *v10 = 2;
    *(_QWORD *)((char *)v3 + 620) = 0LL;
    *(_QWORD *)((char *)v3 + 628) = 0LL;
    *(_QWORD *)((char *)v3 + 636) = 0LL;
    *((_DWORD *)v3 + 161) = 1;
  }
  if ( !(unsigned int)CApplication::GetActiveProcessCount(v3) )
    *((_DWORD *)v3 + 171) = 1;
  try
  {
    v11 = 0;
    v12 = *((_QWORD *)v3 + 9);
    ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetFreeNode((__int64)v3 + 72);
    v13 = (__int64 *)*((_QWORD *)v3 + 13);
    v14 = *v13;
    v13[2] = (__int64)v2;
    *((_QWORD *)v3 + 13) = v14;
    v13[1] = 0LL;
    *v13 = v12;
    ++*((_QWORD *)v3 + 11);
    if ( *((_QWORD *)v3 + 9) )
      *(_QWORD *)(*((_QWORD *)v3 + 9) + 8LL) = v13;
    else
      *((_QWORD *)v3 + 10) = v13;
    *((_QWORD *)v3 + 9) = v13;
  }
  catch ( ATL::CAtlException *v17 )
  {
    if ( *(_DWORD *)v17 == -1073741571 )
      _o__resetstkoflw();
    v11 = (unsigned int)v4;
    if ( (int)v4 < 0 )
    {
      AudPolicyLogError("CApplication::LinkProcess", 281, (int)v4);
      v4 = v21;
      goto LABEL_17;
    }
    v3 = this;
    v2 = a2;
    v4 = v21;
  }
  v15 = CApplication::RegisterProcessWithApplicationSpecificEndpointInfo(v3, v2);
  if ( v15 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x112,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)(unsigned int)v15,
      (int)v17);
  wil::com_ptr_t<CApplication,wil::err_returncode_policy>::operator=((char *)v2 + 224, v3);
LABEL_17:
  if ( v4 )
    LeaveCriticalSection(v4);
  return v11;
}
