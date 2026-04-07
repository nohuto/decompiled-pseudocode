/*
 * XREFs of ?_RemoveLauncherClones@CLivePreview@@AEAAJXZ @ 0x18002D0BC
 * Callers:
 *     ?DeActivate@CLivePreview@@QEAAJ_N@Z @ 0x18002CDFC (-DeActivate@CLivePreview@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CLivePreview::_RemoveLauncherClones(CLivePreview *this)
{
  unsigned int v1; // esi
  int v2; // eax
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rcx
  CContainerVisual **v8; // rcx
  int v9; // eax
  CBaseObject *v10; // rcx

  v1 = 0;
  v2 = *((_DWORD *)this + 58) - 1;
  v4 = v2;
  if ( v2 >= 0 )
  {
    v5 = 40LL * v2;
    do
    {
      v6 = *((_QWORD *)this + 26);
      if ( *(_DWORD *)(*(_QWORD *)(v6 + v5) + 128LL) == 6 )
      {
        v8 = *(CContainerVisual ***)(v6 + v5 + 8);
        if ( v8 )
        {
          v9 = CContainerVisual::RemoveChild(v8[3], (struct CVisual *)v8);
          v1 = v9;
          if ( v9 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x6DDu, 0LL);
          v10 = *(CBaseObject **)(*((_QWORD *)this + 26) + v5 + 8);
          if ( v10 )
          {
            CBaseObject::Release(v10);
            *(_QWORD *)(*((_QWORD *)this + 26) + v5 + 8) = 0LL;
          }
        }
      }
      v5 -= 40LL;
      --v4;
    }
    while ( v4 >= 0 );
  }
  return v1;
}
