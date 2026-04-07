/*
 * XREFs of ?ConnectToParent@CVisual@@QEAAJ_N@Z @ 0x180056034
 * Callers:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180013BB4 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CompNodeDisconnectChild@VisualCollection@@AEAAJPEAVCVisual@@@Z @ 0x1800560CC (-CompNodeDisconnectChild@VisualCollection@@AEAAJPEAVCVisual@@@Z.c)
 *     ?CompNodeReconnectChild@VisualCollection@@AEAAJPEAVCVisual@@@Z @ 0x18005611C (-CompNodeReconnectChild@VisualCollection@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CVisual::ConnectToParent(CVisual *this, char a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rax
  bool v5; // zf
  VisualCollection *v7; // rcx
  int v8; // eax
  int v9; // eax

  v2 = 0;
  if ( ((*((_BYTE *)this + 36) & 4) != 0) != a2 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = a2 == 0;
    *((_BYTE *)this + 36) = (4 * a2) | *((_BYTE *)this + 36) & 0xFB;
    v7 = (VisualCollection *)(v4 + 136);
    if ( v5 )
    {
      v8 = VisualCollection::CompNodeDisconnectChild(v7, this);
      v2 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x35Fu, 0LL);
    }
    else
    {
      v9 = VisualCollection::CompNodeReconnectChild(v7, this);
      v2 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x35Bu, 0LL);
    }
  }
  return v2;
}
