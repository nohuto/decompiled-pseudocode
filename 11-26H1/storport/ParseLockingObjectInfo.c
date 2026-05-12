/*
 * XREFs of ParseLockingObjectInfo @ 0x1401326F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 *     WPP_SF_DD @ 0x14006F340 (WPP_SF_DD.c)
 *     WPP_SF_DDD @ 0x14006F394 (WPP_SF_DDD.c)
 *     TcglibEalLogError @ 0x14008D638 (TcglibEalLogError.c)
 *     TcglibReverseBytes @ 0x1401312C4 (TcglibReverseBytes.c)
 *     FindNamedToken @ 0x1401334C4 (FindNamedToken.c)
 *     GetTokenData @ 0x140136BEC (GetTokenData.c)
 *     memmove @ 0x140138680 (memmove.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall ParseLockingObjectInfo(int **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned int *v5; // rdi
  unsigned int v6; // ebx
  int **v8; // r14
  __int64 v9; // r13
  int v10; // r9d
  __int64 v11; // rax
  char v12; // r8
  int v13; // r9d
  int v14; // edi
  unsigned int v15; // esi
  __int64 v16; // r15
  int NamedToken; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  _QWORD *v20; // r12
  __int64 v21; // r14
  int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rdx
  const void *TokenData; // rax
  size_t v26; // r8
  __int64 v27; // rax
  __int64 v29; // [rsp+20h] [rbp-48h]
  _QWORD *v31; // [rsp+80h] [rbp+18h] BYREF
  __int64 v32; // [rsp+88h] [rbp+20h]

  v32 = a4;
  v4 = a4;
  v5 = (unsigned int *)(a3 + 12);
  v6 = 0;
  v8 = a1;
  if ( *(_QWORD *)(a3 + 8) != 0x100000005LL )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_DD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x14u,
        (__int64)&WPP_049e0c7a54583f65b6c0044bb56b30ca_Traceguids,
        *(_DWORD *)(a3 + 8),
        *v5);
    v11 = *v5;
    v12 = 1;
    v13 = *(_DWORD *)(a3 + 8);
    goto LABEL_37;
  }
  v9 = *(_QWORD *)(a3 + 16);
  v10 = *(_DWORD *)(v9 + 8);
  if ( v10 != 5 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_DD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x15u,
        (__int64)&WPP_049e0c7a54583f65b6c0044bb56b30ca_Traceguids,
        v10,
        *(_DWORD *)(v9 + 12));
    v11 = *(unsigned int *)(v9 + 12);
    v12 = 2;
    v13 = *(_DWORD *)(v9 + 8);
LABEL_37:
    v29 = v11;
    goto LABEL_38;
  }
  v14 = 0;
  v15 = 0;
  while ( 1 )
  {
    if ( v15 >= *(_DWORD *)(v4 + 16) )
    {
LABEL_23:
      v8 = a1;
      goto LABEL_24;
    }
    v16 = *(_QWORD *)(v4 + 8) + 32LL * v15;
    v31 = 0LL;
    NamedToken = FindNamedToken(v16, v9, &v31);
    v6 = NamedToken;
    if ( NamedToken >= 0 )
    {
      v20 = v31;
      if ( v31 )
        break;
    }
    ++v15;
    if ( NamedToken < 0 )
      goto LABEL_23;
LABEL_21:
    v4 = v32;
  }
  v21 = *v31;
  if ( *(_QWORD *)v16 == 9LL )
  {
    if ( *(_DWORD *)(v21 + 8) == 5 )
    {
      v22 = *(_DWORD *)(v21 + 12);
LABEL_17:
      **(_DWORD **)(v16 + 16) = v22;
LABEL_20:
      v14 |= 1 << *((_DWORD *)v20 + 4);
      ++v15;
      goto LABEL_21;
    }
  }
  else if ( *(_QWORD *)v16 == 20LL && *(_DWORD *)(v21 + 8) == 15 )
  {
    LODWORD(v31) = *(_DWORD *)GetTokenData(*v31, v18, v19);
    TcglibReverseBytes((char *)&v31, 4u);
    v22 = (int)v31;
    goto LABEL_17;
  }
  v23 = *(_DWORD *)(v16 + 24);
  if ( v23 >= *(_DWORD *)(v21 + 12) )
  {
    memset_0(*(void **)(v16 + 16), 0, v23);
    TokenData = (const void *)GetTokenData(v21, v24, *(unsigned int *)(v21 + 12));
    memmove(*(void **)(v16 + 16), TokenData, v26);
    *(_DWORD *)(v16 + 24) = *(_DWORD *)(v21 + 12);
    *(_DWORD *)(v16 + 28) = *(_DWORD *)(v21 + 8);
    goto LABEL_20;
  }
  v6 = -1073741789;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    WPP_SF_DDD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x16u,
      (__int64)&WPP_049e0c7a54583f65b6c0044bb56b30ca_Traceguids,
      v15,
      *(_DWORD *)(v16 + 24),
      *(_DWORD *)(v21 + 12));
  v27 = *(unsigned int *)(v21 + 12);
  v8 = a1;
  TcglibEalLogError(*a1, "ErrInvalidLockingObjectInfo", 3, *(_QWORD *)v16, *(unsigned int *)(v16 + 24), v27);
LABEL_24:
  if ( (v14 & 0x3FD) != 0x3FD )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x17u,
        (__int64)&WPP_049e0c7a54583f65b6c0044bb56b30ca_Traceguids);
    v12 = 4;
    v29 = 0LL;
    LOBYTE(v13) = v14;
LABEL_38:
    v6 = -1073741435;
    TcglibEalLogError(*v8, "ErrInvalidLockingObjectInfo", v12, v13, v29, 0LL);
  }
  return v6;
}
