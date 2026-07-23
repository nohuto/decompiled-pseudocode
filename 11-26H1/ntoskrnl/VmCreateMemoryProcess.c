/*
 * XREFs of VmCreateMemoryProcess @ 0x140B518E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwAllocateVirtualMemory @ 0x1407282C0 (ZwAllocateVirtualMemory.c)
 *     PsCreateMinimalProcess @ 0x140801BC8 (PsCreateMinimalProcess.c)
 *     VmpLogCreateMemoryProcess @ 0x140824744 (VmpLogCreateMemoryProcess.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall VmCreateMemoryProcess(__int64 a1, __int64 a2, void *a3, int a4, void *a5, __int64 a6, _QWORD *a7)
{
  char v7; // bl
  HANDLE v8; // rdi
  unsigned int v9; // esi
  int v10; // r12d
  char v11; // r15
  NTSTATUS v14; // r14d
  int v15; // edx
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  HANDLE v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  void *v22; // r10
  UNICODE_STRING *v23; // r11
  HANDLE ProcessHandle; // [rsp+60h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-18h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp-10h] BYREF

  v7 = *(_BYTE *)(a1 + 1530);
  v8 = 0LL;
  BaseAddress = 0LL;
  RegionSize = 0LL;
  ProcessHandle = 0LL;
  v9 = (a4 & 0x20 | 0x40u) >> 3;
  v10 = 0;
  v11 = a4;
  if ( (a4 & 0xFFFFFF80) != 0 )
  {
    v14 = -1073741811;
  }
  else
  {
    v15 = ((a4 & 1) << 13) | 0x4000;
    if ( (a4 & 2) == 0 )
      v15 = (a4 & 1) << 13;
    v16 = v15 | 0x20000;
    if ( (a4 & 4) == 0 )
      v16 = v15;
    v17 = v16 | 0x400;
    if ( (a4 & 0x10) == 0 )
      v17 = v16;
    v10 = v17 | 0x400000;
    if ( (a4 & 0x40) == 0 )
      v10 = v17;
    v18 = PsCreateMinimalProcess(a1, a2, 0LL, v7, a3, v10, v9, 0LL, a5, 0LL, a6, &ProcessHandle);
    v8 = ProcessHandle;
    v14 = v18;
    if ( v18 >= 0 )
    {
      RegionSize = 4294901760LL;
      BaseAddress = (PVOID)0x10000;
      if ( (v10 & 0x6000) != 0
        || (v14 = ZwAllocateVirtualMemory(ProcessHandle, &BaseAddress, 0LL, &RegionSize, 0x2000u, 1u), v14 >= 0) )
      {
        if ( (v11 & 8) == 0 )
        {
          ProcessHandle = 0LL;
          ObReferenceObjectByHandle(v8, 0, (POBJECT_TYPE)PsProcessType, 0, &ProcessHandle, 0LL);
          v19 = ProcessHandle;
          _InterlockedOr((volatile signed __int32 *)ProcessHandle + 383, 0x2000u);
          ObfDereferenceObject(v19);
        }
        *a7 = v8;
        v8 = 0LL;
        v14 = 0;
      }
    }
  }
  if ( stru_140F06A28.InitialStack
    && *(_DWORD *)stru_140F06A28.InitialStack
    && tlgKeywordOn((__int64)stru_140F06A28.InitialStack, 128LL) )
  {
    VmpLogCreateMemoryProcess(v20, v22, v23, v10, v9, (__int64)a5, v7, v21, (struct _KPROCESS *)a1, v14);
  }
  if ( v8 )
    ZwClose(v8);
  return (unsigned int)v14;
}
