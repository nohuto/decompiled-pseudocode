/*
 * XREFs of ?chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z @ 0x140173C4C
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x140102C2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 * Callees:
 *     ?bAddPvtData@PFFOBJ@@QEAAHK@Z @ 0x14013FAD8 (-bAddPvtData@PFFOBJ@@QEAAHK@Z.c)
 *     ?bIsPrivatePFT@PFTOBJ@@QEBAHXZ @ 0x140173DA8 (-bIsPrivatePFT@PFTOBJ@@QEBAHXZ.c)
 *     ?vGetEUDC@PFFOBJ@@QEAAXPEAU_EUDCLOAD@@@Z @ 0x140173DE0 (-vGetEUDC@PFFOBJ@@QEAAXPEAU_EUDCLOAD@@@Z.c)
 */

__int64 __fastcall PFTOBJ::chpfeIncrPFF(PFTOBJ *this, struct PFF *a2, int *a3, char a4, struct _EUDCLOAD *a5)
{
  unsigned int v5; // ebx
  struct PFF *v8; // rdi
  int v10; // eax
  _DWORD *v11; // rcx
  int v12; // eax
  int v13; // eax
  unsigned int v15; // ecx
  __int64 v16; // rax
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0;
  v17[0] = a2;
  v8 = a2;
  if ( !a2 )
    return v5;
  v10 = *((_DWORD *)a2 + 13) & 8;
  if ( a5 )
  {
    if ( !v10 )
      return v5;
  }
  else if ( v10 )
  {
    return v5;
  }
  if ( (unsigned int)PFTOBJ::bIsPrivatePFT(this) )
  {
    if ( !(unsigned int)PFFOBJ::bAddPvtData((PFFOBJ *)v17, a4) )
    {
      *a3 = 0;
      return (unsigned int)-1;
    }
    v8 = (struct PFF *)v17[0];
  }
  *a3 = 1;
  if ( a5 )
  {
    if ( !*((_QWORD *)a5 + 1) && *((_DWORD *)v8 + 54) > 2u )
      goto LABEL_18;
    PFFOBJ::vGetEUDC((PFFOBJ *)v17, a5);
  }
  if ( (unsigned int)PFTOBJ::bIsPrivatePFT(this) )
    return *((unsigned int *)v8 + 54);
  v11 = (_DWORD *)((char *)v8 + 60);
  if ( (a4 & 0x20) == 0 )
    v11 = (_DWORD *)((char *)v8 + 56);
  if ( *v11 != -1 )
  {
    if ( (a4 & 0x40) == 0 )
    {
      v12 = *((_DWORD *)v8 + 13);
      if ( (v12 & 0x80u) != 0 )
        *((_DWORD *)v8 + 13) = v12 & 0xFFFFFF7F;
      else
        ++*v11;
      v13 = *((_DWORD *)v8 + 13);
      if ( (v13 & 1) != 0 )
      {
        v15 = 0;
        for ( *((_DWORD *)v8 + 13) = v13 & 0xFFFFFFFE; v15 < *((_DWORD *)v8 + 54); ++v15 )
        {
          v16 = *((_QWORD *)v8 + v15 + 28);
          if ( v16 )
            *(_DWORD *)(v16 + 12) &= ~2u;
        }
      }
    }
    return *((unsigned int *)v8 + 54);
  }
LABEL_18:
  *a3 = 0;
  return 1LL;
}
