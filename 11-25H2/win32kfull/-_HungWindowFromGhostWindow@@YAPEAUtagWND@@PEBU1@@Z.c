/*
 * XREFs of ?_HungWindowFromGhostWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1401B681C
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x14004A6D4 (xxxInitSendValidateMinMaxInfoEx.c)
 *     NtUserHungWindowFromGhostWindow @ 0x1401B6770 (NtUserHungWindowFromGhostWindow.c)
 *     ?GetMonitorMaxArea@@YA?AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z @ 0x1401B67CC (-GetMonitorMaxArea@@YA-AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z.c)
 * Callees:
 *     ?GetFrostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z @ 0x14001EF1C (-GetFrostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z.c)
 *     ?GetGhostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z @ 0x14001F054 (-GetGhostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 */

struct tagWND *__fastcall _HungWindowFromGhostWindow(const struct tagWND *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 GhostProp; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx

  v2 = *((_QWORD *)a1 + 5);
  v3 = 0LL;
  v4 = *(unsigned __int16 *)(v2 + 42);
  if ( (*(_WORD *)(v2 + 42) & 0x2FFF) == 0x2AA
    && *(char *)(v2 + 19) >= 0
    && *(char *)(v2 + 20) >= 0
    && (v4 & 0x8000u) == 0LL )
  {
    v5 = *((_QWORD *)a1 + 2);
    if ( !v5 || (_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 528), 0, 0) & 1) == 0 )
    {
      GhostProp = GetGhostProp(a1, v4);
      if ( GhostProp || (GhostProp = GetFrostProp(a1, v7)) != 0 )
      {
        LOBYTE(v7) = 1;
        v8 = HMValidateHandleNoSecure(GhostProp, v7);
        v3 = v8;
        if ( v8 )
        {
          v9 = *(_QWORD *)(v8 + 40);
          if ( *(char *)(v9 + 19) < 0 )
            return 0LL;
          if ( *(char *)(v9 + 20) < 0 )
            return 0LL;
          if ( *(__int16 *)(v9 + 42) < 0 )
            return 0LL;
          v10 = *(_QWORD *)(v3 + 16);
          if ( v10 )
          {
            if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v10 + 528), 0, 0) & 1) != 0 )
              return 0LL;
          }
        }
      }
    }
  }
  return (struct tagWND *)v3;
}
