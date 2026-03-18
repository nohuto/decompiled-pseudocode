/*
 * XREFs of ?ReleaseSessionGdiViewId@DXGSESSIONDATA@@QEAAXKE@Z @ 0x140203440
 * Callers:
 *     DxgkReleaseGdiViewId @ 0x140205270 (DxgkReleaseGdiViewId.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

void __fastcall DXGSESSIONDATA::ReleaseSessionGdiViewId(DXGSESSIONDATA *this, signed __int32 a2, char a3)
{
  __int64 v6; // rbx
  unsigned int v7; // edx
  unsigned int v8; // edx
  int v9; // ecx
  _BYTE v10[16]; // [rsp+50h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DXGSESSIONDATA *)((char *)this + 19120), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  v6 = 0LL;
  v7 = *((_DWORD *)this + 4793) + *((_DWORD *)this + 4792);
  if ( !v7 )
    goto LABEL_5;
  do
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 2398) + 4 * v6) == a2 )
      break;
    v6 = (unsigned int)(v6 + 1);
  }
  while ( (unsigned int)v6 < v7 );
  if ( (unsigned int)v6 >= v7 )
  {
LABEL_5:
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5010;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"i < m_NumSessionViewIds + m_NumPendingSessionViewIds",
      5010LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v8 = *((_DWORD *)this + 4792);
  v9 = *((_DWORD *)this + 4793);
  if ( (unsigned int)v6 < v8 + v9 )
  {
    if ( (unsigned int)v6 >= v8 )
      *((_DWORD *)this + 4793) = --v9;
    else
      *((_DWORD *)this + 4792) = --v8;
    if ( (unsigned int)v6 < v9 + v8 )
      memmove(
        (void *)(*((_QWORD *)this + 2398) + 4 * v6),
        (const void *)(*((_QWORD *)this + 2398) + 4LL * (unsigned int)(v6 + 1)),
        4LL * (v8 + v9 - (_DWORD)v6));
  }
  if ( a3 )
    _InterlockedCompareExchange((volatile signed __int32 *)&DXGSESSIONDATA::s_GlobalGdiViewId, a2 - 1, a2);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v10);
}
