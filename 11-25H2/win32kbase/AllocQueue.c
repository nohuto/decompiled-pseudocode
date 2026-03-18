/*
 * XREFs of AllocQueue @ 0x140060510
 * Callers:
 *     xxxCreateThreadInfo @ 0x140162D44 (xxxCreateThreadInfo.c)
 * Callees:
 *     isChildPartition @ 0x140060A90 (isChildPartition.c)
 *     ApiSetEditionIsGetKeyStateBlocked @ 0x140060D68 (ApiSetEditionIsGetKeyStateBlocked.c)
 *     ?Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z @ 0x14006110C (-Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 */

_QWORD *__fastcall AllocQueue(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r14
  __int64 UserSessionState; // rax
  _QWORD *result; // rax
  int v6; // ebx
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  int i; // ebx
  unsigned int v10; // eax
  unsigned __int64 v11; // rdi
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  void (__fastcall *v18)(_QWORD *, __int64); // rax
  _OWORD *v19; // rax
  __int128 v20; // xmm1
  _OWORD *v21; // rax

  v2 = (_QWORD *)a2;
  if ( a2 )
  {
    v6 = *(_DWORD *)(a2 + 416);
  }
  else
  {
    UserSessionState = W32GetUserSessionState(a1, 0LL);
    result = Win32AllocateFromPagedLookasideListImpl(*(void **)(UserSessionState + 16864));
    v2 = result;
    if ( !result )
      return result;
    result[63] = 0LL;
    v6 = 0;
    *result = 0LL;
    result[1] = 0LL;
    *((_DWORD *)result + 4) = 0;
  }
  memset(v2 + 3, 0, 0x200uLL);
  *((_DWORD *)v2 + 104) = v6;
  *((_DWORD *)v2 + 11) = 2;
  v2[8] = v2;
  v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *((_DWORD *)v2 + 108) = v8;
  if ( a1 )
  {
    v19 = *(_OWORD **)(a1 + 472);
    *((_OWORD *)v2 + 16) = v19[16];
    *((_OWORD *)v2 + 17) = v19[17];
    *((_OWORD *)v2 + 18) = v19[18];
    v20 = v19[19];
  }
  else
  {
    if ( (unsigned int)ApiSetEditionIsGetKeyStateBlocked() )
    {
      for ( i = 0; i < 256; ++i )
      {
        if ( (unsigned __int8)i < 0x20u )
          goto LABEL_11;
        v10 = 0;
        v8 = (unsigned __int64)&unk_1402617C0;
        while ( v10 < 0xE )
        {
          if ( *(_BYTE *)v8 == (_BYTE)i )
            goto LABEL_11;
          ++v10;
          ++v8;
        }
        if ( (unsigned __int8)i == 165 )
        {
LABEL_11:
          v11 = (unsigned __int64)(unsigned __int8)i >> 2;
          v12 = i & 3;
          v13 = *(unsigned __int8 *)(v11 + W32GetUserSessionState(v8, v7) + 14336);
          if ( ((unsigned __int8)v13 & (unsigned __int8)(1 << (2 * v12))) != 0 )
            *((_BYTE *)v2 + v11 + 256) |= 1 << (2 * v12);
          v14 = W32GetUserSessionState((unsigned int)(2 * v12), v13);
          v8 = (unsigned int)(2 * v12 + 1);
          v7 = *(unsigned __int8 *)(v11 + v14 + 14336);
          if ( ((unsigned __int8)v7 & (unsigned __int8)(1 << (2 * v12 + 1))) != 0 )
            *((_BYTE *)v2 + v11 + 256) |= 1 << (2 * v12 + 1);
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
              goto LABEL_11;
            default:
              continue;
          }
        }
      }
      goto LABEL_19;
    }
    v21 = (_OWORD *)W32GetUserSessionState(v8, v7);
    *((_OWORD *)v2 + 16) = v21[896];
    *((_OWORD *)v2 + 17) = v21[897];
    *((_OWORD *)v2 + 18) = v21[898];
    v20 = v21[899];
  }
  *((_OWORD *)v2 + 19) = v20;
LABEL_19:
  if ( (*(_DWORD *)(W32GetUserSessionState(v8, v7) + 68448) & 1) == 0 )
    --*((_DWORD *)v2 + 102);
  if ( (unsigned __int8)isChildPartition() )
    v17 = *(_QWORD *)(W32GetUserSessionState(v16, v15) + 21880);
  else
    v17 = *(_QWORD *)(W32GetUserSessionState(v16, v15) + 22984);
  v18 = *(void (__fastcall **)(_QWORD *, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 1312LL);
  if ( v18 )
    v18(v2, v17);
  return v2;
}
