/*
 * XREFs of NdisSetAoAcOptions @ 0x140139420
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x140057DA0 (WPP_RECORDER_SF_D_ea_140057DA0.c)
 */

__int64 __fastcall NdisSetAoAcOptions(__int64 a1, int a2)
{
  __int64 v2; // rdi
  char v3; // si
  __int64 v4; // rbx
  unsigned int v6; // eax
  __int64 v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a2;
  v4 = *(_QWORD *)(v2 + 4456);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = a2;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x2Du,
      (struct _GUID *)&WPP_64b491f4d22c35747c5821aad1f382d9_Traceguids,
      a1,
      v8);
  }
  if ( *(_QWORD *)(v2 + 4456) )
  {
    if ( (v3 & 1) != 0 )
    {
      *(_DWORD *)(v4 + 284) = *(_DWORD *)ndisNicQuietDerefExtendedTimeout;
      v6 = *(_DWORD *)ndisNicQuietDerefExtendedTimeout;
    }
    else
    {
      *(_DWORD *)(v4 + 284) = ndisNicQuietDerefDefaultTimeout;
      v6 = ndisNicQuietDerefDefaultTimeout;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v7) = v6;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x2Fu,
        (struct _GUID *)&WPP_64b491f4d22c35747c5821aad1f382d9_Traceguids,
        v7);
    }
    return 0LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        14,
        46,
        (struct _GUID *)&WPP_64b491f4d22c35747c5821aad1f382d9_Traceguids);
    }
    return 3221225659LL;
  }
}
