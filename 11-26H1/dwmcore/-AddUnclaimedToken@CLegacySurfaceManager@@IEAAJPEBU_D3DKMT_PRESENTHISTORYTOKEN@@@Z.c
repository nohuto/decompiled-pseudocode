/*
 * XREFs of ?AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1801C0ABC
 * Callers:
 *     ?ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x18002F240 (-ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall CLegacySurfaceManager::AddUnclaimedToken(
        CLegacySurfaceManager *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  void *v3; // rdi
  size_t v4; // rcx
  void *v6; // rax
  __int64 v7; // rax
  unsigned int v8; // edx
  unsigned int v9; // ebx
  unsigned int v10; // eax
  int v11; // r9d
  unsigned int v12; // eax
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0LL;
  v4 = *((unsigned int *)a2 + 1);
  v14 = 0LL;
  if ( !v4 )
  {
    v9 = -2147024809;
LABEL_12:
    v12 = 59;
    goto LABEL_6;
  }
  v6 = MIDL_user_allocate(v4);
  v3 = v6;
  if ( !v6 )
  {
    v9 = -2147024882;
    goto LABEL_12;
  }
  memcpy_0(v6, a2, *((unsigned int *)a2 + 1));
  v7 = *((unsigned int *)this + 32);
  *((_QWORD *)&v14 + 1) = v3;
  v8 = v7 + 1;
  if ( (int)v7 + 1 >= (unsigned int)v7 )
  {
    v9 = 0;
    if ( v8 <= *((_DWORD *)this + 31) )
    {
      *(_OWORD *)(*((_QWORD *)this + 13) + 16 * v7) = v14;
      *((_DWORD *)this + 32) = v8;
      return v9;
    }
    v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 104, 16, 1, &v14);
    v11 = v9;
    if ( (v9 & 0x80000000) == 0 )
      return v9;
    v10 = 194;
  }
  else
  {
    v9 = -2147024362;
    v10 = 183;
    v11 = -2147024362;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, v10, 0LL);
  v12 = 64;
LABEL_6:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, v12, 0LL);
  if ( v3 )
    operator delete(v3);
  return v9;
}
