/*
 * XREFs of VidSchiCompletePendingFlip @ 0x1400036D8
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1400051E8 (VidSchiSetFlipDevice.c)
 *     VidSchiCompleteAllPendingCommand @ 0x140058F78 (VidSchiCompleteAllPendingCommand.c)
 * Callees:
 *     VidSchiCompletePendingFlipOnPlane @ 0x140003348 (VidSchiCompletePendingFlipOnPlane.c)
 *     VidSchiQueueAsyncLiveDump @ 0x1400551C0 (VidSchiQueueAsyncLiveDump.c)
 */

__int64 __fastcall VidSchiCompletePendingFlip(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v5; // r15
  __int64 v7; // rdi
  int i; // esi
  __int64 v10; // rcx
  __int64 v11; // r9
  _DWORD *v13; // rax
  int v14; // edx
  int *v15; // rcx
  int v16; // eax
  int v17; // [rsp+30h] [rbp-48h] BYREF
  __int128 v18; // [rsp+34h] [rbp-44h]
  int v19; // [rsp+44h] [rbp-34h]
  int v20; // [rsp+48h] [rbp-30h]
  int v21; // [rsp+4Ch] [rbp-2Ch]
  int v22; // [rsp+50h] [rbp-28h]
  int v23; // [rsp+54h] [rbp-24h]

  v5 = a3;
  v7 = a3;
  for ( i = -1; i != *(_DWORD *)(a2 + 160); ++i )
  {
    v10 = *(_QWORD *)(a2 + 8 * v5 + 3448);
    v7 = v5;
    if ( i == -1 )
      v11 = *(_QWORD *)(v10 + 32);
    else
      v11 = *(_QWORD *)(v10 + 8LL * i + 40);
    VidSchiCompletePendingFlipOnPlane(a1, a2, v5, v11, a4);
  }
  if ( a4 == 9 )
  {
    v13 = *(_DWORD **)(a2 + 8 * v7 + 3448);
    v14 = v13[812];
    v15 = v13 + 813;
    if ( v14 || *v15 )
    {
      v20 = v13[809];
      v16 = *v15;
      v21 = v14;
      v18 = 0LL;
      v19 = 0;
      v23 = 0;
      v17 = 0;
      v22 = v16;
      VidSchiQueueAsyncLiveDump(a2, &v17);
    }
    *(_DWORD *)(*(_QWORD *)(a2 + 8 * v7 + 3448) + 3248LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a2 + 8 * v7 + 3448) + 3252LL) = 0;
  }
  return 0LL;
}
