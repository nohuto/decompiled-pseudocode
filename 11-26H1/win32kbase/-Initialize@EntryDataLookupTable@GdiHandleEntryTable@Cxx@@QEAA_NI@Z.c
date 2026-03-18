/*
 * XREFs of ?Initialize@EntryDataLookupTable@GdiHandleEntryTable@Cxx@@QEAA_NI@Z @ 0x1400A5538
 * Callers:
 *     ?AcquireEntryIndex@GdiHandleEntryTable@Cxx@@QEAA_NPEAI@Z @ 0x1400A54CC (-AcquireEntryIndex@GdiHandleEntryTable@Cxx@@QEAA_NPEAI@Z.c)
 *     ?AcquireEntryIndex@GdiHandleManager@Cxx@@UEAA_NPEAI@Z @ 0x1400A6AC0 (-AcquireEntryIndex@GdiHandleManager@Cxx@@UEAA_NPEAI@Z.c)
 * Callees:
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 */

char __fastcall Cxx::GdiHandleEntryTable::EntryDataLookupTable::Initialize(
        Cxx::GdiHandleEntryTable::EntryDataLookupTable *this,
        unsigned int a2)
{
  __int64 v2; // rax
  unsigned __int64 v4; // rbx
  unsigned __int8 v5; // si
  __int64 v6; // rax
  __int64 v7; // rcx

  v2 = *(_QWORD *)this;
  v4 = (unsigned __int64)a2 >> 8;
  v5 = a2;
  if ( !*(_QWORD *)(*(_QWORD *)this + 8 * v4) )
  {
    *(_QWORD *)(*(_QWORD *)this + 8 * v4) = Win32AllocPoolImpl(0x100uLL, 0x1000uLL, 0x636C6547u);
    v2 = *(_QWORD *)this;
    if ( !*(_QWORD *)(*(_QWORD *)this + 8 * v4) )
      return 0;
  }
  v6 = *(_QWORD *)(v2 + 8 * v4);
  v7 = 2LL * v5;
  *(_QWORD *)(v6 + 8 * v7) = 0LL;
  *(_QWORD *)(v6 + 8 * v7 + 8) = 0LL;
  return 1;
}
