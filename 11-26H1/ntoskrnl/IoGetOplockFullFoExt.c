/*
 * XREFs of IoGetOplockFullFoExt @ 0x1403F9D84
 * Callers:
 *     FsRtlpOplockCleanup @ 0x1403F959C (FsRtlpOplockCleanup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoGetOplockFullFoExt(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = 0LL;
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 208);
    if ( v2 )
      return *(_QWORD *)(v2 + 56);
  }
  return result;
}
