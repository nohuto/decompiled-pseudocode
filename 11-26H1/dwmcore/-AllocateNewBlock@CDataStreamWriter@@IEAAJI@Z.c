/*
 * XREFs of ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x180118C8C
 * Callers:
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180117E48 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?AsyncFlush@CChannel@@UEAAJII@Z @ 0x180118210 (-AsyncFlush@CChannel@@UEAAJII@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18011859C (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?Initialize@CDataStreamWriter@@QEAAJI@Z @ 0x18028D840 (-Initialize@CDataStreamWriter@@QEAAJI@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDataStreamWriter::AllocateNewBlock(CDataStreamWriter *this, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v5; // r14d
  unsigned int v6; // esi
  _DWORD *v8; // rax
  _DWORD *v9; // rcx
  CDataStreamWriter *v10; // rax
  CDataStreamWriter **v11; // rdx

  v2 = *((_DWORD *)this + 10);
  v5 = v2 + a2;
  if ( v2 + a2 >= v2 )
  {
    v6 = 0;
    v8 = MIDL_user_allocate(a2 + 28LL);
    v9 = v8;
    if ( v8 )
    {
      v8[4] = a2;
      v8[5] = 0;
      *(_QWORD *)v8 = 0LL;
      *((_QWORD *)v8 + 1) = 0LL;
      v10 = (CDataStreamWriter *)*((_QWORD *)this + 4);
      if ( v10 )
      {
        v11 = (CDataStreamWriter **)*((_QWORD *)this + 1);
        if ( *v11 != this )
          __fastfail(3u);
        *(_QWORD *)v10 = this;
        *((_QWORD *)v10 + 1) = v11;
        *v11 = v10;
        *((_QWORD *)this + 1) = v10;
      }
      *((_QWORD *)this + 4) = v9;
      *((_DWORD *)this + 10) = v5;
    }
    else
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x225u, 0LL);
    }
  }
  else
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x221u, 0LL);
  }
  return v6;
}
