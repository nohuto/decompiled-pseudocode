/*
 * XREFs of ?GetGameProfileFromAttribute@AutoGameProfile@@YAJPEAUAttributeValue@KnownGameList@@KPEAKPEA_K1PEA_N3@Z @ 0x18067B78C
 * Callers:
 *     ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVString@Internal@Windows@@PEAU4@@Z @ 0x18010F8D8 (-UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVS.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGameProfileFromRawData@AutoGameProfile@@YAJKKPEBEKPEAKPEA_K1PEA_N3@Z @ 0x18067B904 (-GetGameProfileFromRawData@AutoGameProfile@@YAJKKPEBEKPEAKPEA_K1PEA_N3@Z.c)
 */

__int64 __fastcall AutoGameProfile::GetGameProfileFromAttribute(
        AutoGameProfile *this,
        struct KnownGameList::AttributeValue *a2,
        _DWORD *a3,
        unsigned int *a4,
        unsigned __int64 *a5,
        unsigned int *a6,
        bool *a7)
{
  unsigned int v7; // ebp
  unsigned int GameProfileFromRawData; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned __int16 *v11; // rsi
  bool *v13; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v7 = (unsigned int)a2;
  if ( !this )
  {
    GameProfileFromRawData = -2147024809;
    v9 = 52LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\autogameprofile.cpp",
      (const char *)GameProfileFromRawData);
    return GameProfileFromRawData;
  }
  if ( !a3 )
  {
    GameProfileFromRawData = -2147024809;
    v9 = 53LL;
    goto LABEL_24;
  }
  if ( !a4 )
  {
    GameProfileFromRawData = -2147024809;
    v9 = 54LL;
    goto LABEL_24;
  }
  if ( !a5 )
  {
    GameProfileFromRawData = -2147024809;
    v9 = 55LL;
    goto LABEL_24;
  }
  if ( !a6 )
  {
    GameProfileFromRawData = -2147024809;
    v9 = 56LL;
    goto LABEL_24;
  }
  if ( !a7 )
  {
    GameProfileFromRawData = -2147024809;
    v9 = 57LL;
    goto LABEL_24;
  }
  if ( !(_DWORD)a2 )
  {
    GameProfileFromRawData = -2147024809;
    v9 = 58LL;
    goto LABEL_24;
  }
  *a3 = -1;
  *(_QWORD *)a4 = -1LL;
  v10 = *((unsigned int *)this + 4);
  if ( (v10 & 3) != 0 )
  {
    GameProfileFromRawData = -2147024809;
    v9 = 66LL;
    goto LABEL_24;
  }
  v11 = (unsigned __int16 *)*((_QWORD *)this + 1);
  if ( *v11 != 1 && *v11 != 2 )
  {
    GameProfileFromRawData = -2147024809;
    v9 = 74LL;
    goto LABEL_24;
  }
  if ( 4LL * v11[1] != v10 - 4 )
  {
    GameProfileFromRawData = -2147024809;
    v9 = 76LL;
    goto LABEL_24;
  }
  GameProfileFromRawData = AutoGameProfile::GetGameProfileFromRawData(
                             (AutoGameProfile *)*v11,
                             (int)v10 - 4,
                             (int)v11 + 4,
                             (const unsigned __int8 *)v7,
                             (unsigned int)a3,
                             a4,
                             a5,
                             a6,
                             a7,
                             v13);
  if ( (GameProfileFromRawData & 0x80000000) != 0 )
  {
    v9 = 78LL;
    goto LABEL_24;
  }
  return GameProfileFromRawData;
}
