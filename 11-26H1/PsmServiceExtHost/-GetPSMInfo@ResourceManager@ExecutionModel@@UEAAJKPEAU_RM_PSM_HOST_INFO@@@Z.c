/*
 * XREFs of ?GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18005F450
 * Callers:
 *     <none>
 * Callees:
 *     ?HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180011B50 (-HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::GetPSMInfo(
        ExecutionModel::ResourceManager *this,
        unsigned int a2,
        struct _RM_PSM_HOST_INFO *a3)
{
  NTSTATUS ProcessFullIdentity; // ebx
  unsigned int v5; // ebx
  struct _CLIENT_ID ClientId; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *ProcessHandle; // [rsp+88h] [rbp+28h] BYREF

  ClientId.UniqueProcess = (HANDLE)a2;
  ProcessHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ClientId.UniqueThread = 0LL;
  memset(&ObjectAttributes.RootDirectory, 0, 40);
  ProcessFullIdentity = NtOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId);
  if ( ProcessFullIdentity < 0
    || (ProcessFullIdentity = HampSystemGetProcessFullIdentity(ProcessHandle, 0LL, a3), ProcessFullIdentity < 0) )
  {
    v5 = ProcessFullIdentity | 0x10000000;
  }
  else
  {
    v5 = 0;
  }
  if ( ProcessHandle )
    NtClose(ProcessHandle);
  return v5;
}
