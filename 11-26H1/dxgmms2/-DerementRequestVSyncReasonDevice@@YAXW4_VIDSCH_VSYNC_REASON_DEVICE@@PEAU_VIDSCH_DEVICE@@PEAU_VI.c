/*
 * XREFs of ?DerementRequestVSyncReasonDevice@@YAXW4_VIDSCH_VSYNC_REASON_DEVICE@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x140047128
 * Callers:
 *     VidSchControlVSyncDevice @ 0x1400FD460 (VidSchControlVSyncDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DerementRequestVSyncReasonDevice(unsigned int a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  __int64 v5; // r10
  __int64 v6; // rcx

  result = a1;
  if ( a1 < 4 )
  {
    v5 = 0LL;
    if ( *(_BYTE *)(a3 + 2500) )
    {
      if ( a4 == -3 )
      {
        if ( *(_DWORD *)(a3 + 48) )
        {
          do
          {
            v6 = result + 4 * v5;
            v5 = (unsigned int)(v5 + 1);
            --*(_DWORD *)(a2 + 4 * v6 + 1400);
          }
          while ( (unsigned int)v5 < *(_DWORD *)(a3 + 48) );
        }
      }
      else
      {
        --*(_DWORD *)(a2 + 4 * (a1 + 4LL * a4) + 1400);
      }
    }
    else
    {
      --*(_DWORD *)(a2 + 4LL * a1 + 1400);
    }
  }
  return result;
}
