/*
 * XREFs of ?FinalizeTracking@DripsBlockerTrackingHelper@@QEAAXXZ @ 0x1403B4760
 * Callers:
 *     ?FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ @ 0x1403B3D88 (-FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?EnableEntryAccounting@DripsBlockerTrackingHelper@@IEAAXII_N@Z @ 0x1402F80A8 (-EnableEntryAccounting@DripsBlockerTrackingHelper@@IEAAXII_N@Z.c)
 */

void __fastcall DripsBlockerTrackingHelper::FinalizeTracking(DripsBlockerTrackingHelper *this)
{
  unsigned int v2; // edi
  char *v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v6; // rcx

  if ( !*((_BYTE *)this + 302128) )
  {
    v2 = 0;
    v3 = (char *)this + 56;
    v4 = 0LL;
    do
    {
      if ( v3[48] )
      {
        v5 = 0LL;
        *(_QWORD *)v3 = 0LL;
        *((_QWORD *)v3 + 1) = 0LL;
        *((_QWORD *)v3 + 2) = 0LL;
        *((_QWORD *)v3 + 3) = 0LL;
        *((_QWORD *)v3 + 4) = 0LL;
        for ( *((_DWORD *)v3 + 10) = 0;
              (unsigned int)v5 < *((_DWORD *)v3 - 3);
              *((_DWORD *)v3 + 10) += *(_DWORD *)&v3[8 * v6 + 120] )
        {
          if ( *(_DWORD *)((char *)this + 72 * v5 + v4 + 144) )
            DripsBlockerTrackingHelper::EnableEntryAccounting(this, v2, v5, 0);
          v6 = 9 * v5;
          v5 = (unsigned int)(v5 + 1);
          *(_QWORD *)v3 += *(_QWORD *)&v3[8 * v6 + 72];
          *((_QWORD *)v3 + 1) += *(_QWORD *)&v3[8 * v6 + 80];
          *((_QWORD *)v3 + 2) += *(_QWORD *)&v3[8 * v6 + 96];
          *((_QWORD *)v3 + 3) += *(_QWORD *)&v3[8 * v6 + 104];
          *((_DWORD *)v3 + 8) += *(_DWORD *)&v3[8 * v6 + 112];
          *((_DWORD *)v3 + 9) += *(_DWORD *)&v3[8 * v6 + 92];
        }
      }
      ++v2;
      v3 += 4720;
      v4 += 4720LL;
    }
    while ( v2 < 0x40 );
  }
}
