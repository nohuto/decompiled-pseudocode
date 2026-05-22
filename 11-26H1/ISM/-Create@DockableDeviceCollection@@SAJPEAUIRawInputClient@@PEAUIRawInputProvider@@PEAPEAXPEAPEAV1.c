/*
 * XREFs of ?Create@DockableDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800DDDD0
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x180076CF0 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180017510 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x180044D10 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180069BE8 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@VMobileButtonDeviceCollection@@U?$default_delete@VMobileButtonDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x180097074 (--1-$unique_ptr@VMobileButtonDeviceCollection@@U-$default_delete@VMobileButtonDeviceCollection@@.c)
 *     ?Initialize@DockableDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800DE0A8 (-Initialize@DockableDeviceCollection@@IEAAJPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DockableDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        void **a3,
        struct DockableDeviceCollection **a4)
{
  HIDDeviceCollection *v8; // rax
  HIDDeviceCollection *v9; // rdi
  unsigned __int64 size_of; // rax
  _QWORD *v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HIDDeviceCollection *v18; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 && a2 && a3 && a4 )
  {
    v18 = 0LL;
    v8 = (HIDDeviceCollection *)RefCountedObject::operator new(0xAE0uLL);
    v9 = v8;
    if ( v8 )
    {
      HIDDeviceCollection::HIDDeviceCollection(v8, a1);
      *(_QWORD *)v9 = &DockableDeviceCollection::`vftable';
      *((_QWORD *)v9 + 345) = 0LL;
      *((_QWORD *)v9 + 346) = 0LL;
      *((_QWORD *)v9 + 347) = 0LL;
      size_of = std::_Get_size_of_n<40>(1uLL);
      v11 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
      *v11 = v11;
      v11[1] = v11;
      v11[2] = v11;
      *((_WORD *)v11 + 12) = 257;
      *((_QWORD *)v9 + 346) = v11;
      *((_QWORD *)v9 + 3) = a2;
    }
    else
    {
      v9 = 0LL;
    }
    v18 = v9;
    if ( v9 )
    {
      v15 = DockableDeviceCollection::Initialize(v9, a3);
      v12 = v15;
      if ( v15 >= 0 )
      {
        v18 = 0LL;
        *a4 = v9;
        std::unique_ptr<MobileButtonDeviceCollection>::~unique_ptr<MobileButtonDeviceCollection>(&v18);
        return 0LL;
      }
      v13 = (unsigned int)v15;
      v14 = 38LL;
    }
    else
    {
      v12 = -2147024882;
      v13 = 2147942414LL;
      v14 = 36LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
      (const char *)v13);
    std::unique_ptr<MobileButtonDeviceCollection>::~unique_ptr<MobileButtonDeviceCollection>(&v18);
  }
  else
  {
    v12 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
      (const char *)0x80070057LL);
  }
  return v12;
}
