/*
 * XREFs of PssNtFreeSnapshot @ 0x1800B2AB0
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1800B2290 (PssNtCaptureSnapshot.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180159A3C (PsspDuplicateSnapshotLocalToRemote.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     PssNtValidateDescriptor @ 0x1800B31B0 (PssNtValidateDescriptor.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x18015F200 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall PssNtFreeSnapshot(__int64 a1)
{
  __int64 result; // rax
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  int v9; // eax
  void *v10; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]
  PVOID BaseAddress; // [rsp+38h] [rbp+10h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+18h] BYREF

  BaseAddress = 0LL;
  RegionSize = 0LL;
  result = PssNtValidateDescriptor(a1, retaddr);
  if ( (int)result >= 0 )
  {
    if ( (*(_BYTE *)(a1 + 4) & 2) != 0 )
    {
      v10 = *(void **)(a1 + 904);
      if ( v10 )
      {
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v10);
        *(_QWORD *)(a1 + 904) = 0LL;
      }
      *(_DWORD *)(a1 + 4) &= ~2u;
    }
    else if ( (*(_BYTE *)(a1 + 4) & 4) != 0 && *(_QWORD *)(a1 + 904) )
    {
      BaseAddress = *(PVOID *)(a1 + 904);
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
      *(_DWORD *)(a1 + 4) &= ~4u;
      *(_QWORD *)(a1 + 904) = 0LL;
    }
    v3 = *(void **)(a1 + 1008);
    if ( v3 )
    {
      NtClose(v3);
      *(_QWORD *)(a1 + 1008) = 0LL;
    }
    v4 = *(void **)(a1 + 976);
    if ( v4 )
    {
      NtClose(v4);
      *(_QWORD *)(a1 + 976) = 0LL;
    }
    v5 = *(void **)(a1 + 920);
    if ( v5 )
    {
      NtClose(v5);
      *(_QWORD *)(a1 + 920) = 0LL;
    }
    v6 = *(void **)(a1 + 944);
    if ( v6 )
    {
      NtClose(v6);
      *(_QWORD *)(a1 + 944) = 0LL;
    }
    v7 = *(void **)(a1 + 896);
    if ( v7 )
    {
      NtClose(v7);
      *(_QWORD *)(a1 + 896) = 0LL;
    }
    v8 = *(void **)(a1 + 872);
    if ( v8 )
    {
      NtClose(v8);
      *(_QWORD *)(a1 + 872) = 0LL;
    }
    v9 = *(_DWORD *)(a1 + 4);
    if ( (v9 & 0x10) != 0 )
    {
      NtClose(*(HANDLE *)(a1 + 1128));
      *(_DWORD *)(a1 + 4) &= ~0x10u;
      v9 = *(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 1128) = 0LL;
      *(_DWORD *)(a1 + 1136) = 0;
    }
    if ( (v9 & 1) != 0 )
    {
      BaseAddress = (PVOID)a1;
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    }
    return 0LL;
  }
  return result;
}
