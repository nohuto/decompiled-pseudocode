/*
 * XREFs of MiGetHardFaultPages @ 0x140374708
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x140370990 (MiBuildMdlForMappedFileFault.c)
 * Callees:
 *     MiGetPageChain @ 0x140285330 (MiGetPageChain.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     MiProtectionToCacheAttribute @ 0x140374020 (MiProtectionToCacheAttribute.c)
 *     MiUseSlabAllocator @ 0x140375BA4 (MiUseSlabAllocator.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1403FFC10 (MiGetAvailablePagesBelowPriority.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall MiGetHardFaultPages(
        __int64 a1,
        unsigned __int64 a2,
        struct _EX_RUNDOWN_REF *a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int v8; // r10d
  __int64 v11; // r11
  int v12; // ebx
  int v13; // r9d
  int v14; // r13d
  int v15; // edi
  unsigned __int64 AvailablePagesBelowPriority; // rax
  __int64 v17; // r14
  __int64 v18; // rsi
  unsigned int v19; // edx
  __int64 v20; // rax
  char v21; // al
  __int64 v22; // rdx
  __int64 v23; // xmm1_8
  __int64 v24; // rcx
  struct _EX_RUNDOWN_REF *v26; // [rsp+30h] [rbp-69h] BYREF
  __int64 v27; // [rsp+38h] [rbp-61h]
  __int64 v28; // [rsp+40h] [rbp-59h]
  int v29; // [rsp+48h] [rbp-51h]
  unsigned int v30; // [rsp+4Ch] [rbp-4Dh]
  int v31; // [rsp+50h] [rbp-49h]
  _BYTE v32[8]; // [rsp+58h] [rbp-41h] BYREF
  unsigned int v33; // [rsp+60h] [rbp-39h]
  __int64 v34; // [rsp+68h] [rbp-31h]
  __int64 v35; // [rsp+70h] [rbp-29h]
  __int64 *v36; // [rsp+78h] [rbp-21h]
  __int64 v37; // [rsp+80h] [rbp-19h]
  __int128 v38; // [rsp+88h] [rbp-11h]
  __int64 v39; // [rsp+98h] [rbp-1h]
  __int64 v41; // [rsp+F8h] [rbp+5Fh] BYREF

  v8 = (int)a3;
  LODWORD(v41) = 0;
  v11 = *(_QWORD *)(a6 + 192);
  LODWORD(a6) = (*(_DWORD *)(v11 + 32) >> 1) & 0x1F;
  if ( a4 )
  {
    if ( *(_BYTE *)a4 == 1 )
    {
      AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(a3, ((*(_DWORD *)(a4 + 80) >> 3) & 7u) + 1, a3, a4);
      if ( a2 > AvailablePagesBelowPriority )
      {
        if ( !AvailablePagesBelowPriority )
          return AvailablePagesBelowPriority;
        a2 = AvailablePagesBelowPriority;
      }
    }
  }
  v12 = 1;
  if ( (unsigned int)MiUseSlabAllocator(v8, v11, a7, (*(_DWORD *)(a8 + 8) >> 9) & 0x3F, (__int64)&v41) )
  {
    v14 = v41;
    if ( (_DWORD)v41 == 5 )
      v12 = 4097;
  }
  else
  {
    v14 = 9;
  }
  v15 = v13 + 1;
  while ( 1 )
  {
    AvailablePagesBelowPriority = *(_QWORD *)(a1 + 16);
    if ( AvailablePagesBelowPriority >= a2 )
      break;
    memset_0(&v26, 0, 0x70uLL);
    v17 = *(_QWORD *)(a1 + 16);
    v26 = a3;
    v18 = a5[12];
    v19 = v30 & 0xFFFFFFCF | (16 * (*((_BYTE *)a5 + 69) & 1));
    v27 = a5[7];
    v20 = *a5;
    v30 = v19;
    v28 = v20;
    v29 = v15;
    MiInitializePageColorBase(v27, 3, v15, (__int64)v32);
    v21 = MiProtectionToCacheAttribute(a6);
    v34 = -1LL;
    v33 = v33 & 0xFFF3FFFF | ((v21 & 3) << 18);
    v41 = 0LL;
    v35 = v18;
    v31 = v12 | 8;
    v36 = &v41;
    v30 = v14 & 0xF | v30 & 0xFFFFFFF0;
    v37 = a2 - v17;
    v39 = 0LL;
    v38 = 0LL;
    LOBYTE(AvailablePagesBelowPriority) = MiGetPageChain(&v26);
    v22 = v39;
    if ( v39 )
    {
      if ( *(_QWORD *)a1 )
      {
        **(_QWORD **)(a1 + 8) = v38;
        AvailablePagesBelowPriority = *((_QWORD *)&v38 + 1);
        *(_QWORD *)(a1 + 16) += v22;
        *(_QWORD *)(a1 + 8) = AvailablePagesBelowPriority;
      }
      else
      {
        v23 = v39;
        *(_OWORD *)a1 = v38;
        *(_QWORD *)(a1 + 16) = v23;
      }
      return AvailablePagesBelowPriority;
    }
    if ( v14 == 9 )
      return AvailablePagesBelowPriority;
    if ( v14 != 5 )
    {
      AvailablePagesBelowPriority = *(_QWORD *)(a1 + 16);
      if ( AvailablePagesBelowPriority )
        return AvailablePagesBelowPriority;
      if ( v41 )
      {
        v24 = (__int64)a5;
        a5[16] = v41;
        *(_QWORD *)(v24 + 144) = a2 - *(_QWORD *)(a1 + 16);
        *(_QWORD *)(v24 + 136) = a3;
        LOBYTE(AvailablePagesBelowPriority) = ExAcquireRundownProtection_0(a3 + 2769);
        return AvailablePagesBelowPriority;
      }
    }
    v14 = 9;
    v12 &= ~0x1000u;
  }
  return AvailablePagesBelowPriority;
}
