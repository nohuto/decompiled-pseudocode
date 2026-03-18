/*
 * XREFs of ?GetDesktopTree@CGlobalComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z @ 0x180149B80
 * Callers:
 *     ?Partition_DesktopCaptureBits@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x180149A30 (-Partition_DesktopCaptureBits@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalComposition::GetDesktopTree(
        struct _RTL_CRITICAL_SECTION *this,
        struct _LUID a2,
        struct CDesktopTree **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // r12
  DWORD LowPart; // esi
  unsigned int v7; // ebp
  _QWORD *p_Type; // rbx
  _QWORD *v9; // rdi
  __int64 v10; // r14
  bool v11; // of
  int v12; // et0
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  LONG HighPart; // [rsp+6Ch] [rbp+14h]

  HighPart = a2.HighPart;
  v3 = this + 9;
  *a3 = 0LL;
  LowPart = a2.LowPart;
  v7 = -2147023728;
  EnterCriticalSection(this + 9);
  p_Type = &this[10].DebugInfo->Type;
  v9 = *(_QWORD **)&this[10].LockCount;
  while ( p_Type != v9 )
  {
    v10 = *p_Type;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*p_Type + 192LL))(*p_Type) )
      break;
    if ( *(_DWORD *)(v10 + 2632) == LowPart )
    {
      v11 = __OFSUB__(*(_DWORD *)(v10 + 2636), HighPart);
      if ( *(_DWORD *)(v10 + 2636) == HighPart )
      {
        v12 = _InterlockedAdd((volatile signed __int32 *)(v10 + 8), 1u);
        if ( (v12 < 0) ^ v11 | (v12 == 0) )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x18,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v16);
        *a3 = (struct CDesktopTree *)v10;
        v7 = 0;
        break;
      }
    }
    ++p_Type;
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  if ( (v7 & 0x80000000) == 0 )
    return v7;
  if ( __PAIR64__(HighPart, LowPart) != c_defaultDesktopLuid )
    return v7;
  v14 = *(_QWORD *)this[15].OwningThread;
  if ( !v14 )
    return v7;
  v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 56LL))(v14);
  if ( !v15 )
    return v7;
  *a3 = (struct CDesktopTree *)v15;
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v15 + 8));
  return 0LL;
}
