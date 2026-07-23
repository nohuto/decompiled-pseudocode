/*
 * XREFs of DifRegisterPlugin @ 0x14064F790
 * Callers:
 *     VfPoolTrackingEntry @ 0x140645390 (VfPoolTrackingEntry.c)
 *     VfIovPluginEntry @ 0x140646270 (VfIovPluginEntry.c)
 *     VfIoPendingEntry @ 0x140649020 (VfIoPendingEntry.c)
 *     VfSecurityEntry @ 0x1406494D0 (VfSecurityEntry.c)
 *     VfDmaPluginEntry @ 0x14064B280 (VfDmaPluginEntry.c)
 *     VfBelow4gbPluginEntry @ 0x14064B390 (VfBelow4gbPluginEntry.c)
 *     VfIrqlPluginEntry @ 0x14064BAF0 (VfIrqlPluginEntry.c)
 *     VfRlrsEntry @ 0x14064BDB0 (VfRlrsEntry.c)
 *     VfLwSPEntry @ 0x1406C4260 (VfLwSPEntry.c)
 *     VfSpecialPoolEntry @ 0x140725AB0 (VfSpecialPoolEntry.c)
 *     VfIrpTrackingPluginEntry @ 0x1407260A0 (VfIrpTrackingPluginEntry.c)
 *     VfDeadlockPluginEntry @ 0x140C3C4C0 (VfDeadlockPluginEntry.c)
 *     VfMiscPluginEntry @ 0x140C43630 (VfMiscPluginEntry.c)
 *     VfPoolCommitCachingPluginEntry @ 0x140C49ED0 (VfPoolCommitCachingPluginEntry.c)
 * Callees:
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     DifCreateAPIThunkContext @ 0x14064F1E4 (DifCreateAPIThunkContext.c)
 *     DifDeregisterPlugin @ 0x14064F24C (DifDeregisterPlugin.c)
 *     DifiDbgPrint @ 0x1406503D0 (DifiDbgPrint.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     VfBindDifCallbackWrappers @ 0x140C2E07C (VfBindDifCallbackWrappers.c)
 *     VfBindDifDDIWrappers @ 0x140C2E0BC (VfBindDifDDIWrappers.c)
 *     VfCheckDifDdiExist @ 0x140C2E11C (VfCheckDifDdiExist.c)
 */

__int64 __fastcall DifRegisterPlugin(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r14
  int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // rsi
  unsigned int v10; // r9d
  __int128 *APIThunkContextById; // rdi
  __int64 v12; // rax
  size_t v13; // rdi
  void *Pool2; // rax
  void *v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // r15
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 **v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 (__fastcall *v29)(); // rdx
  char v30; // al
  __int64 APIThunkContext; // rax
  __int128 *v32; // rax
  __int128 **v33; // rdx
  __int64 v34; // rax
  _QWORD *v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v41; // [rsp+60h] [rbp+8h]
  unsigned int v42; // [rsp+68h] [rbp+10h]
  unsigned int v43; // [rsp+70h] [rbp+18h]

  v42 = a2;
  v41 = a1;
  v4 = 0;
  v5 = a3;
  if ( a3 >= 0x40 || (v7 = *((_DWORD *)&VfRuleClasses + ((unsigned __int64)a3 >> 5)), !_bittest(&v7, a3 & 0x1F)) )
  {
    v4 = -1073738636;
LABEL_54:
    DifiDbgPrint("Loading plugin %d failed!!!\n", a2);
    DifDeregisterPlugin((_DWORD *)(unsigned int)v5);
    return v4;
  }
  if ( DifPluginStates[a3] )
    return v4;
  v8 = 0;
  while ( 1 )
  {
    v43 = v8;
    if ( v8 >= a2 )
      break;
    v9 = a1 + 32LL * v8;
    v10 = *(_DWORD *)(v9 + 8);
    if ( v10 < 0x80000000 && !(unsigned __int8)VfCheckDifDdiExist(v10) )
    {
      DifiDbgPrint("API %d is not available for the plugin %d.\n", v10, v5);
      goto LABEL_43;
    }
    APIThunkContextById = DifGetAPIThunkContextById(v10);
    if ( APIThunkContextById )
    {
      if ( *(_QWORD *)(v9 + 16) )
      {
        APIThunkContext = DifCreateAPIThunkContext(v9, 1, v5);
        if ( !APIThunkContext )
          goto LABEL_45;
        v32 = (__int128 *)(APIThunkContext + 16);
        v33 = (__int128 **)*((_QWORD *)APIThunkContextById + 5);
        if ( *v33 != APIThunkContextById + 2 )
          goto LABEL_47;
        *(_QWORD *)v32 = APIThunkContextById + 2;
        *((_QWORD *)v32 + 1) = v33;
        *v33 = v32;
        *((_QWORD *)APIThunkContextById + 5) = v32;
      }
      if ( *(_QWORD *)(v9 + 24) )
      {
        v34 = DifCreateAPIThunkContext(v9, 0, v5);
        if ( !v34 )
          goto LABEL_45;
        v35 = APIThunkContextById + 3;
        v36 = (_QWORD *)(v34 + 16);
        v37 = *((_QWORD *)APIThunkContextById + 6);
        if ( *(__int128 **)(v37 + 8) != APIThunkContextById + 3 )
LABEL_47:
          __fastfail(3u);
        *v36 = v37;
        v36[1] = v35;
        *(_QWORD *)(v37 + 8) = v36;
        *v35 = v36;
      }
      goto LABEL_43;
    }
    v12 = -1LL;
    do
      ++v12;
    while ( *(_BYTE *)(*(_QWORD *)v9 + v12) );
    v13 = v12 + 1;
    Pool2 = (void *)ExAllocatePool2(0x40uLL);
    v15 = Pool2;
    if ( !Pool2 )
      goto LABEL_45;
    memmove(Pool2, *(const void **)v9, v13);
    v16 = ExAllocatePool2(0x40uLL);
    v17 = v16;
    if ( !v16 )
    {
      v4 = -1073741801;
      ExFreePoolWithTag(v15, 0x4E666944u);
      goto LABEL_54;
    }
    *(_QWORD *)v16 = v15;
    v18 = v16 + 32;
    v19 = v16 + 48;
    *(_DWORD *)(v16 + 8) = *(_DWORD *)(v9 + 8);
    *(_QWORD *)(v16 + 40) = v16 + 32;
    *(_QWORD *)(v16 + 32) = v16 + 32;
    *(_QWORD *)(v16 + 56) = v16 + 48;
    *(_QWORD *)(v16 + 48) = v16 + 48;
    if ( *(_QWORD *)(v9 + 16) )
    {
      v20 = DifCreateAPIThunkContext(v9, 1, v5);
      if ( !v20 )
        goto LABEL_44;
      v21 = *(__int64 ***)(v18 + 8);
      v22 = (__int64 *)(v20 + 16);
      if ( *v21 != (__int64 *)v18 )
        goto LABEL_47;
      *v22 = v18;
      v22[1] = (__int64)v21;
      *v21 = v22;
      *(_QWORD *)(v18 + 8) = v22;
    }
    if ( *(_QWORD *)(v9 + 24) )
    {
      v23 = DifCreateAPIThunkContext(v9, 0, v5);
      if ( !v23 )
      {
LABEL_44:
        ExFreePoolWithTag(v15, 0x4E666944u);
        ExFreePoolWithTag((PVOID)v17, 0x4E666944u);
LABEL_45:
        v4 = -1073741801;
        goto LABEL_54;
      }
      v24 = *(_QWORD *)v19;
      v25 = (_QWORD *)(v23 + 16);
      if ( *(_QWORD *)(*(_QWORD *)v19 + 8LL) != v19 )
        goto LABEL_47;
      *v25 = v24;
      *(_QWORD *)(v23 + 24) = v17 + 48;
      *(_QWORD *)(v24 + 8) = v25;
      *(_QWORD *)(v17 + 48) = v25;
    }
    v26 = (_QWORD *)*((_QWORD *)&DifAPIThunkContextHead + 1);
    v27 = (_QWORD *)(v17 + 16);
    if ( **((__int128 ***)&DifAPIThunkContextHead + 1) != &DifAPIThunkContextHead )
      goto LABEL_47;
    *v27 = &DifAPIThunkContextHead;
    *(_QWORD *)(v17 + 24) = v26;
    *v26 = v27;
    *((_QWORD *)&DifAPIThunkContextHead + 1) = v17 + 16;
    v28 = *(unsigned int *)(v17 + 8);
    if ( (unsigned int)v28 >= 0x10000000 )
    {
      if ( (unsigned int)v28 >= 0x50000000 )
      {
        if ( (unsigned int)v28 >= 0x80000000 || (unsigned int)(v28 - 1342177280) >= 0x21 )
          goto LABEL_43;
        v30 = VfBindDifCallbackWrappers(v28, off_140008AC0[(unsigned int)(v28 - 1342177280)], v17);
        goto LABEL_33;
      }
      if ( (_DWORD)v28 != 0x10000000 )
        goto LABEL_43;
      v29 = DifIofCallDriverWrapper;
    }
    else
    {
      if ( (unsigned int)v28 >= 0x53E )
        goto LABEL_43;
      v29 = (__int64 (__fastcall *)())*(&off_140008BD0 + v28);
    }
    v30 = VfBindDifDDIWrappers(v28, v29, v17);
LABEL_33:
    if ( !v30 )
    {
      DifiDbgPrint("Binding failure for 0x%x\n", *(_DWORD *)(v17 + 8));
      v4 = -1073738625;
      goto LABEL_54;
    }
LABEL_43:
    a2 = v42;
    v8 = v43 + 1;
    a1 = v41;
  }
  if ( a4 )
  {
    v39 = ExAllocatePool2(0x40uLL);
    v38 = v39;
    if ( !v39 )
      goto LABEL_45;
    *(_OWORD *)v39 = *(_OWORD *)a4;
    *(_OWORD *)(v39 + 16) = *(_OWORD *)(a4 + 16);
    *(_QWORD *)(v39 + 32) = *(_QWORD *)(a4 + 32);
  }
  else
  {
    v38 = 0LL;
  }
  DifPluginSettings[v5] = v38;
  DifPluginStates[v5] = 1;
  return v4;
}
