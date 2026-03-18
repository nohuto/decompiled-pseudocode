/*
 * XREFs of xxxCompositedPaint @ 0x14004FBD4
 * Callers:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x14004F8CC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x140051900 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     xxxInternalInvalidate @ 0x140030AC0 (xxxInternalInvalidate.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x14004FF34 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400503E8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     UpdateSprite @ 0x14007B8E4 (UpdateSprite.c)
 *     GreBitBltInternal @ 0x140084DC8 (GreBitBltInternal.c)
 */

void __fastcall xxxCompositedPaint(struct tagWND *a1)
{
  int v2; // esi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  const struct tagRECT *Prop; // rax
  const struct tagRECT *v7; // rbx
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // edi
  HRGN v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 DCEx; // rax
  int v18; // ebx
  HDC v19; // rsi
  int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  _DWORD *v30; // r8
  __int64 v31; // rdi
  __int64 v32; // rcx
  HDC v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 EmptyRgnPublic; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  _BYTE v44[56]; // [rsp+60h] [rbp-38h] BYREF
  struct tagSIZE v45; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v46; // [rsp+B0h] [rbp+18h] BYREF

  SetOrClrWF(1, a1, 0xB10u, 1);
  v2 = xxxCompositedTraverse(a1);
  SetOrClrWF(0, a1, 0xB10u, 1);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v44);
  UserSessionState = W32GetUserSessionState(v4, v3);
  Prop = (const struct tagRECT *)GetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 41358), 1u);
  v7 = Prop;
  if ( Prop )
  {
    v8 = (__int64)&Prop[1];
    v9 = IsRectEmptyInl(Prop + 1);
    v12 = v9;
    if ( !v2 && !v9 )
    {
      EmptyRgnPublic = *(_QWORD *)&v7[2].right;
      if ( EmptyRgnPublic
        || (EmptyRgnPublic = CreateEmptyRgnPublic(), (*(_QWORD *)&v7[2].right = EmptyRgnPublic) != 0LL) )
      {
        if ( EmptyRgnPublic != 1 )
        {
          v40 = W32GetUserSessionState(v11, v10);
          SetRectRgnIndirect(*(_QWORD *)(v40 + 63376), v8);
          v43 = W32GetUserSessionState(v42, v41);
          GreCombineRgn(*(_QWORD *)&v7[2].right, *(_QWORD *)&v7[2].right, *(_QWORD *)(v43 + 63376), 2LL);
        }
      }
      else
      {
        *(_QWORD *)&v7[2].right = 1LL;
      }
      v12 = 1;
      *(_OWORD *)v8 = 0LL;
    }
    v13 = *(HRGN *)&v7[2].right;
    if ( v13 )
    {
      xxxInternalInvalidate(a1, v13, 0x485u);
      DeleteMaybeSpecialRgn(*(_QWORD *)&v7[2].right);
      *(_QWORD *)&v7[2].right = 0LL;
    }
    if ( !v12 )
    {
      v14 = *(_QWORD *)&v7->left;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
      {
        v46 = 0LL;
        v28 = W32GetUserSessionState(v11, v13);
        v29 = GreSelectBitmap(*(_QWORD *)(v28 + 43248), v14);
        v30 = (_DWORD *)*((_QWORD *)a1 + 5);
        v31 = v29;
        v45.cx = v30[24] - v30[22];
        v45.cy = v30[25] - v30[23];
        v33 = *(HDC *)(W32GetUserSessionState(v32, (unsigned int)v45.cy) + 43248);
        v36 = W32GetUserSessionState(v35, v34);
        UpdateSprite(
          *(HDEV *)(*(_QWORD *)(v36 + 56968) + 48LL),
          a1,
          0LL,
          &v45,
          v33,
          (__int64)&v46,
          0,
          0LL,
          0x40000000u,
          v8);
        v26 = W32GetUserSessionState(v38, v37);
        v27 = v31;
      }
      else
      {
        v15 = W32GetUserSessionState(v11, v13);
        v16 = GreSelectBitmap(*(_QWORD *)(v15 + 43248), v14);
        SetOrClrWF(0, a1, 0xB20u, 1);
        DCEx = _GetDCEx(a1, 0LL, 1073807363LL);
        v18 = *(_DWORD *)(v8 + 4);
        v19 = (HDC)DCEx;
        v20 = *(_DWORD *)v8;
        v23 = W32GetUserSessionState(v22, v21);
        GreBitBltInternal(
          v19,
          *(_DWORD *)(v8 + 12) - *(_DWORD *)(v8 + 4),
          *(HDC *)(v23 + 43248),
          v20,
          v18,
          13369376,
          0,
          0);
        _ReleaseDC(v19);
        SetOrClrWF(1, a1, 0xB20u, 1);
        v26 = W32GetUserSessionState(v25, v24);
        v27 = v16;
      }
      GreSelectBitmap(*(_QWORD *)(v26 + 43248), v27);
      *(_OWORD *)v8 = 0LL;
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v44);
}
