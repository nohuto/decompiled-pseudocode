/*
 * XREFs of ?CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x1800E51E4
 * Callers:
 *     ?Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z @ 0x1800E3C48 (-Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180017510 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@VDWMCursorBroker@@@WRL@Microsoft@@QEAAAEAV012@PEAVDWMCursorBroker@@@Z @ 0x1800921D4 (--4-$ComPtr@VDWMCursorBroker@@@WRL@Microsoft@@QEAAAEAV012@PEAVDWMCursorBroker@@@Z.c)
 *     ??0ConsumerControlManager@@AEAA@XZ @ 0x1800E4F50 (--0ConsumerControlManager@@AEAA@XZ.c)
 *     ?Initialize@ConsumerControlManager@@AEAAJXZ @ 0x1800E52B8 (-Initialize@ConsumerControlManager@@AEAAJXZ.c)
 *     ?Release@ConsumerControlManager@@UEAAKXZ @ 0x1800E5790 (-Release@ConsumerControlManager@@UEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ConsumerControlManager::CreateAndInitialize(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        struct ConsumerControlManager **a3)
{
  ConsumerControlManager *v6; // rax
  __int64 *v7; // rbx
  int v9; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = (ConsumerControlManager *)RefCountedObject::operator new(0x88uLL);
  if ( v6 )
    v7 = (__int64 *)ConsumerControlManager::ConsumerControlManager(v6);
  else
    v7 = 0LL;
  if ( v7 )
  {
    Microsoft::WRL::ComPtr<DWMCursorBroker>::operator=(v7 + 14, (__int64)a1);
    Microsoft::WRL::ComPtr<DWMCursorBroker>::operator=(v7 + 16, (__int64)a2);
    v9 = ConsumerControlManager::Initialize((ULONG_PTR)v7);
    v10 = v9;
    if ( v9 >= 0 )
    {
      *a3 = (struct ConsumerControlManager *)v7;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolmanager.cpp",
        (const char *)(unsigned int)v9);
      ConsumerControlManager::Release((ULONG_PTR)v7);
      return v10;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolmanager.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
