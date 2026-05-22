/*
 * XREFs of ?FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x180021A4C
 * Callers:
 *     ?FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x1800201EC (-FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEnt.c)
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18005DB24 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?Release@InputContext@@UEAAKXZ @ 0x180021CF0 (-Release@InputContext@@UEAAKXZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x1800221D0 (-IsEdition@@YA_N_K@Z.c)
 *     _anonymous_namespace_::WindowsSafeIsEqualString @ 0x180022394 (_anonymous_namespace_--WindowsSafeIsEqualString.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcmp_0 @ 0x18009CC56 (memcmp_0.c)
 *     ??1?$unique_ptr@UDeviceListEntry@PnpDeviceWatcher@@U?$default_delete@UDeviceListEntry@PnpDeviceWatcher@@@std@@@std@@QEAA@XZ @ 0x1800E4868 (--1-$unique_ptr@UDeviceListEntry@PnpDeviceWatcher@@U-$default_delete@UDeviceListEntry@PnpDeviceW.c)
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAVPnpDeviceWatcher@@PEAPEAV1@@Z @ 0x1800E5D0C (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAVPnpDeviceWatcher@@PEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PnpDeviceWatcher::FindDeviceListEntryByInstanceId(
        PnpDeviceWatcher *this,
        HSTRING a2,
        char a3,
        struct PnpDeviceWatcher::DeviceListEntry **a4)
{
  char *v8; // rdi
  char *i; // rbx
  int v10; // ebx
  InputContext *v11; // rbx
  bool v12; // r14
  bool v13; // r15
  bool v14; // si
  void *v16; // rax
  InputContext *v17; // rsi
  char **v18; // rcx
  __int128 Buf1; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  InputContext *v21; // [rsp+60h] [rbp+30h] BYREF

  v8 = (char *)this + 64;
  for ( i = (char *)*((_QWORD *)this + 8); i != v8; i = *(char **)i )
  {
    if ( (unsigned __int8)anonymous_namespace_::WindowsSafeIsEqualString(*(_QWORD *)(*((_QWORD *)i + 2) + 24LL), a2) )
    {
      *a4 = (struct PnpDeviceWatcher::DeviceListEntry *)i;
      return 0LL;
    }
  }
  *a4 = 0LL;
  if ( !a3 )
    return 1LL;
  v21 = 0LL;
  v10 = PnpDevice::MakeAndInitialize(a2, this, &v21);
  if ( v10 < 0 )
  {
    if ( v21 )
      InputContext::Release(v21);
    return (unsigned int)v10;
  }
  v11 = v21;
  Buf1 = *(_OWORD *)((char *)v21 + 56);
  v12 = 1;
  if ( memcmp_0(&Buf1, &unk_1801FE3F0, 0x10uLL) )
  {
    Buf1 = *(_OWORD *)((char *)v11 + 56);
    if ( memcmp_0(&Buf1, &unk_1801FE400, 0x10uLL) )
      v12 = 0;
  }
  v13 = *((_WORD *)v11 + 60) == 89 && *((_WORD *)v11 + 61) == 1;
  v14 = 0;
  if ( IsEdition(0x1820uLL) && *((_WORD *)v11 + 60) == 12 )
    v14 = *((_WORD *)v11 + 61) == 1;
  if ( !v12 || !v13 && !v14 )
  {
    InputContext::Release(v11);
    return 1LL;
  }
  v16 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v16 )
  {
    *(_OWORD *)v16 = 0LL;
    *((_OWORD *)v16 + 1) = 0LL;
    v17 = (InputContext *)*((_QWORD *)v16 + 2);
    *((_QWORD *)v16 + 2) = v11;
    *((_BYTE *)v16 + 24) = 0;
    v18 = (char **)*((_QWORD *)v8 + 1);
    if ( *v18 != v8 )
      __fastfail(3u);
    *(_QWORD *)v16 = v8;
    *((_QWORD *)v16 + 1) = v18;
    *v18 = (char *)v16;
    *((_QWORD *)v8 + 1) = v16;
    ++*((_DWORD *)v8 + 4);
    v21 = 0LL;
    *a4 = (struct PnpDeviceWatcher::DeviceListEntry *)v16;
    std::unique_ptr<PnpDeviceWatcher::DeviceListEntry>::~unique_ptr<PnpDeviceWatcher::DeviceListEntry>(&v21);
    if ( v17 )
      InputContext::Release(v17);
    return 0LL;
  }
  else
  {
    v21 = 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F2,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
      (const char *)0x8007000ELL,
      Buf1);
    std::unique_ptr<PnpDeviceWatcher::DeviceListEntry>::~unique_ptr<PnpDeviceWatcher::DeviceListEntry>(&v21);
    InputContext::Release(v11);
    return 2147942414LL;
  }
}
