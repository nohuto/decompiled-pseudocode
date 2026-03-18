/*
 * XREFs of ?ProcessSetPersistentCache@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETPERSISTENTCACHE@@PEBXI@Z @ 0x180219F78
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z @ 0x180055550 (-ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18014CFD0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022C75C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopulateCacheFromInitialValue@CExpression@@AEAAJIPEBXI@Z @ 0x18026F570 (-PopulateCacheFromInitialValue@CExpression@@AEAAJIPEBXI@Z.c)
 */

__int64 __fastcall CExpression::ProcessSetPersistentCache(
        CExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_EXPRESSION_SETPERSISTENTCACHE *a3,
        char *a4,
        unsigned int a5)
{
  unsigned int *v8; // rbx
  __int64 v9; // rdi
  CSharedSectionBase *Resource; // rax
  const void *v11; // rax
  unsigned int v12; // r10d
  int v13; // eax
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (a5 & 0xF) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFF,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expression.cpp",
      (const char *)0x88980403LL);
    return 2291663875LL;
  }
  else
  {
    if ( *((_QWORD *)this + 36) && a5 >> 4 )
    {
      v8 = (unsigned int *)(a4 + 4);
      v9 = a5 >> 4;
      do
      {
        Resource = (CSharedSectionBase *)CResourceTable::GetResource((__int64)a2, *(v8 - 1), 0x84u);
        if ( Resource )
        {
          v11 = CSharedSectionBase::ResolveAllocation(Resource, *v8, v8[1]);
          if ( v11 )
          {
            v13 = CExpression::PopulateCacheFromInitialValue(this, v12, v11, v8[2]);
            if ( v13 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x116,
                (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expression.cpp",
                (const char *)(unsigned int)v13,
                v14);
          }
        }
        v8 += 4;
        --v9;
      }
      while ( v9 );
    }
    return 0LL;
  }
}
