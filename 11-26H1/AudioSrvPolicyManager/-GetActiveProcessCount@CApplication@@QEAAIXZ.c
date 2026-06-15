/*
 * XREFs of ?GetActiveProcessCount@CApplication@@QEAAIXZ @ 0x18001A850
 * Callers:
 *     ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x18001B304 (-LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?ReevaluateActiveMediaAppStatusForApplication@CApplicationManager@@IEAAXPEAVCApplication@@@Z @ 0x18003CB20 (-ReevaluateActiveMediaAppStatusForApplication@CApplicationManager@@IEAAXPEAVCApplication@@@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18001EA10 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 */

__int64 __fastcall CApplication::GetActiveProcessCount(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rsi
  __int64 v3; // rcx
  unsigned int v4; // edi
  unsigned int v5; // eax
  __int64 i; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v4 = 0;
  for ( i = *((_QWORD *)this + 9); i; v4 = v5 )
  {
    v3 = *(_QWORD *)ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v3, &i);
    v5 = v4 + 1;
    if ( *(_DWORD *)(v3 + 416) )
      v5 = v4;
  }
  if ( v1 )
    LeaveCriticalSection(v1);
  return v4;
}
