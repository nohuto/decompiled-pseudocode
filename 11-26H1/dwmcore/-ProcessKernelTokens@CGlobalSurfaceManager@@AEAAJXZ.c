/*
 * XREFs of ?ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x1801313E4
 * Callers:
 *     ?s_TokenThreadMain@CGlobalSurfaceManager@@CAKPEAX@Z @ 0x18022E170 (-s_TokenThreadMain@CGlobalSurfaceManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x180131570 (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     ?EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ @ 0x180131620 (-EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ?clear@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@QEAAXXZ @ 0x180131888 (-clear@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAdapterInfo@CGlobalSurfaceMana.c)
 */

__int64 __fastcall CGlobalSurfaceManager::ProcessKernelTokens(CGlobalSurfaceManager *this)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rcx
  int v5; // eax
  signed int LastError; // eax
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  __int128 v9; // [rsp+38h] [rbp-20h]

  v8 = *((_QWORD *)this + 16);
  v9 = 0LL;
  v2 = 0;
  while ( !*((_BYTE *)this + 144) )
  {
    SetLastError(0);
    if ( !ResetEvent(*((HANDLE *)this + 16)) )
    {
      LastError = GetLastError();
      v2 = LastError;
      if ( LastError > 0 )
        v2 = (unsigned __int16)LastError | 0x80070000;
      if ( (v2 & 0x80000000) == 0 )
        v2 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v2, 0x183u, 0LL);
      return v2;
    }
    if ( *((_BYTE *)this + 144) )
      return v2;
    CMmcssTask::Clone((LPCRITICAL_SECTION)((char *)g_pComposition + 728), (CGlobalSurfaceManager *)((char *)this + 408));
    v3 = CGlobalSurfaceManager::EnsureAdapterInfo(this);
    v2 = v3;
    if ( v3 >= 0 )
    {
      v4 = *((_QWORD *)this + 64) - *((_QWORD *)this + 63);
      *(_QWORD *)&v9 = *((_QWORD *)this + 63);
      DWORD2(v9) = -1431655765 * (v4 >> 3);
      v5 = NtTokenManagerThread(&v8);
      if ( v5 < 0 )
      {
        v2 = v5 | 0x10000000;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5 | 0x10000000, 0x1A3u, 0LL);
      }
      std::vector<CGlobalSurfaceManager::AdapterInfo>::clear((char *)this + 504);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x194u, 0LL);
      WaitForSingleObject(*((HANDLE *)this + 16), 0xFFFFFFFF);
    }
  }
  return v2;
}
