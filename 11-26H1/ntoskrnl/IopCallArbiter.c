/*
 * XREFs of IopCallArbiter @ 0x140B35EE4
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x1405DD704 (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     IopSetupArbiterAndTranslators @ 0x140B09784 (IopSetupArbiterAndTranslators.c)
 *     PnpReleaseResourcesInternal @ 0x140B35C90 (PnpReleaseResourcesInternal.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopCallArbiter(__int64 a1, __int64 a2, __int128 *a3)
{
  __int64 v3; // rbx
  unsigned int v5; // esi
  __int64 result; // rax
  __int128 v7; // xmm0
  __int128 v8; // [rsp+20h] [rbp-30h] BYREF
  __int128 v9; // [rsp+30h] [rbp-20h]
  __int128 v10; // [rsp+40h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 24);
  v5 = a2;
  v9 = 0LL;
  v10 = 0LL;
  v8 = 0LL;
  if ( !(_DWORD)a2 )
  {
    DWORD2(v9) = 0;
    a2 = 0LL;
    *(_QWORD *)&v10 = 0LL;
    goto LABEL_17;
  }
  if ( (_DWORD)a2 == 1 )
  {
    *(_QWORD *)&v9 = a3;
    DWORD2(v9) = 0;
    *(_QWORD *)&v10 = 0LL;
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v3 + 8), 1LL);
LABEL_15:
    a2 = v5;
LABEL_17:
    *(_QWORD *)&v9 = a3;
    return guard_dispatch_icall_no_overrides(*(_QWORD *)(v3 + 8), a2);
  }
  if ( (_DWORD)a2 != 2 )
  {
    if ( (_DWORD)a2 == 4 )
      return 3221225474LL;
    if ( (_DWORD)a2 != 5 )
    {
      if ( (_DWORD)a2 != 6 )
      {
        if ( (_DWORD)a2 == 7 )
        {
          v7 = *(__int128 *)((char *)a3 + 40);
          *((_QWORD *)a3 + 6) = &v8;
          *((_QWORD *)a3 + 5) = &v8;
          *(_QWORD *)&v9 = &v8;
          v8 = v7;
          result = guard_dispatch_icall_no_overrides(*(_QWORD *)(v3 + 8), 7LL);
          *(__int128 *)((char *)a3 + 40) = v8;
          return result;
        }
        if ( (_DWORD)a2 != 9 )
          return 3221225485LL;
        goto LABEL_15;
      }
      a2 = 6LL;
      v9 = *a3;
      v10 = a3[1];
    }
  }
  return guard_dispatch_icall_no_overrides(*(_QWORD *)(v3 + 8), a2);
}
