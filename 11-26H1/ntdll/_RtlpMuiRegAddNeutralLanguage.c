/*
 * XREFs of _RtlpMuiRegAddNeutralLanguage @ 0x18004E02C
 * Callers:
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x18004DC00 (_RtlpMuiRegAddNeutralToInstalled.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x18014DEA0 (_RtlpMuiRegInitAnyLanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x18014E6A8 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlpMuiRegGetOrAddString @ 0x18004D7B0 (RtlpMuiRegGetOrAddString.c)
 *     _MuiRegAllocArray @ 0x18004E1E0 (_MuiRegAllocArray.c)
 *     RtlGetParentLocaleName @ 0x18004EDD0 (RtlGetParentLocaleName.c)
 *     RtlCultureNameToLCID @ 0x18004FE40 (RtlCultureNameToLCID.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 */

__int64 __fastcall RtlpMuiRegAddNeutralLanguage(__int64 a1, __int64 a2, const WCHAR *a3)
{
  unsigned __int8 v3; // r12
  wchar_t *v7; // rax
  wchar_t *v8; // r13
  NTSTATUS v9; // eax
  int v10; // ebx
  wchar_t *Buffer; // rbx
  size_t v12; // rax
  __int16 v13; // si
  unsigned __int8 v14; // r14
  int v15; // r15d
  _UNICODE_STRING ParentLocaleName; // [rsp+20h] [rbp-20h] BYREF
  _UNICODE_STRING String; // [rsp+30h] [rbp-10h] BYREF
  __int16 v19; // [rsp+80h] [rbp+40h] BYREF
  DWORD Lcid; // [rsp+98h] [rbp+58h] BYREF

  v3 = 0;
  *(_DWORD *)(&ParentLocaleName.MaximumLength + 1) = 0;
  if ( !a1 || !a2 )
  {
    v10 = -1073741811;
    goto LABEL_18;
  }
  v7 = (wchar_t *)MuiRegAllocArray(a1, 85LL);
  v8 = v7;
  if ( !v7 )
  {
    v10 = -1073741801;
    goto LABEL_18;
  }
  ParentLocaleName.Buffer = v7;
  *(_DWORD *)&ParentLocaleName.Length = 11141120;
  v9 = RtlGetParentLocaleName(a3, &ParentLocaleName, 6u, 0);
  v10 = v9;
  if ( v9 < 0 )
  {
    v15 = v9;
  }
  else
  {
    Buffer = ParentLocaleName.Buffer;
    Lcid = 0;
    v19 = 0;
    *(_QWORD *)&String.Length = 0LL;
    String.Buffer = ParentLocaleName.Buffer;
    if ( ParentLocaleName.Buffer )
    {
      v12 = 2 * wcslen(ParentLocaleName.Buffer);
      if ( v12 >= 0xFFFE )
        LOWORD(v12) = -4;
      String.Length = v12;
      String.MaximumLength = v12 + 2;
    }
    if ( RtlCultureNameToLCID(&String, &Lcid) )
    {
      v13 = Lcid;
      if ( ((Lcid - 4096) & 0xFFFFFBFF) != 0 )
      {
        v14 = 1;
LABEL_12:
        v10 = 0;
        v15 = 0;
        v3 = v14;
        goto LABEL_15;
      }
      v10 = RtlpMuiRegGetOrAddString(a1, Buffer, 1, &v19);
      if ( v10 >= 0 )
      {
        v13 = v19;
        v14 = 3;
        goto LABEL_12;
      }
    }
    else
    {
      v10 = -1073741811;
    }
    v15 = v10;
  }
  v13 = 0;
  v14 = 0;
LABEL_15:
  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v8);
  if ( v15 >= 0 )
  {
    if ( v3 )
    {
      *(_WORD *)(a2 + 8) &= 0x3FFFu;
      *(_WORD *)(a2 + 8) |= v14 << 14;
      goto LABEL_19;
    }
    v10 = -1073741823;
  }
LABEL_18:
  v13 = 0;
  *(_WORD *)(a2 + 8) &= 0x3FFFu;
LABEL_19:
  *(_WORD *)(a2 + 10) = v13;
  return (unsigned int)v10;
}
