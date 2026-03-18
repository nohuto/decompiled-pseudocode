/*
 * XREFs of ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14007C49C
 * Callers:
 *     DxgkGetAdapter @ 0x1401E0400 (DxgkGetAdapter.c)
 *     DxgkReleaseAdapter @ 0x1401E0860 (DxgkReleaseAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1403653C0 (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x14040B4CC (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 */

void __fastcall DXGSESSIONDATA::SetAdapterLuidInRemoteSession(DXGSESSIONDATA *this, struct DXGADAPTER *a2)
{
  if ( a2 )
  {
    if ( *((_DWORD *)this + 4627) == *((_DWORD *)a2 + 103) && *((_DWORD *)this + 4628) == *((_DWORD *)a2 + 104) )
    {
      ++*((_DWORD *)this + 4629);
    }
    else
    {
      *(_QWORD *)((char *)this + 18508) = *(_QWORD *)((char *)a2 + 412);
      *((_DWORD *)this + 4629) = 1;
      DXGSESSIONDATA::AddAdapterToSession(this, (const struct _LUID *)((char *)this + 18508), a2, 0LL);
    }
  }
  else
  {
    if ( !*((_DWORD *)this + 4629) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 277;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(m_NumOutputsInRemoteSession > 0)",
        277LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*((_DWORD *)this + 4629))-- == 1 )
    {
      DXGSESSIONDATA::RemoveAdapterFromSession(this, (const struct _LUID *)((char *)this + 18508));
      *(_QWORD *)((char *)this + 18508) = 0LL;
    }
  }
}
