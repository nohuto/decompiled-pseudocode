/*
 * XREFs of MiUnlinkPageListUpdateCounts @ 0x140298700
 * Callers:
 *     MiFinishUnlinkBatch @ 0x140298600 (MiFinishUnlinkBatch.c)
 * Callees:
 *     <none>
 */

void __fastcall MiUnlinkPageListUpdateCounts(_QWORD *a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rax

  v1 = a1[10];
  if ( v1 )
  {
    v2 = *(_QWORD *)(a1[1] + 7544LL);
    if ( v1 == 1 )
      _InterlockedDecrement64((volatile signed __int64 *)(v2 + 16));
    else
      _InterlockedAdd64((volatile signed __int64 *)(v2 + 16), -v1);
    a1[10] = 0LL;
  }
  v3 = a1[13];
  if ( v3 )
  {
    v4 = a1[6];
    if ( v3 == 1 )
      _InterlockedDecrement64((volatile signed __int64 *)(v4 + 16));
    else
      _InterlockedAdd64((volatile signed __int64 *)(v4 + 16), -v3);
    a1[13] = 0LL;
  }
}
