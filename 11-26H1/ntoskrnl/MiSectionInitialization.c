/*
 * XREFs of MiSectionInitialization @ 0x140CFEA3C
 * Callers:
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 * Callees:
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObCreateObjectType @ 0x14077E5D0 (ObCreateObjectType.c)
 *     ObInsertObject @ 0x140906AE0 (ObInsertObject.c)
 *     ObCreateObject @ 0x14090EB60 (ObCreateObject.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 MiSectionInitialization()
{
  _QWORD *PoolMm; // rbx
  _QWORD *v2; // r10
  __int64 v3; // r8
  unsigned __int64 v4; // r9
  UNICODE_STRING v5; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v6[2]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v7[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v8; // [rsp+78h] [rbp-88h]
  _QWORD *v9; // [rsp+80h] [rbp-80h]
  int v10; // [rsp+88h] [rbp-78h]
  int v11; // [rsp+8Ch] [rbp-74h]
  __int128 v12; // [rsp+90h] [rbp-70h]
  __int16 v13; // [rsp+A0h] [rbp-60h] BYREF
  char v14; // [rsp+A2h] [rbp-5Eh]
  int v15; // [rsp+A4h] [rbp-5Ch]
  int v16; // [rsp+A8h] [rbp-58h]
  __int128 v17; // [rsp+ACh] [rbp-54h]
  int v18; // [rsp+BCh] [rbp-44h]
  int v19; // [rsp+C4h] [rbp-3Ch]
  int v20; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall *v21)(__int64, __int64, __int64, __int64); // [rsp+D8h] [rbp-28h]
  __int64 (__fastcall *v22)(__int64, __int64); // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v23)(__int64); // [rsp+E8h] [rbp-18h]
  PVOID Object; // [rsp+140h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+148h] [rbp+48h] BYREF

  *(_QWORD *)&v5.Length = 1048590LL;
  v7[1] = 0;
  v5.Buffer = L"Section";
  v11 = 0;
  Object = 0LL;
  Handle = 0LL;
  v6[0] = 3014700LL;
  v6[1] = L"\\Device\\PhysicalMemory";
  qword_140E2C948 = 0LL;
  memset_0(&v13, 0, 0x78uLL);
  v14 |= 4u;
  v21 = MiSectionOpen;
  v13 = 120;
  v22 = MiSectionClose;
  v16 = 256;
  v23 = MiSectionDelete;
  v19 = 1;
  v20 = 64;
  v18 = 983071;
  v15 = 128;
  v17 = MiSectionMapping;
  if ( (int)ObCreateObjectType(&v5, &v13, 0LL, (__int64)&MmSectionObjectType) < 0 )
    return 0LL;
  PoolMm = (_QWORD *)ExAllocatePoolMm(
                       256LL,
                       0x48uLL,
                       1733520717,
                       KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  if ( !PoolMm )
    return 0LL;
  memset_0(&qword_140E2D218, 0, 0x80uLL);
  memset_0(&qword_140E2D178, 0, 0xA0uLL);
  PoolMm[5] = 0LL;
  dword_140E2D250 |= 0x400u;
  qword_140E2D178 = (__int64)&qword_140E2D218;
  qword_140E2D218 = (__int64)PoolMm;
  qword_140E2D230 = 1LL;
  *PoolMm = &qword_140E2D218;
  v9 = v6;
  v7[0] = 48;
  v8 = 0LL;
  v10 = 65552;
  v12 = 0LL;
  if ( (int)ObCreateObject(0, MmSectionObjectType, (__int64)v7, 0, 0, 64, 64, 0, &Object) < 0 )
  {
    ExFreePoolWithTag(PoolMm, 0);
    return 0LL;
  }
  v2 = Object;
  *((_QWORD *)Object + 5) = &qword_140E2D218;
  v2[6] = (1LL << dword_140E2D878) - 1;
  *((_DWORD *)v2 + 14) = 0;
  *((_DWORD *)v2 + 15) = *((_DWORD *)v2 + 15) & 0xFFFFF000 | 0x40;
  if ( ObInsertObject(v2, 0LL, 4u, 0, 0LL, &Handle) < 0 )
    return 0LL;
  ObCloseHandle(Handle, 0);
  *(_QWORD *)&stru_140E2D2D0.WaitRegister.Flags = MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, 1u, v3, v4);
  if ( !*(_QWORD *)&stru_140E2D2D0.WaitRegister.Flags )
    return 0LL;
  stru_140E2D2D0.SchedulingGroup = 0LL;
  return 1LL;
}
