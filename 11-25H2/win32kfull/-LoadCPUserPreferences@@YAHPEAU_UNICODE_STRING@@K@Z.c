/*
 * XREFs of ?LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x14020E2A4
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x140212E60 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall LoadCPUserPreferences(struct _UNICODE_STRING *a1, __int64 a2)
{
  int v2; // esi
  __int64 UserSessionState; // rbx
  unsigned int ProfileValue; // eax
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // ebx
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // ebx
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // ebx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  int Src; // [rsp+70h] [rbp+18h] BYREF

  v2 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  ProfileValue = FastGetProfileValue(
                   a1,
                   *(unsigned int *)(UserSessionState + 66820),
                   *(_QWORD *)(UserSessionState + 66824),
                   0LL,
                   &Src,
                   8,
                   v2);
  if ( ProfileValue )
  {
    if ( ProfileValue > 8 )
      ProfileValue = 8;
    memmove((void *)(UserSessionState + 66804), &Src, ProfileValue);
  }
  v6 = 28LL;
  v7 = UserSessionState + 66832;
  do
  {
    if ( (unsigned int)FastGetProfileValue(a1, *(unsigned int *)(v7 + 4), *(_QWORD *)(v7 + 8), 0LL, &Src, 4, v2) )
      *(_DWORD *)v7 = Src;
    v7 += 16LL;
    --v6;
  }
  while ( v6 );
  v10 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19872);
  LODWORD(v10) = (*(_DWORD *)(W32GetUserSessionState(v12, v11) + 66804) ^ *(_DWORD *)(v10 + 7004)) & 4;
  v15 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 19872);
  *(_DWORD *)(v15 + 7004) ^= v10;
  v17 = *(_QWORD *)(W32GetUserSessionState(v15, v16) + 19872);
  LODWORD(v17) = (*(_DWORD *)(W32GetUserSessionState(v19, v18) + 66804) ^ *(_DWORD *)(v17 + 7004)) & 8;
  v22 = *(_QWORD *)(W32GetUserSessionState(v21, v20) + 19872);
  *(_DWORD *)(v22 + 7004) ^= v17;
  v24 = *(_QWORD *)(W32GetUserSessionState(v22, v23) + 19872);
  LODWORD(v24) = (*(_DWORD *)(W32GetUserSessionState(v26, v25) + 66804) ^ *(_DWORD *)(v24 + 7004)) & 0x20;
  v29 = *(_QWORD *)(W32GetUserSessionState(v28, v27) + 19872);
  *(_DWORD *)(v29 + 7004) ^= v24;
  if ( (*(_DWORD *)(W32GetUserSessionState(v29, v30) + 66800) & 0x20000) != 0 )
    _InterlockedOr(*(volatile signed __int32 **)(W32GetUserSessionState(v32, v31) + 19872), 0x80u);
  else
    _InterlockedAnd(*(volatile signed __int32 **)(W32GetUserSessionState(v32, v31) + 19872), 0xFFFFFF7F);
  v33 = *(_DWORD *)UPDWORDPointer(8198LL);
  *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v35, v34) + 19872) + 7008LL) = v33;
  v36 = *(_DWORD *)UPDWORDPointer(8206LL);
  *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v38, v37) + 19872) + 2228LL) = v36;
  v39 = *(_DWORD *)UPDWORDPointer(8208LL);
  v42 = *(_QWORD *)(W32GetUserSessionState(v41, v40) + 19872);
  *(_DWORD *)(v42 + 2232) = v39;
  v44 = *(_QWORD *)(W32GetUserSessionState(v42, v43) + 19872);
  LODWORD(v44) = (*(_DWORD *)(W32GetUserSessionState(v46, v45) + 66804) ^ *(_DWORD *)(v44 + 7004)) & 0x80000000;
  v49 = W32GetUserSessionState(v48, v47);
  *(_DWORD *)(*(_QWORD *)(v49 + 19872) + 7004LL) ^= v44;
  EnforceColorDependentSettings();
  *(_DWORD *)UPDWORDPointer(8193LL) = 0x7FFFFFFF;
  return 1LL;
}
