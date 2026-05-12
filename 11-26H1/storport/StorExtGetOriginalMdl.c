/*
 * XREFs of StorExtGetOriginalMdl @ 0x14004EC80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall StorExtGetOriginalMdl(__int64 a1)
{
  __int64 v1; // rax

  v1 = 96LL;
  if ( *(_BYTE *)(a1 + 2) != 40 )
    v1 = 48LL;
  return *(_QWORD *)(*(_QWORD *)(v1 + a1) + 104LL);
}
