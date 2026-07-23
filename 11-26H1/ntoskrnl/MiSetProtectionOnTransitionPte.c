/*
 * XREFs of MiSetProtectionOnTransitionPte @ 0x14033EF54
 * Callers:
 *     MiProtectPrivateMemory @ 0x1403136E8 (MiProtectPrivateMemory.c)
 *     MiSectionProtectTransitionPte @ 0x140340FE0 (MiSectionProtectTransitionPte.c)
 *     MiSetReadOnlyOnSectionView @ 0x14036D8F4 (MiSetReadOnlyOnSectionView.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x14031E2BC (MiWritePteShadow.c)
 *     MiSanitizePfnProtection @ 0x14033EED0 (MiSanitizePfnProtection.c)
 *     MiLockTransitionLeafPageEx @ 0x1403400D0 (MiLockTransitionLeafPageEx.c)
 *     MiSanitizeShadowPxe @ 0x140344188 (MiSanitizeShadowPxe.c)
 */

__int64 __fastcall MiSetProtectionOnTransitionPte(__int64 a1, ULONG_PTR a2, unsigned int a3, int a4)
{
  unsigned int v4; // ebx
  unsigned __int64 *v6; // r14
  unsigned int v7; // esi
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r11
  __int64 v11; // r9
  __int64 v12; // r10
  unsigned __int64 v14; // r13
  __int64 v15; // rdi
  int v16; // r15d
  unsigned __int64 i; // r12
  unsigned __int64 v18; // rdi
  __int64 v19; // r15
  unsigned int v20; // r10d
  __int64 v21; // r9
  int v22; // ecx
  unsigned int v23; // edx
  unsigned __int64 ValidPte; // rax
  __int64 v25; // r8
  int v26; // ecx
  unsigned __int64 v27; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-50h]
  unsigned __int64 v29; // [rsp+30h] [rbp-48h]

  v4 = *(_DWORD *)(a1 + 48);
  v6 = (unsigned __int64 *)a2;
  if ( (v4 & 0x80000) != 0 && (v4 & 0x200000) != 0 )
  {
    v14 = 16LL;
    v28 = MiVadPageSizes[(v4 >> 17) & 3];
    if ( v28 != 16 )
      v14 = 1LL;
    v29 = v14;
    if ( a3 != 24 )
    {
      v15 = 0LL;
      v16 = 0;
      for ( i = 0LL; i < v14; ++i )
      {
        if ( i )
        {
          ++v15;
        }
        else
        {
          v18 = *v6;
          if ( qword_140E2D8C0 )
          {
            if ( (v18 & 0x10) != 0 )
              v18 &= ~0x10uLL;
            else
              v18 &= qword_140E2D8C8;
          }
          v15 = (v18 >> 12) & 0xFFFFFFFFFFLL;
          v19 = 48 * v15;
          LODWORD(v27) = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 - 0x220000000000LL + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v27);
            while ( *(__int64 *)(v19 - 0x220000000000LL + 24) < 0 );
          }
          v20 = MiSanitizePfnProtection(a1, (*(_QWORD *)(v19 - 0x220000000000LL + 16) >> 5) & 0x1F, a3);
          *(_QWORD *)(v19 - 0x220000000000LL + 16) = (32LL * v20) ^ (v21 ^ (32LL * v20)) & 0xFFFFFFFFFFFFFC1FuLL;
          _InterlockedAnd64((volatile signed __int64 *)(v19 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v14 = v29;
          v22 = v20 | 0x4000000;
          if ( v28 < 0x200 )
            v22 = v20;
          v23 = v22 | 0x80000000;
          if ( (v4 & 0x180000) == 0x180000 )
            v23 = v22;
          v16 = v23 | 0x800000;
          if ( (v4 & 0x8080000) != 0x8080000 )
            v16 = v23;
        }
        ValidPte = MiMakeValidPte((unsigned __int64)v6, v15, v16);
        v27 = ValidPte;
        v26 = 0;
        if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          v26 = MiSanitizeShadowPxe(0LL, &v27, v25);
          ValidPte = v27;
        }
        *v6 = ValidPte;
        if ( v26 )
          MiWritePteShadow();
        ++v6;
      }
    }
    return 0LL;
  }
  else
  {
    v7 = 0;
    v8 = MiLockTransitionLeafPageEx(a2);
    v9 = v8;
    if ( v8 )
    {
      if ( a4 || !(unsigned __int16)*(_DWORD *)(v8 + 32) )
      {
        v10 = 32LL * (unsigned int)MiSanitizePfnProtection(a1, (*(_QWORD *)(v8 + 16) >> 5) & 0x1F, a3);
        *(_QWORD *)(v9 + 16) = v10 ^ (v11 ^ v10) & 0xFFFFFFFFFFFFFC1FuLL;
        *v6 = v10 ^ (v12 ^ v10) & 0xFFFFFFFFFFFFFC1FuLL;
      }
      else
      {
        v7 = 1;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return v7;
    }
    else
    {
      return 2LL;
    }
  }
}
