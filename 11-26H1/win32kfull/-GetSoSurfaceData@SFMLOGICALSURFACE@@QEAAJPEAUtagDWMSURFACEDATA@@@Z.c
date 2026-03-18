/*
 * XREFs of ?GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z @ 0x1400A4174
 * Callers:
 *     GreDwmGetSurfaceData @ 0x1400A54E0 (GreDwmGetSurfaceData.c)
 * Callees:
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x14001C68C (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ?uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ @ 0x1400A19CC (-uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ.c)
 */

__int64 __fastcall SFMLOGICALSURFACE::GetSoSurfaceData(
        SFMLOGICALSURFACE *this,
        struct tagDWMSURFACEDATA *a2,
        __int64 a3)
{
  __int64 SessionState; // rax
  _DWORD *v6; // r10
  struct _ACCESS_STATE *ObjectType; // r8
  __int64 v8; // r9
  SFMLOGICALSURFACE *v9; // rcx
  __int64 v10; // r10
  __int64 v11; // r10
  __int64 v13; // rax

  SessionState = W32GetSessionState(this, a2, a3);
  v6 = (_DWORD *)*((_QWORD *)this + 23);
  LODWORD(ObjectType) = 0;
  v8 = *(_QWORD *)(SessionState + 96);
  if ( !v6 )
  {
    *(_DWORD *)a2 = 0;
    *((_DWORD *)a2 + 1) = *((_DWORD *)this + 68);
    *((_DWORD *)a2 + 2) = *((_DWORD *)this + 69);
    *((_DWORD *)a2 + 3) = 6;
    goto LABEL_8;
  }
  *((_DWORD *)a2 + 1) = v6[8];
  *((_DWORD *)a2 + 2) = v6[9];
  *((_DWORD *)a2 + 3) = v6[18];
  *((_DWORD *)a2 + 4) = v6[16];
  *((_QWORD *)a2 + 3) = SFMLOGICALSURFACE::uiCookie(this);
  if ( *(_DWORD *)(v10 + 72) != 6 )
    goto LABEL_7;
  if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(v9) )
  {
    *(_DWORD *)a2 = 2;
    *((_QWORD *)a2 + 5) = *(_QWORD *)(v11 + 544);
    v13 = *(_QWORD *)(v11 + 552);
    goto LABEL_9;
  }
  if ( *(struct _ACCESS_STATE **)(v11 + 224) == ObjectType )
  {
LABEL_7:
    *(_DWORD *)a2 = (_DWORD)ObjectType;
LABEL_8:
    v13 = *(_QWORD *)(v8 + 4668);
LABEL_9:
    *((_QWORD *)a2 + 4) = v13;
    return (unsigned int)ObjectType;
  }
  *(_DWORD *)a2 = 1;
  *((_QWORD *)a2 + 4) = *(_QWORD *)(v8 + 4668);
  LODWORD(ObjectType) = ObOpenObjectByPointer(
                          *(PVOID *)(v11 + 224),
                          0,
                          ObjectType,
                          (_DWORD)ObjectType + 6,
                          (POBJECT_TYPE)ObjectType,
                          (KPROCESSOR_MODE)ObjectType,
                          (PHANDLE)a2 + 5);
  return (unsigned int)ObjectType;
}
