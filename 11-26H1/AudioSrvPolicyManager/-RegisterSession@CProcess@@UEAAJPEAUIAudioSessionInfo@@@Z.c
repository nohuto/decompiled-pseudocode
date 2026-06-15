/*
 * XREFs of ?RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x1800294F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::RegisterSession(CProcess *this, __int64 (***a2)(void))
{
  if ( a2 )
    return CApplicationManager::RegisterSession(this, this, a2);
  else
    return 2147942487LL;
}
