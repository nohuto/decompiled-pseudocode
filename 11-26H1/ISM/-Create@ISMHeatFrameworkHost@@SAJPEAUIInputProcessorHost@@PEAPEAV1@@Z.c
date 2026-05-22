/*
 * XREFs of ?Create@ISMHeatFrameworkHost@@SAJPEAUIInputProcessorHost@@PEAPEAV1@@Z @ 0x180197930
 * Callers:
 *     ?Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1801BDD48 (-Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180017510 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ISMHeatFrameworkHost@@IEAA@PEAUIInputProcessorHost@@@Z @ 0x180197020 (--0ISMHeatFrameworkHost@@IEAA@PEAUIInputProcessorHost@@@Z.c)
 *     ?Initialize@ISMHeatFrameworkHost@@IEAAJXZ @ 0x180197AB0 (-Initialize@ISMHeatFrameworkHost@@IEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ISMHeatFrameworkHost::Create(struct IInputProcessorHost *a1, struct ISMHeatFrameworkHost **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  ISMHeatFrameworkHost *v7; // rax
  ISMHeatFrameworkHost *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v4 = -2147024809;
    v5 = 80LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
      (const char *)v4);
    return v4;
  }
  v7 = (ISMHeatFrameworkHost *)RefCountedObject::operator new(0x128uLL);
  if ( v7 )
    v8 = ISMHeatFrameworkHost::ISMHeatFrameworkHost(v7, a1);
  else
    v8 = 0LL;
  if ( !v8 )
  {
    v4 = -2147024882;
    v5 = 86LL;
    goto LABEL_3;
  }
  v9 = ISMHeatFrameworkHost::Initialize(v8);
  v10 = v9;
  if ( v9 >= 0 )
  {
    *a2 = v8;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
      (const char *)(unsigned int)v9);
    return v10;
  }
}
