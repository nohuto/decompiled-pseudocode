/*
 * XREFs of KRegKey::QueryValueBlob__lambda_cf61730e764cafb5fbe53142b0d3259b___ @ 0x140160B80
 * Callers:
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x140160770 (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 * Callees:
 *     ??$reset@PEAE@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAXPEAE@Z @ 0x14008F610 (--$reset@PEAE@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAXPEAE@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ??_V@YAXPEAX@Z @ 0x140138C60 (--_V@YAXPEAX@Z.c)
 *     _lambda_cf61730e764cafb5fbe53142b0d3259b_::operator() @ 0x140161170 (_lambda_cf61730e764cafb5fbe53142b0d3259b_--operator().c)
 */

NTSTATUS __fastcall KRegKey::QueryValueBlob__lambda_cf61730e764cafb5fbe53142b0d3259b___(
        HANDLE *a1,
        __int64 a2,
        __int64 a3)
{
  HANDLE v4; // rcx
  void *v5; // rbx
  _DWORD *v6; // rdi
  NTSTATUS result; // eax
  void *Pool2; // rax
  NTSTATUS v9; // ebx
  int v10; // edi
  ULONG ResultLength; // [rsp+30h] [rbp-128h] BYREF
  PVOID v12; // [rsp+38h] [rbp-120h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-118h] BYREF
  __int64 v14; // [rsp+170h] [rbp+18h] BYREF

  v14 = a3;
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v4 = *a1;
  v5 = 0LL;
  v12 = 0LL;
  ResultLength = 0;
  v6 = KeyValueInformation;
  result = ZwQueryValueKey(
             v4,
             (PUNICODE_STRING)&Ndis::FilterListValueName,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x100u,
             &ResultLength);
  if ( result == -2147483643 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, ResultLength, 1852392018LL);
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset<unsigned char *>(&v12, Pool2);
    v6 = v12;
    if ( !v12 )
      return -1073741670;
    v9 = ZwQueryValueKey(
           *a1,
           (PUNICODE_STRING)&Ndis::FilterListValueName,
           KeyValuePartialInformation,
           v12,
           ResultLength,
           &ResultLength);
    if ( v9 < 0 )
    {
      operator delete[](v6);
      return v9;
    }
    v5 = v6;
  }
  else if ( result < 0 )
  {
    return result;
  }
  if ( v6[1] == 3 )
  {
    v10 = lambda_cf61730e764cafb5fbe53142b0d3259b_::operator()(&v14, v6 + 3, (unsigned int)v6[2]);
    if ( v5 )
      operator delete[](v5);
    return v10;
  }
  else
  {
    if ( v5 )
      operator delete[](v5);
    return -1073741788;
  }
}
