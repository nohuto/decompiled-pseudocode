/*
 * XREFs of ParseBandMetadata @ 0x140132530
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x14005C17C (WPP_SF_d.c)
 *     WPP_SF_DD @ 0x14006F340 (WPP_SF_DD.c)
 *     TcglibEalLogError @ 0x14008D638 (TcglibEalLogError.c)
 *     GetTokenData @ 0x140136BEC (GetTokenData.c)
 *     memmove @ 0x140138680 (memmove.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall ParseBandMetadata(int **a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v5; // rdi
  unsigned int v6; // ebx
  __int64 v9; // rdi
  int v10; // r9d
  size_t v11; // r8
  unsigned int v12; // r9d
  __int64 v13; // rdx
  const void *TokenData; // rax
  size_t v15; // r8
  int v16; // r9d
  char v17; // r8
  __int64 v19; // [rsp+20h] [rbp-18h]

  v5 = (unsigned int *)(a3 + 12);
  v6 = 0;
  if ( *(_QWORD *)(a3 + 8) != 0x100000005LL )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_DD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xCu,
        (__int64)&WPP_049e0c7a54583f65b6c0044bb56b30ca_Traceguids,
        *(_DWORD *)(a3 + 8),
        *v5);
    v17 = 1;
    v16 = *(_DWORD *)(a3 + 8);
    v19 = *v5;
    goto LABEL_17;
  }
  v9 = *(_QWORD *)(a3 + 16);
  v10 = *(_DWORD *)(v9 + 8);
  if ( (unsigned int)(v10 - 15) > 2 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xDu,
        (__int64)&WPP_049e0c7a54583f65b6c0044bb56b30ca_Traceguids,
        v10);
    v16 = *(_DWORD *)(v9 + 8);
    v17 = 2;
    v19 = 0LL;
LABEL_17:
    v6 = -1073741435;
    TcglibEalLogError(*a1, "ErrInvalidBandMetadata", v17, v16, v19, 0LL);
    return v6;
  }
  v11 = *(unsigned int *)(a4 + 24);
  v12 = *(_DWORD *)(v9 + 12);
  if ( v12 <= (unsigned int)v11 )
  {
    memset_0(*(void **)(a4 + 16), 0, v11);
    TokenData = (const void *)GetTokenData(v9, v13, *(unsigned int *)(v9 + 12));
    memmove(*(void **)(a4 + 16), TokenData, v15);
    *(_DWORD *)(a4 + 24) = *(_DWORD *)(v9 + 12);
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_DD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xEu,
        (__int64)&WPP_049e0c7a54583f65b6c0044bb56b30ca_Traceguids,
        v12,
        *(_DWORD *)(a4 + 24));
    v6 = -1073741789;
    TcglibEalLogError(*a1, "ErrInvalidBandMetadata", 3, *(_DWORD *)(v9 + 12), *(unsigned int *)(a4 + 24), 0LL);
  }
  return v6;
}
