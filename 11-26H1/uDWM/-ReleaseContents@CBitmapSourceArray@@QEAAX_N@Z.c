/*
 * XREFs of ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x18001BBE0
 * Callers:
 *     ?CleanupThemeStatics@CWindowIconic@@SAXXZ @ 0x180006820 (-CleanupThemeStatics@CWindowIconic@@SAXXZ.c)
 *     ??1WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x180007F38 (--1WindowFrame@CTopLevelWindow@@QEAA@XZ.c)
 *     ??1CButton@@MEAA@XZ @ 0x1800086EC (--1CButton@@MEAA@XZ.c)
 *     ?CleanupAnimationResources@CWindowIconic@@QEAAXXZ @ 0x1800088EC (-CleanupAnimationResources@CWindowIconic@@QEAAXXZ.c)
 *     ?CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z @ 0x18001B2A4 (-CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

void __fastcall CBitmapSourceArray::ReleaseContents(CBitmapSourceArray *this, char a2)
{
  unsigned int v2; // eax
  __int64 v5; // rbx
  __int64 v6; // rsi
  CBaseObject *v7; // rcx

  v2 = *((_DWORD *)this + 6);
  if ( v2 )
  {
    v5 = 0LL;
    v6 = v2;
    do
    {
      v7 = *(CBaseObject **)(v5 + *(_QWORD *)this);
      if ( v7 )
      {
        CBaseObject::Release(v7);
        *(_QWORD *)(v5 + *(_QWORD *)this) = 0LL;
      }
      v5 += 8LL;
      --v6;
    }
    while ( v6 );
  }
  *((_DWORD *)this + 6) = 0;
  if ( a2 )
  {
    if ( *(_QWORD *)this != *((_QWORD *)this + 1) )
    {
      DefaultHeap::Free(*(void **)this);
      *(_QWORD *)this = *((_QWORD *)this + 1);
      *((_DWORD *)this + 5) = *((_DWORD *)this + 4);
    }
  }
}
