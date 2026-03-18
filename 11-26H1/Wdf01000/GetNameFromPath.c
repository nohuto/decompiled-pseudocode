/*
 * XREFs of GetNameFromPath @ 0x140075728
 * Callers:
 *     ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x14001CE90 (-IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z.c)
 *     GetImageName @ 0x14006D624 (GetImageName.c)
 *     FxLibraryCommonRegisterClient @ 0x140077428 (FxLibraryCommonRegisterClient.c)
 *     FxLibraryIsV35DriverAllowed @ 0x14008E520 (FxLibraryIsV35DriverAllowed.c)
 *     ?LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceCompanionCallbacks@@PEAPEAUIDeviceCompanion@@@Z @ 0x14008F0AC (-LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceC.c)
 * Callees:
 *     <none>
 */

void __fastcall GetNameFromPath(const _UNICODE_STRING *Path, _UNICODE_STRING *Name)
{
  __int64 Length; // rcx
  wchar_t *v4; // rax
  wchar_t *v5; // rax
  unsigned __int16 i; // cx
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // cx

  if ( Path->Length < 2u )
  {
    *Name = 0LL;
  }
  else
  {
    Length = Path->Length;
    v4 = Path->Buffer - 1;
    Name->Length = 2;
    v5 = (wchar_t *)((char *)v4 + Length);
    for ( i = 2; ; Name->Length = i )
    {
      Name->Buffer = v5;
      if ( v5 < Path->Buffer )
      {
        v8 = i - 2;
        Name->Length = v8;
        Name->Buffer = v5 + 1;
        goto LABEL_7;
      }
      if ( *v5 == 92 )
        break;
      --v5;
      i += 2;
    }
    Name->Buffer = v5 + 1;
    v7 = 0;
    v8 = i - 2;
    Name->Length = v8;
    if ( v8 )
    {
LABEL_7:
      v7 = v8;
      goto LABEL_8;
    }
    Name->Buffer = 0LL;
LABEL_8:
    Name->MaximumLength = v7;
  }
}
