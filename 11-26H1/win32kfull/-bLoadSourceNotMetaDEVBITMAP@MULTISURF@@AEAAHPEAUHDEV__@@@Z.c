/*
 * XREFs of ?bLoadSourceNotMetaDEVBITMAP@MULTISURF@@AEAAHPEAUHDEV__@@@Z @ 0x140329000
 * Callers:
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x140064444 (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1400651E0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAUHDEV__@@@Z @ 0x140328F90 (-bLoadSource@MULTISURF@@QEAAHPEAUHDEV__@@@Z.c)
 * Callees:
 *     ?bCreateDIB@MULTISURF@@AEAAHXZ @ 0x140328E18 (-bCreateDIB@MULTISURF@@AEAAHXZ.c)
 */

__int64 __fastcall MULTISURF::bLoadSourceNotMetaDEVBITMAP(MULTISURF *this, HDEV a2)
{
  int *v3; // rcx
  __int64 v4; // r8
  int v5; // eax
  HDEV v6; // r9
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  bool v10; // cf
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v3 = (int *)((char *)this + 72);
  v4 = *(_QWORD *)this;
  v5 = *v3;
  v6 = *(HDEV *)(*(_QWORD *)this + 48LL);
  if ( (*v3 & 2) == 0 )
  {
    if ( v6 == a2 )
    {
      if ( (v5 & 1) != 0 )
      {
        *v3 = v5 & 0xFFFFFFFE;
        *(_QWORD *)(v4 + 40) = *((_QWORD *)this + 3);
        *(_QWORD *)(*(_QWORD *)this + 24LL) = *((_QWORD *)this + 4);
        *(_DWORD *)(*(_QWORD *)this + 112LL) = *((_DWORD *)this + 19);
      }
    }
    else if ( (v5 & 1) == 0 )
    {
      if ( (v5 & 4) == 0 )
      {
        v13 = *(_QWORD *)(*(_QWORD *)this + 48LL);
        if ( v6 )
        {
          PDEVOBJ::vSync((PDEVOBJ *)&v13, *((struct _SURFOBJ **)this + 11), *((struct _RECTL **)this + 12), 0);
          v4 = *(_QWORD *)this;
          v3 = (int *)((char *)this + 72);
        }
        v5 = *v3 | 4;
      }
      *v3 = v5 | 1;
      *(_QWORD *)(v4 + 40) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 112LL) = 0;
    }
    return 1LL;
  }
  if ( v6 == a2 )
  {
    v12 = v4 + 24;
    v11 = 8LL;
    goto LABEL_7;
  }
  if ( *((_QWORD *)this + 5) || (result = MULTISURF::bCreateDIB(this), (_DWORD)result) )
  {
    v8 = *((_QWORD *)this + 5);
    v9 = v8 + 24;
    v10 = v8 != 0;
    v11 = 56LL;
    v12 = v9 & -(__int64)v10;
LABEL_7:
    *((_QWORD *)this + 11) = v12;
    *((_QWORD *)this + 12) = (char *)this + v11;
    return 1LL;
  }
  return result;
}
