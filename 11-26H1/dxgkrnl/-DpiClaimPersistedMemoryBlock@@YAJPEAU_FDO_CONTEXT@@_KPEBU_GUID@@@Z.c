/*
 * XREFs of ?DpiClaimPersistedMemoryBlock@@YAJPEAU_FDO_CONTEXT@@_KPEBU_GUID@@@Z @ 0x140251344
 * Callers:
 *     DpiKsrRestore @ 0x1402525F8 (DpiKsrRestore.c)
 *     DpiKsrRestoreAdapterDriverState @ 0x1402527F8 (DpiKsrRestoreAdapterDriverState.c)
 * Callees:
 *     ?DpiDxgkDdiRestoreMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_RESTOREMEMORYFORHOTUPDATE@@@Z @ 0x140251848 (-DpiDxgkDdiRestoreMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_RESTOREMEMORYFORHOTUPDAT.c)
 */

__int64 __fastcall DpiClaimPersistedMemoryBlock(struct _FDO_CONTEXT *a1, __int64 a2, const struct _GUID *a3)
{
  void *Pool2; // r15
  int v7; // eax
  int v8; // ebx
  unsigned __int64 *v9; // r12
  unsigned __int64 v10; // r14
  unsigned __int64 *v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  struct _MDL *v15; // rdi
  unsigned int v16; // eax
  unsigned __int64 *v17; // rdx
  __int64 v18; // r10
  unsigned int v19; // r12d
  unsigned int v20; // r11d
  unsigned __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  _QWORD *MappedSystemVa; // rcx
  unsigned int v28; // [rsp+30h] [rbp-68h] BYREF
  int v29; // [rsp+34h] [rbp-64h] BYREF
  unsigned int v30; // [rsp+38h] [rbp-60h]
  __int64 v31; // [rsp+40h] [rbp-58h]
  _QWORD v32[2]; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v33; // [rsp+58h] [rbp-40h]
  int v34; // [rsp+5Ch] [rbp-3Ch]
  void *v35; // [rsp+60h] [rbp-38h]
  unsigned int v36; // [rsp+B8h] [rbp+20h] BYREF

  v36 = 0;
  v29 = 0;
  v28 = 0;
  Pool2 = 0LL;
  KsrQueryMetadata(a3, a2, 0LL, 0LL, &v28);
  if ( !v28 )
    goto LABEL_4;
  Pool2 = (void *)ExAllocatePool2(256LL, v28, 1685221444LL);
  if ( !Pool2 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 601;
    goto LABEL_4;
  }
  v8 = KsrQueryMetadata(a3, a2, Pool2, v28, &v28);
  if ( v8 >= 0 )
  {
LABEL_4:
    v7 = KsrClaimPersistedMemory(a3, a2, 0LL, 0LL, 0, &v36);
    if ( (int)(v7 + 0x80000000) >= 0 && v7 != -1073741789 || !v36 )
    {
      v8 = -1073741811;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 630;
      goto LABEL_46;
    }
    v31 = ExAllocatePool2(256LL, 8LL * v36, 1953656900LL);
    v9 = (unsigned __int64 *)v31;
    if ( !v31 )
    {
      v8 = -1073741801;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 640;
      goto LABEL_46;
    }
    v8 = KsrClaimPersistedMemory(a3, a2, v31, v36, 1, &v29);
    if ( v8 < 0 || v36 != v29 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 655;
      goto LABEL_45;
    }
    v10 = 0LL;
    if ( !v36 )
      goto LABEL_43;
    v11 = v9;
    v12 = v36;
    do
    {
      v13 = *v11++;
      v10 += v13 >> 40 << 12;
      --v12;
    }
    while ( v12 );
    if ( !v10 )
    {
LABEL_43:
      v8 = -1073741811;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 672;
      goto LABEL_45;
    }
    v14 = ExAllocatePool2(64LL, v10 + 48, a1 != 0LL ? 1953656900 : 1836216388);
    v15 = (struct _MDL *)v14;
    if ( !v14 )
    {
      v8 = -1073741801;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 683;
LABEL_45:
      ExFreePoolWithTag(v9, 0);
LABEL_46:
      if ( !Pool2 )
        goto LABEL_48;
      goto LABEL_47;
    }
    *(_QWORD *)v14 = 0LL;
    *(_QWORD *)(v14 + 32) = 0LL;
    *(_WORD *)(v14 + 8) = 8 * (((v10 + 4095) >> 12) + 6);
    v16 = v36;
    v15->ByteOffset = 0;
    v15->ByteCount = v10;
    v15->MdlFlags = 2;
    v30 = 0;
    if ( v16 )
    {
      v17 = v9;
      v18 = v16;
      v19 = v30;
      do
      {
        v20 = 0;
        v21 = *v17 >> 40;
        if ( v21 )
        {
          v22 = *v17 & 0xFFFFFFFFFFLL;
          v23 = 0LL;
          do
          {
            v24 = v23 + v22;
            ++v20;
            v25 = v19++;
            *((_QWORD *)&v15[1].Next + v25) = v24;
            v23 = v20;
          }
          while ( v20 < v21 );
        }
        ++v17;
        --v18;
      }
      while ( v18 );
      v9 = (unsigned __int64 *)v31;
    }
    if ( a1 )
    {
      v33 = v28;
      v32[0] = 0LL;
      v34 = 0;
      v32[1] = v15;
      v35 = Pool2;
      v8 = DpiDxgkDdiRestoreMemoryForHotUpdate(a1, (const struct _DXGKARG_RESTOREMEMORYFORHOTUPDATE *)v32);
      if ( v8 >= 0 )
        goto LABEL_45;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 750;
    }
    else
    {
      if ( qword_140169380 )
      {
        v8 = -1073741823;
      }
      else
      {
        if ( (v15->MdlFlags & 5) != 0 )
          MappedSystemVa = v15->MappedSystemVa;
        else
          MappedSystemVa = MmMapLockedPagesSpecifyCache(v15, 0, MmCached, 0LL, 0, 0x40000010u);
        qword_140169380 = (__int64)MappedSystemVa;
        if ( MappedSystemVa )
        {
          if ( *(unsigned int *)MappedSystemVa <= v10 )
          {
            MappedSystemVa[2] = v15;
            v15 = 0LL;
          }
          else
          {
            v8 = -1073741811;
            MmUnmapLockedPages(MappedSystemVa, v15);
            qword_140169380 = 0LL;
          }
        }
        else
        {
          v8 = -1073741823;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 717;
        }
      }
      if ( !v15 )
        goto LABEL_45;
    }
    MmFreePagesFromMdl(v15);
    ExFreePoolWithTag(v15, 0);
    goto LABEL_45;
  }
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 611;
LABEL_47:
  ExFreePoolWithTag(Pool2, 0);
LABEL_48:
  if ( qword_140169380 )
    *(_DWORD *)(qword_140169380 + 24) = v8;
  return (unsigned int)v8;
}
