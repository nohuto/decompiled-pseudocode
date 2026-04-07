/*
 * XREFs of ?GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z @ 0x180034354
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180028E98 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001AA00 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?GetIdealWindowRepresentationType@CWindowData@@QEBA?AW4WindowRepresentationType@@XZ @ 0x180034444 (-GetIdealWindowRepresentationType@CWindowData@@QEBA-AW4WindowRepresentationType@@XZ.c)
 */

void __fastcall CWindowData::GetIdealWindowRepresentation(CWindowData *this, char a2, struct CWindowRepresentation *a3)
{
  int IdealWindowRepresentationType; // eax
  int v7; // eax
  __int64 i; // rsi
  __int64 v9; // r14
  int v10; // eax

  *(_QWORD *)a3 = this;
  *((_DWORD *)a3 + 2) = 0;
  if ( (*((_BYTE *)this + 737) & 1) == 0 || a2 )
  {
    IdealWindowRepresentationType = CWindowData::GetIdealWindowRepresentationType(this);
    *((_DWORD *)a3 + 2) = IdealWindowRepresentationType;
    if ( !IdealWindowRepresentationType
      && !a2
      && (*((_BYTE *)this + 740) & 8) == 0
      && !CWindowData::IsImmersiveWindow(this) )
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 158); i = (unsigned int)(i + 1) )
      {
        v9 = *(_QWORD *)(*((_QWORD *)this + 76) + 8 * i);
        v10 = CWindowData::GetIdealWindowRepresentationType(v9);
        *((_DWORD *)a3 + 2) = v10;
        if ( v10 )
        {
          *(_QWORD *)a3 = v9;
          break;
        }
      }
    }
  }
  else
  {
    *((_DWORD *)a3 + 2) = 3;
  }
  v7 = *((_DWORD *)a3 + 2);
  if ( !v7 )
  {
    *((_DWORD *)a3 + 2) = 3;
    v7 = 3;
  }
  if ( a2 )
  {
    if ( v7 == 3 )
      *((_DWORD *)a3 + 2) = 1;
  }
}
