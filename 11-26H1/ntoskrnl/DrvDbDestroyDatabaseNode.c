/*
 * XREFs of DrvDbDestroyDatabaseNode @ 0x1408A5D90
 * Callers:
 *     DrvDbOpenContext @ 0x1408A569C (DrvDbOpenContext.c)
 *     DrvDbUnregisterDatabase @ 0x1408A59F4 (DrvDbUnregisterDatabase.c)
 *     DrvDbCreateDatabaseNode @ 0x1408A5A58 (DrvDbCreateDatabaseNode.c)
 *     DrvDbDispatchDriverDatabase @ 0x140A880C0 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140B2BB4C (DrvDbOpenDriverDatabaseRegKey.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x14046E1A0 (ExDeleteResourceLite.c)
 *     DrvDbUnloadDatabaseNode @ 0x140978AEC (DrvDbUnloadDatabaseNode.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbDestroyDatabaseNode(__int64 a1, _QWORD *a2)
{
  int v4; // esi
  void **v5; // rdx
  void **v6; // rax
  _QWORD *v7; // rax
  void *v8; // rdi

  v4 = DrvDbUnloadDatabaseNode(a1, a2);
  if ( v4 >= 0 )
  {
    v5 = (void **)*a2;
    if ( *a2 )
    {
      if ( v5[1] != a2 || (v6 = (void **)a2[1], *v6 != a2) )
        __fastfail(3u);
      *v6 = v5;
      v5[1] = v6;
    }
    v7 = *(_QWORD **)(a1 + 32);
    if ( v7 == a2 )
    {
      *(_QWORD *)(a1 + 32) = 0LL;
      v7 = 0LL;
    }
    if ( *(_QWORD **)(a1 + 40) == a2 )
      *(_QWORD *)(a1 + 40) = v7;
    v8 = (void *)a2[19];
    if ( v8 )
    {
      ExDeleteResourceLite((PERESOURCE)a2[19]);
      ExFreePoolWithTag(v8, 0);
    }
    RtlFreeAnsiString((PUNICODE_STRING)a2 + 1);
    RtlFreeAnsiString((PUNICODE_STRING)a2 + 3);
    ExFreePoolWithTag(a2, 0);
  }
  return (unsigned int)v4;
}
