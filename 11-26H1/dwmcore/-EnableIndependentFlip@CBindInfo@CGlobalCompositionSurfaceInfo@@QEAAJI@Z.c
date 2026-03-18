/*
 * XREFs of ?EnableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJI@Z @ 0x1801C1230
 * Callers:
 *     ?EnableIndependentFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_KII@Z @ 0x1801C11B0 (-EnableIndependentFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_KII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0xxqqqqq_EventWriteTransfer @ 0x1801D0098 (McTemplateU0xxqqqqq_EventWriteTransfer.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::EnableIndependentFlip(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        int a2)
{
  int v3; // ecx
  unsigned int v4; // ebx
  int v5; // eax
  _DWORD *v6; // rdi
  int v8; // [rsp+70h] [rbp+8h] BYREF
  int v9; // [rsp+78h] [rbp+10h] BYREF

  v9 = a2;
  v3 = *((_DWORD *)this + 52);
  v8 = 0;
  v4 = 0;
  v5 = NtSetCompositionSurfaceIndependentFlipInfo(
         *(_QWORD *)(*(_QWORD *)this + 32LL),
         (char *)this + 24,
         1LL,
         *((_BYTE *)this + 181) != 0,
         *((_DWORD *)this + 54),
         1 << v3,
         &v9,
         &v8);
  if ( v5 >= 0 )
  {
    v6 = (_DWORD *)((char *)this + 212);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0xxqqqqq_EventWriteTransfer(
        *(_DWORD *)(*(_QWORD *)this + 40LL),
        *((unsigned __int8 *)this + 182),
        *(_DWORD *)(*(_QWORD *)this + 40LL),
        *((_QWORD *)this + 3),
        *v6,
        1,
        *((_BYTE *)this + 181) != 0,
        *((_DWORD *)this + 54),
        *((_BYTE *)this + 182));
    *v6 = v9;
    *((_BYTE *)this + 180) = 1;
  }
  else
  {
    v4 = v5 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5 | 0x10000000, 0x4FAu, 0LL);
  }
  return v4;
}
