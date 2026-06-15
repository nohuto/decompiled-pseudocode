/*
 * XREFs of ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180017BC0
 * Callers:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180012890 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@KPEAPEAG@Z @ 0x180016410 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@K.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180018650 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18002941C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1801053BC (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180018490 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180028504 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800B314E (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     memmove_0 @ 0x1801626F8 (memmove_0.c)
 */

__int64 __fastcall CAudioEndpointId::Initialize(CAudioEndpointId *this, const unsigned __int16 *a2)
{
  unsigned int v4; // r15d
  __int64 v5; // rbx
  __int64 result; // rax
  char *v7; // rcx
  __int64 v8; // rsi
  char *v9; // rdx
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r12
  __int64 *v12; // rbp
  _DWORD *v13; // rbx
  __int64 *v14; // rdx
  __int64 v15; // [rsp+0h] [rbp-58h] BYREF
  ATL::CAtlException *v16; // [rsp+20h] [rbp-38h] BYREF
  int v17; // [rsp+60h] [rbp+8h]

  v4 = 0;
  if ( !a2 )
    goto LABEL_5;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  if ( !(_DWORD)v5 )
  {
LABEL_5:
    ATL::CSimpleStringT<unsigned short,0>::Empty(this);
    goto LABEL_10;
  }
  v10 = *(unsigned int *)(*(_QWORD *)this - 16LL);
  v11 = ((__int64)a2 - *(_QWORD *)this) >> 1;
  if ( (int)((*(_DWORD *)(*(_QWORD *)this - 12LL) - v5) | (1 - *(_DWORD *)(*(_QWORD *)this - 8LL))) < 0 )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(this, (unsigned int)v5);
  v7 = *(char **)this;
  v8 = 2LL * (int)v5;
  if ( v11 > v10 )
  {
    if ( !v8 )
      goto LABEL_7;
    if ( v7 )
    {
      memcpy_0(v7, a2, 2LL * (int)v5);
      goto LABEL_7;
    }
    goto LABEL_14;
  }
  v9 = &v7[2 * v11];
  if ( v8 )
  {
    if ( !v7 || !v9 )
    {
LABEL_14:
      *(_DWORD *)_o__errno(v7) = 22;
      invalid_parameter_noinfo();
      goto LABEL_7;
    }
    memmove_0(v7, v9, 2LL * (int)v5);
  }
LABEL_7:
  if ( (int)v5 < 0 )
    goto LABEL_29;
  while ( 1 )
  {
    if ( (int)v5 <= *(_DWORD *)(*(_QWORD *)this - 12LL) )
    {
      *(_DWORD *)(*(_QWORD *)this - 16LL) = v5;
      *(_WORD *)(v8 + *(_QWORD *)this) = 0;
      goto LABEL_10;
    }
LABEL_29:
    try
    {
      ATL::AtlThrowImpl(-2147024809);
    }
    catch ( ATL::CAtlException *v16 )
    {
      v14 = &v15;
      v12 = v14;
      v13 = (_DWORD *)v14[4];
      if ( *v13 == -1073741571 )
        _o__resetstkoflw();
      *((_DWORD *)v12 + 24) = *v13;
      v4 = v17;
      if ( v17 < 0 )
        AudSrvTraceLoggingErrorHelper("CAudioEndpointId::Initialize", 0x8Cu, v4);
LABEL_10:
      result = v4;
    }
  }
}
