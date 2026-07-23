/*
 * XREFs of KiUpdateSavedSupervisorState @ 0x140BFAD94
 * Callers:
 *     KiStartSavingSupervisorState @ 0x140BFACE0 (KiStartSavingSupervisorState.c)
 * Callees:
 *     KeIpiGenericCall @ 0x1404A43F0 (KeIpiGenericCall.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 KiUpdateSavedSupervisorState()
{
  unsigned int v0; // r14d
  unsigned int v1; // ebx
  PVOID *Pool2; // rdi
  unsigned int v3; // esi
  unsigned int v4; // r12d
  __int64 v5; // rbp
  void *v6; // rax
  PVOID *v7; // rsi
  __int128 Context; // [rsp+20h] [rbp-28h] BYREF

  v0 = KeNumberProcessors_0;
  Context = 0LL;
  if ( 8 * (unsigned __int64)(unsigned int)KeNumberProcessors_0 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v1 = 0;
  Pool2 = (PVOID *)ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v3 = 0;
  v4 = MEMORY[0xFFFFF78000000600] - MEMORY[0xFFFFF780000003E8] + KiIptSaveAreaLength + 127;
  while ( 1 )
  {
    if ( v3 >= v0 )
    {
      *(_QWORD *)&Context = Pool2;
      DWORD2(Context) = v0;
      KeIpiGenericCall((PKIPI_BROADCAST_WORKER)KiIpiUpdateExtendedSupervisorState, (ULONG_PTR)&Context);
      goto LABEL_18;
    }
    v5 = v3;
    if ( *(_QWORD *)(KiProcessorBlock[v3] + 1792) )
    {
      Pool2[v3] = 0LL;
      goto LABEL_10;
    }
    v6 = (void *)ExAllocatePool2(0x40uLL);
    Pool2[v3] = v6;
    if ( !v6 )
      break;
    memset_0(v6, 0, v4);
LABEL_10:
    ++v3;
  }
  if ( v3 )
  {
    v7 = Pool2;
    do
    {
      if ( *v7 )
        ExFreePoolWithTag(*v7, 0);
      ++v7;
      --v5;
    }
    while ( v5 );
  }
  v1 = -1073741670;
LABEL_18:
  ExFreePoolWithTag(Pool2, 0);
  return v1;
}
