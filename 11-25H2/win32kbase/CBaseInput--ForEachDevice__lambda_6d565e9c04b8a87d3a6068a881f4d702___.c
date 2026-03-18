/*
 * XREFs of CBaseInput::ForEachDevice__lambda_6d565e9c04b8a87d3a6068a881f4d702___ @ 0x1401B4A98
 * Callers:
 *     _SetPrecisionTouchPadConfiguration @ 0x1401B4FC0 (_SetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     RIMConfigureDeviceFeedback @ 0x1401DEB80 (RIMConfigureDeviceFeedback.c)
 *     RIMConfigureTouchpadClickForceSensitivity @ 0x1401DEFE0 (RIMConfigureTouchpadClickForceSensitivity.c)
 */

__int64 __fastcall CBaseInput::ForEachDevice__lambda_6d565e9c04b8a87d3a6068a881f4d702___(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 i; // rbx
  __int64 v4; // rdi

  result = *(_QWORD *)(a1 + 1240);
  for ( i = *(_QWORD *)result; i; i = *(_QWORD *)(i + 56) )
  {
    result = *(unsigned int *)(i + 184);
    if ( (result & 0x80u) != 0LL && (*(_DWORD *)(i + 168) & 0x2000) == 0 )
    {
      result = *(_QWORD *)(i + 456);
      if ( *(_DWORD *)(result + 24) == 7 )
      {
        result = W32GetUserSessionState(a1, a2);
        v4 = result;
        if ( (*(_DWORD *)(i + 184) & 0x400) != 0 )
          result = RIMConfigureDeviceFeedback((struct RIMDEV *)i);
        if ( (*(_DWORD *)(i + 184) & 0x800) != 0 )
          result = RIMConfigureTouchpadClickForceSensitivity((struct RIMDEV *)i, *(_DWORD *)(v4 + 16800));
      }
    }
  }
  return result;
}
