/*
 * XREFs of FsRtlNotifyCompleteIrpList @ 0x140A8AAB8
 * Callers:
 *     FsRtlCheckNotifyForDeleteLite @ 0x14077E898 (FsRtlCheckNotifyForDeleteLite.c)
 *     FsRtlNotifyFilterReportChange @ 0x140AF8AC0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlCheckNotifyForDelete @ 0x140B593C0 (FsRtlCheckNotifyForDelete.c)
 * Callees:
 *     FsRtlNotifyCompleteIrp @ 0x140A8AB54 (FsRtlNotifyCompleteIrp.c)
 */

__int64 __fastcall FsRtlNotifyCompleteIrpList(__int64 a1, int a2)
{
  __int64 **v2; // rbx
  __int64 *v4; // rcx
  __int64 *v5; // rax
  __int64 result; // rax

  v2 = (__int64 **)(a1 + 48);
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_WORD *)(a1 + 72) &= ~2u;
  do
  {
    v4 = *v2;
    if ( (__int64 **)(*v2)[1] != v2 || (v5 = (__int64 *)*v4, *(__int64 **)(*v4 + 8) != v4) )
      __fastfail(3u);
    *v2 = v5;
    v5[1] = (__int64)v2;
    *v4 = 0LL;
    result = FsRtlNotifyCompleteIrp((PIRP)(v4 - 21), 1);
  }
  while ( a2 && *v2 != (__int64 *)v2 );
  return result;
}
