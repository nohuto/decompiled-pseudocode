/*
 * XREFs of MiSnapDriverRange @ 0x140AC95AC
 * Callers:
 *     MmProtectDriverSection @ 0x1406E6130 (MmProtectDriverSection.c)
 *     MiCheckForDiscardableLongJumpTable @ 0x140707B98 (MiCheckForDiscardableLongJumpTable.c)
 *     MiBackSingleImageWithPagefile @ 0x1408640D0 (MiBackSingleImageWithPagefile.c)
 *     MiLockRegistryRecoverySection @ 0x1408643A0 (MiLockRegistryRecoverySection.c)
 *     MiIdentifyImageDiscardablePages @ 0x140870424 (MiIdentifyImageDiscardablePages.c)
 *     MiCompactServiceTable @ 0x14087AC6C (MiCompactServiceTable.c)
 *     MiMarkKernelImageCfgBits @ 0x140AC705C (MiMarkKernelImageCfgBits.c)
 *     MiHandleDriverNonPagedSections @ 0x140AC8ED0 (MiHandleDriverNonPagedSections.c)
 *     MiFreeDriverInitialization @ 0x140AC90AC (MiFreeDriverInitialization.c)
 *     MiDisablePagingOfDriver @ 0x140AC94F8 (MiDisablePagingOfDriver.c)
 *     MiEnablePagingOfDriver @ 0x140CF24D0 (MiEnablePagingOfDriver.c)
 *     MmDiscardDriverSection @ 0x140D01280 (MmDiscardDriverSection.c)
 * Callees:
 *     MiGetPteAddress @ 0x1404468C0 (MiGetPteAddress.c)
 *     RtlImageNtHeader @ 0x1404696C0 (RtlImageNtHeader.c)
 *     MiIsKernelHalPadSection @ 0x140500D7C (MiIsKernelHalPadSection.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     MmImageSectionPagable @ 0x140AC9A1C (MmImageSectionPagable.c)
 */

__int64 __fastcall MiSnapDriverRange(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6)
{
  unsigned int v6; // esi
  unsigned __int64 v10; // rbx
  _DWORD *v11; // rdx
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r11
  __int64 v14; // r9
  unsigned __int64 v15; // r14
  __int64 v16; // r8
  unsigned __int64 PteAddress; // rbp
  unsigned __int64 v18; // r13
  __int64 *v19; // rdi
  unsigned int v20; // r8d
  unsigned int v22; // ebx
  int v23; // eax
  bool v24; // cf
  int v25; // eax
  __int64 v26; // rax
  unsigned __int64 v27; // r11
  __int16 v28; // dx
  unsigned int v29; // ecx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  bool v33; // zf
  unsigned int v34; // [rsp+20h] [rbp-B8h]
  int v35; // [rsp+24h] [rbp-B4h]
  unsigned __int64 v36; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v39; // [rsp+58h] [rbp-80h]
  _DWORD *v40; // [rsp+60h] [rbp-78h]
  __int64 v41; // [rsp+68h] [rbp-70h]
  __int64 v42; // [rsp+70h] [rbp-68h] BYREF
  int v43; // [rsp+78h] [rbp-60h]
  __int128 v44; // [rsp+7Ch] [rbp-5Ch]
  __int64 v45; // [rsp+8Ch] [rbp-4Ch]
  int v46; // [rsp+94h] [rbp-44h]

  v6 = 0;
  v42 = 0LL;
  *a5 = 0LL;
  *a6 = 0LL;
  v44 = 0LL;
  v10 = *(_QWORD *)(a1 + 48);
  v45 = 0LL;
  v39 = v10;
  v11 = RtlImageNtHeader(v10);
  v40 = v11;
  v12 = a4 - v10;
  v13 = (unsigned int)v11[14];
  v14 = *((unsigned __int16 *)v11 + 3);
  v15 = (unsigned int)v13;
  v36 = a4 - v10;
  if ( v13 > 0x1000 )
    v15 = 4096LL;
  v35 = *((unsigned __int16 *)v11 + 3);
  if ( a2 > (unsigned int)v14 )
    return 0LL;
  v16 = *((unsigned __int16 *)v11 + 10);
  v41 = v16;
  v46 = 0x40000000;
  PteAddress = 0LL;
  v18 = 0LL;
  v19 = (__int64 *)((char *)&v11[8 * v14 + 6 + 2 * v14] + v16);
  DWORD1(v44) = (_DWORD)v11 + v16 + 8 * (v14 + 4 * v14 + 3) - v10;
  v43 = DWORD1(v44);
  while ( a2 <= (unsigned int)v14 )
  {
    if ( a2 )
      v19 = (__int64 *)((char *)&v11[8 * a2 - 4 + 2 * a2] + v16);
    else
      v19 = &v42;
    v20 = *((_DWORD *)v19 + 4);
    if ( v20 < *((_DWORD *)v19 + 2) )
      v20 = *((_DWORD *)v19 + 2);
    v34 = v20;
    if ( a4 )
    {
      v31 = *((unsigned int *)v19 + 3);
      if ( v12 >= v31 && v12 < v20 + (unsigned int)v31 )
      {
        if ( (a3 & 0x40) != 0 && (*((_DWORD *)v19 + 9) & 0x2000000) != 0 )
          return 0LL;
LABEL_28:
        if ( !PteAddress )
          PteAddress = MiGetPteAddress((v10 + *((unsigned int *)v19 + 3) + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
        v26 = MiGetPteAddress(-(__int64)v15 & (v10 + v15 + v20 + *((_DWORD *)v19 + 3) - 1LL));
        v18 = v26;
        if ( (v28 & 0xFFF) == 0 || (a3 & 0xC) == 0 || v15 >= 0x1000 )
          v18 = v26 - 8;
        if ( v27 <= 0x1000 )
          goto LABEL_35;
      }
    }
    else
    {
      if ( (a3 & 8) != 0 )
      {
        v25 = (*((_DWORD *)v19 + 9) & 0xE0000000) != 0;
        goto LABEL_27;
      }
      if ( (a3 & 1) != 0 )
      {
        v25 = MmImageSectionPagable(v19);
        goto LABEL_26;
      }
      if ( (a3 & 4) != 0 )
      {
        v22 = *((_DWORD *)v19 + 9) & 0xE0000000;
        v23 = MmImageSectionPagable(v19);
        v24 = v22 != 0;
        v10 = v39;
        v25 = v24 && v23 == 0;
LABEL_26:
        v20 = v34;
        LODWORD(v14) = v35;
        v12 = v36;
        goto LABEL_27;
      }
      if ( (a3 & 0x10) != 0 )
      {
        v25 = *((_DWORD *)v19 + 9) & 0x20000000;
LABEL_27:
        if ( v25 )
          goto LABEL_28;
        goto LABEL_20;
      }
      if ( (a3 & 0x20) != 0 )
      {
        if ( *(_BYTE *)v19 != 80
          || *((_BYTE *)v19 + 1) != 65
          || *((_BYTE *)v19 + 2) != 71
          || *((_BYTE *)v19 + 3) != 69
          || *((_BYTE *)v19 + 4) != 75 )
        {
          goto LABEL_20;
        }
        v33 = *((_BYTE *)v19 + 5) == 68;
      }
      else if ( a3 < 0 )
      {
        if ( *(_BYTE *)v19 != 80
          || *((_BYTE *)v19 + 1) != 65
          || *((_BYTE *)v19 + 2) != 71
          || *((_BYTE *)v19 + 3) != 69
          || *((_BYTE *)v19 + 4) != 67
          || *((_BYTE *)v19 + 5) != 77
          || *((_BYTE *)v19 + 6) != 82 )
        {
          goto LABEL_20;
        }
        v33 = *((_BYTE *)v19 + 7) == 67;
      }
      else
      {
        if ( !*(_DWORD *)v19 && v19 != &v42 )
          return 0LL;
        if ( (*(_DWORD *)(a1 + 104) & 0x4000000) != 0 && *(_DWORD *)v19 == 1414090313
          || (*((_DWORD *)v19 + 9) & 0x2000000) == 0 )
        {
          goto LABEL_20;
        }
        v32 = *(_QWORD *)(a1 + 48);
        if ( v32 != PsNtosImageBase && v32 != PsHalImageBase )
          goto LABEL_28;
        v33 = !MiIsKernelHalPadSection((__int64)v19);
      }
      if ( v33 )
        goto LABEL_28;
    }
LABEL_20:
    if ( PteAddress )
    {
      if ( PteAddress <= v18 )
      {
        *a5 = PteAddress;
        *a6 = v18;
        if ( a2 + 1 <= (unsigned int)v14 )
          return a2 + 1;
        return v6;
      }
      PteAddress = 0LL;
    }
LABEL_35:
    v11 = v40;
    ++a2;
    v16 = v41;
  }
  if ( PteAddress )
  {
    v29 = *((_DWORD *)v19 + 4);
    if ( v29 < *((_DWORD *)v19 + 2) )
      v29 = *((_DWORD *)v19 + 2);
    v30 = MiGetPteAddress(((-(__int64)v15 & (v10 + v15 + *((_DWORD *)v19 + 3) + v29 - 1LL)) + 4095) & 0xFFFFFFFFFFFFF000uLL)
        - 8;
    if ( PteAddress <= v30 )
    {
      *a5 = PteAddress;
      *a6 = v30;
    }
  }
  return 0LL;
}
