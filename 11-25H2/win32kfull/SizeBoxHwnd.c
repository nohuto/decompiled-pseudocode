/*
 * XREFs of SizeBoxHwnd @ 0x1402287F8
 * Callers:
 *     ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x140021D08 (-xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14002D590 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1401C0E78 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     FindNCHit @ 0x1401D7FEC (FindNCHit.c)
 *     DrawSize @ 0x1402E4C0C (DrawSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SizeBoxHwnd(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  int v3; // r10d
  __int64 v4; // rcx
  char v5; // r8
  int v6; // r8d

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1;
  if ( (*(_BYTE *)(v1 + 26) & 0x40) != 0 )
    v3 = *(_DWORD *)(v1 + 88);
  else
    v3 = *(_DWORD *)(v1 + 96);
  while ( 1 )
  {
    v4 = *(_QWORD *)(v2 + 40);
    if ( (*(_WORD *)(v4 + 42) & 0x2FFF) == 0x29D )
      return 0LL;
    v5 = *(_BYTE *)(v4 + 31);
    if ( (*(_BYTE *)(v4 + 30) & 4) != 0 )
      break;
    if ( (v5 & 0x40) == 0 || (*(_BYTE *)(v4 + 16) & 8) != 0 )
      return 0LL;
    v2 = *(_QWORD *)(v2 + 104);
  }
  if ( (v5 & 1) != 0 )
    return 0LL;
  if ( (*(_BYTE *)(v1 + 26) & 0x40) != 0 )
    v6 = *(_DWORD *)(v4 + 104);
  else
    v6 = *(_DWORD *)(v4 + 112);
  if ( (*(_BYTE *)(v1 + 26) & 0x40) != 0 )
  {
    if ( v3 - 2 > v6 )
      return 0LL;
  }
  else if ( v3 + 2 < v6 )
  {
    return 0LL;
  }
  if ( *(_DWORD *)(v1 + 100) + 2 < *(_DWORD *)(v4 + 116) )
    return 0LL;
  return v2;
}
