/*
 * XREFs of ?GetInputQueueType@CVisual@@QEBA?AW4CompositionInputQueueType@@W4InputType@@@Z @ 0x180026BA0
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x1800944C4 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180026C60 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CVisual::GetInputQueueType(CVisual *a1)
{
  unsigned int v1; // ebx
  struct CInteraction *InteractionInternal; // rax
  int v3; // r10d
  __int64 v4; // rcx
  int v5; // r10d
  int v6; // r10d
  int v7; // r10d
  int v8; // r10d
  int v9; // r10d
  int v10; // r10d
  __int64 v12; // rcx
  int v13; // [rsp+20h] [rbp-28h] BYREF
  __int128 v14; // [rsp+24h] [rbp-24h]
  unsigned int v15; // [rsp+34h] [rbp-14h]

  v1 = 0;
  InteractionInternal = CVisual::GetInteractionInternal(a1);
  if ( InteractionInternal )
  {
    v4 = *((_QWORD *)InteractionInternal + 14);
    if ( v4 )
    {
      v5 = v3 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 && (v7 = v6 - 1) != 0 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 && (v10 = v9 - 1) != 0 )
            {
              if ( v10 == 1 )
              {
                v12 = *(_QWORD *)(v4 + 64);
                if ( v12 )
                {
                  v13 = 24;
                  v14 = 0LL;
                  v15 = 0;
                  if ( (int)NtQueryCompositionInputSink(v12, &v13) >= 0 )
                    return v15;
                }
              }
            }
            else
            {
              return *(unsigned int *)(v4 + 76);
            }
          }
          else
          {
            return *(unsigned int *)(v4 + 88);
          }
        }
        else
        {
          return *(unsigned int *)(v4 + 84);
        }
      }
    }
  }
  return v1;
}
