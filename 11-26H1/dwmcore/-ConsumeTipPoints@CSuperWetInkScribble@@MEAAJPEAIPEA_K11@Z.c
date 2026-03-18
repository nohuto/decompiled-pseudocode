/*
 * XREFs of ?ConsumeTipPoints@CSuperWetInkScribble@@MEAAJPEAIPEA_K11@Z @ 0x1801CA470
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180002BD0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x180050318 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetTipPoints@CGenericInkTipPointSource@@QEAAJIPEAV?$vector@EV?$allocator@E@std@@@std@@PEAI11@Z @ 0x1801CA600 (-GetTipPoints@CGenericInkTipPointSource@@QEAAJIPEAV-$vector@EV-$allocator@E@std@@@std@@PEAI11@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSuperWetInkScribble::ConsumeTipPoints(
        CSuperWetInkScribble *this,
        unsigned int *a2,
        unsigned __int64 *a3,
        LARGE_INTEGER *a4,
        unsigned __int64 *a5)
{
  int v5; // edi
  int v7; // edx
  __int64 v11; // rcx
  int TipPoints; // eax
  unsigned int v13; // ebx
  unsigned __int64 *v15; // rsi
  unsigned int i; // ebx
  int v17; // eax
  LARGE_INTEGER v18; // rax
  unsigned __int64 v19; // rcx
  _QWORD *v20; // [rsp+28h] [rbp-48h]
  unsigned int v21; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v22; // [rsp+34h] [rbp-3Ch] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v24[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v25; // [rsp+50h] [rbp-20h] BYREF
  __int64 v26; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  unsigned int v28; // [rsp+A0h] [rbp+30h] BYREF

  v5 = 0;
  v7 = *((_DWORD *)this + 6);
  v26 = 0LL;
  v21 = 0;
  v11 = *((_QWORD *)this + 7);
  v28 = 0;
  v22 = 0;
  v25 = 0LL;
  TipPoints = CGenericInkTipPointSource::GetTipPoints(
                v11,
                v7,
                (unsigned int)&v25,
                (unsigned int)&v21,
                (__int64)&v28,
                (__int64)&v22);
  v13 = TipPoints;
  if ( TipPoints >= 0 )
  {
    v15 = a5;
    for ( i = 0; ; ++i )
    {
      if ( i >= v28 )
      {
        *a2 = v22;
        goto LABEL_13;
      }
      v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, unsigned __int64 *, unsigned __int64 *, _QWORD *))(**((_QWORD **)this + 2) + 32LL))(
              *((_QWORD *)this + 2),
              v25 + v21 * (v28 - i - 1),
              v21,
              v15,
              a3,
              v20);
      v5 = v17;
      if ( v17 < 0 )
        break;
      v5 = 0;
      PerformanceCount.QuadPart = 0LL;
      QueryPerformanceCounter(&PerformanceCount);
      v18 = PerformanceCount;
      *a4 = PerformanceCount;
      if ( (unsigned int)dword_1803DC848 > 4 && (qword_1803DC858 & 2) != 0 && (qword_1803DC860 & 2) == qword_1803DC860 )
      {
        v19 = *v15;
        v24[1] = v18.QuadPart;
        v20 = v24;
        v24[0] = v19;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          (__int64)&dword_1803DC848,
          (__int64)&unk_1803B6C91);
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x77,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\superwetinkscribble.cpp",
      (const char *)(unsigned int)v17);
LABEL_13:
    v13 = v5;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6C,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\superwetinkscribble.cpp",
      (const char *)(unsigned int)TipPoints);
  }
  std::vector<unsigned char>::_Tidy((__int64)&v25);
  return v13;
}
