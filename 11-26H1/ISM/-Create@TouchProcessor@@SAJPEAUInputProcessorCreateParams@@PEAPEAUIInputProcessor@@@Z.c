/*
 * XREFs of ?Create@TouchProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801C9D60
 * Callers:
 *     <none>
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180017510 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@TouchProcessor@@IEAAJXZ @ 0x1801C9E78 (-Initialize@TouchProcessor@@IEAAJXZ.c)
 */

__int64 __fastcall TouchProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  struct IInputProcessor *v4; // rax
  struct IInputProcessor *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct IInputProcessor *)RefCountedObject::operator new(0x50uLL);
  v5 = v4;
  if ( v4 )
  {
    v6 = *((_QWORD *)a1 + 1);
    v7 = *(_QWORD *)a1;
    *((_QWORD *)v4 + 2) = &RefCountedObject::`vftable';
    *((_DWORD *)v4 + 6) = 1;
    *((_QWORD *)v4 + 6) = 0LL;
    *((_QWORD *)v4 + 7) = 0LL;
    *(_QWORD *)v4 = &TouchProcessor::`vftable'{for `IInputProcessor'};
    *((_QWORD *)v4 + 1) = &TouchProcessor::`vftable'{for `IInputFocusListener'};
    *((_QWORD *)v4 + 2) = &TouchProcessor::`vftable'{for `RefCountedObject'};
    *((_BYTE *)v4 + 64) = 0;
    *((_QWORD *)v4 + 5) = v7;
    *((_QWORD *)v4 + 4) = v6;
    *((_QWORD *)v4 + 9) = 0LL;
    v8 = TouchProcessor::Initialize(v4);
    v9 = v8;
    if ( v8 >= 0 )
    {
      *a2 = v5;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x35,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\touch\\lib\\touchprocessor.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\touch\\lib\\touchprocessor.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
