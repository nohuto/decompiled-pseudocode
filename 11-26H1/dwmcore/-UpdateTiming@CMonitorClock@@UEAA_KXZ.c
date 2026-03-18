/*
 * XREFs of ?UpdateTiming@CMonitorClock@@UEAA_KXZ @ 0x1801869C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentTime@CClockBase@@IEBA_KXZ @ 0x180186B64 (-GetCurrentTime@CClockBase@@IEBA_KXZ.c)
 *     ?EnsureForwardTiming@CClockBase@@IEAAX_K@Z @ 0x180186BE0 (-EnsureForwardTiming@CClockBase@@IEAAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int64 __fastcall CMonitorClock::UpdateTiming(CMonitorClock *this)
{
  unsigned __int64 CurrentTime; // rax
  __int64 v3; // rcx
  unsigned __int64 *v4; // r15
  unsigned __int64 v5; // rdi
  __int64 v6; // r9
  CComposition *v7; // rax
  char v8; // r8
  unsigned __int64 v9; // rsi
  _QWORD *v10; // rcx
  unsigned __int64 v11; // rbp
  LARGE_INTEGER v12; // rcx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 v17; // rax
  _QWORD v18[2]; // [rsp+30h] [rbp-38h] BYREF
  int v19; // [rsp+40h] [rbp-28h]
  LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp+8h] BYREF

  CurrentTime = CClockBase::GetCurrentTime(this);
  v3 = *((_QWORD *)this + 12);
  v4 = (unsigned __int64 *)((char *)this + 104);
  v18[0] = 0LL;
  v18[1] = 0LL;
  v5 = CurrentTime;
  v19 = 0;
  LOBYTE(v6) = 1;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, char *, _QWORD *, __int64))(*(_QWORD *)v3 + 216LL))(
         v3,
         (char *)this + 104,
         v18,
         v6) )
  {
    v7 = g_pComposition;
    v8 = 0;
    v9 = *((_QWORD *)this + 14);
    *((_QWORD *)this + 3) = v9;
    *((_BYTE *)this + 88) = 0;
    v10 = (_QWORD *)*((_QWORD *)v7 + 77);
    if ( v10[4] - v10[3] != 8LL && v9 <= CCommonRegistryData::m_parallelModeDurationThreshold && 9 * v9 <= 5LL * v10[2] )
    {
      *((_BYTE *)this + 88) = 1;
      v8 = 1;
    }
    v11 = *v4;
    v12.QuadPart = v5;
    PerformanceCount.QuadPart = v5;
    if ( !v5 )
    {
      QueryPerformanceCounter(&PerformanceCount);
      v8 = *((_BYTE *)this + 88);
      v12 = PerformanceCount;
    }
    if ( v9 + v11 < v12.QuadPart )
      v11 = v12.QuadPart - (v12.QuadPart - v11) % v9;
    v13 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 2) = v11;
    v14 = v11 + v13 * ((v8 != 0) + 1LL);
    v15 = (v13 >> 1) + v14;
  }
  else
  {
    *v4 = 0LL;
    *((_DWORD *)this + 30) = 0;
    *((_QWORD *)this + 14) = 0LL;
    v17 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 2) = v5;
    v15 = v5 + v17 + (v17 >> 1);
    v14 = v17 + v5;
  }
  *((_QWORD *)this + 5) = v14;
  *((_QWORD *)this + 6) = v15;
  *((_QWORD *)this + 4) = *((_QWORD *)this + 5) - *((_QWORD *)this + 3);
  CClockBase::EnsureForwardTiming(this, v5);
  return v5;
}
