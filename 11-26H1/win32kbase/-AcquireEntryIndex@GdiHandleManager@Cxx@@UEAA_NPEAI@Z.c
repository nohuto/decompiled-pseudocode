/*
 * XREFs of ?AcquireEntryIndex@GdiHandleManager@Cxx@@UEAA_NPEAI@Z @ 0x1400A6AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireEntryIndex@GdiHandleEntryTable@Cxx@@QEAA_NPEAI@Z @ 0x1400A54CC (-AcquireEntryIndex@GdiHandleEntryTable@Cxx@@QEAA_NPEAI@Z.c)
 *     ?Initialize@EntryDataLookupTable@GdiHandleEntryTable@Cxx@@QEAA_NI@Z @ 0x1400A5538 (-Initialize@EntryDataLookupTable@GdiHandleEntryTable@Cxx@@QEAA_NI@Z.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?_Create@GdiHandleEntryTable@Cxx@@CAPEAV12@I_N@Z @ 0x140189584 (-_Create@GdiHandleEntryTable@Cxx@@CAPEAV12@I_N@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

char __fastcall Cxx::GdiHandleManager::AcquireEntryIndex(Cxx::GdiHandleManager *this, unsigned int *a2)
{
  unsigned __int32 v2; // r14d
  unsigned __int32 v3; // r12d
  __int64 *v6; // rdi
  __int64 *v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbx
  char v10; // di
  unsigned __int32 v11; // r11d
  __int64 *v12; // r8
  __int64 v13; // r9
  unsigned int v14; // ecx
  unsigned int v15; // edx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r10
  void *v20; // rax
  unsigned int i; // ebx
  unsigned int v22; // eax
  Cxx::GdiHandleEntryTable *v23; // rsi
  Cxx::GdiHandleEntryTable *v24; // rcx
  unsigned int v25; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 5);
  v3 = *((_DWORD *)this + 6);
  while ( v2 < v3 )
  {
    v6 = (__int64 *)*((_QWORD *)this + 1);
    if ( *((_BYTE *)v6 + 14) )
      break;
    v7 = (__int64 *)*v6;
    v25 = 0;
    v8 = *v7;
    if ( *(_DWORD *)(*v7 + 24) >= *(_DWORD *)(*v7 + 28) )
      goto LABEL_33;
    v9 = *(unsigned int *)(v8 + 20);
    if ( (_DWORD)v9 == -1 )
    {
      LODWORD(v9) = *(_DWORD *)(v8 + 16);
      if ( !Cxx::GdiHandleEntryTable::EntryDataLookupTable::Initialize(
              *(Cxx::GdiHandleEntryTable::EntryDataLookupTable **)v8,
              v9) )
      {
LABEL_33:
        if ( *(_DWORD *)(*(_QWORD *)*v6 + 24LL) == *(_DWORD *)(*(_QWORD *)*v6 + 28LL) )
        {
          for ( i = 1; ; ++i )
          {
            v22 = *((unsigned __int16 *)v6 + 6);
            if ( i >= v22 )
              break;
            v23 = *(Cxx::GdiHandleEntryTable **)(*v6 + 8LL * i);
            if ( Cxx::GdiHandleEntryTable::AcquireEntryIndex(v23, &v25) )
              goto LABEL_42;
            if ( *((_DWORD *)v23 + 6) != *((_DWORD *)v23 + 7) )
              return 0;
          }
          if ( (_WORD)v22 != 256 )
          {
            *(_QWORD *)(*v6 + 8LL * *((unsigned __int16 *)v6 + 6)) = Cxx::GdiHandleEntryTable::_Create(0x10000u, 1);
            v24 = *(Cxx::GdiHandleEntryTable **)(*v6 + 8LL * *((unsigned __int16 *)v6 + 6));
            if ( !v24 )
              return 0;
            Cxx::GdiHandleEntryTable::AcquireEntryIndex(v24, &v25);
            i = *((unsigned __int16 *)v6 + 6);
            *((_WORD *)v6 + 6) = i + 1;
LABEL_42:
            LODWORD(v9) = v25 + *((_DWORD *)v6 + 2) + ((i + 0xFFFF) << 16);
            goto LABEL_8;
          }
          *((_BYTE *)v6 + 14) = 1;
        }
        return 0;
      }
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 16));
    }
    else
    {
      *(_DWORD *)(v8 + 20) = *(_DWORD *)(*(_QWORD *)(v8 + 8) + 24 * v9);
    }
    ++*(_DWORD *)(v8 + 24);
LABEL_8:
    *((_DWORD *)this + 5) = ++v2;
    v10 = 0;
    v11 = *((_DWORD *)this + 4);
    if ( v2 > v11 )
    {
      v10 = 1;
      do
      {
        _InterlockedCompareExchange((volatile signed __int32 *)this + 4, v2, v11);
        v11 = *((_DWORD *)this + 4);
      }
      while ( v2 > v11 );
    }
    v12 = (__int64 *)*((_QWORD *)this + 1);
    v13 = (unsigned __int16)v9;
    v14 = *((_DWORD *)v12 + 2);
    if ( (unsigned __int16)v9 >= v14 + ((*((unsigned __int16 *)v12 + 6) + 0xFFFF) << 16) )
    {
      v17 = 0LL;
    }
    else
    {
      if ( (unsigned __int16)v9 >= v14 )
      {
        v15 = (((unsigned __int16)v9 - v14) >> 16) + 1;
        v13 = -65536 * (((unsigned __int16)v9 - v14) >> 16) - v14 + (unsigned __int16)v9;
      }
      else
      {
        v15 = 0;
      }
      v16 = *v12;
      v17 = 0LL;
      v18 = *(_QWORD *)(v16 + 8LL * v15);
      if ( (unsigned int)v13 < *(_DWORD *)(v18 + 16) )
        v17 = *(_QWORD *)(v18 + 8) + 24 * v13;
    }
    if ( (unsigned int)v9 < 0x10000 )
    {
      if ( v10 || v11 > 0x10000 )
        *(_BYTE *)(v17 + 13) = 0;
      else
        LODWORD(v9) = ((unsigned __int8)++*(_BYTE *)(v17 + 13) << 16) + v9;
LABEL_18:
      *a2 = v9;
      return 1;
    }
    if ( *(unsigned __int8 *)(v17 + 13) != WORD1(v9) )
      goto LABEL_18;
    if ( *((_QWORD *)this + 4) )
    {
LABEL_24:
      *(_DWORD *)(*((_QWORD *)this + 4) + 4LL * (unsigned __int16)v9) = v9;
    }
    else
    {
      v20 = Win32AllocPoolImpl(0x100uLL, 0x40000uLL, 0x636D6847u);
      *((_QWORD *)this + 4) = v20;
      if ( v20 )
      {
        memset(v20, 0, 0x40000uLL);
        goto LABEL_24;
      }
    }
  }
  return 0;
}
