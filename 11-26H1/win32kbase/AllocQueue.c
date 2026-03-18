/*
 * XREFs of AllocQueue @ 0x1400D2A10
 * Callers:
 *     xxxCreateThreadInfo @ 0x1401A6A18 (xxxCreateThreadInfo.c)
 * Callees:
 *     ?Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z @ 0x140016910 (-Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z.c)
 *     isChildPartition @ 0x1400D2FA0 (isChildPartition.c)
 *     ApiSetEditionIsGetKeyStateBlocked @ 0x1400D300C (ApiSetEditionIsGetKeyStateBlocked.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

char *__fastcall AllocQueue(__int64 a1, __int64 a2, int a3)
{
  char *v3; // r14
  __int64 UserSessionState; // rax
  char *result; // rax
  int v7; // ebx
  int v8; // edx
  int v9; // r8d
  _BYTE *v10; // rcx
  int i; // ebx
  unsigned int v12; // eax
  int v13; // esi
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  int v16; // r8d
  int v17; // ecx
  int v18; // edx
  int v19; // esi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  __int64 *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rbx
  void (__fastcall *v30)(char *, __int64); // rax
  __int64 v31; // rax
  __int128 v32; // xmm1
  __int64 v33; // rax

  v3 = (char *)a2;
  if ( a2 )
  {
    v7 = *(_DWORD *)(a2 + 440);
  }
  else
  {
    UserSessionState = W32GetUserSessionState(a1, 0, a3);
    result = Win32AllocateFromPagedLookasideListImpl(*(char **)(UserSessionState + 16856));
    v3 = result;
    if ( !result )
      return result;
    *((_QWORD *)result + 66) = 0LL;
    v7 = 0;
    *(_QWORD *)result = 0LL;
    *((_QWORD *)result + 1) = 0LL;
    *((_DWORD *)result + 4) = 0;
  }
  memset(v3 + 24, 0, 0x218uLL);
  *((_DWORD *)v3 + 110) = v7;
  *((_DWORD *)v3 + 11) = 2;
  *((_QWORD *)v3 + 8) = v3;
  v10 = (_BYTE *)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  *((_DWORD *)v3 + 114) = (_DWORD)v10;
  if ( a1 )
  {
    v31 = *(_QWORD *)(a1 + 464);
    *(_OWORD *)(v3 + 280) = *(_OWORD *)(v31 + 280);
    *(_OWORD *)(v3 + 296) = *(_OWORD *)(v31 + 296);
    *(_OWORD *)(v3 + 312) = *(_OWORD *)(v31 + 312);
    v32 = *(_OWORD *)(v31 + 328);
  }
  else
  {
    if ( (unsigned int)ApiSetEditionIsGetKeyStateBlocked() )
    {
      for ( i = 0; i < 256; ++i )
      {
        if ( (unsigned __int8)i < 0x20u )
          goto LABEL_13;
        v12 = 0;
        v10 = &unk_140269938;
        while ( v12 < 0xE )
        {
          if ( *v10 == (_BYTE)i )
            goto LABEL_13;
          ++v12;
          ++v10;
        }
        if ( (_BYTE)i == 0xA5 )
        {
LABEL_13:
          v13 = i & 3;
          v14 = (unsigned __int64)(unsigned __int8)i >> 2;
          v15 = W32GetUserSessionState((_DWORD)v10, v8, v9);
          v17 = 2 * v13;
          v18 = *(unsigned __int8 *)(v15 + v14 + 14328);
          if ( ((unsigned __int8)v18 & (unsigned __int8)(1 << (2 * v13))) != 0 )
            v3[v14 + 280] |= 1 << (2 * v13);
          v19 = 2 * v13 + 1;
          v20 = W32GetUserSessionState(v17, v18, v16);
          LODWORD(v10) = v19;
          v8 = *(unsigned __int8 *)(v20 + v14 + 14328);
          if ( ((unsigned __int8)v8 & (unsigned __int8)(1 << v19)) != 0 )
            v3[v14 + 280] |= 1 << v19;
        }
        else
        {
          switch ( (char)i )
          {
            case 91:
            case 92:
            case -96:
            case -95:
            case -94:
            case -93:
            case -92:
              goto LABEL_13;
            default:
              continue;
          }
        }
      }
      goto LABEL_18;
    }
    v33 = W32GetUserSessionState((_DWORD)v10, v8, v9);
    *(_OWORD *)(v3 + 280) = *(_OWORD *)(v33 + 14328);
    *(_OWORD *)(v3 + 296) = *(_OWORD *)(v33 + 14344);
    *(_OWORD *)(v3 + 312) = *(_OWORD *)(v33 + 14360);
    v32 = *(_OWORD *)(v33 + 14376);
  }
  *(_OWORD *)(v3 + 328) = v32;
LABEL_18:
  v22 = *(unsigned int *)(W32GetUserSessionState((_DWORD)v10, v8, v9) + 68440);
  if ( (v22 & 1) == 0 )
    --*((_DWORD *)v3 + 108);
  if ( (unsigned __int8)isChildPartition(v22, v21, v23) )
    v27 = (__int64 *)(W32GetUserSessionState(v25, v24, v26) + 21912);
  else
    v27 = (__int64 *)(W32GetUserSessionState(v25, v24, v26) + 23016);
  v29 = *v27;
  v30 = *(void (__fastcall **)(char *, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v28) + 48) + 1088LL);
  if ( v30 )
    v30(v3, v29);
  return v3;
}
