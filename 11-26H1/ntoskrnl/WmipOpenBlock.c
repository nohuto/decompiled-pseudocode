/*
 * XREFs of WmipOpenBlock @ 0x140A0D540
 * Callers:
 *     WmipIoControl @ 0x140A0BC50 (WmipIoControl.c)
 *     IoWMIOpenBlock @ 0x140A0D390 (IoWMIOpenBlock.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     WmipAllocGuidEntry @ 0x140A0A774 (WmipAllocGuidEntry.c)
 *     WmipIsQuerySetGuid @ 0x140A0D1A8 (WmipIsQuerySetGuid.c)
 *     WmipEnableCollectOrEvent @ 0x140A0D280 (WmipEnableCollectOrEvent.c)
 *     WmipOpenGuidObject @ 0x140A0D764 (WmipOpenGuidObject.c)
 *     WmipFindGEByGuid @ 0x140A0D800 (WmipFindGEByGuid.c)
 */

__int64 __fastcall WmipOpenBlock(int a1, __int64 a2, __int64 a3, unsigned int a4, _QWORD *a5)
{
  unsigned __int64 v5; // rax
  char v6; // bp
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // rbx
  __int64 GEByGuid; // rdi
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  _QWORD *v15; // rax
  __int64 *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rdx
  _QWORD v20[5]; // [rsp+30h] [rbp-28h] BYREF

  v20[0] = 0LL;
  v5 = (unsigned int)(a1 - 2244872);
  v6 = a2;
  if ( (unsigned int)v5 > 0x38 )
    return (unsigned int)-1073741649;
  v8 = 0x110000000000001LL;
  if ( !_bittest64(&v8, v5) )
    return (unsigned int)-1073741649;
  v9 = WmipOpenGuidObject(a3, a2, a4, v20);
  if ( v9 >= 0 )
  {
    v10 = v20[0];
    *(_DWORD *)(v20[0] + 64LL) = a1;
    if ( a1 == 2244872 )
    {
      *(_DWORD *)(v10 + 164) |= 1u;
      goto LABEL_9;
    }
    GEByGuid = WmipFindGEByGuid(v10 + 24, 0LL);
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    if ( GEByGuid )
    {
      v12 = *(_QWORD **)(GEByGuid + 48);
      v13 = (_QWORD *)(v10 + 40);
      if ( *v12 != GEByGuid + 40 )
        goto LABEL_7;
      *v13 = GEByGuid + 40;
      *(_QWORD *)(v10 + 48) = v12;
      *v12 = v13;
      *(_QWORD *)(GEByGuid + 48) = v13;
    }
    *(_QWORD *)(v10 + 56) = GEByGuid;
    KeReleaseMutex(&WmipSMMutex, 0);
    if ( a1 == 2244924 )
    {
      if ( !GEByGuid || *(_DWORD *)(GEByGuid + 36) == a1 - 2244924 || !WmipIsQuerySetGuid(GEByGuid) )
      {
        v9 = -1073741163;
        goto LABEL_19;
      }
    }
    else if ( a1 != 2244928 )
    {
      goto LABEL_9;
    }
    if ( !v6 )
      *(_DWORD *)(v10 + 164) |= 2u;
    if ( GEByGuid )
      goto LABEL_18;
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    v15 = WmipAllocGuidEntry();
    GEByGuid = (__int64)v15;
    if ( v15 )
    {
      *(_OWORD *)(v15 + 9) = *(_OWORD *)(v10 + 24);
      v16 = (__int64 *)WmipGEHeadPtr;
      v17 = *(_QWORD *)WmipGEHeadPtr;
      if ( *(_QWORD *)(*(_QWORD *)WmipGEHeadPtr + 8LL) != WmipGEHeadPtr
        || (*(_QWORD *)GEByGuid = v17,
            *(_QWORD *)(GEByGuid + 8) = v16,
            *(_QWORD *)(v17 + 8) = GEByGuid,
            *v16 = GEByGuid,
            v18 = (_QWORD *)(v10 + 40),
            v19 = *(_QWORD **)(GEByGuid + 48),
            *v19 != GEByGuid + 40) )
      {
LABEL_7:
        __fastfail(3u);
      }
      *v18 = GEByGuid + 40;
      *(_QWORD *)(v10 + 48) = v19;
      *v19 = v18;
      *(_QWORD *)(GEByGuid + 48) = v18;
      *(_QWORD *)(v10 + 56) = GEByGuid;
      KeReleaseMutex(&WmipSMMutex, 0);
LABEL_18:
      v9 = WmipEnableCollectOrEvent(GEByGuid, a1, (_BYTE *)(v10 + 160));
      if ( v9 < 0 )
        goto LABEL_19;
LABEL_9:
      *a5 = v10;
      v10 = 0LL;
      v9 = 0;
      goto LABEL_19;
    }
    KeReleaseMutex(&WmipSMMutex, 0);
    v9 = -1073741670;
LABEL_19:
    if ( v10 )
      ObfDereferenceObject((PVOID)v10);
  }
  return (unsigned int)v9;
}
