/*
 * XREFs of KiGetSavedIptState @ 0x1405EF5F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLocateExtendedOrSupervisorFeature @ 0x1403D7C80 (RtlpLocateExtendedOrSupervisorFeature.c)
 *     KiGetSavedSupervisorState @ 0x1405EF6D0 (KiGetSavedSupervisorState.c)
 */

__int64 __fastcall KiGetSavedIptState(__int64 a1, char **a2, _DWORD *a3)
{
  __int64 result; // rax
  int v6; // eax
  _QWORD *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  if ( !a2 || !a3 )
    return 3221225485LL;
  result = KiGetSavedSupervisorState(a1, &v7);
  if ( (int)result >= 0 )
  {
    if ( (_bittest64(&KeEnabledSupervisorXStateFeatures, 8u) & _bittest64(&KeFeatureBits, 0x17u)) != 0 )
    {
      *a2 = RtlpLocateExtendedOrSupervisorFeature(v7, 8u, a3);
    }
    else if ( (_DWORD)KiIptMsrMask )
    {
      v6 = KiIptSaveAreaLength;
      *a2 = (char *)v7 + MEMORY[0xFFFFF78000000600] - (unsigned __int64)MEMORY[0xFFFFF780000003E8] + 64;
      *a3 = v6;
    }
    else
    {
      *a2 = 0LL;
      *a3 = 0;
    }
    return 0LL;
  }
  return result;
}
