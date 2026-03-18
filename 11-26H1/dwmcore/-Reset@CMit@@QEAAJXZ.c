/*
 * XREFs of ?Reset@CMit@@QEAAJXZ @ 0x1801505A8
 * Callers:
 *     ?Initialize@CInputManager@@UEAAJXZ @ 0x180150050 (-Initialize@CInputManager@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Start@CMit@@QEAAJXZ @ 0x1801DA4B0 (-Start@CMit@@QEAAJXZ.c)
 */

__int64 __fastcall CMit::Reset(HANDLE *this)
{
  unsigned int v1; // edi
  int v3; // eax

  v1 = 0;
  if ( this[2] || (v3 = CMit::Start((CMit *)this), v1 = v3, v3 >= 0) )
  {
    if ( !*((_BYTE *)this + 32) )
      SetEvent(this[3]);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x8Au, 0LL);
  }
  return v1;
}
