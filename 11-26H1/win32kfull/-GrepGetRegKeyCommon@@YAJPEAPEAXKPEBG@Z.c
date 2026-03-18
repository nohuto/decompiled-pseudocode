/*
 * XREFs of ?GrepGetRegKeyCommon@@YAJPEAPEAXKPEBG@Z @ 0x1401C64E4
 * Callers:
 *     ?FNTCachepInit@@YAXPEBG@Z @ 0x1401C5E88 (-FNTCachepInit@@YAXPEBG@Z.c)
 *     ?GrepGetRegKey@@YAJPEAPEAXKW4GreRegKey@@@Z @ 0x1401C6450 (-GrepGetRegKey@@YAJPEAPEAXKW4GreRegKey@@@Z.c)
 *     InitializeDefaultFamilyFonts @ 0x1403FB3A8 (InitializeDefaultFamilyFonts.c)
 *     hfontInitDefaultGuiFont @ 0x1403FB52C (hfontInitDefaultGuiFont.c)
 *     bInitStockFontsInternal @ 0x1403FBDC8 (bInitStockFontsInternal.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall GrepGetRegKeyCommon(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, PCWSTR SourceString)
{
  struct _UNICODE_STRING v6; // [rsp+20h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v6 = 0LL;
  RtlInitUnicodeString(&v6, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v6;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
}
