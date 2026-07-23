/*
 * XREFs of PopActionRetrieveInitialState @ 0x1404E99E4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopVerifySystemPowerState @ 0x140B268C4 (PopVerifySystemPowerState.c)
 *     PopFastS4Check @ 0x140B3EE64 (PopFastS4Check.c)
 */

__int64 __fastcall PopActionRetrieveInitialState(_DWORD *a1, _DWORD *a2, _DWORD *a3, _BYTE *a4)
{
  _DWORD *v4; // rbx
  __int64 WriteOperationCount; // rcx
  int v9; // eax
  __int64 result; // rax

  v4 = a1;
  if ( (unsigned int)(qword_140F10424 - 4) <= 2 )
  {
    *a1 = 6;
    *a2 = 6;
  }
  else if ( (_DWORD)qword_140F10424 == 7 )
  {
    *a2 = 5;
    PopVerifySystemPowerState(a2, 0LL);
  }
  else
  {
    WriteOperationCount = PpmIdlePolicyLock.WriteOperationCount;
    *a2 = *(_DWORD *)(PpmIdlePolicyLock.WriteOperationCount + 72);
    v9 = *(_DWORD *)(WriteOperationCount + 68);
    if ( v9 > *v4 )
      *v4 = v9;
  }
  if ( *v4 > *a2 )
    *a2 = *v4;
  *a4 = 1;
  if ( *v4 == 6 || dword_140F1042C < 0 && (unsigned int)(dword_140F10434 - 1) <= 1 )
    *a4 = 0;
  if ( (unsigned __int8)PopFastS4Check() )
  {
    *v4 = *a2;
    dword_140F1042C &= ~0x10000000u;
  }
  if ( (dword_140F1042C & 0x10000000) == 0 )
    v4 = a2;
  result = (unsigned int)*v4;
  *a3 = result;
  return result;
}
