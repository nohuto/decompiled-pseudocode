/*
 * XREFs of ?UpdateMMCSSTask@CGlobalManipulationManager@@UEAAJXZ @ 0x180150460
 * Callers:
 *     ?ManipulationThreadMain@CGlobalManipulationManager@@EEAAJXZ @ 0x1801501E0 (-ManipulationThreadMain@CGlobalManipulationManager@@EEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGlobalManipulationManager::UpdateMMCSSTask(CGlobalManipulationManager *this)
{
  signed int v1; // ebx
  signed int LastError; // eax

  v1 = 0;
  if ( qword_1803DE788 )
  {
    SetLastError(0);
    if ( !SetEvent(qword_1803DE788) )
    {
      LastError = GetLastError();
      v1 = LastError;
      if ( LastError > 0 )
        v1 = (unsigned __int16)LastError | 0x80070000;
      if ( v1 >= 0 )
        v1 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v1, 0x65u, 0LL);
    }
  }
  return (unsigned int)v1;
}
