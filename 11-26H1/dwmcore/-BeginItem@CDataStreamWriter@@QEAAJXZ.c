/*
 * XREFs of ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x180118A8C
 * Callers:
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180117E48 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?AsyncFlush@CChannel@@UEAAJII@Z @ 0x180118210 (-AsyncFlush@CChannel@@UEAAJII@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18011859C (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDataStreamWriter::BeginItem(CDataStreamWriter *this)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx
  _DWORD *v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // r8d
  unsigned int v9; // ecx
  int v10; // edi
  unsigned int v11; // eax

  if ( *((_QWORD *)this + 6)
    || *((_DWORD *)this + 14)
    || (v4 = *((_QWORD *)this + 4), (unsigned int)(*(_DWORD *)(v4 + 16) - *(_DWORD *)(v4 + 20)) < 4) )
  {
    v2 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147418113, 0x89u, 0LL);
  }
  else
  {
    v2 = -2147024362;
    v5 = (_DWORD *)(*(unsigned int *)(v4 + 20) + v4 + 24);
    v6 = -1;
    *((_QWORD *)this + 6) = v5;
    *v5 = 0;
    v7 = *((_QWORD *)this + 4);
    *((_DWORD *)this + 14) = 4;
    v8 = *(_DWORD *)(v7 + 20);
    v9 = v8 + 4;
    if ( v8 + 4 >= v8 )
      v6 = v8 + 4;
    v10 = v9 < v8 ? 0x80070216 : 0;
    *(_DWORD *)(v7 + 20) = v6;
    if ( v9 < v8 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x247u, 0LL);
      v2 = v10;
      if ( v10 >= 0 )
        return v2;
    }
    else
    {
      v11 = *((_DWORD *)this + 11);
      if ( v11 + 4 >= v11 )
      {
        *((_DWORD *)this + 11) = v11 + 4;
        return 0;
      }
      *((_DWORD *)this + 11) = -1;
      v10 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x248u, 0LL);
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x9Au, 0LL);
  }
  return v2;
}
