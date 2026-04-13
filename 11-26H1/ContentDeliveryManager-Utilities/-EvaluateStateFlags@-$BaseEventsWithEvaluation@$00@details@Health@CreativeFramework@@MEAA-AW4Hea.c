/*
 * XREFs of ?EvaluateStateFlags@?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@MEAA?AW4HealthStateFlags@234@XZ @ 0x18004FD20
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReadInfo@UHealthTrackingInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXAEAUHealthInfoHeader@123@AEAUHealthTrackingInfo@123@AEA_N2PEBG@Z @ 0x180048390 (--$ReadInfo@UHealthTrackingInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@details@He.c)
 *     ?EnsurePlacementReportedInfoRead@BaseScenarioEvents@details@Health@CreativeFramework@@IEAAXXZ @ 0x18004F810 (-EnsurePlacementReportedInfoRead@BaseScenarioEvents@details@Health@CreativeFramework@@IEAAXXZ.c)
 */

struct _FILETIME __fastcall CreativeFramework::Health::details::BaseEventsWithEvaluation<1>::EvaluateStateFlags(
        CreativeFramework::Health::details::BaseScenarioEvents *this)
{
  char v2; // al
  struct _FILETIME v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  char v6; // al
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  struct _FILETIME SystemTimeAsFileTime; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 250) )
    CreativeFramework::Health::details::BaseScenarioEvents::ReadInfo<CreativeFramework::Health::details::HealthTrackingInfo>(
      (__int64)this,
      (_DWORD *)this + 2,
      (char *)this + 16,
      (_BYTE *)this + 249,
      (_BYTE *)this + 250);
  CreativeFramework::Health::details::BaseScenarioEvents::EnsurePlacementReportedInfoRead(this);
  v2 = *((_BYTE *)this + 98);
  if ( !v2 )
    return (struct _FILETIME)2LL;
  v3 = (struct _FILETIME)(v2 != 0 ? 4LL : 2LL);
  if ( !*((_QWORD *)this + 3) )
    v3 = (struct _FILETIME)(*(unsigned __int64 *)&v3 | 8);
  if ( *((_QWORD *)this + 2) )
  {
    if ( !*((_DWORD *)this + 20) )
      v3 = (struct _FILETIME)(*(unsigned __int64 *)&v3 | 0x20);
  }
  else
  {
    v3 = (struct _FILETIME)(*(unsigned __int64 *)&v3 | 0x10);
  }
  v4 = *((_QWORD *)this + 6);
  if ( v4 && *((_BYTE *)this + 97) )
  {
    v3 = (struct _FILETIME)(*(unsigned __int64 *)&v3 | 0x40);
  }
  else
  {
    SystemTimeAsFileTime = v3;
    if ( !v4 )
      goto LABEL_16;
  }
  if ( !*((_BYTE *)this + 96) )
  {
LABEL_16:
    v3 = (struct _FILETIME)(*(unsigned __int64 *)&v3 | 0x80);
    SystemTimeAsFileTime = v3;
    if ( !v4 )
      goto LABEL_19;
  }
  if ( !*((_DWORD *)this + 21) )
    v3 = (struct _FILETIME)(*(unsigned __int64 *)&v3 | 0x100);
LABEL_19:
  SystemTimeAsFileTime = 0LL;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v5 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  if ( *((_BYTE *)this + 97) || (v3.dwLowDateTime & 0x10) != 0 )
  {
    if ( (v3.dwLowDateTime & 0x130) == 0 )
      return (struct _FILETIME)(*(unsigned __int64 *)&v3 | 1);
    v3 = (struct _FILETIME)(*(unsigned __int64 *)&v3 | 2);
    if ( (v3.dwLowDateTime & 0x130) == 0 )
      return (struct _FILETIME)(*(unsigned __int64 *)&v3 | 1);
  }
  else
  {
    if ( *((_QWORD *)this + 6) )
    {
      if ( SLOBYTE(v3.dwLowDateTime) >= 0 )
      {
        SystemTimeAsFileTime = 0LL;
        GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
        v8 = *((_QWORD *)this + 6);
        v9 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
        v10 = *((_QWORD *)this + 4) + 600000000LL;
        if ( v8 >= v10 || v10 >= v9 )
        {
          if ( v8 >= *((_QWORD *)this + 15) )
            return (struct _FILETIME)(*(unsigned __int64 *)&v3 | 2);
          v11 = *((_QWORD *)this + 16);
          if ( !v11 )
            v11 = *((_QWORD *)this + 15) + 10000000LL * *((unsigned int *)this + 34);
          v12 = v11 + 6000000000LL;
          if ( *((_QWORD *)this + 14) <= v12 || v9 <= v12 )
            return (struct _FILETIME)(*(unsigned __int64 *)&v3 | 2);
          return v3;
        }
        v3 = (struct _FILETIME)(*(unsigned __int64 *)&v3 | 0x200);
      }
    }
    else
    {
      if ( *((_QWORD *)this + 3) + 600000000LL > v5 || *((_QWORD *)this + 4) + 600000000LL > v5 )
      {
        v3 = (struct _FILETIME)(*(unsigned __int64 *)&v3 | 2);
        v6 = 0;
      }
      else
      {
        v6 = 1;
      }
      if ( !v6 )
        return v3;
    }
    v7 = *((_QWORD *)this + 19);
    if ( v7 && !*((_WORD *)this + 80) && v5 >= v7 + 36000000000LL )
      return (struct _FILETIME)(*(unsigned __int64 *)&v3 | 1);
  }
  return v3;
}
