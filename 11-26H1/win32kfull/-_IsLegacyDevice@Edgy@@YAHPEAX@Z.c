/*
 * XREFs of ?_IsLegacyDevice@Edgy@@YAHPEAX@Z @ 0x1402C3608
 * Callers:
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z @ 0x1402338C8 (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z @ 0x1402C3910 (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     _GetTouchValidationStatus @ 0x14025F7C0 (_GetTouchValidationStatus.c)
 *     ?_GetDWordFromRegistry@Edgy@@YAHPEBG0PEAK@Z @ 0x1402C302C (-_GetDWordFromRegistry@Edgy@@YAHPEBG0PEAK@Z.c)
 */

__int64 __fastcall Edgy::_IsLegacyDevice(Edgy *this, void *a2)
{
  const unsigned __int16 *v3; // rdx
  Edgy *v4; // rcx
  unsigned int *v5; // r9
  unsigned int v6; // edi
  BOOL v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rdx
  int v12; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  if ( !*(_DWORD *)(W32GetUserSessionState(this, a2) + 17376) )
  {
    v12 = 0;
    v7 = 1;
    if ( (unsigned int)Edgy::_GetDWordFromRegistry(v4, v3, (unsigned __int16 *)&v12, v5) )
      v7 = v12 != 1;
    *(_DWORD *)(W32GetUserSessionState(v9, v8) + 17376) = v7 + 1;
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v4, v3) + 17376) == 1 )
    return 1LL;
  result = HMValidateHandleNoSecure((__int64)this, 19);
  if ( result )
  {
    LOBYTE(v6) = (unsigned int)GetTouchValidationStatus(result, v11) != 1;
    return v6;
  }
  return result;
}
