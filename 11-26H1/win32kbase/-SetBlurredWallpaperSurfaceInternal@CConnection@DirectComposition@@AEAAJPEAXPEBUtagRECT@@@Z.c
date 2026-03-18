/*
 * XREFs of ?SetBlurredWallpaperSurfaceInternal@CConnection@DirectComposition@@AEAAJPEAXPEBUtagRECT@@@Z @ 0x14017C57C
 * Callers:
 *     ?SetBlurredWallpaperSurface@CConnection@DirectComposition@@QEAAJPEAXPEBUtagRECT@@@Z @ 0x14017C4D8 (-SetBlurredWallpaperSurface@CConnection@DirectComposition@@QEAAJPEAXPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1400579A8 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     ?EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAXPEBUResourceObject@2@PEBUtagRECT@@@Z @ 0x14017C690 (-EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAXPEBUResourceObject@2@PEBUtag.c)
 */

__int64 __fastcall DirectComposition::CConnection::SetBlurredWallpaperSurfaceInternal(
        PVOID *this,
        void *a2,
        const struct tagRECT *a3)
{
  const struct DirectComposition::ResourceObject *v3; // rbx
  unsigned int v4; // esi
  int v7; // eax
  char v8; // dl
  DirectComposition::CConnection *v9; // rcx
  PVOID v10; // rcx
  __int64 CurrentProcess; // rax
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = 0;
  Object = 0LL;
  if ( !a2
    || (v7 = DirectComposition::ResourceObject::ResolveHandle(
               a2,
               1u,
               1,
               (struct DirectComposition::ResourceObject **)&Object),
        v3 = (const struct DirectComposition::ResourceObject *)Object,
        v4 = v7,
        v7 >= 0) )
  {
    v8 = 0;
    if ( v3 != this[39] )
    {
      if ( v3 && *((_DWORD *)v3 + 9) != 162 )
      {
        v4 = -1073741811;
        goto LABEL_17;
      }
      v8 = 1;
    }
    v9 = (DirectComposition::CConnection *)(*(_QWORD *)&a3->left - (_QWORD)this[40]);
    if ( *(PVOID *)&a3->left == this[40] )
      v9 = (DirectComposition::CConnection *)(*(_QWORD *)&a3->right - (_QWORD)this[41]);
    if ( v9 || v8 )
    {
      DirectComposition::CConnection::EmitSetBlurredWallpaperSurface(v9, v3, a3);
      v10 = this[39];
      if ( v10 )
        ObfDereferenceObject(v10);
      this[39] = v3;
      CurrentProcess = (__int64)v3;
      v3 = 0LL;
      *((struct tagRECT *)this + 20) = *a3;
      if ( CurrentProcess )
        CurrentProcess = PsGetCurrentProcess(v10);
      this[38] = (PVOID)CurrentProcess;
    }
  }
LABEL_17:
  if ( v3 )
    ObfDereferenceObject(v3);
  return v4;
}
