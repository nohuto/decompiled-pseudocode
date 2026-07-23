/*
 * XREFs of RtlpWow64SelectSystem32PathInternal @ 0x180021618
 * Callers:
 *     RtlReplaceSystemDirectoryInPath @ 0x180020470 (RtlReplaceSystemDirectoryInPath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18004D1D0 (RtlInitUnicodeString.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 */

__int64 __fastcall RtlpWow64SelectSystem32PathInternal(unsigned __int16 a1, char a2, _UNICODE_STRING *a3)
{
  const wchar_t *v5; // rcx
  size_t v6; // rax
  __int16 v7; // dx
  size_t v8; // rax
  const wchar_t *v10; // rcx
  size_t v11; // rax
  const wchar_t *v12; // rcx
  const WCHAR *v13; // rdx

  switch ( a1 )
  {
    case 1u:
      goto LABEL_10;
    case 0x14Cu:
      *(_QWORD *)&a3->Length = 0LL;
      if ( a2 )
      {
        v5 = L"\\SysWOW64\\";
LABEL_5:
        a3->Buffer = (wchar_t *)v5;
        v6 = wcslen(v5);
        v7 = 2 * v6;
        if ( 2 * v6 >= 0xFFFE )
          v7 = -4;
        LOWORD(v8) = v7;
LABEL_8:
        a3->Length = v7;
        a3->MaximumLength = v8 + 2;
        return 0LL;
      }
      v12 = L"SysWOW64";
      goto LABEL_16;
    case 0x1C4u:
      *(_QWORD *)&a3->Length = 0LL;
      if ( a2 )
      {
        v5 = L"\\SysARM32\\";
        goto LABEL_5;
      }
      v12 = L"SysARM32";
LABEL_16:
      a3->Buffer = (wchar_t *)v12;
      v8 = 2 * wcslen(v12);
      if ( v8 >= 0xFFFE )
        LOWORD(v8) = -4;
      v7 = v8;
      goto LABEL_8;
    case 0x3A64u:
      v13 = L"\\SyCHPE32\\";
      if ( !a2 )
        v13 = L"SyCHPE32";
      RtlInitUnicodeString(a3, v13);
      return 0LL;
    case 0x8664u:
    case 0xAA64u:
LABEL_10:
      *(_QWORD *)&a3->Length = 0LL;
      v10 = L"\\System32\\";
      if ( !a2 )
        v10 = L"System32";
      a3->Buffer = (wchar_t *)v10;
      v11 = 2 * wcslen(v10);
      if ( v11 >= 0xFFFE )
        LOWORD(v11) = -4;
      a3->Length = v11;
      a3->MaximumLength = v11 + 2;
      return 0LL;
  }
  return 3221225485LL;
}
