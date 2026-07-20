/*
 * XREFs of SmpUpdatePagefileUsageCallback @ 0x140007C40
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x14001E843 (memset_0.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

char SmpUpdatePagefileUsageCallback()
{
  __int64 j; // rbp
  unsigned __int64 v1; // r14
  unsigned int *Heap; // rax
  __int64 v3; // rsi
  ULONG i; // edi
  unsigned int *v5; // rbx
  NTSTATUS v6; // edi
  __int64 v7; // rax
  unsigned int *v8; // rcx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rcx
  int v11; // edx
  int v12; // ebx
  _BYTE *v13; // rdx
  __int64 v14; // r8
  char v15; // al
  _BYTE *v16; // rax
  _OWORD *v17; // rdx
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  unsigned __int64 v30; // rcx
  ULONG ReturnLength; // [rsp+30h] [rbp-128h] BYREF
  __int128 SystemInformation; // [rsp+38h] [rbp-120h] BYREF
  __int128 v34; // [rsp+48h] [rbp-110h]
  _OWORD v35[8]; // [rsp+60h] [rbp-F8h] BYREF
  _OWORD v36[2]; // [rsp+E0h] [rbp-78h] BYREF
  __int128 v37; // [rsp+100h] [rbp-58h]
  __int128 v38; // [rsp+110h] [rbp-48h]
  __int128 v39; // [rsp+120h] [rbp-38h]
  __int128 v40; // [rsp+130h] [rbp-28h]

  SystemInformation = 0LL;
  v34 = 0LL;
  memset_0(v35, 0, 0xB0uLL);
  j = 0LL;
  ReturnLength = 0;
  v1 = SmpMemorySize / (unsigned __int64)(unsigned int)dword_140031AE8;
  LODWORD(Heap) = NtQuerySystemInformation(
                    MaxSystemInfoClass|SystemFullMemoryInformation,
                    &SystemInformation,
                    0x20u,
                    0LL);
  if ( (int)Heap >= 0 )
  {
    v3 = *((_QWORD *)&SystemInformation + 1);
    if ( *((_QWORD *)&v34 + 1) > (unsigned __int64)qword_140031C48 )
    {
      qword_140031C48 = *((_QWORD *)&v34 + 1);
      v3 = *((_QWORD *)&v34 + 1);
    }
    LODWORD(Heap) = NtQuerySystemInformation(SystemMemoryListInformation, v35, 0xB0u, &ReturnLength);
    if ( (int)Heap >= 0 )
    {
      for ( i = 256; ; i = ReturnLength )
      {
        Heap = (unsigned int *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, i);
        v5 = Heap;
        if ( !Heap )
          break;
        v6 = NtQuerySystemInformation(SystemPageFileInformation, Heap, i, &ReturnLength);
        if ( v6 >= 0 )
        {
          if ( ReturnLength )
          {
            v7 = *v5;
            v8 = v5;
            for ( j = v5[2]; (_DWORD)v7; v7 = *v8 )
            {
              v8 = (unsigned int *)((char *)v8 + v7);
              j += v8[2];
            }
          }
          RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v5);
          v9 = j + *((_QWORD *)&v37 + 1);
          v10 = 0x400000000uLL / (unsigned int)dword_140031AE8 + v3;
          if ( 10 * v3 / 9uLL <= v10 )
            v10 = 10 * v3 / 9uLL;
          if ( v10 > v1 )
          {
            v30 = v10 - v1;
            if ( v30 > v9 )
              v9 = v30;
          }
          if ( v9 > 0xFFFFFFFF )
            LODWORD(v9) = -1;
          LODWORD(Heap) = 7;
          dword_140031C54[(unsigned int)NumOfElements % 0xF0] = v9;
          LODWORD(NumOfElements) = NumOfElements + 1;
          v11 = SmpPagefileUsage + 1;
          SmpPagefileUsage = v11;
          if ( (unsigned int)(v11 - 1) < 7 )
            LODWORD(Heap) = v11 - 1;
          if ( ((unsigned int)Heap & v11) == 0 )
          {
            LODWORD(Heap) = NtSetValueKey(
                              SmpMmKey,
                              (PUNICODE_STRING)&SmpPagefileUsageValue,
                              0,
                              3u,
                              &NumOfElements,
                              0x3C4u);
            v12 = (int)Heap;
            if ( (int)Heap < 0 )
            {
              memset_0(v35, 0, 0xE0uLL);
              LODWORD(v39) = v12;
              DWORD2(v40) = 893;
              v13 = v35;
              v14 = 64LL;
              do
              {
                if ( v14 == -2147483582 )
                  break;
                v15 = v13["SmpUpdatePagefileUsageCallback" - (char *)v35];
                if ( !v15 )
                  break;
                *v13++ = v15;
                --v14;
              }
              while ( v14 );
              v16 = v13 - 1;
              if ( v14 )
                v16 = v13;
              *v16 = 0;
              v17 = (_OWORD *)((char *)&unk_14002FE98 + 224 * (_InterlockedIncrement(&dword_14002FE94) % 16));
              v18 = v35[1];
              Heap = (unsigned int *)v36;
              *v17 = v35[0];
              v19 = v35[2];
              v17[1] = v18;
              v20 = v35[3];
              v17[2] = v19;
              v21 = v35[4];
              v17[3] = v20;
              v22 = v35[5];
              v17[4] = v21;
              v23 = v35[6];
              v17[5] = v22;
              v24 = v36[0];
              v17[6] = v23;
              v17 += 8;
              *(v17 - 1) = v35[7];
              v25 = v36[1];
              *v17 = v24;
              v26 = v37;
              v17[1] = v25;
              v27 = v38;
              v17[2] = v26;
              v28 = v39;
              v17[3] = v27;
              v29 = v40;
              v17[4] = v28;
              v17[5] = v29;
            }
          }
          return (char)Heap;
        }
        LOBYTE(Heap) = RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v5);
        if ( v6 != -1073741820 )
          return (char)Heap;
      }
    }
  }
  return (char)Heap;
}
