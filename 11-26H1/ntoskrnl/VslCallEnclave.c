/*
 * XREFs of VslCallEnclave @ 0x140B1C25C
 * Callers:
 *     PsCallEnclave @ 0x140803C20 (PsCallEnclave.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     MmProbeAndLockPagesEx @ 0x1403A1820 (MmProbeAndLockPagesEx.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     KeAlertThreadByThreadId @ 0x1404F297C (KeAlertThreadByThreadId.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslCallEnclave(
        __int64 a1,
        int *a2,
        __int64 *a3,
        int a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7,
        _DWORD *a8,
        _BYTE *a9)
{
  __int64 result; // rax
  int v13; // r8d
  int v14; // ebx
  char v15; // al
  __int64 v16; // rdx
  void *v17; // r8
  unsigned int v18; // r9d
  __int64 CurrentThread; // [rsp+30h] [rbp-C1h]
  __int64 MemoryDescriptorList; // [rsp+38h] [rbp-B9h] BYREF
  __int16 MemoryDescriptorList_8; // [rsp+40h] [rbp-B1h]
  __int16 MemoryDescriptorList_10; // [rsp+42h] [rbp-AFh]
  __int128 MemoryDescriptorList_12; // [rsp+44h] [rbp-ADh]
  int MemoryDescriptorList_28; // [rsp+54h] [rbp-9Dh]
  unsigned __int64 MemoryDescriptorList_32; // [rsp+58h] [rbp-99h]
  int MemoryDescriptorList_40; // [rsp+60h] [rbp-91h]
  _BYTE MemoryDescriptorList_44[12]; // [rsp+64h] [rbp-8Dh]
  _BYTE v29[4]; // [rsp+70h] [rbp-81h] BYREF
  int v30; // [rsp+74h] [rbp-7Dh]
  int v31; // [rsp+78h] [rbp-79h]
  int v32; // [rsp+7Ch] [rbp-75h]
  __int64 v33; // [rsp+80h] [rbp-71h]
  __int64 v34; // [rsp+88h] [rbp-69h]
  __int64 v35; // [rsp+90h] [rbp-61h]
  __int64 v36; // [rsp+98h] [rbp-59h]
  __int64 v37; // [rsp+A0h] [rbp-51h]
  int v38; // [rsp+A8h] [rbp-49h]
  char v39; // [rsp+ACh] [rbp-45h]
  char v40; // [rsp+ADh] [rbp-44h]

  memset_0(v29, 0, 0x68uLL);
  MemoryDescriptorList_28 = 0;
  *(_DWORD *)&MemoryDescriptorList_44[8] = 0;
  MemoryDescriptorList_12 = 0LL;
  CurrentThread = (__int64)KeGetCurrentThread();
  MemoryDescriptorList = 0LL;
  MemoryDescriptorList_10 = 0;
  MemoryDescriptorList_40 = 1944;
  MemoryDescriptorList_8 = 8 * (((unsigned __int16)((CurrentThread & 0xFFF) + 6039) >> 12) + 6);
  MemoryDescriptorList_32 = CurrentThread & 0xFFFFFFFFFFFFF000uLL;
  *(_QWORD *)MemoryDescriptorList_44 = CurrentThread & 0xFFF;
  result = MmProbeAndLockPagesEx((__int64)&MemoryDescriptorList, 2uLL);
  if ( (int)result >= 0 )
  {
    v13 = *a2;
    v31 = a4;
    v32 = *(_DWORD *)(a1 + 40);
    v33 = *a3;
    v34 = *a5;
    v35 = *(_QWORD *)&MemoryDescriptorList_44[4];
    v36 = *a6;
    v37 = *a7;
    v39 = 0;
    v14 = VslpEnterIumSecureMode(1u, 0, v13, (__int64)v29);
    if ( v14 < 0 )
    {
      *a9 = 0;
    }
    else
    {
      *a2 = v30;
      *a3 = v33;
      *a5 = v34;
      *a8 = v38;
      v15 = v40;
      *a6 = v36;
      *a7 = v37;
      *a9 = v15;
    }
    MmUnlockPages((PMDL)&MemoryDescriptorList);
    if ( v39 )
      KeAlertThreadByThreadId(CurrentThread, v16, v17, v18);
    return (unsigned int)v14;
  }
  return result;
}
