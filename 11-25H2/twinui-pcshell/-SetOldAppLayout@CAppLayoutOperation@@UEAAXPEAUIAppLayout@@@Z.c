/*
 * XREFs of ?SetOldAppLayout@CAppLayoutOperation@@UEAAXPEAUIAppLayout@@@Z @ 0x18069B9D0
 * Callers:
 *     ?SetOldAppLayout@BackOperation@@UEAAXPEAUIAppLayout@@@Z @ 0x1804F2360 (-SetOldAppLayout@BackOperation@@UEAAXPEAUIAppLayout@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall CAppLayoutOperation::SetOldAppLayout(CAppLayoutOperation *this, struct IAppLayout *a2)
{
  char *v2; // rbx
  void (__fastcall *v4)(struct IAppLayout *, GUID *, char *); // rdi

  v2 = (char *)this + 16;
  v4 = *(void (__fastcall **)(struct IAppLayout *, GUID *, char *))(*(_QWORD *)a2 + 192LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 2);
  v4(a2, &GUID_7baad876_2fc5_4561_93e1_17e868a174ed, v2);
}
