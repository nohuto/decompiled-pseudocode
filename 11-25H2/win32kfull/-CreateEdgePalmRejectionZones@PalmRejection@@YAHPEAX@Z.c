/*
 * XREFs of ?CreateEdgePalmRejectionZones@PalmRejection@@YAHPEAX@Z @ 0x1402A55DC
 * Callers:
 *     EditionCreateEdgePalmRejectionZones @ 0x1402A5890 (EditionCreateEdgePalmRejectionZones.c)
 * Callees:
 *     _GetPointerDeviceRects @ 0x140090CA4 (_GetPointerDeviceRects.c)
 *     ?_ReadSettingsFromRegKey@PalmRejection@@YAXXZ @ 0x1402A5794 (-_ReadSettingsFromRegKey@PalmRejection@@YAXXZ.c)
 */

__int64 __fastcall PalmRejection::CreateEdgePalmRejectionZones(PalmRejection *this, void *a2)
{
  PalmRejection *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int32 v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r12d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 UserSessionState; // rax
  __int32 v21; // r14d
  int v22; // r13d
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // r15d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int32 v29; // ebx
  int v31; // [rsp+20h] [rbp-20h] BYREF
  int v32; // [rsp+24h] [rbp-1Ch]
  __int32 v33; // [rsp+28h] [rbp-18h]
  __int32 v34; // [rsp+2Ch] [rbp-14h]
  __m128i v35; // [rsp+30h] [rbp-10h] BYREF
  __int32 v37; // [rsp+88h] [rbp+48h]
  int v38; // [rsp+90h] [rbp+50h]

  if ( !*(_DWORD *)(W32GetUserSessionState(this, a2) + 17368) )
  {
    PalmRejection::_ReadSettingsFromRegKey(v3);
    *(_DWORD *)(W32GetUserSessionState(v5, v4) + 17368) = 1;
  }
  v35 = 0LL;
  GetPointerDeviceRects((__int64)this, &v35, 0LL);
  v8 = *(_DWORD *)(W32GetUserSessionState(v7, v6) + 17380);
  v11 = *(_DWORD *)(W32GetUserSessionState(v10, v9) + 17376);
  v14 = *(_DWORD *)(W32GetUserSessionState(v13, v12) + 17372);
  v17 = *(_DWORD *)(W32GetUserSessionState(v16, v15) + 17376);
  UserSessionState = W32GetUserSessionState(v19, v18);
  v21 = v35.m128i_i32[2];
  v22 = *(_DWORD *)(UserSessionState + 17380);
  v37 = v35.m128i_i32[2] + 1;
  v25 = *(_DWORD *)(W32GetUserSessionState(v24, v23) + 17372);
  v28 = W32GetUserSessionState(v27, v26);
  v31 = 0;
  v33 = v11;
  v29 = v35.m128i_i32[3];
  v38 = *(_DWORD *)(v28 + 17372);
  v32 = v8;
  v34 = v35.m128i_i32[3] - v14 + 1;
  AddEdgePalmRejectionZone(this, 1LL, &v31);
  v32 = v22;
  v33 = v37;
  v31 = v21 - v17 + 1;
  v34 = v29 - v25 + 1;
  AddEdgePalmRejectionZone(this, 2LL, &v31);
  v31 = 0;
  v33 = v37;
  v32 = v29 - v38 + 1;
  v34 = v29 + 1;
  AddEdgePalmRejectionZone(this, 3LL, &v31);
  return 1LL;
}
