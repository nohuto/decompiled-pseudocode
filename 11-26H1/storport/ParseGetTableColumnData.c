/*
 * XREFs of ParseGetTableColumnData @ 0x140133860
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 *     WPP_SF_DD @ 0x14006F340 (WPP_SF_DD.c)
 *     WPP_SF_DDD @ 0x14006F394 (WPP_SF_DDD.c)
 *     TcglibEalLogError @ 0x14008D638 (TcglibEalLogError.c)
 *     FindNamedToken @ 0x1401334C4 (FindNamedToken.c)
 *     GetTokenData @ 0x140136BEC (GetTokenData.c)
 *     memmove @ 0x140138680 (memmove.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall ParseGetTableColumnData(int **a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  int **v6; // r14
  __int64 v7; // rax
  int v8; // r9d
  char v9; // r8
  __int64 *v10; // r12
  char v11; // cl
  unsigned int i; // r15d
  int v13; // r9d
  __int64 v14; // rsi
  __int64 *v15; // r14
  int NamedToken; // eax
  unsigned int v17; // eax
  const void *TokenData; // rax
  size_t v19; // r8
  void *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r14
  unsigned int v23; // eax
  __int64 v24; // rdx
  const void *v25; // rax
  size_t v26; // r8
  int v27; // ecx
  __int64 v29; // [rsp+20h] [rbp-68h]
  __int64 v30; // [rsp+28h] [rbp-60h]
  int v31; // [rsp+30h] [rbp-58h]
  __int64 v32; // [rsp+38h] [rbp-50h]
  _QWORD v33[9]; // [rsp+40h] [rbp-48h] BYREF
  char v35; // [rsp+A0h] [rbp+18h]

  v5 = 0;
  v6 = a1;
  if ( *(_QWORD *)(a3 + 8) != 0x100000005LL )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_DD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xBu,
        (__int64)&WPP_26031245b0af395f80dcd19d8421604d_Traceguids,
        *(_DWORD *)(a3 + 8),
        *(_DWORD *)(a3 + 12));
    v9 = 1;
    goto LABEL_51;
  }
  v7 = *(_QWORD *)(a3 + 16);
  v32 = v7;
  v8 = *(_DWORD *)(v7 + 8);
  if ( v8 != 5 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_DD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xCu,
        (__int64)&WPP_26031245b0af395f80dcd19d8421604d_Traceguids,
        v8,
        *(_DWORD *)(v7 + 12));
    v9 = 2;
LABEL_51:
    v5 = -1073741435;
    TcglibEalLogError(*v6, "ErrInvalidColData", v9, *(_DWORD *)a4, *(unsigned int *)(a4 + 4), 0LL);
    return (unsigned int)v5;
  }
  v10 = *(__int64 **)(v7 + 16);
  v11 = 0;
  v31 = 0;
  v35 = 0;
  for ( i = 0; ; ++i )
  {
    if ( v5 < 0 )
      goto LABEL_44;
    if ( !v10 || i >= *(_DWORD *)(a4 + 16) )
      break;
    v13 = *((_DWORD *)v10 + 2);
    v14 = *(_QWORD *)(a4 + 8) + 32LL * i;
    v33[0] = 0LL;
    if ( __PAIR64__(*((_DWORD *)v10 + 3), v13) != 0x200000006LL )
      goto LABEL_40;
    v15 = (__int64 *)v10[2];
    if ( !v15 )
    {
      v6 = a1;
LABEL_40:
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        LODWORD(v29) = *((_DWORD *)v10 + 3);
        WPP_SF_DD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0xDu,
          (__int64)&WPP_26031245b0af395f80dcd19d8421604d_Traceguids,
          v13,
          v29);
      }
      v5 = -1073741435;
      TcglibEalLogError(*v6, "ErrInvalidColData", 3, *(_DWORD *)a4, *(unsigned int *)(a4 + 4), i);
LABEL_44:
      v27 = 0;
      goto LABEL_45;
    }
    if ( *(_DWORD *)(v14 + 12) )
    {
      v35 = 1;
      NamedToken = FindNamedToken(v14, v7, v33);
      v15 = (__int64 *)v33[0];
      v5 = NamedToken;
    }
    else
    {
      if ( v11 )
      {
        v5 = -1073741811;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          WPP_SF_(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0xFu,
            (__int64)&WPP_26031245b0af395f80dcd19d8421604d_Traceguids);
LABEL_36:
          v7 = v32;
        }
        v6 = a1;
        goto LABEL_38;
      }
      v17 = *(_DWORD *)(v14 + 8);
      if ( v17 >= *((_DWORD *)v15 + 3) )
      {
        if ( v17 > 8 )
        {
          memset_0(*(void **)v14, 0, *(unsigned int *)(v14 + 8));
          TokenData = (const void *)GetTokenData(v15, v21, *((unsigned int *)v15 + 3));
          v20 = *(void **)v14;
        }
        else
        {
          *(_QWORD *)v14 = 0LL;
          TokenData = (const void *)GetTokenData(v15, a2, *((unsigned int *)v15 + 3));
          v20 = (void *)v14;
        }
        memmove(v20, TokenData, v19);
        *(_DWORD *)(v14 + 8) = *((_DWORD *)v15 + 3);
        *(_DWORD *)(v14 + 12) = *((_DWORD *)v15 + 2);
        v10 = (__int64 *)*v10;
        goto LABEL_26;
      }
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        LODWORD(v30) = *((_DWORD *)v15 + 3);
        LODWORD(v29) = *(_DWORD *)(v14 + 8);
        WPP_SF_DDD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0xEu,
          (__int64)&WPP_26031245b0af395f80dcd19d8421604d_Traceguids,
          i,
          v29,
          v30);
      }
      TcglibEalLogError(*a1, "ErrInvalidColData", 4, *(_DWORD *)a4, *(unsigned int *)(a4 + 4), i);
      v15 = 0LL;
      v5 = -1073741789;
    }
    if ( v5 < 0 )
      goto LABEL_36;
LABEL_26:
    if ( !v15 )
      goto LABEL_36;
    v22 = *v15;
    v23 = *(_DWORD *)(v14 + 24);
    if ( v23 >= *(_DWORD *)(v22 + 12) )
    {
      memset_0(*(void **)(v14 + 16), 0, v23);
      v25 = (const void *)GetTokenData(v22, v24, *(unsigned int *)(v22 + 12));
      memmove(*(void **)(v14 + 16), v25, v26);
      ++v31;
      *(_DWORD *)(v14 + 24) = *(_DWORD *)(v22 + 12);
      *(_DWORD *)(v14 + 28) = *(_DWORD *)(v22 + 8);
      goto LABEL_36;
    }
    v5 = -1073741789;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      LODWORD(v30) = *(_DWORD *)(v22 + 12);
      LODWORD(v29) = *(_DWORD *)(v14 + 24);
      WPP_SF_DDD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x10u,
        (__int64)&WPP_26031245b0af395f80dcd19d8421604d_Traceguids,
        i,
        v29,
        v30);
    }
    v6 = a1;
    TcglibEalLogError(*a1, "ErrInvalidColData", 5, *(_DWORD *)a4, *(unsigned int *)(a4 + 4), i);
    v7 = v32;
LABEL_38:
    v11 = v35;
  }
  v27 = v31;
LABEL_45:
  *(_DWORD *)(a4 + 16) = v27;
  return (unsigned int)v5;
}
