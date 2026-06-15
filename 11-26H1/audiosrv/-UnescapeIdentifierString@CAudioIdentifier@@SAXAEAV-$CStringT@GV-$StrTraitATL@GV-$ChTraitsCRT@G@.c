/*
 * XREFs of ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18002A340
 * Callers:
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x180028A28 (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18002941C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x18002973C (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1801053BC (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 * Callees:
 *     ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180018500 (-Fork@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Delete@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z @ 0x18002FAFC (-Delete@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAudioIdentifier::UnescapeIdentifierString(const void **a1)
{
  __int64 result; // rax
  int v3; // ebx
  int v4; // ebp
  __int64 v5; // rsi
  __int64 v6; // rdi
  char *v7; // rcx
  int v8; // edx
  __int64 v9; // r15

  result = (__int64)*a1;
  v3 = 0;
  v4 = *((_DWORD *)*a1 - 4);
  if ( v4 > 0 )
  {
    v5 = 1LL;
    v6 = 0LL;
    do
    {
      if ( v3 < 0 || (v7 = (char *)*a1, v8 = *((_DWORD *)*a1 - 4), v3 > v8) )
LABEL_19:
        ATL::AtlThrowImpl(-2147024809);
      if ( *(_WORD *)&v7[v6] == 37 )
      {
        if ( v5 < 0 || v3 + 1 > v8 )
          goto LABEL_19;
        result = *(unsigned __int16 *)&v7[v6 + 2];
        if ( (_WORD)result == 37 )
        {
          result = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Delete(
                     a1,
                     (unsigned int)v3);
LABEL_18:
          --v4;
          goto LABEL_6;
        }
        if ( (_WORD)result == 98 )
        {
          ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Delete(
            a1,
            (unsigned int)v3);
          v9 = *((int *)*a1 - 4);
          if ( v3 >= (int)v9 )
            goto LABEL_19;
          if ( *((int *)*a1 - 2) > 1 )
            ATL::CSimpleStringT<unsigned short,0>::Fork(a1, v9);
          *(_WORD *)((char *)*a1 + v6) = 124;
          if ( (int)v9 < 0 || (int)v9 > *((_DWORD *)*a1 - 3) )
            goto LABEL_19;
          *((_DWORD *)*a1 - 4) = v9;
          result = (__int64)*a1;
          *((_WORD *)*a1 + v9) = 0;
          goto LABEL_18;
        }
      }
LABEL_6:
      ++v3;
      ++v5;
      v6 += 2LL;
    }
    while ( v3 < v4 );
  }
  return result;
}
