/*
 * XREFs of sub_140039188 @ 0x140039188
 * Callers:
 *     sub_14005C89C @ 0x14005C89C (sub_14005C89C.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140039188(__int64 a1, char a2)
{
  bool v2; // bl
  bool v3; // cl
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+60h] [rbp+18h] BYREF
  DWORD pdwType; // [rsp+68h] [rbp+20h] BYREF

  v2 = 1;
  if ( *(_QWORD *)(a1 + 312) )
  {
    if ( *(_BYTE *)(a1 + 4680) )
      v2 = *(_QWORD *)(a1 + 216) != (_QWORD)sub_140014350;
    v3 = 0;
    pcbData = 4;
    if ( (a2 & 8) == 0 )
      v3 = v2;
    pdwType = 0;
    pvData = 0;
    v2 = v3;
    if ( !RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
            L"DisablePumpBackupTimer",
            0x10u,
            &pdwType,
            &pvData,
            &pcbData) )
      return pvData == 0;
  }
  return v2;
}
