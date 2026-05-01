/*
 * XREFs of CrmActivityTelemetryUpdateCurrentStates @ 0x18001E1E4
 * Callers:
 *     CrmGlobalsRegistrationRundownHelper @ 0x18001DE38 (CrmGlobalsRegistrationRundownHelper.c)
 * Callees:
 *     CrmActivityTelemetryUpdate @ 0x180022CC0 (CrmActivityTelemetryUpdate.c)
 */

__int64 __fastcall CrmActivityTelemetryUpdateCurrentStates(__int64 a1)
{
  int v2; // ebx
  _QWORD *v3; // rdi
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 64) == 1301 )
  {
    v2 = 0;
    v3 = (_QWORD *)(a1 + 248);
    do
    {
      if ( *v3 != -1LL )
        result = CrmActivityTelemetryUpdate(a1, (unsigned int)v2);
      ++v2;
      ++v3;
    }
    while ( v2 < 3 );
  }
  return result;
}
