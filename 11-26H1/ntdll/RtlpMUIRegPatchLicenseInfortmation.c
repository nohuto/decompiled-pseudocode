/*
 * XREFs of RtlpMUIRegPatchLicenseInfortmation @ 0x180055F40
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180052AB0 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlInitUnicodeString @ 0x18004D1D0 (RtlInitUnicodeString.c)
 *     RtlLCIDToCultureName @ 0x1800512D0 (RtlLCIDToCultureName.c)
 *     RtlpIsALicensedRegularLanguage @ 0x180056240 (RtlpIsALicensedRegularLanguage.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180056350 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpLangNameInMultiSzString @ 0x1800565F0 (RtlpLangNameInMultiSzString.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 */

__int64 __fastcall RtlpMUIRegPatchLicenseInfortmation(__int64 a1)
{
  bool v2; // cc
  wchar_t *v3; // r8
  int v4; // edx
  int v5; // edi
  char v6; // si
  __int64 v7; // r14
  __int64 v8; // rbp
  unsigned __int16 *v9; // rcx
  int v10; // eax
  wchar_t *Buffer; // r15
  _QWORD *v12; // r8
  int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  size_t v19; // rax
  PVOID v20; // r13
  wchar_t *v21; // rcx
  wchar_t *v22; // rcx
  int InstalledLanguageIndexByName; // eax
  LCID v25; // ecx
  _UNICODE_STRING String; // [rsp+20h] [rbp-48h] BYREF
  __int16 v27; // [rsp+70h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp+10h]

  v27 = 0;
  String = 0LL;
  if ( !a1 )
    return 3221225473LL;
  v2 = *(_WORD *)(a1 + 4) <= 0x40u;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( !v2 )
    return 3221225473LL;
  BaseAddress = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
  v3 = (wchar_t *)BaseAddress;
  if ( !BaseAddress )
    return 3221225495LL;
  v4 = *(unsigned __int16 *)(a1 + 4);
  v5 = v4 - 1;
  if ( v4 - 1 >= 0 )
  {
    v6 = v4 - 1;
    v7 = 6LL * *(unsigned __int16 *)(a1 + 4) - 6;
    while ( 1 )
    {
      v8 = 1LL << v6;
      v9 = (unsigned __int16 *)(v7 + *(_QWORD *)(a1 + 24));
      v10 = *v9;
      if ( (_WORD)v10 )
        break;
LABEL_24:
      --v6;
      v7 -= 6LL;
      if ( --v5 < 0 )
        goto LABEL_25;
    }
    Buffer = v3;
    String.Buffer = v3;
    v12 = g_RegInfo;
    v13 = 0;
    *(_DWORD *)&String.Length = 11141120;
    if ( !g_RegInfo || !v9 )
    {
LABEL_23:
      v3 = (wchar_t *)BaseAddress;
      goto LABEL_24;
    }
    switch ( v10 )
    {
      case 2:
        v14 = 28LL * (__int16)v9[2];
        v15 = *(_QWORD *)(*((_QWORD *)g_RegInfo + 3) + 16LL);
        v16 = *(__int16 *)(v14 + v15 + 6);
        if ( (__int16)v16 > 0 )
        {
          v12 = (_QWORD *)*((_QWORD *)g_RegInfo + 4);
          *(_QWORD *)&String.Length = 0LL;
          v17 = *(__int16 *)(v12[2] + 2 * v16);
          v18 = v12[3];
          Buffer = (wchar_t *)(v18 + 2 * v17);
          if ( Buffer )
          {
            v19 = 2 * wcslen((const wchar_t *)(v18 + 2 * v17));
            if ( v19 >= 0xFFFE )
              LOWORD(v19) = -4;
            String.Length = v19;
            String.MaximumLength = v19 + 2;
          }
LABEL_15:
          if ( v13 >= 0 )
          {
            if ( *((_DWORD *)g_RegInfo + 30) < 0x3E8u )
            {
              LOBYTE(v12) = 1;
              InstalledLanguageIndexByName = RtlpMuiRegGetInstalledLanguageIndexByName(g_RegInfo, Buffer, v12, &v27);
              v3 = (wchar_t *)BaseAddress;
              if ( InstalledLanguageIndexByName >= 0 )
                *(_QWORD *)(a1 + 32) |= v8;
              goto LABEL_24;
            }
            if ( (int)RtlpIsALicensedRegularLanguage(g_RegInfo, Buffer) >= 0
              || (v20 = g_RegInfo) != 0LL
              && ((v21 = (wchar_t *)*((_QWORD *)g_RegInfo + 17)) == 0LL
               || !(unsigned __int8)RtlpLangNameInMultiSzString(v21, Buffer))
              && ((v22 = (wchar_t *)*((_QWORD *)v20 + 19)) == 0LL
               || !(unsigned __int8)RtlpLangNameInMultiSzString(v22, Buffer)) )
            {
              *(_QWORD *)(a1 + 32) |= v8;
            }
          }
          goto LABEL_23;
        }
        if ( !*(_WORD *)(v14 + v15 + 4) )
        {
LABEL_32:
          v13 = -1073741595;
          goto LABEL_15;
        }
        v25 = *(unsigned __int16 *)(v14 + v15 + 4);
        break;
      case 1:
        v25 = (__int16)v9[2];
        break;
      case 3:
        RtlInitUnicodeString(
          &String,
          (PCWSTR)(*(_QWORD *)(*((_QWORD *)g_RegInfo + 4) + 24LL)
                 + 2LL * *(__int16 *)(*(_QWORD *)(*((_QWORD *)g_RegInfo + 4) + 16LL) + 2LL * (__int16)v9[2])));
        goto LABEL_37;
      default:
        goto LABEL_32;
    }
    if ( !RtlLCIDToCultureName(v25, &String) )
    {
      Buffer = String.Buffer;
      goto LABEL_32;
    }
LABEL_37:
    Buffer = String.Buffer;
    goto LABEL_15;
  }
LABEL_25:
  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v3);
  return 0LL;
}
