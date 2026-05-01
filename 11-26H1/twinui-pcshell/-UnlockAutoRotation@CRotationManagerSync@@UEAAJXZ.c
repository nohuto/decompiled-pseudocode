/*
 * XREFs of ?UnlockAutoRotation@CRotationManagerSync@@UEAAJXZ @ 0x1802EDC30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Ld @ 0x18002324C (WPP_SF_Ld.c)
 *     ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x18005A828 (-IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ.c)
 *     ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x18005B7D4 (-_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z.c)
 *     ?StoreShellPreference@ROTATION_INFORMATION@CRotationManagerSync@@QEAAXW4ORIENTATION_PREFERENCE@@W4STORE_OPTION@12@@Z @ 0x1802EDBF0 (-StoreShellPreference@ROTATION_INFORMATION@CRotationManagerSync@@QEAAXW4ORIENTATION_PREFERENCE@@.c)
 */

__int64 __fastcall CRotationManagerSync::UnlockAutoRotation(CRotationManagerSync *this)
{
  unsigned int v2; // edi
  __int64 v3; // r8
  int v4; // eax
  int v5; // eax
  int *v6; // rsi
  ORIENTATION_PREFERENCE v7; // edx
  int *v8; // r14
  unsigned int v9; // edx
  int v10; // eax

  if ( CIAMGlobals::IsCalledOnIAMThread(this) )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v4 = *((_DWORD *)this + 10);
    if ( v4 )
    {
      v2 = 1;
      v5 = v4 - 1;
      *((_DWORD *)this + 10) = v5;
      if ( !v5 )
      {
        v6 = (int *)((char *)this + 32);
        v7 = *((_DWORD *)this + 8);
        v8 = (int *)((char *)this + 16);
        if ( *((_DWORD *)this + 5) != v7 )
          CRotationManagerSync::ROTATION_INFORMATION::StoreShellPreference((__int64)this + 16, v7);
        v9 = *((_DWORD *)this + 7);
        v10 = *v8;
        if ( *v8 != v9 )
        {
          CRotationManagerSync::_SetActiveProcessForRotation((CRotationManagerSync *)((char *)this - 80), v9, v3);
          v10 = *((_DWORD *)this + 7);
          v6 = (int *)((char *)this + 32);
          *v8 = v10;
        }
        if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
        {
          WPP_SF_Ld(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
            0xBu,
            &WPP_5fb75948c05b34306fc66a79fd5d315e_Traceguids,
            *v6,
            v10);
        }
        v2 = 0;
      }
    }
    else
    {
      v2 = -2147023728;
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  else
  {
    return (unsigned int)-2147024891;
  }
  return v2;
}
