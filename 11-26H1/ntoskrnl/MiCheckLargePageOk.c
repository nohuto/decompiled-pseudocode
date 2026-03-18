/*
 * XREFs of MiCheckLargePageOk @ 0x140CFAE64
 * Callers:
 *     MiInitNucleus @ 0x140CF2CBC (MiInitNucleus.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024C8D0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     RtlImageNtHeaderEx @ 0x14046A510 (RtlImageNtHeaderEx.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     MiCheckLargePageSystemImage @ 0x140CFB030 (MiCheckLargePageSystemImage.c)
 *     MiVerifyLargeSectionLayout @ 0x140CFB200 (MiVerifyLargeSectionLayout.c)
 */

__int64 __fastcall MiCheckLargePageOk(ULONG_PTR BugCheckParameter2)
{
  __int64 **v1; // rsi
  unsigned int v2; // ebp
  unsigned int v3; // edi
  unsigned __int64 v5; // r15
  int v6; // eax
  unsigned int v7; // ecx
  __int64 v8; // rax
  ULONG_PTR v9; // r14
  __int64 v10; // rdi
  _QWORD *v11; // rsi
  unsigned __int64 v12; // rbp
  _QWORD *v14; // rsi
  int i; // ebp
  unsigned __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(__int64 ***)(BugCheckParameter2 + 16);
  v2 = 0;
  v3 = 0;
  do
  {
    while ( 1 )
    {
      v5 = (unsigned __int64)v1[6];
      v6 = MI_IS_PHYSICAL_ADDRESS(v5);
      v7 = v2 + 1;
      if ( !v6 )
        v7 = v2;
      v8 = v5 + *((unsigned int *)v1 + 16);
      v2 = v7;
      v9 = v7;
      if ( v3 )
        break;
      PsNtosImageBase = v5;
      v3 = 1;
      v1 = (__int64 **)*v1;
      PsNtosImageEnd = v8;
    }
    ++v3;
    PsHalImageBase = v5;
    v1 = (__int64 **)*v1;
    PsHalImageEnd = v8;
  }
  while ( v3 < 2 );
  v10 = 0LL;
  v11 = *(_QWORD **)(BugCheckParameter2 + 16);
  while ( !(_DWORD)v10 )
  {
    v12 = v11[6];
    stru_140E2D150.SchedulerApc.Reserved[v10] = v11;
    v18 = 0LL;
    RtlImageNtHeaderEx(1, v12, 0LL, &v18);
    if ( *(_DWORD *)(v18 + 56) != 4096 )
      KeBugCheckEx(0x1Au, 0x3030307uLL, BugCheckParameter2, *(unsigned int *)(v18 + 56), 0LL);
    MiVerifyLargeSectionLayout(v12);
    v11 = (_QWORD *)*v11;
    v10 = 1LL;
  }
  if ( !(_DWORD)v9 )
    return 0LL;
  if ( (_DWORD)v9 != 1 )
    KeBugCheckEx(0x1Au, 0x3030302uLL, BugCheckParameter2, v9, 0LL);
  v14 = *(_QWORD **)(BugCheckParameter2 + 16);
  for ( i = 0; !i; i = 1 )
  {
    v16 = v14[6];
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v16) != 1 )
    {
      v17 = MI_IS_PHYSICAL_ADDRESS(v16);
      KeBugCheckEx(0x1Au, 0x3030304uLL, BugCheckParameter2, v16, v17);
    }
    if ( ((v16 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL) != v16 )
      KeBugCheckEx(0x1Au, 0x3030306uLL, BugCheckParameter2, v16, 0LL);
    MiCheckLargePageSystemImage(BugCheckParameter2);
    v14 = (_QWORD *)*v14;
  }
  MiFlags |= 4uLL;
  return 1LL;
}
