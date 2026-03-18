/*
 * XREFs of ?GetInputQueueType@CInteraction@@QEBA?AW4CompositionInputQueueType@@W4InputType@@@Z @ 0x180197DC8
 * Callers:
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z @ 0x1800A8060 (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CInteraction::GetInputQueueType(__int64 a1, int a2)
{
  __int64 v2; // r8
  unsigned int v3; // ebx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  __int64 v11; // rcx
  int v12; // [rsp+20h] [rbp-28h] BYREF
  __int128 v13; // [rsp+24h] [rbp-24h]
  unsigned int v14; // [rsp+34h] [rbp-14h]

  v2 = *(_QWORD *)(a1 + 112);
  v3 = 0;
  if ( v2 )
  {
    v4 = a2 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 && (v6 = v5 - 1) != 0 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 && (v9 = v8 - 1) != 0 )
          {
            if ( v9 == 1 )
            {
              v11 = *(_QWORD *)(v2 + 64);
              if ( v11 )
              {
                v12 = 24;
                v13 = 0LL;
                v14 = 0;
                if ( (int)NtQueryCompositionInputSink(v11, &v12) >= 0 )
                  return v14;
              }
            }
          }
          else
          {
            return *(unsigned int *)(v2 + 76);
          }
        }
        else
        {
          return *(unsigned int *)(v2 + 88);
        }
      }
      else
      {
        return *(unsigned int *)(v2 + 84);
      }
    }
  }
  return v3;
}
