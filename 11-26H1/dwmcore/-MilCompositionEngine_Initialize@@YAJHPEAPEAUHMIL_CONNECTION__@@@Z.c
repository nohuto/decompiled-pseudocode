/*
 * XREFs of ?MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z @ 0x180228F90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?StartCompositionThread@CConnection@@IEAAJH@Z @ 0x180131F18 (-StartCompositionThread@CConnection@@IEAAJH@Z.c)
 *     ?Create@CKernelTransport@@SAJHPEAPEAVCTransport@@@Z @ 0x1801DFA7C (-Create@CKernelTransport@@SAJHPEAPEAVCTransport@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ??1?$unique_ptr@VCInternalMilCmdConnection@@U?$default_delete@VCInternalMilCmdConnection@@@std@@@std@@QEAA@XZ @ 0x18021F338 (--1-$unique_ptr@VCInternalMilCmdConnection@@U-$default_delete@VCInternalMilCmdConnection@@@std@@.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ?reset@?$unique_ptr@VCInternalMilCmdConnection@@U?$default_delete@VCInternalMilCmdConnection@@@std@@@std@@QEAAXPEAVCInternalMilCmdConnection@@@Z @ 0x180229178 (-reset@-$unique_ptr@VCInternalMilCmdConnection@@U-$default_delete@VCInternalMilCmdConnection@@@s.c)
 */

__int64 __fastcall MilCompositionEngine_Initialize(unsigned int a1, struct HMIL_CONNECTION__ **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  char *v7; // rax
  char *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rdx
  unsigned __int64 v12; // r9
  int started; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CInternalMilCmdConnection *v17; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v4 = -2147024809;
    v5 = 52LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\exportsg.cpp",
      (const char *)v4);
    return v4;
  }
  if ( g_pConnection )
  {
    v4 = -2147483634;
    v5 = 53LL;
    goto LABEL_3;
  }
  v7 = (char *)DefaultHeap::AllocClear(0x90uLL);
  v8 = v7;
  if ( !v7 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  memset_0(v7, 0, 0x90uLL);
  *(_QWORD *)v8 = &CInternalMilCmdConnection::`vftable';
  *((_DWORD *)v8 + 16) = 1;
  *((_QWORD *)v8 + 6) = &CChannelTable::`vftable';
  *((_DWORD *)v8 + 14) = 24;
  InitializeCriticalSection((LPCRITICAL_SECTION)(v8 + 88));
  *((_DWORD *)v8 + 20) = 0;
  *((_QWORD *)v8 + 16) = 0LL;
  *((_DWORD *)v8 + 34) = 0;
  v17 = (CInternalMilCmdConnection *)v8;
  v9 = CKernelTransport::Create(a1, (struct CTransport **)v8 + 1);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 65LL;
    v12 = (unsigned int)v9;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\connection.cpp",
      (const char *)v12);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\exportsg.cpp",
      (const char *)v10);
    std::unique_ptr<CInternalMilCmdConnection>::~unique_ptr<CInternalMilCmdConnection>(&v17);
    return v10;
  }
  started = CConnection::StartCompositionThread((CConnection *)v8, a1);
  v10 = started;
  v12 = (unsigned int)started;
  if ( started < 0 )
  {
    v11 = 66LL;
    goto LABEL_12;
  }
  v17 = 0LL;
  std::unique_ptr<CInternalMilCmdConnection>::reset(v14, v8, v15, (unsigned int)started);
  *a2 = g_pConnection;
  std::unique_ptr<CInternalMilCmdConnection>::~unique_ptr<CInternalMilCmdConnection>(&v17);
  return 0LL;
}
