/*
 * XREFs of ?CreateEdgePalmRejectionZones@PalmRejection@@YAHPEAX@Z @ 0x14025514C
 * Callers:
 *     EditionCreateEdgePalmRejectionZones @ 0x1402C2CA0 (EditionCreateEdgePalmRejectionZones.c)
 * Callees:
 *     _GetPointerDeviceRects @ 0x140030CA8 (_GetPointerDeviceRects.c)
 *     ?_ReadSettingsFromRegKey@PalmRejection@@YAXXZ @ 0x1402C2BA8 (-_ReadSettingsFromRegKey@PalmRejection@@YAXXZ.c)
 */

__int64 __fastcall PalmRejection::CreateEdgePalmRejectionZones(PalmRejection *this, void *a2)
{
  PalmRejection *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  int v14; // edi
  int v15; // r15d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // r14d
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // r13d
  int v23; // esi
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // edi
  int v31; // [rsp+20h] [rbp-20h] BYREF
  int v32; // [rsp+24h] [rbp-1Ch]
  int v33; // [rsp+28h] [rbp-18h]
  int v34; // [rsp+2Ch] [rbp-14h]
  __int128 v35; // [rsp+30h] [rbp-10h] BYREF
  int v37; // [rsp+88h] [rbp+48h]

  if ( !*(_DWORD *)(W32GetUserSessionState(this, a2) + 17360) )
  {
    PalmRejection::_ReadSettingsFromRegKey(v3);
    *(_DWORD *)(W32GetUserSessionState(v5, v4) + 17360) = 1;
  }
  v35 = 0LL;
  GetPointerDeviceRects((__int64)this, &v35, 0LL);
  v37 = *(_DWORD *)(W32GetUserSessionState(v7, v6) + 17372);
  v10 = *(_DWORD *)(W32GetUserSessionState(v9, v8) + 17368);
  UserSessionState = W32GetUserSessionState(v12, v11);
  v14 = HIDWORD(v35);
  v15 = HIDWORD(v35) - *(_DWORD *)(UserSessionState + 17364) + 1;
  v18 = W32GetUserSessionState(v17, v16);
  v19 = DWORD2(v35) - *(_DWORD *)(v18 + 17368) + 1;
  v22 = DWORD2(v35) + 1;
  v23 = *(_DWORD *)(W32GetUserSessionState(v21, v20) + 17372);
  v26 = v14 - *(_DWORD *)(W32GetUserSessionState(v25, v24) + 17364) + 1;
  v33 = v10;
  v34 = v15;
  v29 = v14 - *(_DWORD *)(W32GetUserSessionState(v28, v27) + 17364) + 1;
  v32 = v37;
  v31 = 0;
  AddEdgePalmRejectionZone(this, 1LL, &v31);
  v31 = v19;
  v32 = v23;
  v33 = v22;
  v34 = v26;
  AddEdgePalmRejectionZone(this, 2LL, &v31);
  v31 = 0;
  v34 = HIDWORD(v35) + 1;
  v32 = v29;
  v33 = v22;
  AddEdgePalmRejectionZone(this, 3LL, &v31);
  return 1LL;
}
