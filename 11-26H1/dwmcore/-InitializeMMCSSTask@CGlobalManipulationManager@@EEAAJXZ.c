/*
 * XREFs of ?InitializeMMCSSTask@CGlobalManipulationManager@@EEAAJXZ @ 0x1801D6520
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x18013122C (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

__int64 __fastcall CGlobalManipulationManager::InitializeMMCSSTask(CGlobalManipulationManager *this)
{
  __int64 v2; // r8
  _WORD *v3; // rdx
  __int16 v4; // ax
  _WORD *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  _BYTE v9[132]; // [rsp+20h] [rbp-A8h] BYREF
  int v10; // [rsp+A4h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  memset_0(v9, 0, 0x90uLL);
  v2 = 64LL;
  v3 = v9;
  do
  {
    if ( v2 == -2147483582 )
      break;
    v4 = *(_WORD *)((char *)v3 + (char *)L"Capture" - v9);
    if ( !v4 )
      break;
    *v3++ = v4;
    --v2;
  }
  while ( v2 );
  v5 = v3 - 1;
  if ( v2 )
    v5 = v3;
  *v5 = 0;
  v10 = 1;
  v6 = CMmcssTask::Set((struct _RTL_CRITICAL_SECTION *)((char *)this + 312), (const struct DWM_MMTASK *)v9, 0);
  v7 = v6;
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\globalmanipulationmanager.cpp",
      (const char *)(unsigned int)v6);
  return v7;
}
