/*
 * XREFs of ?AllocateStubUnderLock@BamoDataProviderRegistrarPrincipal@@MEAAJPEAVBamoPeer@dataprovider_AutoBamos@@PEAPEAVBamoDataProviderRegistrarStub@@@Z @ 0x1801DA730
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall BamoDataProviderRegistrarPrincipal::AllocateStubUnderLock(
        BamoDataProviderRegistrarPrincipal *this,
        struct dataprovider_AutoBamos::BamoPeer *a2,
        struct BamoDataProviderRegistrarStub **a3)
{
  struct BamoDataProviderRegistrarStub *v4; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct BamoDataProviderRegistrarStub *)operator new(0x50uLL);
  if ( v4 )
  {
    *((_QWORD *)v4 + 3) = 1LL;
    *((_QWORD *)v4 + 4) = 0LL;
    *((_QWORD *)v4 + 9) = 256LL;
    *(_QWORD *)v4 = &BamoDataProviderRegistrarStub::`vftable'{for `Microsoft::Bamo::BamoStub'};
    *((_QWORD *)v4 + 1) = &BamoDataProviderRegistrarStub::`vftable'{for `IDataProviderRegistrarStub'};
    *((_QWORD *)v4 + 5) = 0LL;
    *((_QWORD *)v4 + 6) = 0LL;
    *((_QWORD *)v4 + 7) = 0LL;
    *((_QWORD *)v4 + 8) = 0LL;
    *((_QWORD *)v4 + 2) = &BamoImpl::BamoDataProviderRegistrarStubImpl::`vftable';
    *a3 = v4;
    return 0LL;
  }
  else
  {
    *a3 = 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FDA,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
