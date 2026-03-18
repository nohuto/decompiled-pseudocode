/*
 * XREFs of ?GetDesktopTree@CComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z @ 0x180186720
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::GetDesktopTree(
        struct _RTL_CRITICAL_SECTION *this,
        struct _LUID a2,
        struct CDesktopTree **a3)
{
  int v3; // r14d
  struct _RTL_CRITICAL_SECTION *v4; // r15
  unsigned int v5; // r12d
  DWORD LowPart; // edi
  _QWORD *p_Type; // rbx
  _QWORD *v10; // rsi
  __int64 v11; // r14
  bool v12; // of
  int v13; // et0
  int v15; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LONG HighPart; // [rsp+5Ch] [rbp+14h]

  HighPart = a2.HighPart;
  v4 = this + 9;
  v5 = -2147023728;
  LowPart = a2.LowPart;
  *a3 = 0LL;
  EnterCriticalSection(this + 9);
  p_Type = &this[10].DebugInfo->Type;
  v10 = *(_QWORD **)&this[10].LockCount;
  v15 = v3;
  while ( p_Type != v10 )
  {
    v11 = *p_Type;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*p_Type + 192LL))(*p_Type) )
      break;
    if ( *(_DWORD *)(v11 + 2632) == LowPart )
    {
      v12 = __OFSUB__(*(_DWORD *)(v11 + 2636), HighPart);
      if ( *(_DWORD *)(v11 + 2636) == HighPart )
      {
        v13 = _InterlockedAdd((volatile signed __int32 *)(v11 + 8), 1u);
        if ( (v13 < 0) ^ v12 | (v13 == 0) )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x18,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v15);
        *a3 = (struct CDesktopTree *)v11;
        v5 = 0;
        break;
      }
    }
    ++p_Type;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v5;
}
