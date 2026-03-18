/*
 * XREFs of ?UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ @ 0x180129018
 * Callers:
 *     ??1CSharedSectionBase@@MEAA@XZ @ 0x180128D58 (--1CSharedSectionBase@@MEAA@XZ.c)
 *     ?OnChanged@CSharedSectionBase@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180128FB0 (-OnChanged@CSharedSectionBase@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?UnmapSharedSectionView@CComposition@@QEAAXPEAX@Z @ 0x180128F04 (-UnmapSharedSectionView@CComposition@@QEAAXPEAX@Z.c)
 *     ?IsCompositionThread@CComposition@@QEBA_NXZ @ 0x18012AA60 (-IsCompositionThread@CComposition@@QEBA_NXZ.c)
 */

void __fastcall CSharedSectionBase::UnmapSharedMemory(CSharedSectionBase *this)
{
  void *v2; // rcx
  CComposition *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 12);
  if ( v2 )
  {
    CloseHandle(v2);
    if ( *((_QWORD *)this + 11) )
    {
      if ( CComposition::IsCompositionThread(v3) )
        CComposition::UnmapSharedSectionView(*((CComposition **)this + 3), *((void **)this + 11));
      else
        UnmapViewOfFile(*((LPCVOID *)this + 11));
    }
  }
}
