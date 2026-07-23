/*
 * XREFs of ?ExpLookasideMgrIoCallback@@YAXPEAX0PEAU_IO_WORKITEM@@@Z @ 0x140B2E720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ?ExpLookasideMgrSetTimer@@YAXPEAU_EXP_LOOKASIDE_MGR@@_K@Z @ 0x140B2E800 (-ExpLookasideMgrSetTimer@@YAXPEAU_EXP_LOOKASIDE_MGR@@_K@Z.c)
 *     ?ExpLookasideMgrTraceScanFinished@@YAXPEAU_EXP_LOOKASIDE_MGR@@_K1@Z @ 0x140B2E838 (-ExpLookasideMgrTraceScanFinished@@YAXPEAU_EXP_LOOKASIDE_MGR@@_K1@Z.c)
 */

void __fastcall ExpLookasideMgrIoCallback(void *a1, __int64 *a2, struct _IO_WORKITEM *a3)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // rdx
  __int64 v7; // r9
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rbx
  __int64 v10; // r10
  __int64 v11; // rax
  __int64 v12; // rax

  v3 = *a2;
  guard_dispatch_icall_no_overrides((__int64)a2, (__int64)a2);
  v4 = -1LL;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 72), 0xFFFFFFFF) == 1 )
  {
    v5 = *(_QWORD *)(v3 + 64);
    v6 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
    if ( MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] >= v5 )
      v4 = v6 - v5;
    v7 = *(unsigned int *)(v3 + 76);
    v8 = 0LL;
    v9 = *(_QWORD *)(v3 + 32);
    v10 = *(_QWORD *)(v3 + 56);
    if ( v6 >= v5 )
      v8 = v4;
    v11 = *(_QWORD *)(v3 + 24);
    if ( v8 <= v11 - v9 )
      v9 = v11 - v8;
    v12 = 32LL * (unsigned int)v7;
    *(_QWORD *)(v12 + v3 + 80) = v8;
    *(_QWORD *)(v12 + v3 + 88) = v9;
    *(_QWORD *)(v12 + v3 + 104) = v5;
    *(_QWORD *)(32 * (v7 + 3) + v3) = v10;
    *(_DWORD *)(v3 + 76) = ((_BYTE)v7 + 1) & 0xF;
    ExpLookasideMgrTraceScanFinished((struct _EXP_LOOKASIDE_MGR *)v3, v9, v8);
    ExpLookasideMgrSetTimer((struct _EXP_LOOKASIDE_MGR *)v3, v9);
  }
}
