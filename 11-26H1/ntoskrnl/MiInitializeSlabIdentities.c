/*
 * XREFs of MiInitializeSlabIdentities @ 0x14070C2BC
 * Callers:
 *     MiCreateSlabIdentity @ 0x14070AD4C (MiCreateSlabIdentity.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiInitializeSlabAllocator @ 0x14070BF18 (MiInitializeSlabAllocator.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiInitializeSlabIdentities(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // edi
  PVOID *PoolMm; // rax
  PVOID *v5; // rcx
  unsigned int v6; // edi
  volatile LONG *v7; // r14
  _QWORD *v8; // rdx
  __int64 v9; // rax
  PVOID v10; // rcx
  _QWORD *v11; // rax
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-8h]

  v1 = 0;
  p_P = &P;
  v3 = 0;
  P = &P;
  while ( v3 < (unsigned __int16)KeNumberNodes )
  {
    PoolMm = (PVOID *)ExAllocatePoolMm(64LL, 0x4D000uLL, 1850960205, v3 | 0x80000000);
    if ( !PoolMm )
    {
      v1 = -1073741670;
      goto LABEL_12;
    }
    v5 = p_P;
    if ( *p_P != &P )
LABEL_16:
      __fastfail(3u);
    PoolMm[1] = p_P;
    *PoolMm = &P;
    ++v3;
    *v5 = PoolMm;
    p_P = PoolMm;
  }
  v6 = 0;
  if ( !KeNumberNodes )
    goto LABEL_12;
  v7 = (volatile LONG *)(*(_QWORD *)(a1 + 16) + 16608LL);
  do
  {
    v8 = P;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_16;
    v9 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_16;
    P = *(PVOID *)P;
    *(_QWORD *)(v9 + 8) = &P;
    *(_QWORD *)(56320LL * v6 + *(_QWORD *)(a1 + 16) + 56112) = v8;
    v8[39259] = v8 + 39260;
    *((_DWORD *)v8 + 78516) = 65;
    v8[39263] = v8 + 39264;
    *((_DWORD *)v8 + 78524) = 65;
    MiInitializeSlabAllocator(v7, 8, v6++, a1);
    v7 += 14080;
  }
  while ( v6 < (unsigned __int16)KeNumberNodes );
LABEL_12:
  while ( 1 )
  {
    v10 = P;
    if ( P == &P )
      return v1;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_16;
    v11 = *(_QWORD **)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_16;
    P = *(PVOID *)P;
    v11[1] = &P;
    ExFreePoolWithTag(v10, 0);
  }
}
