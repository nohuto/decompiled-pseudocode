/*
 * XREFs of KRegKey::QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___ @ 0x140138C9C
 * Callers:
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x14015F700 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x14016C590 (-ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140056810 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ??$reset@PEAE@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAXPEAE@Z @ 0x14008F610 (--$reset@PEAE@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAXPEAE@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ??_V@YAXPEAX@Z @ 0x140138C60 (--_V@YAXPEAX@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z @ 0x140167120 (-Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z.c)
 */

NTSTATUS __fastcall KRegKey::QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        void **a3)
{
  HANDLE v6; // rcx
  PVOID v7; // rbx
  _BYTE *v8; // rsi
  NTSTATUS result; // eax
  void *Pool2; // rax
  NTSTATUS v11; // esi
  void *v12; // rcx
  int v13; // ecx
  struct Rtl::KString *v14; // rax
  int v15; // edi
  ULONG ResultLength; // [rsp+30h] [rbp-138h] BYREF
  PVOID v17; // [rsp+38h] [rbp-130h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-128h] BYREF

  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v6 = *a1;
  v7 = 0LL;
  v17 = 0LL;
  ResultLength = 0;
  v8 = KeyValueInformation;
  result = ZwQueryValueKey(v6, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, &ResultLength);
  if ( result == -2147483643 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, ResultLength, 1852392018LL);
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset<unsigned char *>(&v17, Pool2);
    v7 = v17;
    if ( !v17 )
      return -1073741670;
    v11 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, v17, ResultLength, &ResultLength);
    v12 = v7;
    if ( v11 < 0 )
    {
      operator delete[](v7);
      return v11;
    }
    v8 = v7;
  }
  else
  {
    v12 = 0LL;
    if ( result < 0 )
      return result;
  }
  if ( *((_DWORD *)v8 + 1) == -65518 )
  {
    v13 = *((_DWORD *)v8 + 2);
    if ( !v13 || (v13 & 1) != 0 || v8[v13 - 1 + 12] || v8[v13 - 2 + 12] )
    {
      v15 = -1073741762;
    }
    else
    {
      v14 = Rtl::KString::Initialize((const wchar_t *)v8 + 6);
      if ( v14 )
      {
        wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(a3, v14);
        v15 = 0;
      }
      else
      {
        v15 = -1073741670;
      }
    }
    if ( v7 )
      operator delete[](v7);
    return v15;
  }
  else
  {
    if ( v12 )
      operator delete[](v12);
    return -1073741788;
  }
}
