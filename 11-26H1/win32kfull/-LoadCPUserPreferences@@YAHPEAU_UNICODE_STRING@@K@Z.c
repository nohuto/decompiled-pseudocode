/*
 * XREFs of ?LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x14021D52C
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x14023F980 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall LoadCPUserPreferences(struct _UNICODE_STRING *a1, __int64 a2)
{
  int v2; // esi
  __int64 UserSessionState; // rbx
  unsigned int ProfileValue; // eax
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // rdx
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rdx
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // ebx
  __int64 v28; // rdx
  int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // ebx
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // ebx
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // ebx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  int v48; // ebx
  __int64 v49; // rdx
  unsigned int v50; // ebx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  int Src; // [rsp+70h] [rbp+18h] BYREF

  v2 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  ProfileValue = FastGetProfileValue(
                   a1,
                   *(unsigned int *)(UserSessionState + 66812),
                   *(_QWORD *)(UserSessionState + 66816),
                   0LL,
                   &Src,
                   8,
                   v2);
  if ( ProfileValue )
  {
    if ( ProfileValue > 8 )
      ProfileValue = 8;
    memmove((void *)(UserSessionState + 66796), &Src, ProfileValue);
  }
  v6 = UserSessionState + 66824;
  v7 = 28LL;
  do
  {
    if ( (unsigned int)FastGetProfileValue(a1, *(unsigned int *)(v6 + 4), *(_QWORD *)(v6 + 8), 0LL, &Src, 4, v2) )
      *(_DWORD *)v6 = Src;
    v6 += 16LL;
    --v7;
  }
  while ( v7 );
  v10 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19904);
  v11 = *(_DWORD *)(v10 + 7004);
  v13 = (*(_DWORD *)(W32GetUserSessionState(v10, v12) + 66796) ^ v11) & 4;
  v16 = *(_QWORD *)(W32GetUserSessionState(v15, v14) + 19904);
  *(_DWORD *)(v16 + 7004) ^= v13;
  v18 = *(_QWORD *)(W32GetUserSessionState(v16, v17) + 19904);
  v19 = *(_DWORD *)(v18 + 7004);
  v21 = (*(_DWORD *)(W32GetUserSessionState(v18, v20) + 66796) ^ v19) & 8;
  v24 = *(_QWORD *)(W32GetUserSessionState(v23, v22) + 19904);
  *(_DWORD *)(v24 + 7004) ^= v21;
  v26 = *(_QWORD *)(W32GetUserSessionState(v24, v25) + 19904);
  v27 = *(_DWORD *)(v26 + 7004);
  v29 = (*(_DWORD *)(W32GetUserSessionState(v26, v28) + 66796) ^ v27) & 0x20;
  v32 = *(_QWORD *)(W32GetUserSessionState(v31, v30) + 19904);
  *(_DWORD *)(v32 + 7004) ^= v29;
  if ( (*(_DWORD *)(W32GetUserSessionState(v32, v33) + 66792) & 0x20000) != 0 )
    _InterlockedOr(*(volatile signed __int32 **)(W32GetUserSessionState(v35, v34) + 19904), 0x80u);
  else
    _InterlockedAnd(*(volatile signed __int32 **)(W32GetUserSessionState(v35, v34) + 19904), 0xFFFFFF7F);
  v36 = *(_DWORD *)UPDWORDPointer(8198LL);
  *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v38, v37) + 19904) + 7008LL) = v36;
  v39 = *(_DWORD *)UPDWORDPointer(8206LL);
  *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v41, v40) + 19904) + 2228LL) = v39;
  v42 = *(_DWORD *)UPDWORDPointer(8208LL);
  v45 = *(_QWORD *)(W32GetUserSessionState(v44, v43) + 19904);
  *(_DWORD *)(v45 + 2232) = v42;
  v47 = *(_QWORD *)(W32GetUserSessionState(v45, v46) + 19904);
  v48 = *(_DWORD *)(v47 + 7004);
  v50 = (*(_DWORD *)(W32GetUserSessionState(v47, v49) + 66796) ^ v48) & 0x80000000;
  v53 = W32GetUserSessionState(v52, v51);
  *(_DWORD *)(*(_QWORD *)(v53 + 19904) + 7004LL) ^= v50;
  EnforceColorDependentSettings();
  *(_DWORD *)UPDWORDPointer(8193LL) = 0x7FFFFFFF;
  return 1LL;
}
