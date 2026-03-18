/*
 * XREFs of ?AcquireEntryIndex@GdiHandleEntryTable@Cxx@@QEAA_NPEAI@Z @ 0x1400A54CC
 * Callers:
 *     ?AcquireEntryIndex@GdiHandleManager@Cxx@@UEAA_NPEAI@Z @ 0x1400A6AC0 (-AcquireEntryIndex@GdiHandleManager@Cxx@@UEAA_NPEAI@Z.c)
 * Callees:
 *     ?Initialize@EntryDataLookupTable@GdiHandleEntryTable@Cxx@@QEAA_NI@Z @ 0x1400A5538 (-Initialize@EntryDataLookupTable@GdiHandleEntryTable@Cxx@@QEAA_NI@Z.c)
 */

bool __fastcall Cxx::GdiHandleEntryTable::AcquireEntryIndex(Cxx::GdiHandleEntryTable *this, unsigned int *a2)
{
  __int64 v4; // rdi
  bool result; // al

  if ( *((_DWORD *)this + 6) < *((_DWORD *)this + 7) )
  {
    v4 = *((unsigned int *)this + 5);
    if ( (_DWORD)v4 != -1 )
    {
      *((_DWORD *)this + 5) = *(_DWORD *)(*((_QWORD *)this + 1) + 24 * v4);
LABEL_4:
      ++*((_DWORD *)this + 6);
      result = 1;
      *a2 = v4;
      return result;
    }
    LODWORD(v4) = *((_DWORD *)this + 4);
    if ( Cxx::GdiHandleEntryTable::EntryDataLookupTable::Initialize(
           *(Cxx::GdiHandleEntryTable::EntryDataLookupTable **)this,
           v4) )
    {
      _InterlockedIncrement((volatile signed __int32 *)this + 4);
      goto LABEL_4;
    }
  }
  return 0;
}
