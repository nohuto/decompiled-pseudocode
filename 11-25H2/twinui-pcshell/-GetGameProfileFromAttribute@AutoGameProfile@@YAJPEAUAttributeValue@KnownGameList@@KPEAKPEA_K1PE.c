/*
 * XREFs of ?GetGameProfileFromAttribute@AutoGameProfile@@YAJPEAUAttributeValue@KnownGameList@@KPEAKPEA_K1PEA_N3@Z @ 0x180655750
 * Callers:
 *     ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVString@Internal@Windows@@PEAU4@@Z @ 0x1800EE7B8 (-UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVS.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGameProfileFromRawData@AutoGameProfile@@YAJKKPEBEKPEAKPEA_K1PEA_N3@Z @ 0x1806558C4 (-GetGameProfileFromRawData@AutoGameProfile@@YAJKKPEBEKPEAKPEA_K1PEA_N3@Z.c)
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
  unsigned int v7; // r10d
  unsigned int v8; // esi
  unsigned int GameProfileFromRawData; // ebx
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned __int16 *v12; // r8
  bool *v14; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v7 = (unsigned int)a3;
  v8 = (unsigned int)a2;
  if ( !this )
  {
    GameProfileFromRawData = -2147024809;
    v10 = 52LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\autogameprofile.cpp",
      (const char *)GameProfileFromRawData);
    return GameProfileFromRawData;
  }
  if ( !a3 )
  {
    GameProfileFromRawData = -2147024809;
    v10 = 53LL;
    goto LABEL_23;
  }
  if ( !a4 )
  {
    GameProfileFromRawData = -2147024809;
    v10 = 54LL;
    goto LABEL_23;
  }
  if ( !a5 )
  {
    GameProfileFromRawData = -2147024809;
    v10 = 55LL;
    goto LABEL_23;
  }
  if ( !a6 )
  {
    GameProfileFromRawData = -2147024809;
    v10 = 56LL;
    goto LABEL_23;
  }
  if ( !a7 )
  {
    GameProfileFromRawData = -2147024809;
    v10 = 57LL;
    goto LABEL_23;
  }
  if ( !(_DWORD)a2 )
  {
    GameProfileFromRawData = -2147024809;
    v10 = 58LL;
    goto LABEL_23;
  }
  *a3 = -1;
  *(_QWORD *)a4 = -1LL;
  v11 = *((unsigned int *)this + 4);
  if ( (v11 & 3) != 0 )
  {
    GameProfileFromRawData = -2147024809;
    v10 = 66LL;
    goto LABEL_23;
  }
  v12 = (unsigned __int16 *)*((_QWORD *)this + 1);
  if ( (unsigned __int16)(*v12 - 1) > 1u )
  {
    GameProfileFromRawData = -2147024809;
    v10 = 74LL;
    goto LABEL_23;
  }
  if ( 4LL * v12[1] != v11 - 4 )
  {
    GameProfileFromRawData = -2147024809;
    v10 = 76LL;
    goto LABEL_23;
  }
  GameProfileFromRawData = AutoGameProfile::GetGameProfileFromRawData(
                             (AutoGameProfile *)*v12,
                             (int)v11 - 4,
                             (int)v12 + 4,
                             (const unsigned __int8 *)v8,
                             v7,
                             a4,
                             a5,
                             a6,
                             a7,
                             v14);
  if ( (GameProfileFromRawData & 0x80000000) != 0 )
  {
    v10 = 78LL;
    goto LABEL_23;
  }
  return GameProfileFromRawData;
}
