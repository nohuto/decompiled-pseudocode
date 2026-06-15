/*
 * XREFs of ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180020EC8
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180020618 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180020B2C (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x18003B43C (--1CApplicationManager@@MEAA@XZ.c)
 * Callees:
 *     ?GetApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@PEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x18000D790 (-GetApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@PEAPEAUIApplicationSpecific.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18001BF6C (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x1800210A8 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003AD8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplication::DelinkProcess(CApplication *this, CApplication **a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  int ApplicationSpecificEndpointInfo; // eax
  struct IApplicationSpecificEndpointInfo *v6; // rbx
  __int64 **v7; // rdx
  __int64 *i; // rcx
  __int64 *v9; // r9
  __int64 v10; // r9
  int v13; // eax
  int v14; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct IApplicationSpecificEndpointInfo *v16; // [rsp+68h] [rbp+10h] BYREF
  char *v17; // [rsp+70h] [rbp+18h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+78h] [rbp+20h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  v17 = (char *)this + 32;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v18 = v4;
  v16 = 0LL;
  ApplicationSpecificEndpointInfo = CApplication::GetApplicationSpecificEndpointInfo(
                                      a2[28],
                                      (struct CProcess *)a2,
                                      &v16);
  v6 = v16;
  if ( ApplicationSpecificEndpointInfo >= 0 )
  {
    if ( v16 )
    {
      v13 = (*(__int64 (__fastcall **)(struct IApplicationSpecificEndpointInfo *, _QWORD))(*(_QWORD *)v16 + 72LL))(
              v16,
              *((unsigned int *)a2 + 40));
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x12E,
          (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
          (const char *)(unsigned int)v13,
          v14);
    }
  }
  v7 = (__int64 **)((char *)this + 72);
  for ( i = (__int64 *)*((_QWORD *)this + 9); i; i = (__int64 *)*i )
  {
    if ( (CApplication **)i[2] == a2 )
    {
      v9 = (__int64 *)*i;
      if ( i == *v7 )
        *v7 = v9;
      else
        *(_QWORD *)i[1] = v9;
      v10 = i[1];
      if ( i == *((__int64 **)this + 10) )
        *((_QWORD *)this + 10) = v10;
      else
        *(_QWORD *)(*i + 8) = v10;
      *i = *((_QWORD *)this + 13);
      *((_QWORD *)this + 13) = i;
      if ( (*((_QWORD *)this + 11))-- == 1LL )
        ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((char *)this + 72);
      break;
    }
  }
  if ( v6 )
    (*(void (__fastcall **)(struct IApplicationSpecificEndpointInfo *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
