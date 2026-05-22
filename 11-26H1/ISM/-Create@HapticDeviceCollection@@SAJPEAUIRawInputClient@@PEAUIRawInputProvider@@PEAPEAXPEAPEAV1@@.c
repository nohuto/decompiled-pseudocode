/*
 * XREFs of ?Create@HapticDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800DF3B4
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x180076CF0 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180017510 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x180044D10 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@VMobileButtonDeviceCollection@@U?$default_delete@VMobileButtonDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x180097074 (--1-$unique_ptr@VMobileButtonDeviceCollection@@U-$default_delete@VMobileButtonDeviceCollection@@.c)
 *     ?Initialize@HapticDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800DF4E0 (-Initialize@HapticDeviceCollection@@IEAAJPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HapticDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        void **a3,
        struct HapticDeviceCollection **a4)
{
  HIDDeviceCollection *v8; // rax
  HIDDeviceCollection *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // r9
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HIDDeviceCollection *v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = 0LL;
  if ( a1 && a3 && a4 )
  {
    v8 = (HIDDeviceCollection *)RefCountedObject::operator new(0xAC8uLL);
    v9 = v8;
    v16 = v8;
    if ( v8 )
    {
      HIDDeviceCollection::HIDDeviceCollection(v8, a1);
      *(_QWORD *)v9 = &HapticDeviceCollection::`vftable';
      *((_QWORD *)v9 + 3) = a2;
      v16 = v9;
      v10 = HapticDeviceCollection::Initialize(v9, a3);
      v11 = v10;
      if ( v10 >= 0 )
      {
        v16 = 0LL;
        *a4 = v9;
        std::unique_ptr<MobileButtonDeviceCollection>::~unique_ptr<MobileButtonDeviceCollection>(&v16);
        return 0LL;
      }
      v12 = (unsigned int)v10;
      v13 = 36LL;
    }
    else
    {
      v16 = 0LL;
      v11 = -2147024882;
      v12 = 2147942414LL;
      v13 = 34LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hapticdevicecollection.cpp",
      (const char *)v12);
    std::unique_ptr<MobileButtonDeviceCollection>::~unique_ptr<MobileButtonDeviceCollection>(&v16);
    return v11;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hapticdevicecollection.cpp",
      (const char *)0x80070057LL);
    std::unique_ptr<MobileButtonDeviceCollection>::~unique_ptr<MobileButtonDeviceCollection>(&v16);
    return 2147942487LL;
  }
}
