/*
 * XREFs of MiSelectUserAddress @ 0x140995F80
 * Callers:
 *     MiSelectDataMapAddress @ 0x140995DF0 (MiSelectDataMapAddress.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14099B400 (MiAllocateNewSubAllocatedRegion.c)
 *     MiSelectImageMapAddress @ 0x14099EAF8 (MiSelectImageMapAddress.c)
 *     MiReserveUserMemoryInsertVad @ 0x140A0146C (MiReserveUserMemoryInsertVad.c)
 *     MiMapViewOfPhysicalSection @ 0x140A0228C (MiMapViewOfPhysicalSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x140A02A08 (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateEnclaveVad @ 0x140B6C330 (MiAllocateEnclaveVad.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 *     MiFindEmptyAddressRange @ 0x14099635C (MiFindEmptyAddressRange.c)
 *     MiInitializeVadCellBitMap @ 0x140A09018 (MiInitializeVadCellBitMap.c)
 *     MiFindEmptyAddressRangeDown @ 0x140A4F728 (MiFindEmptyAddressRangeDown.c)
 */

__int64 MiSelectUserAddress(
        int a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        ...)
{
  unsigned __int64 **v8; // r15
  int v9; // ebx
  _QWORD *v10; // r13
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rsi
  _KPROCESS *Process; // rcx
  int v17; // r12d
  unsigned __int64 v18; // rax
  unsigned __int64 *v19; // r14
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned __int64 *v22; // r14
  __int64 result; // rax
  unsigned __int64 v24; // r9
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  unsigned __int64 **v31; // [rsp+D0h] [rbp+48h] BYREF
  va_list va; // [rsp+D0h] [rbp+48h]
  unsigned __int64 v33; // [rsp+D8h] [rbp+50h]
  va_list va1; // [rsp+E0h] [rbp+58h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v31 = va_arg(va1, unsigned __int64 **);
  v33 = va_arg(va1, _QWORD);
  v8 = v31;
  v9 = 0;
  v10 = (_QWORD *)v33;
  *v31 = 0LL;
  *v10 = 0LL;
  if ( (unsigned int)HalSystemVectorDispatchEntry() )
    return 3221225793LL;
  v15 = a5;
  Process = KeGetCurrentThread()->ApcState.Process;
  v17 = 0;
  LODWORD(v31) = 0;
  v33 = a5;
  if ( (a1 & 0x100000) != 0 || (Process[1].DirectoryTableBase & 0x20000000000000LL) != 0 )
    v17 = 1;
  v18 = *(_QWORD *)&Process[1].PrimaryGroup;
  v19 = &Process[2].ActiveProcessors[3].StaticBitmap[12];
  v20 = v18 - 1;
  if ( v18 > 0x100000000LL || v12 <= v20 )
  {
    if ( a8 < 0 )
    {
      v21 = 1LL;
    }
    else if ( v17 || v12 >= v20 || v18 <= 0x100000000LL )
    {
      v21 = (a8 & 4) != 0;
    }
    else
    {
      v21 = 0LL;
      if ( v19[18] )
      {
        if ( v13 >= v19[25] )
        {
          v25 = 0LL;
          if ( v12 >> 16 <= v19[23] )
            v25 = 2LL;
          v21 = v25;
        }
      }
      else
      {
        v24 = v13 >> 16;
        if ( v24 && v12 - a2 + 1 >= 0x40000000 )
        {
          v19[26] = v24;
          v19[23] = v12 >> 16;
          v19[24] = v12 + 1;
          v19[25] = v24 << 16;
          v26 = MiInitializeVadCellBitMap(v19 + 18, 1LL);
          v14 = a4;
          v12 = a3;
          v27 = 0LL;
          if ( v26 >= 0 )
            v27 = 2LL;
          v21 = v27;
        }
        v13 = a2;
      }
    }
  }
  else
  {
    v21 = 2LL;
  }
  v22 = &v19[9 * v21];
  if ( (a1 & 0x20400000) != 0x20400000 )
  {
    if ( (a1 & 0x20000000) != 0 && a5 == 0x200000 && v14 >= 0x40000000 )
    {
      v15 = 0x40000000LL;
LABEL_42:
      v9 = 1;
      goto LABEL_12;
    }
    if ( (a8 & 4) == 0 || (a1 & 0x20400000) != 0x400000 )
      goto LABEL_12;
    if ( v14 >= 0x40000000 )
    {
      if ( (v14 & 0x3FFFFFFF) == 0 && a5 < 0x40000000 )
      {
        v15 = 0x40000000LL;
        goto LABEL_42;
      }
    }
    else if ( v14 < 0x200000 )
    {
      goto LABEL_12;
    }
    if ( (v14 & 0x1FFFFF) != 0 || a5 >= 0x200000 )
      goto LABEL_12;
    v15 = 0x200000LL;
    goto LABEL_42;
  }
LABEL_12:
  while ( 1 )
  {
    result = v17
           ? MiFindEmptyAddressRangeDown((_DWORD)v22, v14, v15, a6, v13, v12, a7, (__int64)v10)
           : MiFindEmptyAddressRange((_DWORD)v22, v14, v15, a6, v13, v12, a7, (__int64)v10, (__int64)va);
    if ( (int)result >= 0 || !v9 )
      break;
    if ( v15 == 0x40000000 )
    {
      LODWORD(v14) = a4;
      v15 = 0x200000LL;
      v12 = a3;
      v13 = a2;
    }
    else
    {
      if ( v15 != 0x200000 )
        break;
      if ( v33 == 0x200000 )
        return result;
      LODWORD(v14) = a4;
      v15 = v33;
      v12 = a3;
      v13 = a2;
    }
  }
  if ( v15 == 0x10000 )
  {
    if ( (_DWORD)v31 )
      *v8 = v22;
  }
  return result;
}
