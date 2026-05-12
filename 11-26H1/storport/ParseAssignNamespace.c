/*
 * XREFs of ParseAssignNamespace @ 0x1401323D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x14005C17C (WPP_SF_d.c)
 *     WPP_SF_DD @ 0x14006F340 (WPP_SF_DD.c)
 *     TcglibEalLogError @ 0x14008D638 (TcglibEalLogError.c)
 *     TcglibReverseBytes @ 0x1401312C4 (TcglibReverseBytes.c)
 *     GetTokenData @ 0x140136BEC (GetTokenData.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall ParseAssignNamespace(int **a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int *v5; // rbx
  unsigned int v6; // edi
  __int64 v9; // rbx
  __int64 v10; // rcx
  const void *TokenData; // rax
  size_t v12; // r8
  int v13; // r9d
  const char *v14; // rdx
  char v15; // r8
  __int64 v17; // [rsp+20h] [rbp-18h]
  int v18; // [rsp+20h] [rbp-18h]

  v5 = (unsigned int *)(a3 + 12);
  v6 = 0;
  if ( *(_QWORD *)(a3 + 8) != 0x200000005LL )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      v18 = *v5;
      WPP_SF_DD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xAu,
        (__int64)&WPP_049e0c7a54583f65b6c0044bb56b30ca_Traceguids,
        *(_DWORD *)(a3 + 8),
        v18);
    }
    v14 = "ErrInvalidAssignNamespaceResult";
    v13 = *(_DWORD *)(a3 + 8);
    v15 = 1;
    v17 = *v5;
    goto LABEL_12;
  }
  v9 = *(_QWORD *)(a3 + 16);
  if ( *(_QWORD *)(v9 + 8) != 0x80000000FLL )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xBu,
        (__int64)&WPP_049e0c7a54583f65b6c0044bb56b30ca_Traceguids,
        *(_DWORD *)(v9 + 8));
    v13 = *(_DWORD *)(v9 + 8);
    v14 = "ErrInvalidBandMetadata";
    v15 = 2;
    v17 = 0LL;
LABEL_12:
    v6 = -1073741435;
    TcglibEalLogError(*a1, v14, v15, v13, v17, 0LL);
    return v6;
  }
  v10 = *(_QWORD *)(a3 + 16);
  *a4 = 0LL;
  TokenData = (const void *)GetTokenData(v10, a2, *(unsigned int *)(v9 + 12));
  memmove(a4, TokenData, v12);
  TcglibReverseBytes((char *)a4, 8u);
  return v6;
}
