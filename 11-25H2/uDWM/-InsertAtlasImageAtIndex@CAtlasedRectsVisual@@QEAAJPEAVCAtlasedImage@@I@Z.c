/*
 * XREFs of ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x18006436C
 * Callers:
 *     ?AddAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@@Z @ 0x18001E118 (-AddAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@@Z.c)
 *     ?InsertAfterAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@0@Z @ 0x1800642DC (-InsertAfterAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@0@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800082D4 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAtlasedRectsVisual::InsertAtlasImageAtIndex(
        CAtlasedRectsVisual *this,
        struct CAtlasedImage *a2,
        unsigned int a3,
        __int64 a4)
{
  char *v4; // rdi
  __int64 v5; // rsi
  int v7; // ebx
  int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // r9
  CMILRefCountBase **v12; // rdx
  CMILRefCountBase **v13; // r9
  unsigned int v15; // eax
  CMILRefCountBase **v16; // [rsp+50h] [rbp+8h] BYREF
  CMILRefCountBase *v17; // [rsp+58h] [rbp+10h] BYREF

  v17 = a2;
  v4 = (char *)this + 200;
  v5 = a3;
  if ( a3 > *((_DWORD *)this + 56) )
  {
    v7 = -2147024809;
    v15 = 449;
    v8 = -2147024809;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, v15, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x3Eu, 0LL);
    return (unsigned int)v7;
  }
  v16 = &v17;
  v7 = DynArrayImpl<0>::Grow((__int64)v4, 8u, 1, a4, (unsigned __int64 *)&v16);
  v8 = v7;
  if ( v7 < 0 )
  {
    v15 = 459;
    goto LABEL_11;
  }
  v9 = *((unsigned int *)v4 + 6);
  v10 = *(_QWORD *)v4;
  *((_DWORD *)v4 + 6) = v9 + 1;
  if ( (unsigned int)v9 > (unsigned int)v5 )
  {
    v11 = (_QWORD *)(v10 + 8 * v9);
    do
    {
      v9 = (unsigned int)(v9 - 1);
      *v11-- = *(_QWORD *)(v10 + 8 * v9);
    }
    while ( (unsigned int)v9 > (unsigned int)v5 );
  }
  v12 = v16;
  v13 = (CMILRefCountBase **)(v10 + 8 * v5);
  if ( v16 >= v13 && (unsigned __int64)v16 < v10 + 8 * ((unsigned __int64)*((unsigned int *)v4 + 6) - 1) )
    v12 = v16 + 1;
  *v13 = *v12;
  CMILRefCountBase::AddRef(v17);
  *((_QWORD *)v17 + 10) = this;
  (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 0x2000LL);
  return (unsigned int)v7;
}
