/*
 * XREFs of SURFACE_Free @ 0x14001D1C0
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x14008C0E0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x14008CAD0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x14008D360 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x14019FBE8 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall SURFACE_Free(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdi

  v1 = a1;
  if ( a1[85] )
    ReleaseReferenceCountedObjectHandle(0LL);
  if ( *((_BYTE *)v1 + 688) )
  {
    a1 = (_QWORD *)v1[9];
    if ( a1 )
    {
      GreDeleteFastMutex(a1);
      v1[9] = 0LL;
    }
  }
  v2 = **(_QWORD **)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 4272LL);
  if ( v2 )
  {
    memset(v1, 0, 0x2C0uLL);
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v2 + 48), v1);
  }
}
