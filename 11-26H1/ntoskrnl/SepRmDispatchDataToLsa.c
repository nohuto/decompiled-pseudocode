/*
 * XREFs of SepRmDispatchDataToLsa @ 0x1404DDA94
 * Callers:
 *     SepAdtLogAuditRecord @ 0x1402153F8 (SepAdtLogAuditRecord.c)
 *     SepRmCallLsa @ 0x1402C3DC0 (SepRmCallLsa.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216B70 (PsGetServerSiloGlobals.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x1407237B0 (ZwFreeVirtualMemory.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1407245B0 (ZwAlpcSendWaitReceivePort.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     SepAuditFailed @ 0x14092FD10 (SepAuditFailed.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x140B6DC5C (SepAdtCopyToLsaSharedMemory.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  __int64 v11; // rcx
  int v12; // eax
  void *v13; // rcx
  size_t v14; // r8
  int v15; // eax
  int v16; // eax
  __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD v19[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+70h] [rbp-90h]
  int v21; // [rsp+78h] [rbp-88h]
  int v22; // [rsp+7Ch] [rbp-84h] BYREF
  PVOID BaseAddress[58]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v24[40]; // [rsp+250h] [rbp+150h] BYREF
  unsigned int v25; // [rsp+278h] [rbp+178h]
  char Src[468]; // [rsp+27Ch] [rbp+17Ch] BYREF

  memset_0(&v22, 0, 0x1D4uLL);
  memset_0(v24, 0, 0x200uLL);
  v2 = *(_QWORD *)(a1 + 56);
  RegionSize = 0LL;
  v17 = 0LL;
  ServerSiloGlobals = PsGetServerSiloGlobals(v2);
  if ( !*((_QWORD *)ServerSiloGlobals + 99) )
    return 0LL;
  v4 = *(_DWORD *)(a1 + 16);
  v20 = 0LL;
  v5 = *(_WORD *)(a1 + 36) + 48;
  memset(v19, 0, sizeof(v19));
  WORD1(v19[0]) = v5;
  LOWORD(v19[0]) = v5 - 40;
  v21 = *(_DWORD *)(a1 + 32);
  v6 = v4 - 1;
  if ( v6 )
  {
    v7 = v6 - 3;
    if ( v7 && (unsigned int)(v7 - 1) >= 2 )
      return (unsigned int)-1073741811;
    v14 = *(unsigned int *)(a1 + 36);
    if ( (unsigned int)v14 <= 0x1D0 )
    {
      memmove(BaseAddress, *(const void **)(a1 + 24), v14);
      v22 = 1;
    }
    else
    {
      v15 = SepAdtCopyToLsaSharedMemory(*((HANDLE *)ServerSiloGlobals + 98));
      v8 = v15;
      if ( v15 < 0 )
      {
        SepAuditFailed((unsigned int)v15);
        return v8;
      }
      BaseAddress[0] = (PVOID)v17;
      v22 = 3;
      LODWORD(v19[0]) = 3670032;
    }
    v16 = *(_DWORD *)(a1 + 16);
    if ( v16 == 4 || v16 == 5 )
      ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0);
LABEL_9:
    if ( *(_DWORD *)(a1 + 32) != 3 || *(_QWORD *)(a1 + 40) )
    {
      v11 = *((_QWORD *)ServerSiloGlobals + 99);
      v17 = 512LL;
      v12 = ((__int64 (__fastcall *)(__int64, __int64, _OWORD *, _QWORD, _BYTE *, __int64 *, _QWORD, _QWORD))ZwAlpcSendWaitReceivePort)(
              v11,
              0x20000LL,
              v19,
              0LL,
              v24,
              &v17,
              0LL,
              0LL);
    }
    else
    {
      v12 = ZwAlpcSendWaitReceivePort(*((_QWORD *)ServerSiloGlobals + 99), 0x10000LL, v19, 0LL, 0LL, 0LL, 0LL, 0LL, v17);
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
