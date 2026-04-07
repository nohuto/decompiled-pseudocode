/*
 * XREFs of ?GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z @ 0x18001E370
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18001D550 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001ABD8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?GetIdealWindowRepresentationType@CWindowData@@QEBA?AW4WindowRepresentationType@@XZ @ 0x180055940 (-GetIdealWindowRepresentationType@CWindowData@@QEBA-AW4WindowRepresentationType@@XZ.c)
 */

void __fastcall CWindowData::GetIdealWindowRepresentation(CWindowData *this, char a2, struct CWindowRepresentation *a3)
{
  int v6; // eax
  int v7; // eax
  __int64 i; // rsi
  __int64 v9; // r14
  int IdealWindowRepresentationType; // eax

  *((_DWORD *)a3 + 2) = 0;
  *(_QWORD *)a3 = this;
  if ( (*((_BYTE *)this + 673) & 1) == 0 || a2 )
  {
    v6 = ((__int64 (*)(void))CWindowData::GetIdealWindowRepresentationType)();
    *((_DWORD *)a3 + 2) = v6;
    if ( !v6 && !a2 && (*((_BYTE *)this + 676) & 8) == 0 && !CWindowData::IsImmersiveWindow(this) )
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 158); i = (unsigned int)(i + 1) )
      {
        v9 = *(_QWORD *)(*((_QWORD *)this + 76) + 8 * i);
        IdealWindowRepresentationType = CWindowData::GetIdealWindowRepresentationType(v9);
        *((_DWORD *)a3 + 2) = IdealWindowRepresentationType;
        if ( IdealWindowRepresentationType )
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
