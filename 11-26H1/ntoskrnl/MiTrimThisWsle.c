/*
 * XREFs of MiTrimThisWsle @ 0x1403241C0
 * Callers:
 *     MiFastTrimWorkingSet @ 0x1403216C0 (MiFastTrimWorkingSet.c)
 *     MiTrimPteWorker @ 0x140322C20 (MiTrimPteWorker.c)
 *     MiTrimPte @ 0x140323430 (MiTrimPte.c)
 * Callees:
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiLocateCloneAddress @ 0x14036D7EC (MiLocateCloneAddress.c)
 */

__int64 __fastcall MiTrimThisWsle(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int *a4, char a5, _DWORD *a6)
{
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rdi
  int v12; // ebx
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  __int64 v15; // rsi
  unsigned int v16; // ebx
  int v17; // r8d
  unsigned __int64 v18; // r9
  __int64 v19; // rbx
  int v20; // r15d
  int v21; // ecx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v25; // rax
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // r9
  __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  _KPROCESS *v30; // r8
  unsigned __int64 v31; // r9
  __int64 v32; // rdx
  int *v33; // r8
  unsigned __int64 v34; // rdx
  int v35; // r8d
  _KPROCESS *v36; // rax
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  int PagePrivilege; // eax

  v9 = a2;
  v10 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = *(_QWORD *)v10;
  if ( v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v25 = *(_QWORD *)v10;
    if ( (v11 & 1) != 0 && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v28 = *(_QWORD *)(KernelWaitTime + 8 * ((v10 >> 3) & 0x1FF));
          if ( (v28 & 0x20) != 0 )
            v25 = v11 | 0x20;
          v11 = v25 | 0x42;
          if ( (v28 & 0x42) == 0 )
            v11 = v25;
        }
      }
    }
  }
  if ( a6 )
    *a6 = 0;
  v12 = *a4;
  v13 = 0xFFFFFFFFFFLL;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v14 = *(_QWORD *)v10;
    if ( v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v29 = *(_QWORD *)v10;
      if ( (v14 & 1) != 0 && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
      {
        v30 = KeGetCurrentThread()->ApcState.Process;
        if ( v30->AddressPolicy != 1 )
        {
          v31 = v30[2].KernelWaitTime;
          if ( v31 )
          {
            v32 = *(_QWORD *)(v31 + 8 * ((v10 >> 3) & 0x1FF));
            if ( (v32 & 0x20) != 0 )
              HIBYTE(v29) = HIBYTE(*(_QWORD *)v10);
            HIBYTE(v14) = HIBYTE(v29);
            if ( (v32 & 0x42) == 0 )
              HIBYTE(v14) = HIBYTE(v29);
          }
        }
      }
    }
    LODWORD(v15) = HIBYTE(v14) & 0xF;
  }
  else
  {
    v34 = *(_QWORD *)v10;
    if ( v10 >= 0xFFFFF6FB7DBED000uLL
      && v10 <= 0xFFFFF6FB7DBED7F8uLL
      && (v34 & 1) != 0
      && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
    {
      v36 = MiPteHasShadow();
      if ( v36 )
      {
        v38 = v36[2].KernelWaitTime;
        if ( v38 )
        {
          v39 = *(_QWORD *)(v38 + 8 * ((v10 >> 3) & 0x1FF));
          if ( (v39 & 0x20) != 0 )
            v37 |= 0x20uLL;
          v34 = v37 | 0x42;
          if ( (v39 & 0x42) == 0 )
            v34 = v37;
        }
      }
    }
    v15 = (*(_QWORD *)(48 * (v13 & (v34 >> 12)) - 0x220000000000LL) >> 46) & 7LL;
  }
  if ( (v12 & 0x600) != 0 )
  {
    if ( *(__int64 *)(a3 + 40) >= 0
      || ((v12 & 0x200) == 0
       || (*(_DWORD *)(a3 + 16) & 0x400LL) != 0
       || (*(__int64 *)(a3 + 8) <= 0 || (*(_QWORD *)(a3 + 40) & 0x10000000000LL) != 0)
       && !MiLocateCloneAddress(a1 - 1024, *(_QWORD *)(a3 + 8) | 0x8000000000000000uLL))
      && ((v12 & 0x400) == 0 || (*(_DWORD *)(a3 + 16) & 0x400LL) == 0) )
    {
      goto LABEL_16;
    }
    return 1LL;
  }
  v16 = v12 & 0xF;
  if ( !v16 )
    return 1LL;
  v17 = *(_DWORD *)(a3 + 32);
  if ( (*(_QWORD *)(a3 + 40) & 0x20000000000000LL) != 0 )
    goto LABEL_86;
  if ( (*(_DWORD *)(a3 + 32) & 0x8000000) != 0 )
  {
    if ( a3 >= 0xFFFFDE0000000000uLL )
    {
      v18 = 0xFFFFDE0000000000uLL;
      if ( a3 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
        || MiIsDecayPfn((__int64)(a3 + 0x220000000000LL) / 48)
        || (v17 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(a3) == 9 )
      {
        goto LABEL_13;
      }
      goto LABEL_12;
    }
LABEL_86:
    v18 = 0xFFFFDE0000000000uLL;
    goto LABEL_13;
  }
  v18 = 0xFFFFDE0000000000uLL;
LABEL_12:
  if ( (v17 & 0x7000000u) < 0x5000000 )
    return 1LL;
LABEL_13:
  if ( (unsigned int)v15 < v16 )
  {
LABEL_16:
    v19 = 2LL;
    goto LABEL_17;
  }
  if ( (a5 & 1) == 0 )
    return 1LL;
  if ( !*((_QWORD *)a4 + 11) )
    goto LABEL_16;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
  {
    v19 = 2LL;
    if ( (MiGetPagePrivilege((_QWORD *)(v18 + 48 * ((v11 >> 12) & 0xFFFFFFFFFFLL)), 2LL, 0LL) & 0x41) != 0 )
      goto LABEL_104;
    goto LABEL_108;
  }
  if ( v9 >= 0x7FFFFFFF0000LL )
    goto LABEL_16;
  if ( *(_QWORD *)(a1 + 624) )
  {
    v19 = 2LL;
    goto LABEL_104;
  }
  v19 = 2LL;
  PagePrivilege = MiGetPagePrivilege((_QWORD *)(v18 + 48 * ((v11 >> 12) & 0xFFFFFFFFFFLL)), 2LL, 0LL);
  if ( !PagePrivilege )
  {
LABEL_108:
    v20 = 2;
    goto LABEL_18;
  }
  if ( (*(_BYTE *)(a1 - 656) & 1) == 0 && (PagePrivilege & 8) != 0 )
  {
LABEL_17:
    v20 = 2;
    if ( (a5 & 1) == 0 )
    {
      v23 = a1;
LABEL_70:
      if ( (*(_DWORD *)(v23 + 184) & 0xF) != 0 && (unsigned __int16)*(_DWORD *)(a3 + 32) != 1 )
        return 0LL;
      if ( (unsigned int)v15 >= 6 )
        return 0LL;
      v35 = *(_DWORD *)(a3 + 32);
      if ( (*(_QWORD *)(a3 + 40) & 0x20000000000000LL) != 0
        || (*(_DWORD *)(a3 + 32) & 0x8000000) != 0
        && (a3 < 0xFFFFDE0000000000uLL
         || a3 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
         || MiIsDecayPfn((__int64)(a3 + 0x220000000000LL) / 48)
         || (v35 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(a3) == 9) )
      {
        return 0LL;
      }
      if ( (v35 & 0x7000000u) >= 0x5000000 )
        return 0LL;
      v19 = 1LL;
LABEL_62:
      v33 = &a4[20 * v19];
      if ( !*((_BYTE *)v33 + 168) )
      {
        *((_BYTE *)v33 + 168) = 1;
        *((_QWORD *)v33 + 20) = (__int64)(v10 << 25) >> 16;
      }
      *((_BYTE *)v33 + ((unsigned __int64)(((unsigned int)v10 >> 3) & 0x1FF) >> 3) + 96) |= 1 << (((unsigned int)v10 >> 3) & 7);
      return 0LL;
    }
LABEL_18:
    v21 = *(_DWORD *)(a1 + 184);
    if ( (v21 & 0xF) != 0 )
    {
      if ( !_bittest64(&MiFlags, 0x26u) || (v21 & 0x40) == 0 )
        goto LABEL_60;
    }
    else if ( !*(_QWORD *)(a1 + 624) && (*(_QWORD *)(a1 - 656) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
    {
      goto LABEL_60;
    }
    if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
    {
      if ( (MiGetPagePrivilege((_QWORD *)(48 * ((v11 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL), 2LL, 0LL) & 0x41) == 0 )
        goto LABEL_60;
    }
    else
    {
      if ( a2 >= 0x7FFFFFFF0000LL )
        goto LABEL_60;
      if ( !*(_QWORD *)(a1 + 624) )
      {
        v22 = MiGetPagePrivilege((_QWORD *)(48 * ((v11 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL), 2LL, 0LL);
        if ( !v22 )
          goto LABEL_60;
        v23 = a1;
        if ( (*(_BYTE *)(a1 - 656) & 1) == 0 && (v22 & 8) != 0 )
          goto LABEL_60;
        goto LABEL_27;
      }
    }
    v23 = a1;
LABEL_27:
    if ( a6 )
      goto LABEL_70;
LABEL_60:
    if ( (_DWORD)v15 && (unsigned int)v15 < 7 )
    {
      v20 = 0;
      v19 = 0LL;
    }
    if ( v20 == 2 )
      return 0LL;
    goto LABEL_62;
  }
LABEL_104:
  if ( !a6 )
    goto LABEL_17;
  *a6 = 1;
  return 0LL;
}
