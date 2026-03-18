/*
 * XREFs of ?chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z @ 0x1400B54CC
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1400B663C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 * Callees:
 *     ?bIsPrivatePFT@PFTOBJ@@QEBAHXZ @ 0x1400B55FC (-bIsPrivatePFT@PFTOBJ@@QEBAHXZ.c)
 *     ?vGetEUDC@PFFOBJ@@QEAAXPEAU_EUDCLOAD@@@Z @ 0x1400B5634 (-vGetEUDC@PFFOBJ@@QEAAXPEAU_EUDCLOAD@@@Z.c)
 *     ?bAddPvtData@PFFOBJ@@QEAAHK@Z @ 0x14010E4A8 (-bAddPvtData@PFFOBJ@@QEAAHK@Z.c)
 *     ?vRevive@PFFOBJ@@QEAAXXZ @ 0x1401CC1C4 (-vRevive@PFFOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall PFTOBJ::chpfeIncrPFF(PFTOBJ *this, struct PFF *a2, int *a3, unsigned int a4, struct _EUDCLOAD *a5)
{
  unsigned int v5; // ebx
  struct PFF *v8; // rdi
  int v10; // eax
  _DWORD *v11; // rcx
  int v12; // eax
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0;
  v14[0] = a2;
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
    if ( !(unsigned int)PFFOBJ::bAddPvtData((PFFOBJ *)v14, a4) )
    {
      *a3 = 0;
      return (unsigned int)-1;
    }
    v8 = (struct PFF *)v14[0];
  }
  *a3 = 1;
  if ( a5 )
  {
    if ( !*((_QWORD *)a5 + 1) && *((_DWORD *)v8 + 54) > 2u )
      goto LABEL_18;
    PFFOBJ::vGetEUDC((PFFOBJ *)v14, a5);
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
      PFFOBJ::vRevive((PFFOBJ *)v14);
    }
    return *((unsigned int *)v8 + 54);
  }
LABEL_18:
  *a3 = 0;
  return 1LL;
}
