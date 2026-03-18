/*
 * XREFs of CreateSetupNameArray @ 0x1402303A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CreateSetupNameArray(__int64 a1, __int64 a2)
{
  void **v2; // rdi
  unsigned int ProfileValue; // eax
  unsigned int v4; // esi
  __int64 v5; // rax
  int v6; // eax
  char *v7; // rdx
  char *v8; // r15
  int v9; // esi
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 UserSessionState; // rax
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // edi
  __int64 v26; // r14
  char *v27; // rbp
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int16 v34; // bx
  __int64 v35; // rdx
  __int64 v36; // rax

  v2 = (void **)(W32GetUserSessionState(a1, a2) + 68416);
  ProfileValue = FastGetProfileValue(0LL, 34LL, L"SetupProgramNames", 0LL, 0LL, 0, 0);
  v4 = ProfileValue;
  if ( ProfileValue )
  {
    v5 = Win32AllocPoolZInit(ProfileValue, 2020897621LL);
    *v2 = (void *)v5;
    if ( v5 )
    {
      v6 = FastGetProfileValue(0LL, 34LL, L"SetupProgramNames", 0LL, v5, v4, 0);
      if ( !v6 || v6 != v4 )
      {
        Win32FreePool(*v2);
        goto LABEL_24;
      }
      v8 = (char *)*v2;
      v9 = v4 >> 1;
      v10 = 0;
      v11 = 0LL;
      if ( v9 )
      {
        do
        {
          v7 = &v8[2 * (int)v11];
          if ( *(_WORD *)v7 )
          {
            ++v10;
            v12 = -1LL;
            do
              ++v12;
            while ( *(_WORD *)&v7[2 * v12] );
            LODWORD(v11) = v12 + v11;
          }
          v11 = (unsigned int)(v11 + 1);
        }
        while ( (int)v11 < v9 );
      }
      *(_DWORD *)(W32GetUserSessionState(v11, v7) + 68432) = v10;
      UserSessionState = W32GetUserSessionState(v14, v13);
      v16 = Win32AllocPoolZInit(16LL * *(int *)(UserSessionState + 68432), 2020897621LL);
      *(_QWORD *)(W32GetUserSessionState(v18, v17) + 68424) = v16;
      if ( !*(_QWORD *)(W32GetUserSessionState(v20, v19) + 68424) )
      {
        Win32FreePool(*v2);
        *(_DWORD *)(W32GetUserSessionState(v24, v23) + 68432) = 0;
LABEL_24:
        *v2 = 0LL;
        return;
      }
      v25 = 0;
      if ( v9 )
      {
        v26 = 0LL;
        do
        {
          v27 = &v8[2 * v25];
          if ( *(_WORD *)v27 )
          {
            v28 = *(_QWORD *)(W32GetUserSessionState(v22, v21) + 68424);
            *(_QWORD *)(v28 + v26 + 8) = v27;
            v31 = *(_QWORD *)(W32GetUserSessionState(v28, v29) + 68424);
            v32 = -1LL;
            do
              ++v32;
            while ( *(_WORD *)&v27[2 * v32] );
            *(_WORD *)(v26 + v31) = 2 * v32;
            v33 = *(_QWORD *)(W32GetUserSessionState(v31, v30) + 68424);
            v34 = *(_WORD *)(v26 + v33) + 2;
            v22 = *(_QWORD *)(W32GetUserSessionState(v33, v35) + 68424);
            v36 = -1LL;
            *(_WORD *)(v22 + v26 + 2) = v34;
            v26 += 16LL;
            do
              ++v36;
            while ( *(_WORD *)&v27[2 * v36] );
            v25 += v36;
          }
          ++v25;
        }
        while ( v25 < v9 );
      }
    }
  }
}
