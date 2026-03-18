/*
 * XREFs of HvlpDynamicUpdateMicrocode @ 0x140791E48
 * Callers:
 *     HvlUpdateMicrocodeDatabase @ 0x140791E30 (HvlUpdateMicrocodeDatabase.c)
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x14024C4E0 (MmBuildMdlForNonPagedPool.c)
 *     HvcallFastExtended @ 0x14032BFB0 (HvcallFastExtended.c)
 *     IoFreeMdl @ 0x14039F190 (IoFreeMdl.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1403E7D98 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1403E7DC0 (HvlpHvToNtStatus.c)
 *     IoAllocateMdl @ 0x14040BA40 (IoAllocateMdl.c)
 *     HvcallInitInputControl @ 0x14048CB90 (HvcallInitInputControl.c)
 *     HvlpHandleInsufficientMemory @ 0x140531314 (HvlpHandleInsufficientMemory.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall HvlpDynamicUpdateMicrocode(void *a1, ULONG a2, char a3)
{
  struct _MDL *Mdl; // rax
  struct _MDL *v7; // rdi
  __int16 v9; // ax
  __int16 v10; // r8
  int v11; // ebx
  __int64 v12; // [rsp+30h] [rbp-58h] BYREF
  void *v13; // [rsp+40h] [rbp-48h] BYREF
  ULONG v14; // [rsp+48h] [rbp-40h]
  BOOL v15; // [rsp+58h] [rbp-30h]

  v12 = 0LL;
  Mdl = IoAllocateMdl(a1, a2, 0, 0, 0LL);
  v7 = Mdl;
  if ( !Mdl )
    return 3221225626LL;
  MmBuildMdlForNonPagedPool(Mdl);
  HvcallInitInputControl(7, &v12);
  LODWORD(v12) = v12 | 0x10000;
  v13 = a1;
  v14 = a2;
  v15 = a3 != 0;
  while ( 1 )
  {
    v9 = HvcallFastExtended(v12, (unsigned __int64)&v13, 0x20u, 0LL, 0);
    if ( !HvlpHvStatusIsInsufficientMemory(v9) )
      break;
    v11 = HvlpHandleInsufficientMemory(v10);
    if ( v11 < 0 )
      goto LABEL_8;
  }
  v11 = HvlpHvToNtStatus(v10);
LABEL_8:
  IoFreeMdl(v7);
  return (unsigned int)v11;
}
