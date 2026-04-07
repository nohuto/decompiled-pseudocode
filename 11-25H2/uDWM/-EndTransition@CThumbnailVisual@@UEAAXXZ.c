/*
 * XREFs of ?EndTransition@CThumbnailVisual@@UEAAXXZ @ 0x1800CF600
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18000A81C (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180013380 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180019DD0 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180094954 (-SetSize@CVisual@@QEAAXHH@Z.c)
 */

void __fastcall CThumbnailVisual::EndTransition(CThumbnailVisual *this)
{
  struct tagPOINT *v2; // rcx
  _DWORD *v3; // rax
  int v4; // r8d
  int v5; // edx
  __int64 v6; // rax
  CBaseObject *v7; // rcx
  struct tagPOINT v8; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 433) )
  {
    v2 = (struct tagPOINT *)*((_QWORD *)this + 41);
    if ( v2 )
    {
      v8 = v2[5];
      CVisual::SetOffset((struct tagPOINT *)this, &v8);
      v3 = (_DWORD *)*((_QWORD *)this + 41);
      v4 = 0;
      if ( v3[13] - v3[11] >= 0 )
        v4 = v3[13] - v3[11];
      v5 = 0;
      if ( v3[12] - v3[10] >= 0 )
        v5 = v3[12] - v3[10];
      CVisual::SetSize(this, v5, v4);
      if ( !*((_BYTE *)this + 316) )
      {
        v6 = *((_QWORD *)this + 41);
        if ( (*(_BYTE *)(v6 + 36) & 4) != 0 )
          CVisual::SetOpacity(this, (double)*(unsigned __int8 *)(v6 + 72) / 255.0);
      }
      CThumbnailVisual::SetDirtyFlags(this, 0x1000u);
    }
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 53);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 53) = 0LL;
  }
  CThumbnailVisual::SetDirtyFlags(this, 0x8000u);
  *((_BYTE *)this + 433) = 0;
}
