/*
 * XREFs of ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4TVIDMM_ROTATE_FLAGS@@@Z @ 0x1401097D4
 * Callers:
 *     ?Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_HEAP_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ33PEAX@Z5TVIDMM_ROTATE_FLAGS@@@Z @ 0x140109670 (-Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_HEAP_ALLOC@@W4_MM_ROTATE_DIRECT.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1400F3100 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400F658C (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?IsRotateVAD@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ @ 0x140109F00 (-IsRotateVAD@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ.c)
 *     ?RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z @ 0x140109F50 (-RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x140109FF0 (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Rotate(
        union _LARGE_INTEGER a1,
        void *a2,
        int a3,
        struct _MDL *a4,
        SIZE_T Size,
        PMM_ROTATE_COPY_CALLBACK_FUNCTION CopyFunction,
        PVOID Context,
        char a8)
{
  int v8; // ebx
  __int64 v9; // r12
  char v10; // r14
  __int64 v11; // rdi
  union _LARGE_INTEGER v12; // r15
  SIZE_T v13; // r13
  __int64 v14; // rbx
  char v15; // si
  PVOID v16; // r11
  HANDLE v17; // rax
  union _LARGE_INTEGER v18; // rax
  NTSTATUS v19; // eax
  void *v20; // rcx
  unsigned __int64 v21; // rbx
  struct _EPROCESS *v22; // rax
  PMDL v24; // rax
  struct _MDL *v25; // rcx
  __int64 v26; // rcx
  __int64 CurrentProcess; // rax
  ULONG_PTR v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // r8
  PVOID v38; // rdi
  NTSTATUS (__stdcall *v39)(PMDL, PMDL, PVOID); // rsi
  PVOID v40; // r13
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rbx
  unsigned int v44; // edx
  __int64 v45; // r9
  __int64 *QuadPart; // r8
  __int64 v47; // rsi
  __int64 v48; // rdx
  PHYSICAL_ADDRESS v49; // rdi
  union _LARGE_INTEGER v50; // r15
  PHYSICAL_ADDRESS v51; // rbx
  SIZE_T v52; // r12
  SIZE_T v53; // [rsp+58h] [rbp-41h]
  ULONG_PTR v54; // [rsp+60h] [rbp-39h] BYREF
  union _LARGE_INTEGER v55; // [rsp+68h] [rbp-31h] BYREF
  ULONG_PTR NumberOfBytes[2]; // [rsp+70h] [rbp-29h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+80h] [rbp-19h] BYREF
  ULONG_PTR v58; // [rsp+88h] [rbp-11h] BYREF
  union _LARGE_INTEGER v59; // [rsp+90h] [rbp-9h] BYREF
  union _LARGE_INTEGER v60; // [rsp+E8h] [rbp+4Fh] BYREF
  PVOID VirtualAddress; // [rsp+F0h] [rbp+57h] BYREF
  int v62; // [rsp+F8h] [rbp+5Fh]
  PMDL NewMdl; // [rsp+100h] [rbp+67h]

  NewMdl = a4;
  v62 = a3;
  VirtualAddress = a2;
  v60 = a1;
  v10 = 0;
  v11 = a3;
  v12 = a1;
  v13 = 0LL;
  if ( *(_DWORD *)(a1.QuadPart + 168) == 4 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 11LL, a3, 0LL);
    WdLogGlobalForLineNumber = 213;
    goto LABEL_56;
  }
  v14 = *(_QWORD *)(a1.QuadPart + 64);
  v9 = 1LL;
  v15 = 0;
  while ( !v15 )
  {
    if ( *(_DWORD *)(v14 + 64) == 3 )
    {
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(
        (VIDMM_RECYCLE_HEAP_MGR *)a1.QuadPart,
        (struct VIDMM_RECYCLE_RANGE *)v14);
      LOBYTE(VirtualAddress) = 0;
      v33 = VIDMM_RECYCLE_RANGE::DebouncedUnlock((VIDMM_RECYCLE_RANGE *)v14, (bool *)&VirtualAddress);
      v13 = (unsigned int)v33;
      if ( v33 < 0 )
      {
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry3)(
          3LL,
          v14,
          (union _LARGE_INTEGER)v12.QuadPart,
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12.QuadPart + 80) + 32LL) + 8LL) + 8LL) + 16LL));
        v34 = *(_QWORD *)(v12.QuadPart + 80);
        WdLogGlobalForLineNumber = 3382;
        VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
          *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(v34 + 32) + 8LL),
          (struct VIDMM_RECYCLE_RANGE *)v14);
        return (unsigned int)v13;
      }
    }
    if ( v14 == *(_QWORD *)(v12.QuadPart + 72) )
    {
      v15 = 1;
    }
    else
    {
      v31 = *(_QWORD *)(v14 + 120);
      v32 = *(_QWORD *)(v14 + 72);
      v14 = 0LL;
      a1.QuadPart = v32 + 72;
      if ( v31 != a1.QuadPart )
        v14 = v31 - 120;
    }
  }
  VirtualAddress = *(PVOID *)(v12.QuadPart + 48);
  if ( !VIDMM_RECYCLE_MULTIRANGE::IsRotateVAD((VIDMM_RECYCLE_MULTIRANGE *)v12.QuadPart) )
  {
    if ( (unsigned int)v11 < 2 )
      goto LABEL_81;
    v26 = (unsigned int)(v11 - 2);
    if ( (unsigned int)v26 > 1 )
      return (unsigned int)v13;
    CurrentProcess = PsGetCurrentProcess(v26);
    g_DxgMmsBugcheckExportIndex = 1;
    v18.QuadPart = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry5)(
                     0LL,
                     270LL,
                     1LL,
                     CurrentProcess,
                     (union _LARGE_INTEGER)v12.QuadPart,
                     v11);
    WdLogGlobalForLineNumber = 213;
    goto LABEL_40;
  }
  if ( (unsigned int)v11 > 1 )
  {
    v13 = *(_QWORD *)(v12.QuadPart + 104);
    v53 = v13;
LABEL_10:
    v15 = a8;
    v18.QuadPart = -10000LL;
    if ( (_DWORD)v11 != 2 )
    {
      if ( (_DWORD)v11 == 3 )
      {
        v55.QuadPart = -10000LL;
        v8 = a8 & 1;
        NumberOfBytes[0] = v13;
        while ( 1 )
        {
          v19 = MmRotatePhysicalView(v16, NumberOfBytes, NewMdl, MmToRegularMemoryNoCopy, CopyFunction, Context);
          LODWORD(v13) = v19;
          if ( !v8 || v19 != 1073741849 )
            break;
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 3570;
          if ( ((unsigned __int8)v9 & (unsigned __int8)byte_14008A201) != 0 )
LABEL_56:
            McTemplateK0q_EtwWriteTransfer(v36, &EventPerformanceWarning, v37, 12);
          v38 = Context;
          v39 = CopyFunction;
          v40 = VirtualAddress;
          while ( MmRotatePhysicalView(
                    v40,
                    NumberOfBytes,
                    *(PMDL *)(v12.QuadPart + 112),
                    (MM_ROTATE_DIRECTION)v9,
                    v39,
                    v38) < 0 )
            KeDelayExecutionThread(0, 0, &v55);
          KeDelayExecutionThread(0, 0, &v55);
          v15 = a8;
          v16 = v40;
          LODWORD(v11) = v62;
        }
      }
      else
      {
        if ( (a8 & 2) != 0 )
        {
          v25 = *(struct _MDL **)(v12.QuadPart + 112);
          NewMdl = v25;
        }
        else
        {
          v25 = NewMdl;
        }
        v58 = v13;
        if ( g_bInjectRotateFailure )
        {
          LODWORD(v13) = -1073741823;
        }
        else
        {
          LODWORD(v13) = MmRotatePhysicalView(v16, &v58, v25, (MM_ROTATE_DIRECTION)v11, CopyFunction, Context);
          if ( (v13 & 0x80000000) == 0LL )
            goto LABEL_16;
        }
        if ( (v15 & 2) == 0 )
          goto LABEL_33;
        ExFreePoolWithTag(*(PVOID *)(v12.QuadPart + 112), 0);
        *(_QWORD *)(v12.QuadPart + 112) = 0LL;
      }
LABEL_15:
      if ( (v13 & 0x80000000) == 0LL )
      {
LABEL_16:
        if ( (unsigned int)v11 <= (unsigned int)v9 )
        {
          v21 = v53;
          v10 = v9;
          v24 = NewMdl;
          *(_QWORD *)(v12.QuadPart + 104) = v53;
          *(_QWORD *)(v12.QuadPart + 112) = v24;
        }
        else
        {
          if ( (v15 & 2) == 0 )
          {
            ExFreePoolWithTag(*(PVOID *)(v12.QuadPart + 112), 0);
            v20 = *(void **)(v12.QuadPart + 144);
            *(_QWORD *)(v12.QuadPart + 112) = 0LL;
            if ( v20 )
            {
              MmUnsecureVirtualMemory(v20);
              *(_QWORD *)(v12.QuadPart + 144) = 0LL;
            }
          }
          v21 = v53;
        }
        *(_BYTE *)(v12.QuadPart + 96) = v10;
LABEL_22:
        v22 = (struct _EPROCESS *)PsGetCurrentProcess(v20);
        VIDMM_GLOBAL::RecordRotation(v22, VirtualAddress, v21, NewMdl, (enum _MM_ROTATE_DIRECTION)v11, v13);
        return (unsigned int)v13;
      }
LABEL_33:
      if ( (_DWORD)v13 != -1073741558 || (int)v11 - 2 > (unsigned int)v9 )
      {
LABEL_34:
        v20 = *(void **)(v12.QuadPart + 144);
        if ( v20 )
        {
          MmUnsecureVirtualMemory(v20);
          *(_QWORD *)(v12.QuadPart + 144) = 0LL;
        }
        v21 = v53;
        goto LABEL_22;
      }
      v41 = *(_QWORD *)(v12.QuadPart + 112);
      if ( v41 )
      {
        v42 = v9;
        v43 = *(_QWORD *)(v41 + 48);
        v44 = *(_DWORD *)(v41 + 40) >> 12;
        v45 = v43;
        if ( v44 > (unsigned int)v9 )
        {
          QuadPart = (__int64 *)(v41 + 56);
          v55.QuadPart = v41 + 56;
          v47 = v44 - 1;
          do
          {
            v48 = *QuadPart;
            if ( *QuadPart == v45 + 1 )
            {
              v45 = *QuadPart;
              v42 += v9;
            }
            else
            {
              v49.QuadPart = v43 << 12;
              v59.QuadPart = v42 << 12;
              v43 = v48;
              if ( MmIsIoSpaceActive(v49, v42 << 12) )
              {
                v50 = v59;
                do
                {
                  v59.QuadPart = -10000LL;
                  KeDelayExecutionThread(0, 0, &v59);
                }
                while ( MmIsIoSpaceActive(v49, v50.QuadPart) );
              }
              QuadPart = (__int64 *)v55.QuadPart;
              v45 = v43;
              v42 = v9;
            }
            v55.QuadPart = (LONGLONG)++QuadPart;
            v47 -= v9;
          }
          while ( v47 );
          v15 = a8;
          v12 = v60;
          LODWORD(v11) = v62;
        }
        NumberOfBytes[0] = v42 << 12;
        v51.QuadPart = v43 << 12;
        if ( MmIsIoSpaceActive(v51, v42 << 12) )
        {
          v52 = NumberOfBytes[0];
          do
          {
            v60.QuadPart = -10000LL;
            KeDelayExecutionThread(0, 0, &v60);
          }
          while ( MmIsIoSpaceActive(v51, v52) );
        }
        if ( (v15 & 2) == 0 )
        {
          ExFreePoolWithTag(*(PVOID *)(v12.QuadPart + 112), 0);
          *(_QWORD *)(v12.QuadPart + 112) = 0LL;
        }
        *(_BYTE *)(v12.QuadPart + 96) = 0;
        goto LABEL_34;
      }
      g_DxgMmsBugcheckExportIndex = v9;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry5)(
        0LL,
        270LL,
        4LL,
        (union _LARGE_INTEGER)v12.QuadPart,
        -1073741558LL,
        0LL);
      WdLogGlobalForLineNumber = 213;
LABEL_81:
      LODWORD(v13) = -1073741823;
      return (unsigned int)v13;
    }
LABEL_40:
    Interval = v18;
    v28 = v13;
    while ( 1 )
    {
      v54 = v28;
      LODWORD(v13) = MmRotatePhysicalView(v16, &v54, NewMdl, MmToRegularMemory, CopyFunction, Context);
      if ( (_DWORD)v13 != 1073741849 )
        break;
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 3493;
      if ( (byte_14008A201 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v29, &EventPerformanceWarning, v30, 12);
      v28 -= v54;
      VirtualAddress = (char *)VirtualAddress + v54;
      KeDelayExecutionThread(0, 0, &Interval);
      v16 = VirtualAddress;
    }
    goto LABEL_15;
  }
  v13 = Size;
  v53 = Size;
  if ( *(_QWORD *)(v12.QuadPart + 144) )
    goto LABEL_10;
  v17 = MmSecureVirtualMemory(v16, Size, 4u);
  *(_QWORD *)(v12.QuadPart + 144) = v17;
  if ( v17 )
  {
    v16 = VirtualAddress;
    goto LABEL_10;
  }
  _InterlockedAdd(&dword_14008A7E8, 1u);
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 3428;
  DxgkLogInternalTriageEvent(v35, 262145LL);
  return 3221225495LL;
}
