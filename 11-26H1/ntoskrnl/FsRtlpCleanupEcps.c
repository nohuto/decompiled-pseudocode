/*
 * XREFs of FsRtlpCleanupEcps @ 0x140986DF0
 * Callers:
 *     IoQueryInformationByName @ 0x1409857A0 (IoQueryInformationByName.c)
 *     NtQueryFullAttributesFile @ 0x1409868B0 (NtQueryFullAttributesFile.c)
 *     NtQueryAttributesFile @ 0x140986B10 (NtQueryAttributesFile.c)
 *     IopCleanupExtraCreateParameters @ 0x140986DB0 (IopCleanupExtraCreateParameters.c)
 *     NtDeleteFile @ 0x140B2A470 (NtDeleteFile.c)
 *     IopFastQueryNetworkAttributes @ 0x140B4DF10 (IopFastQueryNetworkAttributes.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall FsRtlpCleanupEcps(_DWORD *P)
{
  int v1; // eax
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r14
  struct _PAGED_LOOKASIDE_LIST *v7; // rcx
  __int64 v8; // rdx
  _QWORD *v10; // rbx
  _QWORD *v11; // rsi
  _QWORD *v12; // rax
  __int64 v13; // r14
  struct _PAGED_LOOKASIDE_LIST *v14; // rcx
  __int64 v15; // rdx

  v1 = P[1];
  if ( (v1 & 0x3F0) != 0 )
  {
    P[1] = v1 - 16;
    return 1;
  }
  else
  {
    v3 = P + 2;
    if ( (v1 & 1) != 0 )
    {
      v10 = (_QWORD *)*v3;
      while ( v10 != v3 )
      {
        v11 = v10;
        v10 = (_QWORD *)*v10;
        if ( (v11[5] & 1) == 0 )
        {
          if ( (_QWORD *)v10[1] != v11 || (v12 = (_QWORD *)v11[1], (_QWORD *)*v12 != v11) )
LABEL_31:
            __fastfail(3u);
          *v12 = v10;
          v13 = 0LL;
          v10[1] = v12;
          v11[1] = 0LL;
          *v11 = 0LL;
          if ( v11[4] )
            guard_dispatch_icall_no_overrides((__int64)(v11 + 8), (__int64)(v11 + 2));
          if ( (v11[5] & 0x20) != 0 && FltMgrCallbacks )
          {
            v13 = v11[7];
            guard_dispatch_icall_no_overrides(v13, (__int64)(v11 + 8));
          }
          v14 = (struct _PAGED_LOOKASIDE_LIST *)v11[6];
          if ( v14 )
            ExFreeToNPagedLookasideList(v14, v11 - 1);
          else
            ExFreePoolWithTag(v11 - 1, 0);
          if ( v13 )
            guard_dispatch_icall_no_overrides(v13, v15);
        }
      }
      return 0;
    }
    else
    {
      while ( 1 )
      {
        v4 = (_QWORD *)*v3;
        if ( (_QWORD *)*v3 == v3 )
          break;
        if ( (_QWORD *)v4[1] != v3 )
          goto LABEL_31;
        v5 = *v4;
        if ( *(_QWORD **)(*v4 + 8LL) != v4 )
          goto LABEL_31;
        *v3 = v5;
        v6 = 0LL;
        *(_QWORD *)(v5 + 8) = v3;
        v4[1] = 0LL;
        *v4 = 0LL;
        if ( v4[4] )
          guard_dispatch_icall_no_overrides((__int64)(v4 + 8), (__int64)(v4 + 2));
        if ( (v4[5] & 0x20) != 0 && FltMgrCallbacks )
        {
          v6 = v4[7];
          guard_dispatch_icall_no_overrides(v6, (__int64)(v4 + 8));
        }
        v7 = (struct _PAGED_LOOKASIDE_LIST *)v4[6];
        if ( v7 )
          ExFreeToNPagedLookasideList(v7, v4 - 1);
        else
          ExFreePoolWithTag(v4 - 1, 0);
        if ( v6 )
          guard_dispatch_icall_no_overrides(v6, v8);
      }
      if ( (P[1] & 4) != 0 )
        ExFreeToNPagedLookasideList(&FsRtlEcpListLookaside, P);
      else
        ExFreePoolWithTag(P, 0);
      return 1;
    }
  }
}
