/*
 * XREFs of ?ProcessSetSources@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETSOURCES@@PEBXI@Z @ 0x18013EE10
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWeakReference@CResource@@UEAAJPEAPEAVIUnknownWeakRef@@@Z @ 0x18013EF70 (-GetWeakReference@CResource@@UEAAJPEAPEAVIUnknownWeakRef@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CExpression::ProcessSetSources(
        CExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_EXPRESSION_SETSOURCES *a3,
        unsigned int *a4,
        unsigned int a5)
{
  unsigned int v5; // r10d
  unsigned __int64 v10; // r11
  LPVOID v11; // rax
  void *v12; // rcx
  unsigned int i; // esi
  unsigned int v14; // eax
  struct IUnknownWeakRef *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  CResource *v18; // rcx
  int WeakReference; // eax
  __int64 v21; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknownWeakRef *v23; // [rsp+50h] [rbp+18h] BYREF

  v5 = *((_DWORD *)a3 + 2);
  if ( !v5 || (v10 = *((unsigned int *)a3 + 3), !(_DWORD)v10) || v5 + *((_DWORD *)this + 80) > (unsigned int)v10 )
  {
    v21 = 61LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expression.cpp",
      (const char *)0x88980403LL);
    return 2291663875LL;
  }
  if ( a5 != 4LL * v5 )
  {
    v21 = 64LL;
    goto LABEL_18;
  }
  if ( !*((_QWORD *)this + 37) )
  {
    v11 = operator new[](saturated_mul(v10, 8uLL));
    v12 = (void *)*((_QWORD *)this + 37);
    *((_QWORD *)this + 37) = v11;
    if ( v12 )
      operator delete(v12);
  }
  for ( i = 0; i < *((_DWORD *)a3 + 2); ++*((_DWORD *)this + 80) )
  {
    v14 = *a4;
    v15 = 0LL;
    if ( *a4 )
    {
      if ( v14 < *((_DWORD *)a2 + 7) )
      {
        v16 = *((_DWORD *)a2 + 6) * v14;
        v17 = *((_QWORD *)a2 + 5);
        if ( *(_DWORD *)(v16 + v17) )
        {
          v18 = *(CResource **)(v16 + v17 + 8);
          if ( v18 )
          {
            v23 = 0LL;
            WeakReference = CResource::GetWeakReference(v18, &v23);
            if ( WeakReference < 0 )
              ModuleFailFastForHRESULT(WeakReference, retaddr);
            v15 = v23;
          }
        }
      }
    }
    ++a4;
    ++i;
    *(_QWORD *)(*((_QWORD *)this + 37) + 8LL * *((unsigned int *)this + 80)) = v15;
  }
  return 0LL;
}
