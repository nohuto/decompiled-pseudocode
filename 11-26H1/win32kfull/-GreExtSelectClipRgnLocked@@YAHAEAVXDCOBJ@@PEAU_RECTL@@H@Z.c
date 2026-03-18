/*
 * XREFs of ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1400ADB54
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1401ACC30 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x14006CBDC (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14006D04C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bRectl@RGNOBJ@@QEBAHXZ @ 0x1400AC900 (-bRectl@RGNOBJ@@QEBAHXZ.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1400AD828 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400ADDB8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1400BB96C (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 */

__int64 __fastcall GreExtSelectClipRgnLocked(DC **this, struct _RECTL *a2, int a3)
{
  unsigned int v4; // r15d
  unsigned int v5; // ebx
  DC *v7; // rcx
  ULONG v8; // ecx
  struct REGION *v10; // rax
  __int64 v11; // r14
  __int128 v12; // [rsp+20h] [rbp-10h] BYREF
  struct REGION *v13; // [rsp+68h] [rbp+38h] BYREF

  v4 = a3 & 0xF7FFFFFF;
  v5 = 0;
  if ( (a3 & 0xF7FFFFFF) - 1 > 4 )
  {
    v8 = 87;
    goto LABEL_4;
  }
  v7 = *this;
  if ( !v7 )
  {
    v8 = 6;
LABEL_4:
    EngSetLastError(v8);
    return v5;
  }
  if ( (a3 & 0x8000000) != 0 )
  {
    if ( v4 != 5 )
      return v5;
    v5 = DC::iSelectTightenRao(v7, 0LL, 5);
    DC::bTightenRao(*this);
    if ( !v5 )
      return v5;
    v10 = DC::prgnVisSnap(*this);
    goto LABEL_10;
  }
  v11 = *((_QWORD *)v7 + 20);
  v13 = (struct REGION *)v11;
  if ( v11 )
  {
    if ( (unsigned int)RGNOBJ::bRectl((RGNOBJ *)&v13) )
    {
      v12 = *(_OWORD *)(v11 + 52);
      if ( a2->left == (_DWORD)v12 && *(_QWORD *)&a2->top == *(_QWORD *)((char *)&v12 + 4) && a2->bottom == HIDWORD(v12) )
      {
        v10 = XDCOBJ::prgnEffRao(this);
LABEL_10:
        v13 = v10;
        return (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v13);
      }
    }
  }
  v13 = 0LL;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v13, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v13);
  if ( !v13 )
  {
LABEL_23:
    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v13);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v13);
    return v5;
  }
  if ( ((a2->left & 0xF8000000) == 0 || (a2->left & 0xF8000000) == 0xF8000000)
    && ((a2->bottom & 0xF8000000) == 0 || (a2->bottom & 0xF8000000) == 0xF8000000)
    && ((a2->right & 0xF8000000) == 0 || (a2->right & 0xF8000000) == 0xF8000000)
    && ((a2->top & 0xF8000000) == 0 || (a2->top & 0xF8000000) == 0xF8000000)
    && a2->left < a2->right
    && a2->top < a2->bottom )
  {
    RGNOBJ::vSet((RGNOBJ *)&v13, a2);
    v5 = DC::iSelectTightenRao(*this, v13, v4);
    DC::bTightenRao(*this);
    if ( v5 )
    {
      *(_QWORD *)&v12 = XDCOBJ::prgnEffRao(this);
      v5 = RGNOBJ::iComplexity((RGNOBJ *)&v12);
    }
    goto LABEL_23;
  }
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v13);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v13);
  return 0LL;
}
