/*
 * XREFs of ?Create@CallControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180044F00
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x180076CF0 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180017510 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x180044D10 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     ??0?$unordered_map@KV?$array@G$0BE@@std@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180044E0C (--0-$unordered_map@KV-$array@G$0BE@@std@@U-$hash@K@2@U-$equal_to@K@2@V-$allocator@U-$pair@$$CBKV.c)
 *     ?Initialize@CallControlDeviceCollection@@IEAAJPEAPEAX@Z @ 0x180045014 (-Initialize@CallControlDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@VMobileButtonDeviceCollection@@U?$default_delete@VMobileButtonDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x180097074 (--1-$unique_ptr@VMobileButtonDeviceCollection@@U-$default_delete@VMobileButtonDeviceCollection@@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CallControlDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        void **a3,
        struct CallControlDeviceCollection **a4)
{
  HIDDeviceCollection *v8; // rax
  HIDDeviceCollection *v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  int v15; // [rsp+20h] [rbp-28h]
  int v16; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HIDDeviceCollection *v18; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 && a3 && a4 )
  {
    v18 = 0LL;
    v8 = (HIDDeviceCollection *)RefCountedObject::operator new(0xB08uLL);
    v9 = v8;
    v16 = (int)v8;
    if ( v8 )
    {
      HIDDeviceCollection::HIDDeviceCollection(v8, a1);
      *(_QWORD *)v9 = &CallControlDeviceCollection::`vftable';
      std::unordered_map<unsigned long,std::array<unsigned short,20>>::unordered_map<unsigned long,std::array<unsigned short,20>>((__int64)v9 + 2760);
      *((_QWORD *)v9 + 3) = a2;
    }
    else
    {
      v9 = 0LL;
    }
    v18 = v9;
    if ( !v9 )
    {
      v10 = -2147024882;
      v11 = 2147942414LL;
      v12 = 26LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\callcontroldevicecollection.cpp",
        (const char *)v11,
        v16);
      std::unique_ptr<MobileButtonDeviceCollection>::~unique_ptr<MobileButtonDeviceCollection>(&v18);
      return v10;
    }
    v13 = CallControlDeviceCollection::Initialize(v9, a3);
    v10 = v13;
    if ( v13 < 0 )
    {
      v11 = (unsigned int)v13;
      v12 = 28LL;
      goto LABEL_11;
    }
    *a4 = v9;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\callcontroldevicecollection.cpp",
      (const char *)0x80070057LL,
      v15);
    return 2147942487LL;
  }
}
