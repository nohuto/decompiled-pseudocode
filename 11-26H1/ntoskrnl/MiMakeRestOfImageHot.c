/*
 * XREFs of MiMakeRestOfImageHot @ 0x1408816B4
 * Callers:
 *     MiWalkEntireSubsection @ 0x14031D3A0 (MiWalkEntireSubsection.c)
 * Callees:
 *     MiIssuePageHeatList @ 0x1402D58BC (MiIssuePageHeatList.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiInitializePageHeatList @ 0x1404655D0 (MiInitializePageHeatList.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiWalkEntireImage @ 0x140ACA024 (MiWalkEntireImage.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMakeRestOfImageHot(__int64 *a1)
{
  __int64 *v2; // rax
  __int64 v3; // r14
  unsigned int v4; // edi
  int CurrentProcessorColor; // eax
  _DWORD *PoolMm; // rbx
  __int64 v7; // rax
  int v8; // ecx
  int v9; // r8d
  unsigned __int64 v10; // rdx
  _QWORD v12[2]; // [rsp+20h] [rbp-99h] BYREF
  int v13; // [rsp+30h] [rbp-89h]
  int v14; // [rsp+34h] [rbp-85h]
  int v15; // [rsp+38h] [rbp-81h]
  int v16; // [rsp+3Ch] [rbp-7Dh]
  __int64 (__fastcall *v17)(__int64); // [rsp+40h] [rbp-79h]
  _QWORD v18[3]; // [rsp+48h] [rbp-71h] BYREF
  _BYTE v19[144]; // [rsp+60h] [rbp-59h] BYREF

  memset_0(v19, 0, sizeof(v19));
  v2 = (__int64 *)a1[1];
  v16 = 0;
  v3 = *v2;
  v4 = *(_DWORD *)(*(_QWORD *)*v2 + 8LL);
  if ( v4 >= 0x1FF )
  {
    v4 = 511;
    goto LABEL_5;
  }
  if ( v4 > 0x10 )
  {
LABEL_5:
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = (_DWORD *)ExAllocatePoolMm(66LL, 8LL * v4 + 16, 1818782029, CurrentProcessorColor | 0x80000000);
    if ( PoolMm )
      goto LABEL_7;
  }
  v4 = 16;
  PoolMm = v19;
LABEL_7:
  MiInitializePageHeatList((__int64)PoolMm, 1, 1, v4);
  v18[0] = PoolMm;
  v12[1] = v18;
  v17 = MiWalkImageMakePageHot;
  v7 = *a1;
  v18[1] = a1;
  v12[0] = v3;
  v8 = *(_DWORD *)(v7 + 16);
  v14 = *((_DWORD *)a1 + 4);
  LODWORD(v7) = v9 | *((_DWORD *)a1 + 5);
  v13 = v8;
  v15 = v7;
  MiWalkEntireImage(v12);
  if ( PoolMm[1] )
    MiIssuePageHeatList(PoolMm, v10);
  if ( PoolMm != (_DWORD *)v19 )
    ExFreePoolWithTag(PoolMm, 0);
  return 0LL;
}
