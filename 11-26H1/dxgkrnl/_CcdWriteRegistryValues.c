/*
 * XREFs of _CcdWriteRegistryValues @ 0x14041798C
 * Callers:
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x14026D888 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 *     ?_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x140417794 (-_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcdWriteRegistryValues(WCHAR *Path, const WCHAR *a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v5; // esi
  unsigned int v10; // ebx
  NTSTATUS v11; // eax
  WCHAR *v12; // rdx
  __int64 v13; // r12
  unsigned int v14; // r13d
  NTSTATUS v15; // eax
  void *KeyHandle; // [rsp+48h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-9h] BYREF
  __int64 Disposition; // [rsp+D0h] [rbp+67h] BYREF

  v5 = 0;
  KeyHandle = 0LL;
  v10 = -1073741823;
  if ( a2 && *a2 )
  {
    LODWORD(Disposition) = 0;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, a2);
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = Path;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v11 = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, (PULONG)&Disposition);
    v10 = v11;
    if ( v11 < 0 )
    {
      WdLogSingleEntry5(2LL, v11, Path, a2, a3, a5);
      WdLogGlobalForLineNumber = 445;
      return v10;
    }
    v12 = (WCHAR *)KeyHandle;
  }
  else
  {
    v12 = Path;
    KeyHandle = Path;
  }
  v13 = a5;
  v14 = a4 - 1;
  while ( v5 < v14 )
  {
    Disposition = v5;
    v15 = RtlWriteRegistryValue(
            0x40000000u,
            v12,
            *(PCWSTR *)(56LL * v5 + a3 + 16),
            *(_DWORD *)(56LL * v5 + a3 + 32) & 0xFFFFFF,
            (PVOID)(v13 + *(_QWORD *)(56LL * v5 + a3 + 24)),
            *(_DWORD *)(56LL * v5 + a3 + 48));
    v10 = v15;
    if ( v15 < 0 )
    {
      WdLogSingleEntry5(2LL, v15, Disposition, a2, a3, v13);
      v12 = (WCHAR *)KeyHandle;
      WdLogGlobalForLineNumber = 477;
      break;
    }
    v12 = (WCHAR *)KeyHandle;
    ++v5;
  }
  if ( v12 != Path )
    ZwClose(v12);
  return v10;
}
