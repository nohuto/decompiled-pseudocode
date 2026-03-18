/*
 * XREFs of MiSectionProtectZeroPte @ 0x1402CFA48
 * Callers:
 *     MiSectionProtectPageFilePte @ 0x1402CF8E8 (MiSectionProtectPageFilePte.c)
 *     MiSectionProtectTransitionPte @ 0x14033EF60 (MiSectionProtectTransitionPte.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiMakePrototypePteVadLookup @ 0x1402CFD90 (MiMakePrototypePteVadLookup.c)
 *     MiGetProtoPteAddress @ 0x1402D2540 (MiGetProtoPteAddress.c)
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 */

__int64 __fastcall MiSectionProtectZeroPte(__int64 a1, __int64 *a2, __int64 a3)
{
  char v3; // bp
  unsigned __int64 *v6; // r10
  unsigned __int64 v7; // r9
  __int64 v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdi
  unsigned int v13; // r8d
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // ecx
  __int64 result; // rax
  int v18; // ebx
  bool v19; // zf
  __int64 HasShadow; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r10
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // [rsp+50h] [rbp+8h] BYREF

  v3 = a3;
  v6 = (unsigned __int64 *)((((unsigned __int64)a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v7 = *v6;
  if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    HasShadow = MiPteHasShadow(a1, *v6, a3);
    if ( HasShadow )
    {
      v23 = *(_QWORD *)(HasShadow + 1288);
      if ( v23 )
      {
        v24 = *(_QWORD *)(v23 + 8 * ((v22 >> 3) & 0x1FF));
        if ( (v24 & 0x20) != 0 )
          v21 |= 0x20uLL;
        v7 = v21 | 0x42;
        if ( (v24 & 0x42) == 0 )
          v7 = v21;
      }
    }
  }
  v8 = 48 * ((v7 >> 12) & 0xFFFFFFFFFFLL);
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 - 0x220000000000LL + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v9 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v9);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v8 - 0x220000000000LL + 24) < 0 );
  }
  if ( (*(_DWORD *)(v8 - 0x220000000000LL + 36) & 0x4000000) != 0 )
    v10 = *(_QWORD *)(v8 - 0x220000000000LL) >> 36;
  else
    v10 = *(_QWORD *)(v8 - 0x220000000000LL + 16) >> 17;
  v11 = (unsigned int)(v10 + 1);
  if ( (*(_DWORD *)(v8 - 0x220000000000LL + 36) & 0x4000000) != 0 )
    *(_QWORD *)(v8 - 0x220000000000LL) = (v11 << 36) ^ (*(_QWORD *)(v8 - 0x220000000000LL) ^ (v11 << 36)) & 0xFFFFC00FFFFFFFFFuLL;
  else
    *(_QWORD *)(v8 - 0x220000000000LL + 16) = (v11 << 17) ^ (*(_QWORD *)(v8 - 0x220000000000LL + 16) ^ (v11 << 17)) & 0xFFFFFFFFF801FFFFuLL;
  _InterlockedAnd64((volatile signed __int64 *)(v8 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v12 = *(_QWORD *)(a1 + 32);
  if ( !*(_BYTE *)(a1 + 89) )
  {
    if ( v3
      || ((v18 = *(_DWORD *)(v12 + 48), v26 = 0LL, (v18 & 0x1C) != 8)
       || (v18 & 0x3E0) == 0x20
       || (MiGetProtoPteAddress(v12, (unsigned __int64)((__int64)((_QWORD)a2 << 25) >> 16) >> 12, 12LL, &v26), !v26)
        ? (v19 = (v18 & 0xA0) == 0xA0)
        : (v19 = (*(_BYTE *)(v26 + 32) & 0xA) == 10),
          v19) )
    {
      ++*(_QWORD *)(a1 + 96);
    }
  }
  v13 = 24;
  v14 = *(_DWORD *)(a1 + 56);
  v15 = (*(_DWORD *)(*(_QWORD *)(v12 + 80) + 32LL) >> 1) & 0x1F;
  if ( v14 != 24 )
  {
    if ( v15 == 24
      && ((MEMORY[0x30] & 0x80000) == 0 ? (v25 = *(_DWORD *)(MEMORY[0x50] + 32LL) >> 1) : (v25 = MEMORY[0x30] >> 5),
          v15 = v25 & 0x1F,
          v15 == 24)
      || (v16 = v15 & 0x18) == 0 )
    {
      if ( (*(_DWORD *)(a1 + 56) & 0x18) == 0x18 )
      {
        v14 &= 0xFFFFFFE7;
        goto LABEL_15;
      }
      if ( (*(_DWORD *)(a1 + 56) & 0x18) != 8 )
      {
LABEL_15:
        v13 = v14;
        goto LABEL_16;
      }
    }
    else if ( v16 != 16 )
    {
      if ( v16 == 8 )
      {
        v14 = v14 & 0xFFFFFFE7 | 8;
      }
      else if ( v16 == 24 )
      {
        v14 |= 0x18u;
      }
      goto LABEL_15;
    }
    v14 &= ~8u;
    goto LABEL_15;
  }
LABEL_16:
  result = MiMakePrototypePteVadLookup(v13);
  *a2 = result;
  return result;
}
