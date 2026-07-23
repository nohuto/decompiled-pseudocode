/*
 * XREFs of PiDeferSetInterfaceState @ 0x140B20204
 * Callers:
 *     IopProcessSetInterfaceState @ 0x1409A91A0 (IopProcessSetInterfaceState.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     IopAllocateUnicodeString @ 0x1409AFF18 (IopAllocateUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDeferSetInterfaceState(__int64 a1, const UNICODE_STRING *a2)
{
  __int64 Pool2; // rax
  UNICODE_STRING *v5; // rbx
  int UnicodeString; // edi
  UNICODE_STRING **v7; // rcx

  Pool2 = ExAllocatePool2(0x100uLL);
  v5 = (UNICODE_STRING *)Pool2;
  if ( Pool2 )
  {
    UnicodeString = IopAllocateUnicodeString(Pool2 + 16, a2->Length);
    if ( UnicodeString < 0 )
    {
      UnicodeString = -1073741670;
      ExFreePoolWithTag(v5, 0);
    }
    else
    {
      RtlCopyUnicodeString(v5 + 1, a2);
      v7 = *(UNICODE_STRING ***)(a1 + 616);
      if ( *v7 != (UNICODE_STRING *)(a1 + 608) )
        __fastfail(3u);
      *(_QWORD *)&v5->Length = a1 + 608;
      v5->Buffer = (wchar_t *)v7;
      *v7 = v5;
      *(_QWORD *)(a1 + 616) = v5;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)UnicodeString;
}
