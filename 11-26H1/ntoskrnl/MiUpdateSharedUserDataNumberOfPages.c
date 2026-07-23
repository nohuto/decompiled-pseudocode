/*
 * XREFs of MiUpdateSharedUserDataNumberOfPages @ 0x14086D548
 * Callers:
 *     MiPerformMemoryChange @ 0x1406EE614 (MiPerformMemoryChange.c)
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 MiUpdateSharedUserDataNumberOfPages()
{
  int v0; // edx
  __int64 result; // rax

  v0 = -1;
  if ( qword_140E3D550 <= 0xFFFFFFFF )
    v0 = qword_140E3D550;
  *(_QWORD *)(MmWriteableSharedUserData + 784) = qword_140E3D550;
  result = MmWriteableSharedUserData;
  *(_DWORD *)(MmWriteableSharedUserData + 744) = v0;
  return result;
}
