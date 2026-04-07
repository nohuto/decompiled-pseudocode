/*
 * XREFs of ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001BE20
 * Callers:
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180017A70 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18001B974 (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x180025A50 (-InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x180035EF8 (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x18004DDF4 (-ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 *     ?ZOrderAcrylicSheet@CWindowList@@QEAAJXZ @ 0x18006FC10 (-ZOrderAcrylicSheet@CWindowList@@QEAAJXZ.c)
 * Callees:
 *     ?SendUnlinkVisualCommand@VisualCollection@@AEAAJPEAVCVisualProxy@@@Z @ 0x18001B258 (-SendUnlinkVisualCommand@VisualCollection@@AEAAJPEAVCVisualProxy@@@Z.c)
 *     ?SendLinkVisualCommand@VisualCollection@@AEAAJPEAVCVisualProxy@@0_N@Z @ 0x18001C338 (-SendLinkVisualCommand@VisualCollection@@AEAAJPEAVCVisualProxy@@0_N@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001C390 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180088754 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall VisualCollection::InsertRelative(
        VisualCollection *this,
        CBaseObject ***a2,
        CBaseObject ***a3,
        bool a4)
{
  CBaseObject **v4; // rax
  unsigned int v5; // edi
  unsigned int v6; // ebp
  __int64 v7; // r15
  const char *v8; // r9
  char v9; // bl
  int v10; // esi
  CBaseObject *v12; // r10
  unsigned int v14; // r13d
  unsigned int v15; // eax
  __int64 v16; // r8
  char *v17; // r14
  __int64 v18; // rdx
  struct CVisual *v19; // rcx
  unsigned int v20; // edx
  __int64 v21; // rcx
  int v22; // eax
  bool v23; // r13
  __int64 v24; // rbx
  int v25; // esi
  __int64 v26; // rdx
  const char *v27; // r9
  const char *v28; // r8
  CBaseObject **v29; // rdx
  CBaseObject **v30; // r8
  struct CVisualProxy *v31; // r8
  CBaseObject *v33; // rax
  unsigned int v34; // ecx
  __int64 v35; // r8
  __int64 v36; // rcx
  char v37; // al
  char v38; // r8
  char v39; // dl
  unsigned int v40; // eax
  int v41; // r9d
  unsigned int v42; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  CBaseObject **v44; // [rsp+70h] [rbp+8h] BYREF
  CBaseObject *v45; // [rsp+78h] [rbp+10h] BYREF
  bool v46; // [rsp+88h] [rbp+20h]

  v46 = a4;
  v45 = (CBaseObject *)a2;
  v4 = a2[3];
  v5 = 0;
  v6 = *((_DWORD *)this + 8);
  v7 = 0LL;
  v8 = *(const char **)this;
  v9 = 0;
  v44 = v4;
  v10 = -1;
  v12 = (CBaseObject *)a2;
  v14 = -1;
  if ( a3 != a2 )
  {
    if ( a3 )
    {
      v38 = *((_BYTE *)a3 + 36) & 0x10;
      v39 = *((_BYTE *)a2 + 36) & 0x10;
      if ( (v39 != 0) != (v38 != 0) )
      {
        if ( v46 )
        {
          if ( v39 )
            goto LABEL_78;
        }
        else if ( v38 )
        {
LABEL_78:
          v5 = -2147467259;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467259, 0x72u, 0LL);
          return v5;
        }
      }
    }
    v15 = 0;
    if ( !v6 )
    {
LABEL_10:
      if ( a3 )
      {
        if ( v10 == -1 )
        {
          v5 = -2147024890;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024890, 0xAFu, 0LL);
          return v5;
        }
        v17 = (char *)this + 8;
      }
      else
      {
        v17 = (char *)this + 8;
LABEL_17:
        if ( v46 )
        {
          v9 = 0;
        }
        else
        {
          v9 = 1;
          if ( v10 == -1 )
            v10 = v6;
        }
      }
      ++*((_DWORD *)this + 10);
      if ( v44 == (CBaseObject **)v8 )
      {
        v34 = *((_DWORD *)v17 + 6);
        if ( v14 >= v34 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x19Au, 0LL);
          v5 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xCEu, 0LL);
          return v5;
        }
        v35 = *(_QWORD *)v17;
        if ( v14 < v34 - 1 )
        {
          do
          {
            v36 = v14++;
            *(_QWORD *)(v35 + 8 * v36) = *(_QWORD *)(v35 + 8LL * v14);
            v34 = *((_DWORD *)v17 + 6);
          }
          while ( v14 < v34 - 1 );
          v12 = v45;
        }
        *((_DWORD *)v17 + 6) = v34 - 1;
        if ( v9 )
          --v10;
        v37 = *((_BYTE *)v12 + 36);
        if ( (v37 & 4) == 0
          || (*((_BYTE *)v12 + 36) = v37 & 0xFB,
              v22 = VisualCollection::SendUnlinkVisualCommand(this, *((struct CVisualProxy **)v45 + 2)),
              v5 = v22,
              v22 >= 0) )
        {
          v17 = (char *)this + 8;
LABEL_23:
          v23 = v46;
          v24 = v10 + (unsigned int)v46;
          if ( (unsigned int)v24 > v6 )
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0xE9,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\visualcollection.cpp",
              v8);
          if ( (unsigned int)v24 > *((_DWORD *)v17 + 6) )
          {
            v25 = -2147024809;
            v40 = 457;
            v5 = -2147024809;
          }
          else
          {
            v44 = &v45;
            v25 = DynArrayImpl<0>::Grow((_DWORD)v17, 8, 1, (_DWORD)v8, (__int64)&v44);
            v5 = v25;
            if ( v25 >= 0 )
            {
              v26 = *((unsigned int *)v17 + 6);
              v27 = *(const char **)v17;
              *((_DWORD *)v17 + 6) = v26 + 1;
              if ( (unsigned int)v26 > (unsigned int)v24 )
              {
                v28 = &v27[8 * v26];
                do
                {
                  v26 = (unsigned int)(v26 - 1);
                  v28 -= 8;
                  *((_QWORD *)v28 + 1) = *(_QWORD *)&v27[8 * v26];
                }
                while ( (unsigned int)v26 > (unsigned int)v24 );
              }
              v29 = v44;
              v30 = (CBaseObject **)&v27[8 * v24];
              if ( v44 >= v30 && v44 < (CBaseObject **)&v27[8 * *((unsigned int *)v17 + 6) - 8] )
                v29 = v44 + 1;
              *v30 = *v29;
              if ( v7 )
              {
                if ( (*(_BYTE *)(v7 + 36) & 4) == 0 )
                  wil::details::in1diag3::_FailFast_Unexpected(
                    retaddr,
                    (void *)0xF4,
                    (unsigned int)"clientcore\\windows\\dwm\\udwm\\visualcollection.cpp",
                    v27);
                v31 = *(struct CVisualProxy **)(v7 + 16);
              }
              else
              {
                v31 = 0LL;
              }
              v22 = VisualCollection::SendLinkVisualCommand(this, *((struct CVisualProxy **)v45 + 2), v31, v23);
              v5 = v22;
              if ( v22 >= 0 )
              {
                *((_BYTE *)v45 + 36) |= 4u;
                return v5;
              }
              v42 = 249;
              goto LABEL_75;
            }
            v40 = 467;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, v40, 0LL);
          v41 = v25;
          v42 = 235;
LABEL_61:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, v42, 0LL);
          return v5;
        }
        v42 = 221;
      }
      else
      {
        v22 = (*(__int64 (__fastcall **)(CBaseObject *, const char *))(*(_QWORD *)v12 + 56LL))(v12, v8);
        v5 = v22;
        if ( v22 >= 0 )
        {
          CBaseObject::AddRef(v45);
          goto LABEL_23;
        }
        v42 = 226;
      }
LABEL_75:
      v41 = v22;
      goto LABEL_61;
    }
    v16 = *((_QWORD *)this + 1);
    v17 = (char *)this + 8;
    if ( a3 )
    {
      v18 = 0LL;
      do
      {
        v19 = *(struct CVisual **)(v16 + v18);
        if ( v19 == v12 )
        {
          if ( v10 == -1 )
            v9 = 1;
          v14 = v15;
        }
        if ( v19 == (struct CVisual *)a3 )
        {
          v10 = v15;
          v7 = *(_QWORD *)(v16 + v18);
        }
        ++v15;
        v18 += 8LL;
      }
      while ( v15 < v6 );
      goto LABEL_10;
    }
    v20 = 0;
    v21 = 0LL;
    while ( 1 )
    {
      v33 = *(CBaseObject **)(v16 + v21);
      if ( v33 == v12 )
        v14 = v20;
      if ( v10 == -1 )
        break;
      if ( !v33 )
      {
        v7 = 0LL;
LABEL_15:
        v10 = v20;
      }
LABEL_16:
      ++v20;
      v21 += 8LL;
      if ( v20 >= v6 )
        goto LABEL_17;
    }
    if ( v46 )
    {
      if ( (*((_BYTE *)v33 + 36) & 0x10) != 0 || (*((_BYTE *)v12 + 36) & 0x10) == 0 )
        goto LABEL_16;
      v7 = *(_QWORD *)(v16 + v21);
    }
    else
    {
      if ( (*((_BYTE *)v12 + 36) & 0x10) != 0 || (*((_BYTE *)v33 + 36) & 0x10) == 0 )
        goto LABEL_16;
      v7 = *(_QWORD *)(v16 + v21);
    }
    goto LABEL_15;
  }
  if ( v4 != (CBaseObject **)v8 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x66u, 0LL);
  }
  return v5;
}
