/*
 * XREFs of LdrpLoadEnclaveModule @ 0x180117220
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1801394E0 (LdrLoadEnclaveModule.c)
 * Callees:
 *     LdrpEnclaveAddForwarderModules @ 0x1800382C0 (LdrpEnclaveAddForwarderModules.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     LdrpMapDllFullPath @ 0x180084A80 (LdrpMapDllFullPath.c)
 *     LdrpEnclaveAddDelayloadModules @ 0x18010D95C (LdrpEnclaveAddDelayloadModules.c)
 *     LdrpUnmapModule @ 0x1801199AC (LdrpUnmapModule.c)
 *     LdrpMapDllSearchPath @ 0x18011C9D0 (LdrpMapDllSearchPath.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtLoadEnclaveData @ 0x180161110 (NtLoadEnclaveData.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall LdrpLoadEnclaveModule(unsigned __int16 *a1)
{
  __int64 v1; // r14
  __int64 v2; // r15
  _QWORD *v4; // rbp
  __int64 result; // rax
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx
  int EnclaveData; // esi
  signed __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  int v11; // esi
  __int64 Heap_0; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  v1 = *((_QWORD *)a1 + 7);
  v2 = 0LL;
  v4 = (_QWORD *)*((_QWORD *)a1 + 22);
  if ( (*((_DWORD *)a1 + 8) & 0x200) != 0 )
    result = LdrpMapDllFullPath((__int64)a1);
  else
    result = LdrpMapDllSearchPath((char)a1);
  if ( (int)result < 0 )
    return result;
  v6 = v4[11];
  EnclaveData = LdrpEnclaveAddDelayloadModules((__int64)a1);
  if ( EnclaveData >= 0 )
  {
    EnclaveData = LdrpEnclaveAddForwarderModules((__int64)a1, v7);
    if ( EnclaveData >= 0 )
    {
      if ( !v6 )
        v6 = (v4[9] + v4[10]) & 0xFFFFFFFFFFFFF000uLL;
      v9 = *(unsigned int *)(v1 + 64);
      if ( (__int64)(v6 - v4[9]) >= v9 )
      {
        v10 = (v6 - v9) & 0xFFFFFFFFFFFFF000uLL;
        v11 = *a1 + 10;
        Heap_0 = RtlAllocateHeap_0();
        v2 = Heap_0;
        if ( Heap_0 )
        {
          *(_QWORD *)Heap_0 = *((_QWORD *)a1 + 3);
          *(_WORD *)(Heap_0 + 8) = *a1;
          memmove((void *)(Heap_0 + 10), *((const void **)a1 + 1), *a1);
          EnclaveData = NtLoadEnclaveData(-1LL, v10, 0LL, 0LL, 0, v2, v11, 0LL, 0LL);
          if ( EnclaveData >= 0 )
          {
            v4[11] = v10;
            v13 = *(_QWORD *)(v1 + 152);
            *(_QWORD *)(v1 + 184) = v10;
            *(_DWORD *)(v13 + 56) = 9;
            v14 = v4[14];
            if ( !v14 )
            {
              v4[14] = v1;
              v14 = v1;
            }
            if ( v1 == v14 )
              goto LABEL_14;
            goto LABEL_13;
          }
        }
        else
        {
          EnclaveData = -1073741670;
        }
      }
      else
      {
        EnclaveData = -1073741800;
      }
    }
  }
  v4[14] = 0LL;
LABEL_13:
  LdrpUnmapModule(v1);
LABEL_14:
  if ( v2 )
    RtlFreeHeap_0();
  NtClose(*((HANDLE *)a1 + 3));
  NtClose(*((HANDLE *)a1 + 23));
  result = (unsigned int)EnclaveData;
  *((_QWORD *)a1 + 3) = 0LL;
  *((_QWORD *)a1 + 23) = -1LL;
  return result;
}
