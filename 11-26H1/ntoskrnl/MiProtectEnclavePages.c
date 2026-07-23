/*
 * XREFs of MiProtectEnclavePages @ 0x140513750
 * Callers:
 *     MmProtectVirtualMemory @ 0x140A03E98 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiPageTableLockIsContended @ 0x1402E88A0 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x14031A300 (MiWorkingSetIsContended.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiWriteEnclavePte @ 0x140342CF8 (MiWriteEnclavePte.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     KeCanChangeEnclavePageProtection @ 0x1405F10B0 (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x1405F1170 (KeChangeEnclavePageProtection.c)
 *     KeTrackEnclaveTbFlush @ 0x1405F12AC (KeTrackEnclaveTbFlush.c)
 *     MiFlushEnclaveTb @ 0x140704C84 (MiFlushEnclaveTb.c)
 *     MiUpdateEnclavePfnProtection @ 0x140704F70 (MiUpdateEnclavePfnProtection.c)
 *     VslDebugProtectSecureProcessMemory @ 0x140B6D320 (VslDebugProtectSecureProcessMemory.c)
 */

__int64 __fastcall MiProtectEnclavePages(
        int a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        unsigned int a7,
        int a8,
        _DWORD *a9,
        unsigned __int64 *a10,
        __int64 *a11)
{
  int v11; // eax
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // r10
  __int64 result; // rax
  unsigned int v16; // ebx
  unsigned int v17; // ebp
  unsigned int v18; // r12d
  int v19; // ecx
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r14
  __int64 v22; // rsi
  struct _LIST_ENTRY **p_Blink; // r15
  signed __int64 ValidPte; // rdi
  __int64 v25; // rdx
  __int64 v26; // r8
  KIRQL v27; // al
  ULONG_PTR v28; // r8
  unsigned int v29; // r11d
  unsigned __int64 v30; // r13
  __int64 *v31; // rax
  ULONG_PTR i; // r15
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // r8
  unsigned __int64 v36; // rdx
  _KPROCESS *v37; // rax
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // rcx
  __int64 v40; // rax
  unsigned __int64 v41; // rbx
  _KPROCESS *v42; // rax
  unsigned __int64 v43; // rdx
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v45; // rax
  __int64 v46; // r10
  __int64 v47; // rcx
  __int64 *v48; // r10
  int v49; // ebx
  __int64 v50; // rdx
  unsigned __int64 v51; // rcx
  KIRQL v52; // [rsp+30h] [rbp-88h]
  unsigned int v53; // [rsp+34h] [rbp-84h]
  __int64 *ProcessorFlushList; // [rsp+38h] [rbp-80h]
  __int64 v55; // [rsp+40h] [rbp-78h]
  int v56; // [rsp+48h] [rbp-70h]
  unsigned __int64 v57; // [rsp+50h] [rbp-68h]
  unsigned int v58; // [rsp+58h] [rbp-60h]
  ULONG_PTR BugCheckParameter4; // [rsp+60h] [rbp-58h]
  int v60; // [rsp+68h] [rbp-50h]
  unsigned __int64 v61; // [rsp+70h] [rbp-48h]
  __int64 v62; // [rsp+D0h] [rbp+18h] BYREF
  unsigned __int64 v63; // [rsp+D8h] [rbp+20h] BYREF

  v63 = a4;
  v62 = a3;
  v11 = *(_DWORD *)(a3 + 72);
  v12 = a4;
  if ( (v11 & 1) == 0 )
  {
    v13 = *(_QWORD *)(a3 + 80);
    v14 = a5 - a4 + 1;
    v62 = v14;
    if ( *(_BYTE *)(v13 + 76) && (a8 & 0x20000000) != 0 )
    {
      *a9 = 4;
      result = 0LL;
    }
    else
    {
      result = VslDebugProtectSecureProcessMemory(a1, a2, (unsigned int)&v63, (unsigned int)&v62, a6, (__int64)a9);
      if ( (int)result < 0 )
        return result;
      v12 = v63;
      v14 = v62;
    }
    *a10 = v12;
    *a11 = v14;
    return result;
  }
  v16 = a8;
  v17 = 0;
  v18 = a7;
  v19 = a8 & 0x20000000;
  if ( (a8 & 0x20000000) != 0 )
  {
    if ( (a8 & 0x90000000) != 0 )
      return 3221225541LL;
  }
  else
  {
    if ( (v11 & 2) == 0 || (*(_DWORD *)(a3 + 80) & 1) == 0 )
      return 3221225496LL;
    if ( a8 < 0 )
    {
      if ( a8 == 0x80000000 && !a6 )
      {
        v17 = 8;
        goto LABEL_29;
      }
      return 3221225541LL;
    }
    if ( (a8 & 0x10000000) != 0 )
    {
      if ( a8 != 0x10000000 || a6 )
        return 3221225541LL;
      v17 = 128;
      goto LABEL_29;
    }
  }
  if ( a7 <= 7 )
  {
    if ( (a7 & 5) == 5 )
      return 3221225541LL;
    v17 = (a7 & 4 | 2) >> 1;
    if ( (a7 & 2) != 0 )
      v17 |= 4u;
  }
  else if ( a7 != 24 || v19 )
  {
    return 3221225541LL;
  }
LABEL_29:
  v20 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  BugCheckParameter4 = v20;
  v61 = ((a5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v60 = -1;
  ProcessorFlushList = 0LL;
  v56 = 0;
  v21 = 0LL;
  v22 = -1LL;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v55 = (__int64)p_Blink;
  if ( !v19 )
    v18 = a7 & 2 | 4;
  v58 = v19 != 0 ? 2 : 4;
  ValidPte = MiMakeValidPte(v20, -1LL, v18 | 0x80000000);
  v27 = MiLockWorkingSetShared((__int64)p_Blink, v25, v26);
  v28 = BugCheckParameter4;
  v29 = 0;
  v30 = v12 & 0xFFFFFFFFFFFFF000uLL;
  v52 = v27;
  v53 = 0;
  v31 = 0LL;
  while ( 2 )
  {
    v57 = v30;
    for ( i = v28; i <= v61; i += 8LL )
    {
      if ( (i & 0x78) != 0 || i == v28 )
      {
        if ( v21 )
          goto LABEL_46;
      }
      else
      {
        if ( MiWorkingSetIsContended(v55, 0) || KeShouldYieldProcessor() )
          goto LABEL_40;
        if ( v21 )
        {
          if ( !(unsigned int)MiPageTableLockIsContended(v55, v21) )
          {
            v29 = v53;
LABEL_46:
            if ( (i & 0xFFF) != 0 )
              goto LABEL_50;
            goto LABEL_47;
          }
LABEL_40:
          MiFlushEnclaveTb(ProcessorFlushList, v22, v16);
          v22 = -1LL;
          ProcessorFlushList = 0LL;
          if ( v21 )
          {
            MiUnlockPageTableInternal(v55, v21);
            v21 = 0LL;
          }
          LOBYTE(v33) = v52;
          MiUnlockWorkingSetShared(v55, v33);
          MiLockWorkingSetShared(v55, v34, v35);
        }
      }
LABEL_47:
      MiFlushEnclaveTb(ProcessorFlushList, v22, v16);
      v22 = -1LL;
      ProcessorFlushList = 0LL;
      if ( v21 )
        MiUnlockPageTableInternal(v55, v21);
      v21 = ((i >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(i, (*(_DWORD *)(v62 + 48) >> 10) & 0x7F, v52, 0);
      v29 = v53;
LABEL_50:
      if ( v29 )
      {
        if ( v29 == v58 - 1 )
        {
          v41 = *(_QWORD *)i;
          if ( i >= 0xFFFFF6FB7DBED000uLL
            && i <= 0xFFFFF6FB7DBED7F8uLL
            && (v41 & 1) != 0
            && ((v41 & 0x20) == 0 || (v41 & 0x42) == 0) )
          {
            v42 = MiPteHasShadow();
            if ( v42 )
            {
              KernelWaitTime = v42[2].KernelWaitTime;
              if ( KernelWaitTime )
              {
                v45 = *(_QWORD *)(KernelWaitTime + 8 * ((i >> 3) & 0x1FF));
                if ( (v45 & 0x20) != 0 )
                  v43 |= 0x20uLL;
                v41 = v43 | 0x42;
                if ( (v45 & 0x42) == 0 )
                  v41 = v43;
              }
            }
          }
          MiUpdateEnclavePfnProtection(48 * ((v41 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, v18);
          ValidPte = (v41 >> 12 << 12) ^ ((v41 >> 12 << 12) ^ ValidPte) & 0xFFF0000000000FFFuLL;
          MiWriteEnclavePte(i, ValidPte, v62, 1, 0);
          if ( (MiFlags & 0x400) == 0 && (MiFlags & 0x800) == 0
            || (v41 & 0x40) != 0 && (ValidPte & 0x40) == 0
            || (v41 & 2) != 0 && (ValidPte & 2) == 0
            || ValidPte < 0 && (v41 & 0x8000000000000000uLL) == 0LL )
          {
            v46 = (__int64)ProcessorFlushList;
            if ( !ProcessorFlushList )
            {
              ProcessorFlushList = MiGetProcessorFlushList();
              MiInitializeTbFlushList((__int64)ProcessorFlushList, v55, *((_DWORD *)ProcessorFlushList + 3), 8, 32);
              v46 = v47;
            }
            MiInsertTbFlushEntry(v46, v57, 1LL, 0);
          }
          v22 = v57;
          v16 = a8;
        }
        else if ( v29 == 1 )
        {
          v56 = KeCanChangeEnclavePageProtection(v57, v17);
          if ( v56 < 0 )
            goto LABEL_89;
        }
        else
        {
          KeChangeEnclavePageProtection(v57, v17);
          KeTrackEnclaveTbFlush((__int64)(*(_QWORD *)(v62 + 88) << 25) >> 16);
        }
        v28 = BugCheckParameter4;
        v29 = v53;
      }
      else
      {
        v36 = *(_QWORD *)i;
        if ( i >= 0xFFFFF6FB7DBED000uLL && i <= 0xFFFFF6FB7DBED7F8uLL )
        {
          if ( (v36 & 1) == 0 )
            goto LABEL_89;
          if ( (v36 & 0x20) == 0 || (v36 & 0x42) == 0 )
          {
            v37 = MiPteHasShadow();
            if ( v37 )
            {
              v39 = v37[2].KernelWaitTime;
              if ( v39 )
              {
                v40 = *(_QWORD *)(v39 + 8 * ((i >> 3) & 0x1FF));
                if ( (v40 & 0x20) != 0 )
                  v38 |= 0x20uLL;
                v36 = v38 | 0x42;
                if ( (v40 & 0x42) == 0 )
                  v36 = v38;
              }
            }
          }
        }
        if ( (v36 & 1) == 0 )
        {
LABEL_89:
          v48 = ProcessorFlushList;
          v49 = -1073741800;
          goto LABEL_90;
        }
        v28 = BugCheckParameter4;
        if ( i == BugCheckParameter4 )
          v60 = (*(_DWORD *)(48 * ((v36 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFF0LL) >> 5) & 0x1F;
      }
      v31 = ProcessorFlushList;
      v57 += 4096LL;
    }
    v48 = v31;
    v49 = v56;
    v53 = ++v29;
    if ( v29 < v58 )
    {
      v16 = a8;
      ProcessorFlushList = v31;
      continue;
    }
    break;
  }
LABEL_90:
  MiFlushEnclaveTb(v48, v22, (unsigned int)a8);
  if ( v21 )
    MiUnlockPageTableInternal(v55, v21);
  LOBYTE(v50) = v52;
  MiUnlockWorkingSetShared(v55, v50);
  if ( v49 >= 0 )
  {
    *a9 = MmProtectToValue[v60];
    v51 = (a5 & 0xFFFFFFFFFFFFF000uLL) - v30;
    *a10 = v30;
    v49 = 0;
    *a11 = v51 + 4096;
  }
  return (unsigned int)v49;
}
