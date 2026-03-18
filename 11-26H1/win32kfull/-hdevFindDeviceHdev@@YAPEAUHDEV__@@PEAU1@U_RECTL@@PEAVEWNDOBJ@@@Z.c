/*
 * XREFs of ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x14032910C
 * Callers:
 *     ?GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1@Z @ 0x14016D63C (-GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1@Z.c)
 *     ?iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x140311624 (-iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x140311C88 (-iWndObjSetupExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z.c)
 *     ?GrepDescribePixelFormat@@YAHAEAVXDCOBJ@@HIPEAUtagPIXELFORMATDESCRIPTOR@@@Z @ 0x1403343A0 (-GrepDescribePixelFormat@@YAHAEAVXDCOBJ@@HIPEAUtagPIXELFORMATDESCRIPTOR@@@Z.c)
 *     ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x1403344E4 (-ipfdDevMaxGet@XDCOBJ@@QEAAJXZ.c)
 *     NtGdiSetPixelFormat @ 0x1403345B0 (NtGdiSetPixelFormat.c)
 *     NtGdiSwapBuffers @ 0x140334850 (NtGdiSwapBuffers.c)
 * Callees:
 *     ?bValid@EWNDOBJ@@QEBAHXZ @ 0x140319098 (-bValid@EWNDOBJ@@QEBAHXZ.c)
 */

__int64 __fastcall hdevFindDeviceHdev(_QWORD *a1, struct _RECTL *a2, struct EWNDOBJ *a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  __int64 v6; // rsi
  __int64 v7; // r8
  _QWORD *v8; // rax
  int v10; // ebp

  v3 = (_QWORD *)a1[223];
  v4 = 0LL;
  v6 = 0LL;
  if ( a3 && EWNDOBJ::bValid(a3) )
  {
    v8 = (_QWORD *)*v3;
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 168) + 32LL) + 48LL);
    while ( v8 )
    {
      if ( v6 == v8[6] )
        return v6;
      v8 = (_QWORD *)*v8;
    }
  }
  v10 = 0;
  while ( 1 )
  {
    v3 = (_QWORD *)*v3;
    if ( !v3 )
      break;
    if ( *((_DWORD *)v3 + 7) <= a2->left
      && *((_DWORD *)v3 + 9) >= a2->right
      && *((_DWORD *)v3 + 8) <= a2->top
      && *((_DWORD *)v3 + 10) >= a2->bottom )
    {
      return v3[6];
    }
    if ( (unsigned int)bIntersect((char *)v3 + 28, a2) )
    {
      v6 = v3[6];
      if ( (*(_DWORD *)(v6 + 2112) & 0x100) != 0 )
        return v6;
      ++v10;
    }
  }
  if ( v10 == 1 )
    return v6;
  return v4;
}
