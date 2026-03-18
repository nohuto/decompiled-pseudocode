/*
 * XREFs of ?InitializeWin32SiloGlobals@@YAJW4SiloGlobalAccess@@@Z @ 0x140195BB0
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402F04E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ZwWin32CreateSection @ 0x14014C520 (ZwWin32CreateSection.c)
 */

NTSTATUS __fastcall InitializeWin32SiloGlobals(int a1)
{
  void **v1; // rbx
  _QWORD *v2; // rax
  __int64 v3; // rdx
  NTSTATUS v4; // edi
  PVOID *SiloSessionState; // rbx
  PVOID *v6; // rbx
  PVOID *v7; // rax
  int HandleInformation; // [rsp+28h] [rbp-21h]
  void *v10; // [rsp+38h] [rbp-11h]
  int v11; // [rsp+40h] [rbp-9h]
  _QWORD v12[2]; // [rsp+50h] [rbp+7h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+17h] BYREF
  void *SectionHandle; // [rsp+B8h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+C0h] [rbp+77h] BYREF
  ULONG_PTR ViewSize; // [rsp+C8h] [rbp+7Fh] BYREF

  v12[0] = 3407922LL;
  v12[1] = L"\\Win32kSiloSessionGlobals";
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v12;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 66112LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( a1 )
  {
    SectionHandle = 0LL;
    v4 = ZwOpenSection(&SectionHandle, 4u, &ObjectAttributes);
    if ( v4 < 0 )
      return v4;
    SiloSessionState = (PVOID *)W32GetSiloSessionState();
    Object = 0LL;
    v4 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
    *SiloSessionState = Object;
    ZwClose(SectionHandle);
  }
  else
  {
    SectionHandle = (void *)32;
    v1 = (void **)(W32GetSiloSessionState() + 8);
    v2 = (_QWORD *)W32GetSiloSessionState();
    v4 = ZwWin32CreateSection(
           v2,
           v3,
           &ObjectAttributes,
           (union _LARGE_INTEGER *)&SectionHandle,
           4u,
           HandleInformation,
           0LL,
           v10,
           v11,
           v1);
  }
  if ( v4 >= 0 )
  {
    ViewSize = 32LL;
    v6 = (PVOID *)(W32GetSiloSessionState() + 16);
    v7 = (PVOID *)W32GetSiloSessionState();
    return MmMapViewInSystemSpace(*v7, v6, &ViewSize);
  }
  return v4;
}
