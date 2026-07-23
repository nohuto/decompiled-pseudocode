/*
 * XREFs of PsspDuplicateSnapshotRemoteToRemote @ 0x180159FD8
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x1800B2210 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     PssNtFreeRemoteSnapshot @ 0x18010F160 (PssNtFreeRemoteSnapshot.c)
 *     Feature_2609059128__private_IsEnabledDeviceUsageNoInline @ 0x18015999C (Feature_2609059128__private_IsEnabledDeviceUsageNoInline.c)
 *     PssValidateSnapshotDescriptor @ 0x1801599E4 (PssValidateSnapshotDescriptor.c)
 *     ZwAllocateVirtualMemory @ 0x18015F140 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18015F200 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x18015F580 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x18015F5C0 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x18015F620 (ZwReadVirtualMemory.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PsspDuplicateSnapshotRemoteToRemote(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        HANDLE SourceProcessHandle,
        PVOID *a4,
        char a5)
{
  PVOID v7; // r12
  unsigned int v9; // r13d
  int v10; // ebx
  unsigned __int64 v11; // r14
  __int64 v12; // rdx
  _BYTE *v13; // rcx
  __int64 *v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  void *v22; // rdx
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int64 v29; // rax
  NTSTATUS v30; // eax
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // r12
  SIZE_T v33; // r14
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-C0h] BYREF
  PVOID BaseAddressa; // [rsp+48h] [rbp-B8h] BYREF
  PVOID v37; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR BufferSize; // [rsp+58h] [rbp-A8h] BYREF
  PVOID v39; // [rsp+60h] [rbp-A0h]
  ULONG_PTR NumberOfBytesWritten; // [rsp+68h] [rbp-98h] BYREF
  PVOID *v41; // [rsp+70h] [rbp-90h]
  _BYTE v42[4]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v43; // [rsp+84h] [rbp-7Ch]
  __int16 v44; // [rsp+198h] [rbp+98h]
  char *v45; // [rsp+1A0h] [rbp+A0h]
  HANDLE TargetHandle; // [rsp+3E8h] [rbp+2E8h] BYREF
  HANDLE v47; // [rsp+400h] [rbp+300h] BYREF
  char *v48; // [rsp+408h] [rbp+308h]
  HANDLE v49; // [rsp+418h] [rbp+318h] BYREF
  HANDLE v50; // [rsp+430h] [rbp+330h] BYREF
  HANDLE v51; // [rsp+450h] [rbp+350h] BYREF
  HANDLE v52; // [rsp+470h] [rbp+370h] BYREF
  HANDLE v53; // [rsp+4E8h] [rbp+3E8h] BYREF
  __int64 Buffer[111]; // [rsp+500h] [rbp+400h] BYREF
  unsigned int v55; // [rsp+878h] [rbp+778h]
  HANDLE v56; // [rsp+880h] [rbp+780h]
  __int64 v57; // [rsp+888h] [rbp+788h]
  HANDLE v58; // [rsp+898h] [rbp+798h]
  HANDLE v59; // [rsp+8B0h] [rbp+7B0h]
  HANDLE v60; // [rsp+8D0h] [rbp+7D0h]
  HANDLE v61; // [rsp+8F0h] [rbp+7F0h]
  HANDLE v62; // [rsp+968h] [rbp+868h]

  v39 = BaseAddress;
  v41 = a4;
  v7 = BaseAddress;
  BaseAddressa = 0LL;
  memset_thunk_772440563353939046(Buffer, 0, 0x478uLL);
  BufferSize = 0LL;
  NumberOfBytesWritten = 0LL;
  RegionSize = 0LL;
  v9 = 0;
  v37 = 0LL;
  *a4 = 0LL;
  memset_thunk_772440563353939046(v42, 0, 0x478uLL);
  v10 = ZwReadVirtualMemory(ProcessHandle, v7, Buffer, 0x478uLL, &BufferSize);
  if ( v10 < 0 )
    goto LABEL_48;
  if ( BufferSize == 1144 )
  {
    if ( LODWORD(Buffer[0]) == 1146311504 )
    {
      v10 = PssValidateSnapshotDescriptor(Buffer);
      if ( v10 >= 0 )
      {
        v11 = (unsigned __int64)v55 << 6;
        if ( v11 <= 0xFFFFFFFF )
        {
          v9 = v11 + 1144;
          if ( (unsigned int)v11 < 0xFFFFFB88 )
          {
            v12 = 8LL;
            v13 = v42;
            v14 = Buffer;
            do
            {
              v15 = *((_OWORD *)v14 + 1);
              *(_OWORD *)v13 = *(_OWORD *)v14;
              v16 = *((_OWORD *)v14 + 2);
              *((_OWORD *)v13 + 1) = v15;
              v17 = *((_OWORD *)v14 + 3);
              *((_OWORD *)v13 + 2) = v16;
              v18 = *((_OWORD *)v14 + 4);
              *((_OWORD *)v13 + 3) = v17;
              v19 = *((_OWORD *)v14 + 5);
              *((_OWORD *)v13 + 4) = v18;
              v20 = *((_OWORD *)v14 + 6);
              *((_OWORD *)v13 + 5) = v19;
              v21 = *((_OWORD *)v14 + 7);
              v14 += 16;
              *((_OWORD *)v13 + 6) = v20;
              v13 += 128;
              *((_OWORD *)v13 - 1) = v21;
              --v12;
            }
            while ( v12 );
            v22 = (void *)Buffer[109];
            v23 = *((_OWORD *)v14 + 1);
            *(_OWORD *)v13 = *(_OWORD *)v14;
            v24 = *((_OWORD *)v14 + 2);
            *((_OWORD *)v13 + 1) = v23;
            v25 = *((_OWORD *)v14 + 3);
            *((_OWORD *)v13 + 2) = v24;
            v26 = *((_OWORD *)v14 + 4);
            *((_OWORD *)v13 + 3) = v25;
            v27 = *((_OWORD *)v14 + 5);
            *((_OWORD *)v13 + 4) = v26;
            v28 = *((_OWORD *)v14 + 6);
            v29 = v14[14];
            *((_OWORD *)v13 + 5) = v27;
            *((_OWORD *)v13 + 6) = v28;
            *((_QWORD *)v13 + 14) = v29;
            TargetHandle = 0LL;
            v47 = 0LL;
            v49 = 0LL;
            v50 = 0LL;
            v51 = 0LL;
            v52 = 0LL;
            v53 = 0LL;
            if ( v22 )
            {
              v10 = ZwDuplicateObject(ProcessHandle, v22, SourceProcessHandle, &TargetHandle, 0, 0, 2u);
              if ( v10 < 0 )
                goto LABEL_48;
            }
            if ( v56 )
            {
              v10 = ZwDuplicateObject(ProcessHandle, v56, SourceProcessHandle, &v47, 0, 0, 2u);
              if ( v10 < 0 )
                goto LABEL_48;
            }
            if ( v58 )
            {
              v10 = ZwDuplicateObject(ProcessHandle, v58, SourceProcessHandle, &v49, 0, 0, 2u);
              if ( v10 < 0 )
                goto LABEL_48;
            }
            if ( v59 )
            {
              v10 = ZwDuplicateObject(ProcessHandle, v59, SourceProcessHandle, &v50, 0, 0, 2u);
              if ( v10 < 0 )
                goto LABEL_48;
            }
            if ( v60 )
            {
              v10 = ZwDuplicateObject(ProcessHandle, v60, SourceProcessHandle, &v51, 0, 0, 2u);
              if ( v10 < 0 )
                goto LABEL_48;
            }
            if ( v61 )
            {
              v10 = ZwDuplicateObject(ProcessHandle, v61, SourceProcessHandle, &v52, 0, 0, 2u);
              if ( v10 < 0 )
                goto LABEL_48;
            }
            if ( v62 )
            {
              v10 = ZwDuplicateObject(ProcessHandle, v62, SourceProcessHandle, &v53, 0, 0, 2u);
              if ( v10 < 0 )
                goto LABEL_48;
            }
            RegionSize = v9;
            v10 = ZwAllocateVirtualMemory(SourceProcessHandle, &BaseAddressa, 0LL, &RegionSize, 0x1000u, 4u);
            if ( v10 < 0 )
              goto LABEL_48;
            v43 = v43 & 0xFFFFFFF8 | 1;
            if ( v48 )
              v48 = (char *)BaseAddressa + 1144;
            if ( v44 )
              v45 = (char *)BaseAddressa + 296;
            if ( (unsigned int)Feature_2609059128__private_IsEnabledDeviceUsageNoInline() )
            {
              v31 = 0LL;
              v30 = NtWriteVirtualMemory(SourceProcessHandle, BaseAddressa, v42, 0x478uLL, 0LL);
            }
            else
            {
              v30 = NtWriteVirtualMemory(SourceProcessHandle, BaseAddressa, v42, v9, 0LL);
              v31 = 0LL;
            }
            v10 = v30;
            if ( v30 < 0 )
              goto LABEL_48;
            if ( v57 )
            {
              RegionSize = 1LL;
              v10 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v37, 0LL, &RegionSize, 0x1000u, 4u);
              if ( v10 < 0 )
                goto LABEL_48;
              v32 = (unsigned int)v11;
              if ( (_DWORD)v11 )
              {
                while ( 1 )
                {
                  v33 = v32 - v31;
                  if ( RegionSize <= v32 - v31 )
                    v33 = RegionSize;
                  v10 = ZwReadVirtualMemory(ProcessHandle, (PVOID)(v31 + v57), v37, v33, &BufferSize);
                  if ( v10 < 0 )
                    break;
                  if ( BufferSize != v33 )
                    goto LABEL_46;
                  v10 = NtWriteVirtualMemory(
                          SourceProcessHandle,
                          (char *)BaseAddressa + v31 + 1144,
                          v37,
                          BufferSize,
                          &NumberOfBytesWritten);
                  if ( v10 < 0 )
                    break;
                  if ( NumberOfBytesWritten != BufferSize )
                  {
LABEL_46:
                    v10 = -2147483635;
                    break;
                  }
                  v31 += NumberOfBytesWritten;
                  if ( v31 >= v32 )
                    goto LABEL_44;
                }
                v7 = v39;
                goto LABEL_48;
              }
LABEL_44:
              ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v37, &RegionSize, 0x8000u);
              v7 = v39;
              v37 = 0LL;
            }
            v10 = 0;
            *v41 = BaseAddressa;
            goto LABEL_66;
          }
          v9 = -1;
        }
        v10 = -1073741675;
      }
    }
    else
    {
      v10 = -1073741816;
    }
  }
  else
  {
    v10 = -2147483635;
  }
LABEL_48:
  if ( v37 )
  {
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v37, &RegionSize, 0x8000u);
  }
  if ( BaseAddressa )
  {
    RegionSize = v9;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, 0x8000u);
  }
  if ( v52 )
    ZwDuplicateObject(SourceProcessHandle, v52, 0LL, 0LL, 0, 0, 1u);
  if ( v51 )
    ZwDuplicateObject(SourceProcessHandle, v51, 0LL, 0LL, 0, 0, 1u);
  if ( v49 )
    ZwDuplicateObject(SourceProcessHandle, v49, 0LL, 0LL, 0, 0, 1u);
  if ( v50 )
    ZwDuplicateObject(SourceProcessHandle, v50, 0LL, 0LL, 0, 0, 1u);
  if ( v47 )
    ZwDuplicateObject(SourceProcessHandle, v47, 0LL, 0LL, 0, 0, 1u);
  if ( TargetHandle )
    ZwDuplicateObject(SourceProcessHandle, TargetHandle, 0LL, 0LL, 0, 0, 1u);
  if ( v53 )
    ZwDuplicateObject(SourceProcessHandle, v53, 0LL, 0LL, 0, 0, 1u);
LABEL_66:
  if ( (a5 & 1) != 0 )
    PssNtFreeRemoteSnapshot(ProcessHandle, (PVOID *)v7);
  return (unsigned int)v10;
}
