/*
 * XREFs of ?IsCHSBaseFont@@YAHPEBGI@Z @ 0x1402621E4
 * Callers:
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1401081B0 (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 * Callees:
 *     SearchInCHSBaseFontFileNameSuffixes @ 0x140205958 (SearchInCHSBaseFontFileNameSuffixes.c)
 *     Feature_GDI_GB18030_2022A__private_IsEnabledDeviceUsageNoInline @ 0x14030E620 (Feature_GDI_GB18030_2022A__private_IsEnabledDeviceUsageNoInline.c)
 */

_BOOL8 __fastcall IsCHSBaseFont(const unsigned __int16 *a1, __int64 a2)
{
  int v2; // ebx
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  const UNICODE_STRING *v8; // rdi
  unsigned int v9; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  v4 = *(_DWORD *)(*(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96) + 20104LL);
  if ( !v4 )
    return 0LL;
  v5 = (unsigned int)(v4 - 1);
  v6 = (unsigned int)v5;
  if ( v2 - (int)v5 < 8 )
    return 0LL;
  v7 = *(_QWORD *)&a1[v5];
  if ( v7 == 0x4800590053004DLL )
  {
    v8 = &String2;
LABEL_8:
    v9 = 3;
    goto LABEL_10;
  }
  if ( v7 != 0x53004D00490053LL )
    return 0LL;
  if ( (unsigned int)Feature_GDI_GB18030_2022A__private_IsEnabledDeviceUsageNoInline() )
  {
    v8 = (const UNICODE_STRING *)&unk_14034F018;
    goto LABEL_8;
  }
  v8 = (const UNICODE_STRING *)&unk_14034EFF8;
  v9 = 2;
LABEL_10:
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, &a1[v6 + 4]);
  return (int)SearchInCHSBaseFontFileNameSuffixes(&DestinationString, v8, v9) >= 0;
}
