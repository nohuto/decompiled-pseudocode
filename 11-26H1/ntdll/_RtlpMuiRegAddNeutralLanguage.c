/*
 * XREFs of _RtlpMuiRegAddNeutralLanguage @ 0x1800028FC
 * Callers:
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x1800024D0 (_RtlpMuiRegAddNeutralToInstalled.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x18014DFF0 (_RtlpMuiRegInitAnyLanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x18014E7F8 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpMuiRegGetOrAddString @ 0x180002080 (RtlpMuiRegGetOrAddString.c)
 *     _MuiRegAllocArray @ 0x180002AB0 (_MuiRegAllocArray.c)
 *     RtlGetParentLocaleName @ 0x1800036A0 (RtlGetParentLocaleName.c)
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 */

__int64 __fastcall RtlpMuiRegAddNeutralLanguage(__int64 a1, __int64 a2, wchar_t *a3)
{
  unsigned __int8 v3; // r12
  __int64 v7; // rax
  __int64 v8; // r13
  int ParentLocaleName; // eax
  int v10; // ebx
  size_t v11; // rax
  __int16 v12; // si
  unsigned __int8 v13; // r14
  int v14; // r15d
  wchar_t *String; // [rsp+28h] [rbp-18h]
  _QWORD v17[2]; // [rsp+30h] [rbp-10h] BYREF
  __int16 v18; // [rsp+80h] [rbp+40h] BYREF
  int v19; // [rsp+98h] [rbp+58h] BYREF

  v3 = 0;
  if ( !a1 || !a2 )
  {
    v10 = -1073741811;
    goto LABEL_18;
  }
  v7 = MuiRegAllocArray(a1, 85LL);
  v8 = v7;
  if ( !v7 )
  {
    v10 = -1073741801;
    goto LABEL_18;
  }
  String = (wchar_t *)v7;
  ParentLocaleName = RtlGetParentLocaleName(a3);
  v10 = ParentLocaleName;
  if ( ParentLocaleName < 0 )
  {
    v14 = ParentLocaleName;
  }
  else
  {
    v19 = 0;
    v18 = 0;
    v17[0] = 0LL;
    v17[1] = String;
    v11 = 2 * wcslen(String);
    if ( v11 >= 0xFFFE )
      LOWORD(v11) = -4;
    LOWORD(v17[0]) = v11;
    WORD1(v17[0]) = v11 + 2;
    if ( (unsigned __int8)RtlCultureNameToLCID(v17, &v19) )
    {
      v12 = v19;
      if ( ((v19 - 4096) & 0xFFFFFBFF) != 0 )
      {
        v13 = 1;
LABEL_12:
        v10 = 0;
        v14 = 0;
        v3 = v13;
        goto LABEL_15;
      }
      v10 = RtlpMuiRegGetOrAddString(a1, (__int64)String, 1, &v18);
      if ( v10 >= 0 )
      {
        v12 = v18;
        v13 = 3;
        goto LABEL_12;
      }
    }
    else
    {
      v10 = -1073741811;
    }
    v14 = v10;
  }
  v12 = 0;
  v13 = 0;
LABEL_15:
  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v8);
  if ( v14 >= 0 )
  {
    if ( v3 )
    {
      *(_WORD *)(a2 + 8) &= 0x3FFFu;
      *(_WORD *)(a2 + 8) |= v13 << 14;
      goto LABEL_19;
    }
    v10 = -1073741823;
  }
LABEL_18:
  v12 = 0;
  *(_WORD *)(a2 + 8) &= 0x3FFFu;
LABEL_19:
  *(_WORD *)(a2 + 10) = v12;
  return (unsigned int)v10;
}
