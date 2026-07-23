/*
 * XREFs of LdrpLoadEnclaveModule @ 0x180116A00
 * Callers:
 *     LdrLoadEnclaveModule @ 0x180139250 (LdrLoadEnclaveModule.c)
 * Callees:
 *     LdrpEnclaveAddForwarderModules @ 0x180022830 (LdrpEnclaveAddForwarderModules.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     LdrpMapDllFullPath @ 0x18007BE20 (LdrpMapDllFullPath.c)
 *     LdrpEnclaveAddDelayloadModules @ 0x18010D4AC (LdrpEnclaveAddDelayloadModules.c)
 *     LdrpUnmapModule @ 0x18011975C (LdrpUnmapModule.c)
 *     LdrpMapDllSearchPath @ 0x18011C780 (LdrpMapDllSearchPath.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtLoadEnclaveData @ 0x180161010 (NtLoadEnclaveData.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall LdrpLoadEnclaveModule(unsigned __int16 *a1)
{
  __int64 v1; // r14
  void *PageInformation; // r15
  _QWORD *v4; // rbp
  __int64 result; // rax
  unsigned __int64 v6; // rdi
  int EnclaveData; // esi
  signed __int64 v8; // rcx
  void *v9; // rdi
  ULONG PageInformationLength; // esi
  char *Heap_0; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  v1 = *((_QWORD *)a1 + 7);
  PageInformation = 0LL;
  v4 = (_QWORD *)*((_QWORD *)a1 + 22);
  if ( (*((_DWORD *)a1 + 8) & 0x200) != 0 )
    result = LdrpMapDllFullPath((__int64)a1);
  else
    result = LdrpMapDllSearchPath();
  if ( (int)result < 0 )
    return result;
  v6 = v4[11];
  EnclaveData = LdrpEnclaveAddDelayloadModules((__int64)a1);
  if ( EnclaveData >= 0 )
  {
    EnclaveData = LdrpEnclaveAddForwarderModules((__int64)a1);
    if ( EnclaveData >= 0 )
    {
      if ( !v6 )
        v6 = (v4[9] + v4[10]) & 0xFFFFFFFFFFFFF000uLL;
      v8 = *(unsigned int *)(v1 + 64);
      if ( (__int64)(v6 - v4[9]) >= v8 )
      {
        v9 = (void *)((v6 - v8) & 0xFFFFFFFFFFFFF000uLL);
        PageInformationLength = *a1 + 10;
        Heap_0 = (char *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, PageInformationLength);
        PageInformation = Heap_0;
        if ( Heap_0 )
        {
          *(_QWORD *)Heap_0 = *((_QWORD *)a1 + 3);
          *((_WORD *)Heap_0 + 4) = *a1;
          memmove(Heap_0 + 10, *((const void **)a1 + 1), *a1);
          EnclaveData = NtLoadEnclaveData(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          v9,
                          0LL,
                          0LL,
                          0,
                          PageInformation,
                          PageInformationLength,
                          0LL,
                          0LL);
          if ( EnclaveData >= 0 )
          {
            v4[11] = v9;
            v12 = *(_QWORD *)(v1 + 152);
            *(_QWORD *)(v1 + 184) = v9;
            *(_DWORD *)(v12 + 56) = 9;
            v13 = v4[14];
            if ( !v13 )
            {
              v4[14] = v1;
              v13 = v1;
            }
            if ( v1 == v13 )
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
  if ( PageInformation )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, PageInformation);
  NtClose(*((HANDLE *)a1 + 3));
  NtClose(*((HANDLE *)a1 + 23));
  result = (unsigned int)EnclaveData;
  *((_QWORD *)a1 + 3) = 0LL;
  *((_QWORD *)a1 + 23) = -1LL;
  return result;
}
