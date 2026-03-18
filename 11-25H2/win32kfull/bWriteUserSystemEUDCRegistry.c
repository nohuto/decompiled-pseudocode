/*
 * XREFs of bWriteUserSystemEUDCRegistry @ 0x14030DB0C
 * Callers:
 *     bReadUserSystemEUDCRegistry @ 0x140206EE4 (bReadUserSystemEUDCRegistry.c)
 *     GreEudcLoadLinkW @ 0x14030D518 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x14030D7E0 (GreEudcUnloadLinkW.c)
 * Callees:
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1401BADE4 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1401C2AA4 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     GetUserEUDCRegistryPath @ 0x1402071F8 (GetUserEUDCRegistryPath.c)
 *     bNotIsKeySymbolicLink @ 0x14022BEA0 (bNotIsKeySymbolicLink.c)
 */

__int64 __fastcall bWriteUserSystemEUDCRegistry(PVOID ValueData, unsigned __int16 a2)
{
  int v2; // r14d
  __int64 v4; // rdx
  int UserEUDCRegistryPath; // edi
  unsigned int v6; // esi
  HANDLE Handle; // [rsp+30h] [rbp-10h] BYREF
  HANDLE v9; // [rsp+38h] [rbp-8h] BYREF
  int v10; // [rsp+70h] [rbp+30h] BYREF
  PCWSTR Path; // [rsp+78h] [rbp+38h] BYREF

  v2 = a2;
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Path, 0x208u);
  if ( !Path )
    goto LABEL_12;
  Handle = 0LL;
  v9 = 0LL;
  v10 = 0;
  UserEUDCRegistryPath = GetUserEUDCRegistryPath((WCHAR *)Path, v4);
  v6 = 1;
  if ( UserEUDCRegistryPath >= 0 )
  {
    if ( (unsigned int)bNotIsKeySymbolicLink(Path, &Handle, &v9, &v10) && v10 )
      UserEUDCRegistryPath = RtlWriteRegistryValue(0, Path, L"SystemDefaultEUDCFont", 1u, ValueData, 2 * v2);
    else
      UserEUDCRegistryPath = -1073741824;
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v9 )
    ZwClose(v9);
  if ( UserEUDCRegistryPath < 0 )
LABEL_12:
    v6 = 0;
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&Path);
  return v6;
}
