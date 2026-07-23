/*
 * XREFs of WmipSendEnableRequest @ 0x140A0A1B0
 * Callers:
 *     WmipEnableCollectOrEvent @ 0x140A0D280 (WmipEnableCollectOrEvent.c)
 * Callees:
 *     WmipWaitForCollectionEnabled @ 0x14082A5BC (WmipWaitForCollectionEnabled.c)
 *     WmipReleaseCollectionEnabled @ 0x140A09BAC (WmipReleaseCollectionEnabled.c)
 *     WmipSendEnableDisableRequest @ 0x140A0A3D0 (WmipSendEnableDisableRequest.c)
 *     WmipUnreferenceEntry @ 0x140A0E124 (WmipUnreferenceEntry.c)
 *     WmipReferenceEntry @ 0x140A0ED40 (WmipReferenceEntry.c)
 */

__int64 __fastcall WmipSendEnableRequest(_DWORD *BugCheckParameter2, char a2)
{
  int v4; // ecx
  int v5; // edi
  unsigned int v6; // r14d
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // r8

  if ( a2 )
  {
    v4 = BugCheckParameter2[22];
    v5 = 2;
    BugCheckParameter2[22] = v4 + 1;
  }
  else
  {
    v4 = BugCheckParameter2[23];
    v5 = 4;
    BugCheckParameter2[23] = v4 + 1;
  }
  if ( v4 || (v5 & BugCheckParameter2[4]) != 0 )
  {
    if ( !a2 && (v5 & BugCheckParameter2[4]) != 0 )
      WmipWaitForCollectionEnabled((__int64)BugCheckParameter2);
    return 0;
  }
  else
  {
    WmipReferenceEntry((ULONG_PTR)BugCheckParameter2);
    BugCheckParameter2[4] |= v5;
    v10 = -(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFFCuLL;
    do
    {
      LOBYTE(v9) = a2;
      LOBYTE(v8) = a2 != 0 ? 4 : 6;
      v6 = WmipSendEnableDisableRequest(v8, BugCheckParameter2, v9);
      if ( *(_DWORD *)((char *)BugCheckParameter2 + v10 + 92) )
        break;
      LOBYTE(v12) = a2;
      LOBYTE(v11) = a2 != 0 ? 5 : 7;
      v6 = WmipSendEnableDisableRequest(v11, BugCheckParameter2, v12);
    }
    while ( *(_DWORD *)((char *)BugCheckParameter2 + v10 + 92) );
    BugCheckParameter2[4] &= ~v5;
    if ( !a2 )
      WmipReleaseCollectionEnabled((__int64)BugCheckParameter2);
    WmipUnreferenceEntry(&WmipGEChunkInfo, BugCheckParameter2);
  }
  return v6;
}
