/*
 * XREFs of ?Create@SystemControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180043250
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x180076CF0 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180017510 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Initialize@SystemControlDeviceCollection@@IEAAJPEAPEAX@Z @ 0x180043378 (-Initialize@SystemControlDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x180044D10 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     ??0?$unordered_map@KV?$array@G$0BE@@std@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180044E0C (--0-$unordered_map@KV-$array@G$0BE@@std@@U-$hash@K@2@U-$equal_to@K@2@V-$allocator@U-$pair@$$CBKV.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@VMobileButtonDeviceCollection@@U?$default_delete@VMobileButtonDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x180097074 (--1-$unique_ptr@VMobileButtonDeviceCollection@@U-$default_delete@VMobileButtonDeviceCollection@@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SystemControlDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        void **a3,
        struct SystemControlDeviceCollection **a4)
{
  HIDDeviceCollection *v8; // rax
  HIDDeviceCollection *v9; // rbx
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v12; // edi
  int v14; // [rsp+20h] [rbp-28h]
  int v15; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HIDDeviceCollection *v17; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 || !a3 || !a4 )
  {
    v10 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
      (const char *)0x80070057LL,
      v14);
    return v10;
  }
  v17 = 0LL;
  v8 = (HIDDeviceCollection *)RefCountedObject::operator new(0xB08uLL);
  v9 = v8;
  v15 = (int)v8;
  if ( v8 )
  {
    HIDDeviceCollection::HIDDeviceCollection(v8, a1);
    *(_QWORD *)v9 = &SystemControlDeviceCollection::`vftable';
    std::unordered_map<unsigned long,std::array<unsigned short,20>>::unordered_map<unsigned long,std::array<unsigned short,20>>((char *)v9 + 2760);
    *((_QWORD *)v9 + 3) = a2;
  }
  else
  {
    v9 = 0LL;
  }
  v17 = v9;
  if ( !v9 )
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
      (const char *)0x8007000ELL,
      v15);
    return v10;
  }
  v11 = SystemControlDeviceCollection::Initialize(v9, a3);
  v12 = v11;
  if ( v11 >= 0 )
  {
    *a4 = v9;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
      (const char *)(unsigned int)v11,
      v15);
    std::unique_ptr<MobileButtonDeviceCollection>::~unique_ptr<MobileButtonDeviceCollection>(&v17);
    return v12;
  }
}
