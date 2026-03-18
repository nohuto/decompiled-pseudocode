/*
 * XREFs of InitCreateObjectDirectory @ 0x1402EB048
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x140135AA0 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ApiSetEditionCreateDefaultWindowStation @ 0x140194E2C (ApiSetEditionCreateDefaultWindowStation.c)
 */

__int64 __fastcall InitCreateObjectDirectory(__int64 a1, __int64 a2)
{
  void *v2; // rcx
  bool v3; // bl
  bool v4; // di
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  __int64 v8; // rbx
  void *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int DefaultWindowStation; // edi
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  v2 = WPP_GLOBAL_Control;
  v3 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      14,
      20,
      (__int64)&WPP_487a223bc39130559c367c5765389d92_Traceguids);
  }
  v8 = W32GetUserSessionState(v2, a2);
  RtlInitUnicodeString(&DestinationString, (PCWSTR)(v8 + 63608));
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  v9 = *(void **)(v8 + 63536);
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.SecurityDescriptor = v9;
  DefaultWindowStation = ZwCreateDirectoryObject((PHANDLE)(v8 + 63600), 4u, &ObjectAttributes);
  if ( DefaultWindowStation >= 0 )
    DefaultWindowStation = ApiSetEditionCreateDefaultWindowStation(v11, v10);
  GreDeleteFastMutex(*(char **)(v8 + 63536));
  *(_QWORD *)(v8 + 63536) = 0LL;
  return (unsigned int)DefaultWindowStation;
}
