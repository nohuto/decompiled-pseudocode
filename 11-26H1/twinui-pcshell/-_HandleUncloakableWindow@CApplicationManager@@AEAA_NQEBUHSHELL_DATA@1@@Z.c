/*
 * XREFs of ?_HandleUncloakableWindow@CApplicationManager@@AEAA_NQEBUHSHELL_DATA@1@@Z @ 0x1802E7204
 * Callers:
 *     ?_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1800AEE34 (-_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CApplicationManager::_HandleUncloakableWindow(
        CApplicationManager *this,
        const struct CApplicationManager::HSHELL_DATA *const a2)
{
  char v3; // bl
  unsigned int v4; // ecx
  unsigned __int16 **v5; // rdx
  unsigned __int16 *v6; // rax
  int v7; // r10d
  int v8; // r8d
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  if ( GetPropW(*((HWND *)a2 + 1), L"SpartanUncloakable") == HANDLE_FLAG_INHERIT )
  {
    v4 = 0;
    v10[0] = L"Microsoft.zMicrosoftEdge_8wekyb3d8bbwe!zMicrosoftEdge";
    v5 = (unsigned __int16 **)v10;
    v10[1] = L"Microsoft.MicrosoftEdge_8wekyb3d8bbwe!MicrosoftEdge";
    v10[2] = L"Microsoft.MicrosoftEdgeBeta_8wekyb3d8bbwe!MicrosoftEdgeBeta";
    while ( v4 < 3 )
    {
      v6 = *v5;
      do
      {
        v7 = *(unsigned __int16 *)((char *)v6 + *((_QWORD *)a2 + 4) - (_QWORD)*v5);
        v8 = *v6 - v7;
        if ( v8 )
          break;
        ++v6;
      }
      while ( v7 );
      if ( !v8 )
      {
        v3 = 1;
        (*(void (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                      + 24LL))(
          CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
          *((_QWORD *)a2 + 1),
          0LL);
        return v3;
      }
      ++v4;
      ++v5;
    }
  }
  return v3;
}
