/*
 * XREFs of SURFACE_Free @ 0x140043FE0
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z @ 0x1400126D0 (-bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x140026090 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z @ 0x140026360 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1401C1164 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall SURFACE_Free(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  _QWORD *v5; // rbx
  __int64 v6; // rdi

  v4 = a1[85];
  v5 = a1;
  if ( v4 )
    ReleaseReferenceCountedObjectHandle(3LL);
  if ( *((_BYTE *)v5 + 688) )
  {
    a1 = (_QWORD *)v5[9];
    if ( a1 )
    {
      GreDeleteFastMutex((char *)a1, v4, a3, a4);
      v5[9] = 0LL;
    }
  }
  v6 = **(_QWORD **)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 4384LL);
  if ( v6 )
  {
    memset(v5, 0, 0x2C0uLL);
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v6 + 48), v5);
  }
}
