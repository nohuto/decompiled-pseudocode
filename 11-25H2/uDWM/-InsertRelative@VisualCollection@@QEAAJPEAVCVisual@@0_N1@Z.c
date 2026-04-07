/*
 * XREFs of ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180007DF0
 * Callers:
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x1800078BC (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180007D54 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18004B744 (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18004CCDC (-InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x180059E38 (-ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 *     ?ZOrderAcrylicSheet@CWindowList@@QEAAJXZ @ 0x18007E2C4 (-ZOrderAcrylicSheet@CWindowList@@QEAAJXZ.c)
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x1800E8D00 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 * Callees:
 *     ?SendUnlinkVisualCommand@VisualCollection@@AEAAJPEAVCVisualProxy@@@Z @ 0x1800071F4 (-SendUnlinkVisualCommand@VisualCollection@@AEAAJPEAVCVisualProxy@@@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800082D4 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?SendLinkVisualCommand@VisualCollection@@AEAAJPEAVCVisualProxy@@0_N@Z @ 0x1800084A4 (-SendLinkVisualCommand@VisualCollection@@AEAAJPEAVCVisualProxy@@0_N@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180095D90 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall VisualCollection::InsertRelative(
        VisualCollection *this,
        CMILRefCountBase ***a2,
        CMILRefCountBase ***a3,
        bool a4)
{
  CMILRefCountBase **v4; // rax
  unsigned int v5; // edi
  unsigned int v6; // esi
  __int64 v7; // r15
  const char *v8; // r9
  char v9; // bl
  int v10; // ebp
  CMILRefCountBase *v12; // r10
  unsigned int v14; // r13d
  __int64 v15; // rcx
  __int64 v16; // r8
  char *v17; // r14
  __int64 v18; // rdx
  struct CVisual *v19; // rax
  unsigned int i; // edx
  int v21; // eax
  bool v22; // r13
  __int64 v23; // rbx
  int v24; // esi
  __int64 v25; // rdx
  const char *v26; // r9
  const char *v27; // r8
  CMILRefCountBase **v28; // rdx
  CMILRefCountBase **v29; // r8
  struct CVisualProxy *v30; // r8
  CMILRefCountBase *v32; // rax
  unsigned int v33; // ecx
  __int64 v34; // r8
  __int64 v35; // rcx
  char v36; // al
  unsigned __int8 v37; // cl
  unsigned __int8 v38; // dl
  int v39; // r9d
  unsigned int v40; // eax
  unsigned int v41; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  CMILRefCountBase **v43; // [rsp+70h] [rbp+8h] BYREF
  CMILRefCountBase *v44; // [rsp+78h] [rbp+10h] BYREF
  bool v45; // [rsp+88h] [rbp+20h]

  v45 = a4;
  v44 = (CMILRefCountBase *)a2;
  v4 = a2[3];
  v5 = 0;
  v6 = *((_DWORD *)this + 8);
  v7 = 0LL;
  v8 = *(const char **)this;
  v9 = 0;
  v43 = v4;
  v10 = -1;
  v12 = (CMILRefCountBase *)a2;
  v14 = -1;
  if ( a3 != a2 )
  {
    if ( a3 )
    {
      v37 = *((_BYTE *)a2 + 36);
      v38 = *((_BYTE *)a3 + 36);
      if ( ((v37 ^ v38) & 0x10) != 0 )
      {
        if ( v45 )
        {
          if ( (v37 & 0x10) != 0 )
            goto LABEL_73;
        }
        else if ( (v38 & 0x10) != 0 )
        {
LABEL_73:
          v5 = -2147467259;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467259, 0x72u, 0LL);
          return v5;
        }
      }
    }
    v15 = 0LL;
    if ( v6 )
    {
      v16 = *((_QWORD *)this + 1);
      v17 = (char *)this + 8;
      if ( !a3 )
      {
        for ( i = 0; i < v6; ++i )
        {
          v32 = *(CMILRefCountBase **)(v15 + v16);
          if ( v32 == v12 )
            v14 = i;
          if ( v10 == -1 )
          {
            if ( v45 )
            {
              if ( (*((_BYTE *)v32 + 36) & 0x10) == 0 && (*((_BYTE *)v12 + 36) & 0x10) != 0 )
              {
                v7 = *(_QWORD *)(v15 + v16);
                v10 = i;
              }
            }
            else if ( (*((_BYTE *)v12 + 36) & 0x10) == 0 && (*((_BYTE *)v32 + 36) & 0x10) != 0 )
            {
              v7 = *(_QWORD *)(v15 + v16);
              v10 = i;
            }
          }
          else if ( !v32 )
          {
            v7 = 0LL;
            v10 = i;
          }
          v15 += 8LL;
        }
        goto LABEL_19;
      }
      v18 = 0LL;
      do
      {
        v19 = *(struct CVisual **)(v18 + v16);
        if ( v19 == v12 )
        {
          if ( v10 == -1 )
            v9 = 1;
          v14 = v15;
        }
        if ( v19 == (struct CVisual *)a3 )
        {
          v10 = v15;
          v7 = *(_QWORD *)(v18 + v16);
        }
        LODWORD(v15) = v15 + 1;
        v18 += 8LL;
      }
      while ( (unsigned int)v15 < v6 );
    }
    if ( a3 )
    {
      if ( v10 == -1 )
      {
        v5 = -2147024890;
        v39 = -2147024890;
        v41 = 175;
LABEL_64:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, v41, 0LL);
        return v5;
      }
      v17 = (char *)this + 8;
LABEL_22:
      ++*((_DWORD *)this + 10);
      if ( v43 == (CMILRefCountBase **)v8 )
      {
        v33 = *((_DWORD *)v17 + 6);
        if ( v14 >= v33 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x192u, 0LL);
          v5 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xCEu, 0LL);
          return v5;
        }
        v34 = *(_QWORD *)v17;
        if ( v14 < v33 - 1 )
        {
          do
          {
            v35 = v14++;
            *(_QWORD *)(v34 + 8 * v35) = *(_QWORD *)(v34 + 8LL * v14);
            v33 = *((_DWORD *)v17 + 6);
          }
          while ( v14 < v33 - 1 );
          v12 = v44;
        }
        *((_DWORD *)v17 + 6) = v33 - 1;
        if ( v9 )
          --v10;
        v36 = *((_BYTE *)v12 + 36);
        if ( (v36 & 4) == 0
          || (*((_BYTE *)v12 + 36) = v36 & 0xFB,
              v21 = VisualCollection::SendUnlinkVisualCommand(this, *((struct CVisualProxy **)v44 + 2)),
              v5 = v21,
              v21 >= 0) )
        {
          v17 = (char *)this + 8;
LABEL_25:
          v22 = v45;
          v23 = v10 + (unsigned int)v45;
          if ( (unsigned int)v23 > v6 )
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0xE9,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\visualcollection.cpp",
              v8);
          if ( (unsigned int)v23 > *((_DWORD *)v17 + 6) )
          {
            v24 = -2147024809;
            v40 = 449;
            v5 = -2147024809;
          }
          else
          {
            v43 = &v44;
            v24 = DynArrayImpl<0>::Grow((_DWORD)v17, 8, 1, (_DWORD)v8, (__int64)&v43);
            v5 = v24;
            if ( v24 >= 0 )
            {
              v25 = *((unsigned int *)v17 + 6);
              v26 = *(const char **)v17;
              *((_DWORD *)v17 + 6) = v25 + 1;
              if ( (unsigned int)v25 > (unsigned int)v23 )
              {
                v27 = &v26[8 * v25];
                do
                {
                  v25 = (unsigned int)(v25 - 1);
                  v27 -= 8;
                  *((_QWORD *)v27 + 1) = *(_QWORD *)&v26[8 * v25];
                }
                while ( (unsigned int)v25 > (unsigned int)v23 );
              }
              v28 = v43;
              v29 = (CMILRefCountBase **)&v26[8 * v23];
              if ( v43 >= v29 && v43 < (CMILRefCountBase **)&v26[8 * *((unsigned int *)v17 + 6) - 8] )
                v28 = v43 + 1;
              *v29 = *v28;
              if ( v7 )
              {
                if ( (*(_BYTE *)(v7 + 36) & 4) == 0 )
                  wil::details::in1diag3::_FailFast_Unexpected(
                    retaddr,
                    (void *)0xF4,
                    (unsigned int)"clientcore\\windows\\dwm\\udwm\\visualcollection.cpp",
                    v26);
                v30 = *(struct CVisualProxy **)(v7 + 16);
              }
              else
              {
                v30 = 0LL;
              }
              v21 = VisualCollection::SendLinkVisualCommand(this, *((struct CVisualProxy **)v44 + 2), v30, v22);
              v5 = v21;
              if ( v21 >= 0 )
              {
                *((_BYTE *)v44 + 36) |= 4u;
                return v5;
              }
              v41 = 249;
              goto LABEL_70;
            }
            v40 = 459;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, v40, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0xEBu, 0LL);
          return v5;
        }
        v41 = 221;
      }
      else
      {
        v21 = (*(__int64 (__fastcall **)(CMILRefCountBase *, const char *))(*(_QWORD *)v12 + 56LL))(v12, v8);
        v5 = v21;
        if ( v21 >= 0 )
        {
          CMILRefCountBase::AddRef(v44);
          goto LABEL_25;
        }
        v41 = 226;
      }
LABEL_70:
      v39 = v21;
      goto LABEL_64;
    }
    v17 = (char *)this + 8;
LABEL_19:
    if ( v45 )
    {
      v9 = 0;
    }
    else
    {
      v9 = 1;
      if ( v10 == -1 )
        v10 = v6;
    }
    goto LABEL_22;
  }
  if ( v4 != (CMILRefCountBase **)v8 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x66u, 0LL);
  }
  return v5;
}
