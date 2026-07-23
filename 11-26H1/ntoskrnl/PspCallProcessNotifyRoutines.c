/*
 * XREFs of PspCallProcessNotifyRoutines @ 0x1409FE474
 * Callers:
 *     PspExitProcess @ 0x1409FE380 (PspExitProcess.c)
 *     PspInsertThread @ 0x140A7B188 (PspInsertThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExReferenceCallBackBlock @ 0x14029AFF0 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x140424890 (ExDereferenceCallBackBlock.c)
 *     ExReleaseExtensionTable @ 0x1404896C4 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     KeCallbackValidationEpilogue @ 0x1404D9E98 (KeCallbackValidationEpilogue.c)
 *     KeCallbackValidationPrologue @ 0x1404E22FC (KeCallbackValidationPrologue.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PsTerminateProcess @ 0x14094A334 (PsTerminateProcess.c)
 *     PsReferenceProcessFilePointer @ 0x140AA7550 (PsReferenceProcessFilePointer.c)
 */

__int64 __fastcall PspCallProcessNotifyRoutines(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 ExtensionTable; // r15
  unsigned __int64 v7; // rax
  char *v8; // r14
  signed __int64 v9; // rdx
  unsigned int v10; // r13d
  int v11; // ecx
  unsigned __int64 v12; // r12
  int v13; // eax
  __int128 v14; // xmm0
  char **v15; // rcx
  __int64 v16; // rax
  __int64 *v17; // rdi
  __int64 i; // r15
  struct _EX_RUNDOWN_REF *v19; // rax
  struct _EX_RUNDOWN_REF *v20; // r13
  int Count; // eax
  ULONG_PTR v22; // rbx
  unsigned int v23; // r8d
  __int64 v25; // [rsp+20h] [rbp-69h] BYREF
  unsigned int v26; // [rsp+28h] [rbp-61h]
  char *v27; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-51h]
  unsigned __int64 v29; // [rsp+40h] [rbp-49h]
  __int64 v30; // [rsp+50h] [rbp-39h] BYREF
  int v31; // [rsp+58h] [rbp-31h]
  __int64 v32; // [rsp+60h] [rbp-29h]
  __int128 v33; // [rsp+68h] [rbp-21h]
  char *v34; // [rsp+78h] [rbp-11h]
  __int128 v35; // [rsp+80h] [rbp-9h]
  int v36; // [rsp+90h] [rbp+7h]
  signed __int64 v37; // [rsp+A0h] [rbp+17h]
  char v38; // [rsp+F0h] [rbp+67h]
  int v39; // [rsp+108h] [rbp+7Fh]

  memset_0(&v30, 0, 0x48uLL);
  v25 = 0LL;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspDamExtensionHost);
  v29 = ExtensionTable;
  v7 = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
  v8 = 0LL;
  v9 = *(_QWORD *)(a1 + 1600);
  v10 = 0;
  v11 = PspNotifyEnableMask & 4;
  v28 = v7;
  v27 = 0LL;
  v12 = v7;
  v26 = 0;
  v39 = v11;
  v38 = 0;
  v37 = v9;
  if ( a3 && ((PspNotifyEnableMask & 4) != 0 || ExtensionTable || v7) )
  {
    v13 = 0;
    v30 = 72LL;
    if ( v9 )
      v13 = 2;
    v31 = v13;
    v32 = *(_QWORD *)(a1 + 720);
    v14 = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
    v36 = 0;
    v33 = v14;
    if ( v9 )
    {
      v34 = 0LL;
      v35 = 0LL;
      if ( !a2 )
      {
LABEL_22:
        v17 = &v30;
        goto LABEL_24;
      }
      v15 = *(char ***)(a2 + 416);
      if ( v15 )
      {
        v34 = *v15;
        v35 = *(_OWORD *)(v15 + 1);
      }
LABEL_21:
      v11 = v39;
      goto LABEL_22;
    }
    if ( a2 && (v8 = *(char **)(a2 + 184)) != 0LL )
    {
      v34 = *(char **)(a2 + 184);
    }
    else
    {
      PsReferenceProcessFilePointer(a1, &v27);
      v8 = v27;
      v34 = v27;
      v38 = 1;
      if ( !a2 )
        goto LABEL_17;
    }
    if ( (*(_BYTE *)(a2 + 8) & 0x20) != 0 )
    {
      v31 |= 1u;
      *(_QWORD *)&v35 = a2 + 240;
LABEL_18:
      v16 = *(_QWORD *)(a2 + 216);
      if ( v16 )
      {
        *((_QWORD *)&v35 + 1) = v16 + 112;
        goto LABEL_21;
      }
LABEL_20:
      *((_QWORD *)&v35 + 1) = 0LL;
      goto LABEL_21;
    }
LABEL_17:
    *(_QWORD *)&v35 = v8 + 88;
    if ( !a2 )
      goto LABEL_20;
    goto LABEL_18;
  }
  v17 = 0LL;
LABEL_24:
  if ( (PspNotifyEnableMask & 2) == 0 && !v11 )
    goto LABEL_42;
  for ( i = 0LL; (unsigned int)i < 0x40; i = (unsigned int)(i + 1) )
  {
    v19 = ExReferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + i, v9);
    v20 = v19;
    if ( !v19 )
      continue;
    Count = v19[2].Count;
    if ( !v37 || (Count & 4) != 0 )
    {
      if ( (Count & 2) == 0 )
      {
        v22 = v20[1].Count;
        KeCallbackValidationPrologue((__int64)&v25);
        guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 720), *(_QWORD *)(a1 + 464));
        v23 = 260;
LABEL_35:
        KeCallbackValidationEpilogue((__int64)&v25, v22, v23);
        goto LABEL_36;
      }
      if ( v39 )
      {
        v22 = v20[1].Count;
        KeCallbackValidationPrologue((__int64)&v25);
        guard_dispatch_icall_no_overrides(a1, *(_QWORD *)(a1 + 464));
        v23 = 261;
        goto LABEL_35;
      }
    }
LABEL_36:
    ExDereferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + i, v20);
    if ( v17 )
    {
      v9 = *((unsigned int *)v17 + 16);
      if ( (int)v9 < 0 )
      {
        v10 = *((_DWORD *)v17 + 16);
        PsTerminateProcess((struct _KPROCESS *)a1);
        goto LABEL_41;
      }
    }
  }
  v10 = v26;
LABEL_41:
  ExtensionTable = v29;
  v12 = v28;
LABEL_42:
  if ( v12 && (!v17 || *((int *)v17 + 16) >= 0) )
  {
    guard_dispatch_icall_no_overrides(a1, *(_QWORD *)(a1 + 464));
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
  }
  if ( ExtensionTable && (!v17 || *((int *)v17 + 16) >= 0) )
  {
    guard_dispatch_icall_no_overrides(a1, *(_QWORD *)(a1 + 464));
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspDamExtensionHost);
  }
  if ( v38 )
    ObfDereferenceObject(v8);
  return v10;
}
