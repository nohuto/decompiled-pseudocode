/*
 * XREFs of ?GetChannelVolume@CVADServer@@UEAAJIPEAM@Z @ 0x180111D50
 * Callers:
 *     AudioServerGetChannelVolume @ 0x1801154B0 (AudioServerGetChannelVolume.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_qD @ 0x1800CFEB4 (WPP_SF_qD.c)
 */

__int64 __fastcall CVADServer::GetChannelVolume(struct _RTL_CRITICAL_SECTION *this, unsigned int a2, float *a3)
{
  __int64 v4; // rsi
  _DWORD *OwningThread; // rax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x11u,
      (__int64)&WPP_55a927f0784e38de47faa537a644ca17_Traceguids,
      this,
      a2);
  }
  EnterCriticalSection(this + 5);
  OwningThread = this[4].OwningThread;
  v11 = this + 5;
  v7 = 0;
  if ( !OwningThread || !LODWORD(this[4].DebugInfo) )
  {
    v7 = -2004287487;
    v8 = 2186LL;
    goto LABEL_11;
  }
  if ( (unsigned int)v4 >= OwningThread[20] )
  {
    v7 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F9,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80070057LL);
    v8 = 2188LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v7);
    goto LABEL_12;
  }
  *a3 = *(float *)(*((_QWORD *)OwningThread + 13) + 4 * v4);
LABEL_12:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v11);
  return v7;
}
