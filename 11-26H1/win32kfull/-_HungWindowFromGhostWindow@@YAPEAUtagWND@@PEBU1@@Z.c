/*
 * XREFs of ?_HungWindowFromGhostWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1401E0304
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x14003144C (xxxInitSendValidateMinMaxInfoEx.c)
 *     NtUserHungWindowFromGhostWindow @ 0x1401E0240 (NtUserHungWindowFromGhostWindow.c)
 *     ?GetMonitorMaxArea@@YA?AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z @ 0x1401E02A0 (-GetMonitorMaxArea@@YA-AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z.c)
 * Callees:
 *     ?GetFrostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z @ 0x14002355C (-GetFrostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z.c)
 *     ?GetGhostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z @ 0x14002367C (-GetGhostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 */

struct tagWND *__fastcall _HungWindowFromGhostWindow(const struct tagWND *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v6; // rcx
  __int64 GhostProp; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx

  v2 = *((_QWORD *)a1 + 5);
  v3 = 0LL;
  v4 = *(unsigned __int16 *)(v2 + 42);
  if ( (*(_WORD *)(v2 + 42) & 0x2FFF) == 0x2AA
    && *(char *)(v2 + 19) >= 0
    && *(char *)(v2 + 20) >= 0
    && (v4 & 0x8000u) == 0LL )
  {
    v6 = *((_QWORD *)a1 + 2);
    if ( !v6 || (_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 520), 0, 0) & 1) == 0 )
    {
      GhostProp = GetGhostProp(a1, v4);
      if ( GhostProp || (GhostProp = GetFrostProp(a1, v8)) != 0 )
      {
        v9 = HMValidateHandleNoSecure(GhostProp, 1);
        v3 = v9;
        if ( v9 )
        {
          v10 = *(_QWORD *)(v9 + 40);
          if ( *(char *)(v10 + 19) < 0 )
            return 0LL;
          if ( *(char *)(v10 + 20) < 0 )
            return 0LL;
          if ( *(__int16 *)(v10 + 42) < 0 )
            return 0LL;
          v11 = *(_QWORD *)(v3 + 16);
          if ( v11 )
          {
            if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v11 + 520), 0, 0) & 1) != 0 )
              return 0LL;
          }
        }
      }
    }
  }
  return (struct tagWND *)v3;
}
