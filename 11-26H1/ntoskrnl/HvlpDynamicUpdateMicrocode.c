/*
 * XREFs of HvlpDynamicUpdateMicrocode @ 0x140794978
 * Callers:
 *     HvlUpdateMicrocodeDatabase @ 0x140794960 (HvlUpdateMicrocodeDatabase.c)
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x14024DE40 (MmBuildMdlForNonPagedPool.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1402F4C78 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvcallFastExtended @ 0x14032DFE0 (HvcallFastExtended.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x1404046D0 (IoAllocateMdl.c)
 *     HvcallInitInputControl @ 0x1404866D0 (HvcallInitInputControl.c)
 *     HvlpHandleInsufficientMemory @ 0x140533814 (HvlpHandleInsufficientMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
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
