/*
 * XREFs of ??0PenInterface@@QEAA@PEAX0@Z @ 0x180193C70
 * Callers:
 *     ?AttachRIMDevice@HapticDeviceManager@@QEAAXPEAX0@Z @ 0x18018E1EC (-AttachRIMDevice@HapticDeviceManager@@QEAAXPEAX0@Z.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ??$?0U?$default_delete@VCSharedCircularQueueProducer@@@std@@$0A@@?$unique_ptr@VCSharedCircularQueueProducer@@U?$default_delete@VCSharedCircularQueueProducer@@@std@@@std@@QEAA@$$T@Z @ 0x18005B630 (--$-0U-$default_delete@VCSharedCircularQueueProducer@@@std@@$0A@@-$unique_ptr@VCSharedCircularQu.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180082C60 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B33AC (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C1864 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800C7E80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??$make_unique@$$BY0A@G$0A@@std@@YA?AV?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@std@@@0@_K@Z @ 0x1800E0F28 (--$make_unique@$$BY0A@G$0A@@std@@YA-AV-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@std@@@0@_K.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG_K@Z @ 0x18010E678 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG_K@Z.c)
 *     ?_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801333A0 (-_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$set@U_GUID@@UGUIDComparer@PenInterface@@V?$allocator@U_GUID@@@std@@@std@@QEAA@XZ @ 0x180193C28 (--0-$set@U_GUID@@UGUIDComparer@PenInterface@@V-$allocator@U_GUID@@@std@@@std@@QEAA@XZ.c)
 *     ?Initialize@PenInterface@@QEAAJXZ @ 0x1801940EC (-Initialize@PenInterface@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=8
PenInterface *__fastcall PenInterface::PenInterface(PenInterface *this, void *a2, void *a3)
{
  int v6; // eax
  const void *v7; // rbx
  int v8; // eax
  _QWORD *v9; // rax
  int v10; // eax
  const struct std::nothrow_t *v11; // rdx
  void *v13; // [rsp+20h] [rbp-60h] BYREF
  __int128 v14; // [rsp+28h] [rbp-58h] BYREF
  __int128 v15; // [rsp+38h] [rbp-48h]
  __int64 v16; // [rsp+48h] [rbp-38h]
  PenInterface *v17; // [rsp+50h] [rbp-30h]
  _QWORD v18[4]; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v17 = this;
  *(_QWORD *)this = &RefCountedObject::`vftable';
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &PenInterface::`vftable';
  std::wstring::wstring((__int64)this + 16);
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = -1LL;
  *((_QWORD *)this + 8) = 0LL;
  std::unique_ptr<CSharedCircularQueueProducer>::unique_ptr<CSharedCircularQueueProducer>((_QWORD *)this + 17);
  *((_WORD *)this + 72) = 1;
  *((_BYTE *)this + 146) = 0;
  std::set<_GUID,PenInterface::GUIDComparer,std::allocator<_GUID>>::set<_GUID,PenInterface::GUIDComparer,std::allocator<_GUID>>((_QWORD *)this + 19);
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  LODWORD(v14) = 4;
  v6 = RIMGetDeviceProperties(a2, a3, &v14);
  if ( v6 < 0 )
    wil::details::in1diag3::_Throw_NtStatus(
      retaddr,
      (void *)0xE,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\api\\server\\peninterface.cpp",
      (const char *)(unsigned int)v6,
      (int)v13);
  std::make_unique<unsigned short [0],0>(&v13, DWORD2(v14));
  v7 = v13;
  *(_QWORD *)&v15 = v13;
  v8 = RIMGetDeviceProperties(a2, a3, &v14);
  if ( v8 < 0 )
    wil::details::in1diag3::_Throw_NtStatus(
      retaddr,
      (void *)0x12,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\api\\server\\peninterface.cpp",
      (const char *)(unsigned int)v8,
      (int)v13);
  v9 = (_QWORD *)std::wstring::wstring((__int64)v18, v7, DWORD2(v14));
  std::wstring::operator=((_QWORD *)this + 2, v9);
  std::wstring::_Tidy_deallocate(v18);
  v10 = PenInterface::Initialize(this);
  if ( v10 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      22LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\api\\server\\peninterface.cpp",
      (const char *)(unsigned int)v10,
      (int)v13);
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v13, v11);
  return this;
}
