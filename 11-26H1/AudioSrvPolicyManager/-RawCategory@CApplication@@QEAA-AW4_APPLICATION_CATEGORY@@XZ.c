/*
 * XREFs of ?RawCategory@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18002EAA4
 * Callers:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180014A28 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18001EA10 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?RawCategory@CProcess@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x180039344 (-RawCategory@CProcess@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 */

__int64 __fastcall CApplication::RawCategory(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rsi
  __int64 v3; // rcx
  int v4; // edi
  __int64 *Next; // rax
  _QWORD *v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v4 = 4;
  v7 = *(_QWORD **)(a1 + 72);
  while ( v7 )
  {
    Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v3, &v7);
    v3 = *Next;
    if ( !*(_DWORD *)(*Next + 416) && (int)CProcess::RawCategory() < v4 )
      v4 = CProcess::RawCategory();
  }
  if ( v1 )
    LeaveCriticalSection(v1);
  return (unsigned int)v4;
}
