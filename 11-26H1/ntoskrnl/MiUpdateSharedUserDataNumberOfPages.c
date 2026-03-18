/*
 * XREFs of MiUpdateSharedUserDataNumberOfPages @ 0x140867168
 * Callers:
 *     MiPerformMemoryChange @ 0x1406E9974 (MiPerformMemoryChange.c)
 *     MiInitSystem @ 0x140CF15C4 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 MiUpdateSharedUserDataNumberOfPages()
{
  int v0; // edx
  __int64 result; // rax

  v0 = -1;
  if ( qword_140E3D3D0 <= 0xFFFFFFFF )
    v0 = qword_140E3D3D0;
  *(_QWORD *)(MmWriteableSharedUserData + 784) = qword_140E3D3D0;
  result = MmWriteableSharedUserData;
  *(_DWORD *)(MmWriteableSharedUserData + 744) = v0;
  return result;
}
