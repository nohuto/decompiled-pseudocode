/*
 * XREFs of ?_IsLegacyDevice@Edgy@@YAHPEAX@Z @ 0x1402A6240
 * Callers:
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z @ 0x1401FC0FC (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z @ 0x1402A6534 (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     _GetTouchValidationStatus @ 0x14027C530 (_GetTouchValidationStatus.c)
 *     ?_GetDWordFromRegistry@Edgy@@YAHPEBG0PEAK@Z @ 0x1402A5C6C (-_GetDWordFromRegistry@Edgy@@YAHPEBG0PEAK@Z.c)
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
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // rdx
  int v13; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  if ( !*(_DWORD *)(W32GetUserSessionState(this, a2) + 17384) )
  {
    v13 = 0;
    v7 = 1;
    if ( (unsigned int)Edgy::_GetDWordFromRegistry(v4, v3, (unsigned __int16 *)&v13, v5) )
      v7 = v13 != 1;
    *(_DWORD *)(W32GetUserSessionState(v9, v8) + 17384) = v7 + 1;
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v4, v3) + 17384) == 1 )
    return 1LL;
  LOBYTE(v10) = 19;
  result = HMValidateHandleNoSecure((__int64)this, v10);
  if ( result )
  {
    LOBYTE(v6) = (unsigned int)GetTouchValidationStatus(result, v12) != 1;
    return v6;
  }
  return result;
}
