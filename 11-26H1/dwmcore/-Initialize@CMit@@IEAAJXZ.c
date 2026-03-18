/*
 * XREFs of ?Initialize@CMit@@IEAAJXZ @ 0x1801DB424
 * Callers:
 *     ?Create@CGlobalMit@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18020A320 (-Create@CGlobalMit@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMit::Initialize(CMit *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  HANDLE EventW; // rax
  signed int LastError; // eax
  int v6; // r9d
  unsigned int v8; // [rsp+20h] [rbp-18h]

  v2 = (*(__int64 (__fastcall **)(CMit *))(*(_QWORD *)this + 24LL))(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    v6 = v2;
    v8 = 66;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, v8, 0LL);
    return v3;
  }
  SetLastError(0);
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  *((_QWORD *)this + 3) = EventW;
  if ( !EventW )
  {
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
    v8 = 72;
    if ( (v3 & 0x80000000) == 0 )
      v3 = -2003304445;
    v6 = v3;
    goto LABEL_9;
  }
  return v3;
}
