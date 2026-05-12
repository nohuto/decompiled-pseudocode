/*
 * XREFs of NvmeProtocolSpecificRequestGetData @ 0x1400901DC
 * Callers:
 *     NvmeProcessQueryProtocolSpecificProperty @ 0x14009005C (NvmeProcessQueryProtocolSpecificProperty.c)
 *     NvmeProcessSetProtocolSpecificProperty @ 0x140090138 (NvmeProcessSetProtocolSpecificProperty.c)
 *     NvmeQueryProtocolInfoCompletion @ 0x14011FFE0 (NvmeQueryProtocolInfoCompletion.c)
 *     NvmeQueryProtocolInfoFeatureData @ 0x140120B58 (NvmeQueryProtocolInfoFeatureData.c)
 *     NvmeQueryProtocolInfoIdentifyData @ 0x14012113C (NvmeQueryProtocolInfoIdentifyData.c)
 *     NvmeQueryProtocolInfoLogPageData @ 0x140121494 (NvmeQueryProtocolInfoLogPageData.c)
 *     NvmeSetProtocolInfoCompletion @ 0x140121FB0 (NvmeSetProtocolInfoCompletion.c)
 *     NvmeSetProtocolInfoFeatureData @ 0x140122774 (NvmeSetProtocolInfoFeatureData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeProtocolSpecificRequestGetData(__int64 a1, char a2, _QWORD *a3, char *a4)
{
  __int64 v4; // rax
  unsigned int v7; // r10d
  int v8; // eax
  char v9; // r9
  char v10; // r11
  __int64 *v11; // r8
  _QWORD *v12; // rdx
  __int64 *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  bool v17; // cf
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 184);
  *a3 = 0LL;
  *a4 = 0;
  v7 = *(_DWORD *)(v4 + 16);
  if ( v7 < 8 )
    return 3221225485LL;
  v8 = *(_DWORD *)(v4 + 24);
  v9 = 1;
  if ( v8 == 2954240 )
  {
    v10 = 1;
  }
  else
  {
    if ( v8 != 2987004 )
      return 3221225485LL;
    v10 = 0;
  }
  v11 = *(__int64 **)(a1 + 24);
  if ( a2 )
  {
    v12 = *(_QWORD **)(a1 + 24);
    v13 = (__int64 *)((char *)v11 + v7 - 8);
    v14 = *v13;
  }
  else
  {
    v14 = *v11;
    v12 = v11 + 1;
    v13 = *(__int64 **)(a1 + 24);
  }
  if ( !HIDWORD(*v13) )
  {
    v15 = v14 - 49;
    if ( v15 && (v16 = v15 - 1) != 0 )
    {
      if ( (unsigned int)(v16 - 17) <= 1 && v7 >= 0x50 )
      {
        ++v12;
LABEL_20:
        *a3 = v12;
        result = 0LL;
        *a4 = v9;
        return result;
      }
    }
    else
    {
      if ( v10 )
        v17 = v7 < 0x30;
      else
        v17 = v7 < 0x48;
      if ( !v17 )
      {
        v9 = 0;
        goto LABEL_20;
      }
    }
  }
  return 3221225485LL;
}
