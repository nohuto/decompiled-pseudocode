/*
 * XREFs of ?DerementRequestVSyncReasonAdapter@@YAXW4_VIDSCH_VSYNC_REASON_ADAPTER@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x14003F6D0
 * Callers:
 *     VidSchControlVSyncAdapter @ 0x1400FD840 (VidSchControlVSyncAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DerementRequestVSyncReasonAdapter(unsigned int a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r10
  __int64 v4; // r9
  __int64 result; // rax
  __int64 v6; // rcx

  v3 = a1;
  if ( a1 < 5 )
  {
    v4 = 0LL;
    if ( *(_BYTE *)(a2 + 2500) )
    {
      if ( a3 == -3 )
      {
        if ( *(_DWORD *)(a2 + 48) )
        {
          do
          {
            result = v3 + 4 * v4;
            v6 = result + (unsigned int)v4;
            v4 = (unsigned int)(v4 + 1);
            --*(_DWORD *)(a2 + 4 * v6 + 2176);
          }
          while ( (unsigned int)v4 < *(_DWORD *)(a2 + 48) );
        }
      }
      else
      {
        result = a3;
        --*(_DWORD *)(a2 + 4 * (a1 + 5LL * a3) + 2176);
      }
    }
    else
    {
      --*(_DWORD *)(a2 + 4LL * a1 + 2176);
    }
  }
  return result;
}
