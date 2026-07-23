/*
 * XREFs of FsFilterPerformCallbacks @ 0x14026E030
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x14026D554 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x14026E3F4 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14098C650 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFile @ 0x140A64120 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140A6A2E0 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x140A6A590 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlQueryOpen @ 0x140ABD4B8 (FsRtlQueryOpen.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall FsFilterPerformCallbacks(__int64 a1, char a2, char a3, _DWORD *a4)
{
  __int64 v4; // rbx
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r15
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  unsigned __int16 v18; // dx
  _QWORD *v19; // rdi
  __int64 result; // rax
  int v21; // eax
  _QWORD *v22; // rdx
  __int64 v23; // rax

  v4 = *(_QWORD *)(a1 + 8);
  *a4 = 2;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v4 )
        return 0LL;
      v9 = 0LL;
      v10 = 0LL;
      v11 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 48LL);
      *(_QWORD *)(a1 + 8) = v4;
      v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 48LL) + 48LL);
      if ( v12 )
        break;
LABEL_23:
      v4 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 48LL);
      if ( !v11 )
        *a4 &= ~2u;
    }
    v13 = *(unsigned __int8 *)(a1 + 4);
    if ( v13 == 254 )
    {
      if ( *(_DWORD *)v12 >= 0x20u && *(_QWORD *)(v12 + 24) )
        v9 = *(_QWORD *)(v12 + 24);
      if ( *(_DWORD *)v12 < 0x28u )
        goto LABEL_21;
      v17 = *(_QWORD *)(v12 + 32);
      goto LABEL_19;
    }
    if ( v13 == 255 )
    {
      if ( *(_DWORD *)v12 >= 0x10u && *(_QWORD *)(v12 + 8) )
        v9 = *(_QWORD *)(v12 + 8);
      if ( *(_DWORD *)v12 < 0x18u )
        goto LABEL_21;
      v17 = *(_QWORD *)(v12 + 16);
      goto LABEL_19;
    }
    v14 = v13 - 249;
    if ( !v14 )
    {
      if ( *(_DWORD *)v12 >= 0x70u && *(_QWORD *)(v12 + 104) )
        v9 = *(_QWORD *)(v12 + 104);
      if ( *(_DWORD *)v12 < 0x78u )
        goto LABEL_21;
      v17 = *(_QWORD *)(v12 + 112);
      goto LABEL_19;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      if ( *(_DWORD *)v12 >= 0x40u && *(_QWORD *)(v12 + 56) )
        v9 = *(_QWORD *)(v12 + 56);
      if ( *(_DWORD *)v12 < 0x48u )
        goto LABEL_21;
      v17 = *(_QWORD *)(v12 + 64);
      goto LABEL_19;
    }
    v16 = v15 - 1;
    if ( v16 )
    {
      v21 = v16 - 1;
      if ( v21 )
      {
        if ( v21 != 1 )
          goto LABEL_23;
        if ( *(_DWORD *)v12 >= 0x50u && *(_QWORD *)(v12 + 72) )
          v9 = *(_QWORD *)(v12 + 72);
        if ( *(_DWORD *)v12 < 0x58u )
          goto LABEL_21;
        v17 = *(_QWORD *)(v12 + 80);
      }
      else
      {
        if ( *(_DWORD *)v12 >= 0x60u && *(_QWORD *)(v12 + 88) )
          v9 = *(_QWORD *)(v12 + 88);
        if ( *(_DWORD *)v12 < 0x68u )
          goto LABEL_21;
        v17 = *(_QWORD *)(v12 + 96);
      }
LABEL_19:
      if ( v17 )
        v10 = v17;
      goto LABEL_21;
    }
    if ( *(_DWORD *)v12 >= 0x30u && *(_QWORD *)(v12 + 40) )
      v9 = *(_QWORD *)(v12 + 40);
    if ( *(_DWORD *)v12 >= 0x38u )
    {
      v17 = *(_QWORD *)(v12 + 48);
      goto LABEL_19;
    }
LABEL_21:
    if ( v9 )
    {
      if ( !v10 )
      {
        v19 = 0LL;
        v22 = 0LL;
        goto LABEL_61;
      }
    }
    else if ( !v10 )
    {
      goto LABEL_23;
    }
    v18 = *(_WORD *)(a1 + 74);
    if ( v18 >= *(_WORD *)(a1 + 72)
      || (v19 = (_QWORD *)(*(_QWORD *)(a1 + 80) + 32LL * *(unsigned __int16 *)(a1 + 74)),
          *(_WORD *)(a1 + 74) = v18 + 1,
          !v19) )
    {
      if ( !a2 )
        KeBugCheckEx(0x22u, 0LL, 0LL, 0LL, 0LL);
      return 3221225626LL;
    }
    *v19 = v4;
    v19[1] = *(_QWORD *)(a1 + 16);
    v19[2] = 0LL;
    v19[3] = v10;
    if ( !v9 )
      goto LABEL_63;
    v22 = v19 + 2;
LABEL_61:
    result = guard_dispatch_icall_no_overrides(a1, v22, v10);
    if ( (int)result < 0 )
      break;
    if ( (_DWORD)result )
    {
      if ( !v19 )
        return result;
      goto LABEL_69;
    }
LABEL_63:
    v23 = *(_QWORD *)(a1 + 8);
    if ( v4 == v23 )
    {
      if ( !v11 && v19 )
        --*(_WORD *)(a1 + 74);
      v4 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 48LL);
    }
    else
    {
      *(_DWORD *)(a1 + 64) |= 4u;
      v4 = v23;
    }
  }
  if ( !a2 )
  {
    if ( !v11 )
      goto LABEL_77;
    goto LABEL_63;
  }
  if ( !v11 )
  {
LABEL_77:
    if ( !a3 )
      KeBugCheckEx(0x22u, (int)result, 0LL, 0x3B8uLL, 0LL);
    *a4 |= 1u;
  }
  if ( v19 )
LABEL_69:
    --*(_WORD *)(a1 + 74);
  return result;
}
