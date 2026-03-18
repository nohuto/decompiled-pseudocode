/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KW4VIDMM_HEAP_ALLOCATE_FLAGS@@K@Z @ 0x1400AC650
 * Callers:
 *     ?CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KW4VIDMM_HEAP_ALLOCATE_FLAGS@@K@Z @ 0x1400AD5D8 (-CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KW4VIDMM_HEAP_ALLOCATE_FLA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pxqqt_EtwWriteTransfer @ 0x140043EF8 (McTemplateK0pxqqt_EtwWriteTransfer.c)
 *     ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z @ 0x140099D34 (-MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z.c)
 *     ?VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKKK@Z @ 0x1400A4AD8 (-VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKKK@Z.c)
 *     ?GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ @ 0x140110D54 (-GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ.c)
 */

__int64 __fastcall VIDMM_RECYCLE_BLOCK::Allocate(__int64 a1, ULONG_PTR a2, char a3, unsigned int a4)
{
  int *v4; // r11
  int v7; // edx
  int v8; // r8d
  int v10; // ecx
  char v11; // r10
  char v12; // si
  int v13; // r9d
  int v14; // ecx
  int v15; // eax
  unsigned int v16; // r8d
  int v17; // eax
  unsigned int v18; // esi
  __int64 v19; // rcx
  ULONG_PTR v20; // r8
  int v21; // ecx
  int v22; // esi
  PVOID *v23; // r14
  void *CurrentPartitionHandle; // rax
  int v25; // eax
  NTSTATUS inserted; // eax
  __int64 v27; // rdx
  int v28; // ecx
  NTSTATUS v29; // eax
  ULONG_PTR v30; // rax
  unsigned int v31; // r9d
  int v32; // eax
  unsigned int *v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r9
  PHANDLE Handle; // [rsp+28h] [rbp-50h]
  unsigned __int64 *v38; // [rsp+30h] [rbp-48h]
  void **v39; // [rsp+38h] [rbp-40h]
  ULONG_PTR v40; // [rsp+80h] [rbp+8h] BYREF
  ULONG_PTR ViewSize; // [rsp+88h] [rbp+10h] BYREF

  ViewSize = a2;
  v4 = *(int **)(a1 + 32);
  v7 = a3 & 4;
  v8 = a3 & 2;
  v10 = *v4;
  v11 = *((_BYTE *)v4 + 16);
  v12 = *((_BYTE *)v4 + 17);
  if ( *v4 == 9 || v10 == 10 )
  {
    *(_DWORD *)(a1 + 144) = 0x800000;
    v39 = (void **)(a1 + 40);
    v31 = 1028;
    if ( *v4 == 10 )
      v31 = 4;
    v32 = VIDMM_PROCESS::MapHostVirtualAddressToGuest(
            *(VIDMM_PROCESS **)(*((_QWORD *)v4 + 1) + 8LL),
            0LL,
            a2,
            0x800000LL,
            v31,
            (void **)(a1 + 128),
            (unsigned __int64 *)(a1 + 136));
    v18 = v32;
    if ( v32 < 0 )
    {
      _InterlockedIncrement(&dword_14008A748);
      WdLogSingleEntry1(6LL, v32);
      WdLogGlobalForLineNumber = 6756;
      goto LABEL_35;
    }
    v20 = ViewSize;
    v30 = ViewSize + *(_QWORD *)(a1 + 40);
    *(_BYTE *)(a1 + 148) |= 1u;
    goto LABEL_38;
  }
  if ( (unsigned int)(v10 - 3) <= 3 )
  {
    v40 = a2;
    v22 = a4 | (((v10 - 4) & 0xFFFFFFFD) != 0 ? 1208221696 : 134479872);
    if ( v11 && !v8 )
      v22 |= 0x80000u;
    v23 = (PVOID *)(a1 + 56);
    CurrentPartitionHandle = VIDMM_PROCESS::GetCurrentPartitionHandle();
    v25 = MmCreateSection(a1 + 56, 0LL, 0LL, &v40, 4, v22, CurrentPartitionHandle, 0LL);
    v18 = v25;
    if ( v25 < 0 )
    {
      _InterlockedIncrement(&dword_14008A810);
      WdLogSingleEntry1(6LL, v25);
      WdLogGlobalForLineNumber = 6862;
      goto LABEL_35;
    }
    ObfReferenceObject(*v23);
    inserted = ObInsertObject(*v23, 0LL, 0, 0, 0LL, (PHANDLE)(a1 + 64));
    v18 = inserted;
    if ( inserted < 0 )
    {
      WdLogSingleEntry2(1LL, *v23, inserted);
      v27 = 0x40000LL;
      WdLogGlobalForLineNumber = 6883;
LABEL_36:
      DxgkLogInternalTriageEvent(v19, v27);
      return v18;
    }
    v28 = **(_DWORD **)(a1 + 32);
    if ( v28 != 5 && v28 != 6 )
    {
      v20 = ViewSize;
      *(_QWORD *)(a1 + 48) = ViewSize;
      *(_QWORD *)(a1 + 40) = 0LL;
      goto LABEL_39;
    }
    v29 = MmMapViewInSystemSpace(*v23, (PVOID *)(a1 + 40), &ViewSize);
    v18 = v29;
    if ( v29 < 0 )
    {
      _InterlockedIncrement(&dword_14008A810);
      WdLogSingleEntry1(6LL, v29);
      WdLogGlobalForLineNumber = 6897;
      goto LABEL_35;
    }
    v20 = ViewSize;
    v30 = ViewSize + *(_QWORD *)(a1 + 40);
LABEL_38:
    *(_QWORD *)(a1 + 48) = v30;
    goto LABEL_39;
  }
  if ( v10 == 2 || (v13 = 1028, v10 == 8) )
    v13 = 4;
  v14 = 0x2000;
  *(_DWORD *)(a1 + 144) = 0x2000;
  if ( v12 )
  {
    v14 = 2105344;
    *(_DWORD *)(a1 + 144) = 2105344;
  }
  v15 = v14;
  if ( v11 && !v8 )
  {
    v15 = v14 | 0x20400000;
    *(_DWORD *)(a1 + 144) = v14 | 0x20400000;
  }
  v16 = v15;
  if ( v7 && !v11 )
  {
    v16 = v15 | 0x800000;
    *(_DWORD *)(a1 + 144) = v15 | 0x800000;
  }
  v17 = VidMmAllocateVirtualMemory((void **)(a1 + 40), &ViewSize, v16, v13, a4);
  v18 = v17;
  if ( v17 < 0 )
  {
    _InterlockedIncrement(&dword_14008A748);
    WdLogSingleEntry1(6LL, v17);
    WdLogGlobalForLineNumber = 6807;
LABEL_35:
    v27 = 262145LL;
    goto LABEL_36;
  }
  v20 = ViewSize;
  v21 = *(_DWORD *)(a1 + 144);
  *(_QWORD *)(a1 + 48) = ViewSize + *(_QWORD *)(a1 + 40);
  *(_BYTE *)(a1 + 148) = *(_BYTE *)(a1 + 148) & 0xFE | ((v21 & 0x800000) != 0);
LABEL_39:
  if ( (byte_14008A202 & 4) != 0 )
  {
    v34 = *(unsigned int **)(a1 + 32);
    v35 = *v34;
    if ( (_DWORD)v35 == 3 || (v36 = 40LL, (unsigned int)(v35 - 4) <= 2) )
      v36 = 56LL;
    LODWORD(v39) = 1;
    LODWORD(v38) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v34 + 1) + 8LL) + 24LL);
    LODWORD(Handle) = *v34;
    McTemplateK0pxqqt_EtwWriteTransfer(
      v35,
      &EventCreateProcessAllocation,
      v20,
      *(_QWORD *)(a1 + v36),
      v20,
      Handle,
      v38,
      v39);
  }
  return 0LL;
}
