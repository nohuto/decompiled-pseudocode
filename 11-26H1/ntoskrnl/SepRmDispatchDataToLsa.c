/*
 * XREFs of SepRmDispatchDataToLsa @ 0x1404D7174
 * Callers:
 *     SepAdtLogAuditRecord @ 0x140215728 (SepAdtLogAuditRecord.c)
 *     SepRmCallLsa @ 0x14030EA80 (SepRmCallLsa.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x140728380 (ZwFreeVirtualMemory.c)
 *     ZwAlpcSendWaitReceivePort @ 0x140729180 (ZwAlpcSendWaitReceivePort.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SepAuditFailed @ 0x14090B840 (SepAuditFailed.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x140B7102C (SepAdtCopyToLsaSharedMemory.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepRmDispatchDataToLsa(__int64 a1)
{
  __int64 v2; // rcx
  void *ServerSiloGlobals; // rsi
  int v4; // ecx
  __int16 v5; // ax
  int v6; // ecx
  int v7; // ecx
  unsigned int v8; // ebx
  unsigned int v10; // eax
  void *v11; // rcx
  NTSTATUS v12; // eax
  void *v13; // rcx
  size_t v14; // r8
  void *v15; // rdx
  int v16; // eax
  int v17; // eax
  ULONG_PTR BufferLength; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-B8h] BYREF
  _PORT_MESSAGE SendMessageA; // [rsp+50h] [rbp-B0h] BYREF
  int v21; // [rsp+78h] [rbp-88h]
  int v22; // [rsp+7Ch] [rbp-84h] BYREF
  PVOID BaseAddress[58]; // [rsp+80h] [rbp-80h] BYREF
  _PORT_MESSAGE ReceiveMessage; // [rsp+250h] [rbp+150h] BYREF
  unsigned int v25; // [rsp+278h] [rbp+178h]
  char Src[468]; // [rsp+27Ch] [rbp+17Ch] BYREF

  memset_0(&v22, 0, 0x1D4uLL);
  memset_0(&ReceiveMessage, 0, 0x200uLL);
  v2 = *(_QWORD *)(a1 + 56);
  RegionSize = 0LL;
  BufferLength = 0LL;
  ServerSiloGlobals = PsGetServerSiloGlobals(v2);
  if ( !*((_QWORD *)ServerSiloGlobals + 99) )
    return 0LL;
  v4 = *(_DWORD *)(a1 + 16);
  v5 = *(_WORD *)(a1 + 36) + 48;
  memset(&SendMessageA, 0, sizeof(SendMessageA));
  SendMessageA.u1.s1.TotalLength = v5;
  SendMessageA.u1.s1.DataLength = v5 - 40;
  v21 = *(_DWORD *)(a1 + 32);
  v6 = v4 - 1;
  if ( v6 )
  {
    v7 = v6 - 3;
    if ( v7 && (unsigned int)(v7 - 1) >= 2 )
      return (unsigned int)-1073741811;
    v14 = *(unsigned int *)(a1 + 36);
    v15 = *(void **)(a1 + 24);
    if ( (unsigned int)v14 <= 0x1D0 )
    {
      memmove(BaseAddress, v15, v14);
      v22 = 1;
    }
    else
    {
      v16 = SepAdtCopyToLsaSharedMemory(*((HANDLE *)ServerSiloGlobals + 98), v15, v14);
      v8 = v16;
      if ( v16 < 0 )
      {
        SepAuditFailed((unsigned int)v16);
        return v8;
      }
      BaseAddress[0] = (PVOID)BufferLength;
      v22 = 3;
      SendMessageA.u1.Length = 3670032;
    }
    v17 = *(_DWORD *)(a1 + 16);
    if ( v17 == 4 || v17 == 5 )
      ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0);
LABEL_9:
    if ( *(_DWORD *)(a1 + 32) != 3 || *(_QWORD *)(a1 + 40) )
    {
      v11 = (void *)*((_QWORD *)ServerSiloGlobals + 99);
      BufferLength = 512LL;
      v12 = ZwAlpcSendWaitReceivePort(v11, 0x20000u, &SendMessageA, 0LL, &ReceiveMessage, &BufferLength, 0LL, 0LL);
    }
    else
    {
      v12 = ZwAlpcSendWaitReceivePort(
              *((HANDLE *)ServerSiloGlobals + 99),
              0x10000u,
              &SendMessageA,
              0LL,
              0LL,
              0LL,
              0LL,
              0LL);
      v25 = 0;
    }
    v8 = v12;
    if ( v12 >= 0 )
    {
      v13 = *(void **)(a1 + 40);
      if ( v13 )
        memmove(v13, Src, *(unsigned int *)(a1 + 48));
      v8 = v25;
    }
    if ( v22 == 3 )
    {
      RegionSize = 0LL;
      return (unsigned int)ZwFreeVirtualMemory(*((HANDLE *)ServerSiloGlobals + 98), BaseAddress, &RegionSize, 0x8000u);
    }
    return v8;
  }
  v10 = *(_DWORD *)(a1 + 36);
  v22 = 1;
  if ( v10 <= 0x1D0 )
  {
    memmove(BaseAddress, (const void *)(a1 + 24), v10);
    goto LABEL_9;
  }
  return (unsigned int)-1073741811;
}
