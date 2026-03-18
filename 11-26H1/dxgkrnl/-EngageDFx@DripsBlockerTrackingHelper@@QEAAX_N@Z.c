/*
 * XREFs of ?EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z @ 0x1401D500C
 * Callers:
 *     ?SetDFxEngaged@DXGGLOBAL@@QEAAXH@Z @ 0x1401C1848 (-SetDFxEngaged@DXGGLOBAL@@QEAAXH@Z.c)
 * Callees:
 *     ?EnableEntryAccounting@DripsBlockerTrackingHelper@@IEAAXII_N@Z @ 0x1402F80A8 (-EnableEntryAccounting@DripsBlockerTrackingHelper@@IEAAXII_N@Z.c)
 *     ?ResetDAM@DripsBlockerTrackingHelper@@IEAAXXZ @ 0x14037EEE4 (-ResetDAM@DripsBlockerTrackingHelper@@IEAAXXZ.c)
 *     ?Start@TimeInterval@DripsBlockerTrackingHelper@@QEAAXXZ @ 0x14037EF10 (-Start@TimeInterval@DripsBlockerTrackingHelper@@QEAAXXZ.c)
 *     ?AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ @ 0x14037EFF0 (-AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ.c)
 *     ?Stop@TimeInterval@DripsBlockerTrackingHelper@@QEAA_KXZ @ 0x14037F10C (-Stop@TimeInterval@DripsBlockerTrackingHelper@@QEAA_KXZ.c)
 */

void __fastcall DripsBlockerTrackingHelper::EngageDFx(DripsBlockerTrackingHelper *this, char a2)
{
  unsigned int v3; // ebp
  char *v4; // rdi
  __int64 i; // rsi

  if ( !*((_BYTE *)this + 302128) )
  {
    if ( a2 )
    {
      DripsBlockerTrackingHelper::AddD0LagTimeToLastActiveEntry(this);
      v3 = 0;
      v4 = (char *)this + 44;
      do
      {
        if ( v4[60] )
        {
          for ( i = 0LL; (unsigned int)i < *(_DWORD *)v4; i = (unsigned int)(i + 1) )
          {
            if ( *(_DWORD *)&v4[72 * i + 100] )
            {
              DripsBlockerTrackingHelper::EnableEntryAccounting(this, v3, i, 0);
              *(_DWORD *)&v4[72 * i + 100] = 0;
            }
          }
        }
        ++v3;
        v4 += 4720;
      }
      while ( v3 < 0x40 );
      DripsBlockerTrackingHelper::TimeInterval::Start((DripsBlockerTrackingHelper *)((char *)this + 302104));
    }
    else
    {
      DripsBlockerTrackingHelper::TimeInterval::Stop((DripsBlockerTrackingHelper *)((char *)this + 302104));
    }
  }
  DripsBlockerTrackingHelper::ResetDAM(this);
}
