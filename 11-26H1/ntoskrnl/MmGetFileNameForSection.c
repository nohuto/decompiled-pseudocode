/*
 * XREFs of MmGetFileNameForSection @ 0x140B28404
 * Callers:
 *     DbgkpSectionToFileHandle @ 0x140B28350 (DbgkpSectionToFileHandle.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x140263F30 (MiDereferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiReferenceControlAreaFile @ 0x1404419A0 (MiReferenceControlAreaFile.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     ObQueryNameStringMode @ 0x140922640 (ObQueryNameStringMode.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmGetFileNameForSection(__int64 a1, __int64 *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  unsigned __int64 v8; // r14
  ULONG_PTR v9; // rsi
  int v10; // eax
  int v11; // ebp
  unsigned int v12; // ebp
  int v13; // eax
  __int64 v14; // rax
  __int64 result; // rax
  unsigned int v16; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 56);
  v3 = 0;
  v16 = 0;
  *a2 = 0LL;
  if ( (v2 & 0x20) == 0 )
    return 3221225545LL;
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(256LL, 0x400uLL, 1850108237, CurrentProcessorColor | 0x80000000);
  *a2 = PoolMm;
  if ( !PoolMm )
    return 3221225495LL;
  v8 = MiSectionControlArea(a1);
  v9 = MiReferenceControlAreaFile(v8);
  v10 = ObQueryNameStringMode(v9, *a2, 0x400u, &v16, 0);
  v11 = v10;
  if ( v10 >= 0 )
  {
LABEL_8:
    MiDereferenceControlAreaFile(v8, v9);
    return v3;
  }
  if ( v10 != -1073741820 )
    goto LABEL_13;
  ExFreePoolWithTag((PVOID)*a2, 0);
  v12 = v16 + 1024;
  if ( v16 >= 0xFFFFFC00 || v16 == 0 )
  {
    *a2 = 0LL;
    MiDereferenceControlAreaFile(v8, v9);
    return 3221225495LL;
  }
  v13 = MmGetCurrentProcessorColor();
  v14 = ExAllocatePoolMm(256LL, v12, 1850108237, v13 | 0x80000000);
  *a2 = v14;
  if ( !v14 )
  {
    v3 = -1073741801;
    goto LABEL_8;
  }
  v11 = ObQueryNameStringMode(v9, v14, v12, &v16, 0);
  if ( v11 >= 0 )
    goto LABEL_8;
LABEL_13:
  MiDereferenceControlAreaFile(v8, v9);
  ExFreePoolWithTag((PVOID)*a2, 0);
  result = (unsigned int)v11;
  *a2 = 0LL;
  return result;
}
