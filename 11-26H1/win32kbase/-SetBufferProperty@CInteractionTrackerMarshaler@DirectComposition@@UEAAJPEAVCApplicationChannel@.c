/*
 * XREFs of ?SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x1401A4A00
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x1400A77FC (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1400AA340 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1400ABE60 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400ADC68 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x140122390 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?GetInertiaModifierMarshalerFlag@CInteractionTrackerMarshaler@DirectComposition@@AEAA?AW4InteractionTrackerMarshalerFlag@12@W4InertiaModifierAxis@@@Z @ 0x140146C84 (-GetInertiaModifierMarshalerFlag@CInteractionTrackerMarshaler@DirectComposition@@AEAA-AW4Interac.c)
 *     ?ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x140171460 (-ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplica.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CInteractionTrackerMarshaler::SetBufferProperty(
        __int64 a1,
        struct _RTL_GENERIC_TABLE *a2,
        int a3,
        _DWORD *a4,
        size_t Size,
        _BYTE *a6)
{
  unsigned int v6; // ebx
  __int64 v10; // r8
  _QWORD *v11; // rsi
  unsigned int v12; // ebp
  unsigned __int64 v13; // rsi
  unsigned int v14; // ebp
  char *v16; // rcx
  void *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  size_t v20; // rbp
  __int64 v21; // rax
  __int64 v22; // r14
  int v23; // esi
  struct DirectComposition::CResourceMarshaler *v24; // rax
  __int64 v25; // r15
  int v26; // edx
  struct DirectComposition::CResourceMarshaler *v27; // rax
  __int64 Src; // [rsp+20h] [rbp-38h] BYREF
  int v29; // [rsp+28h] [rbp-30h]

  v6 = 0;
  *a6 = 0;
  v10 = (unsigned int)(a3 - 21);
  if ( !(_DWORD)v10 )
  {
    if ( a4 || !*(_DWORD *)(a1 + 376) )
    {
      if ( Size > 0x1000 || (Size & 7) != 0 )
        goto LABEL_16;
      DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(
        (DirectComposition::CInteractionTrackerMarshaler *)a1,
        a2,
        v10,
        (__int64)a4);
      v20 = Size >> 3;
      if ( (unsigned int)(Size >> 3) )
      {
        v21 = Win32AllocPoolWithQuotaImpl(v19, 16LL * (unsigned int)v20, 0x72694344u);
        *(_QWORD *)(a1 + 368) = v21;
        if ( !v21 )
        {
LABEL_29:
          v6 = -1073741801;
          goto LABEL_17;
        }
        v22 = 0LL;
        v6 = -1073741811;
        v23 = 0;
        while ( (unsigned int)v22 < (unsigned int)v20 )
        {
          v24 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(
                  (DirectComposition::CApplicationChannel *)a2,
                  a4[2 * v22]);
          v10 = (__int64)v24;
          if ( !v24 || !DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)v24 + 9), 82) )
            goto LABEL_17;
          v25 = 2LL * (unsigned int)v22;
          *(_QWORD *)(*(_QWORD *)(a1 + 368) + 16LL * (unsigned int)v22) = v10;
          DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*(_QWORD *)(a1 + 368)
                                                                                                  + 16LL * (unsigned int)v22));
          ++*(_DWORD *)(a1 + 376);
          v26 = a4[2 * v22 + 1];
          if ( v26 )
          {
            v27 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(
                    (DirectComposition::CApplicationChannel *)a2,
                    v26);
            v10 = (__int64)v27;
            if ( v27 && DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)v27 + 9), 65) )
            {
              *(_QWORD *)(*(_QWORD *)(a1 + 368) + 16LL * (unsigned int)v22 + 8) = v10;
              DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*(_QWORD *)(a1 + 368) + 16LL * (unsigned int)v22 + 8));
            }
            else
            {
              v23 = -1073741811;
              *(_QWORD *)(*(_QWORD *)(a1 + 368) + 16LL * (unsigned int)v22 + 8) = 0LL;
            }
            v22 = (unsigned int)(v22 + 1);
            if ( v23 < 0 )
            {
              v6 = v23;
              goto LABEL_17;
            }
          }
          else
          {
            v22 = (unsigned int)(v22 + 1);
            *(_QWORD *)(*(_QWORD *)(a1 + 368) + 8 * v25 + 8) = 0LL;
          }
        }
        v6 = v23;
      }
    }
    else
    {
      DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(
        (DirectComposition::CInteractionTrackerMarshaler *)a1,
        a2,
        v10,
        0LL);
    }
    *a6 = 1;
    *(_DWORD *)(a1 + 16) &= ~0x1000u;
    return v6;
  }
  v10 = (unsigned int)(v10 - 20);
  if ( !(_DWORD)v10 )
  {
    v13 = Size;
    if ( Size > 0x1000 || (Size & 3) != 0 )
      goto LABEL_16;
    v14 = 0;
LABEL_26:
    v16 = *(char **)(a1 + 8LL * v14 + 280);
    if ( v16 )
    {
      GreDeleteFastMutex(v16, (__int64)a2, v10, (__int64)a4);
      *(_QWORD *)(a1 + 8LL * v14 + 280) = 0LL;
    }
    v17 = (void *)Win32AllocPoolWithQuotaZInitImpl((int)v16, v13, 0x72694344u);
    *(_QWORD *)(a1 + 8LL * v14 + 280) = v17;
    if ( v17 )
    {
      memmove(v17, a4, v13);
      *(_QWORD *)(a1 + 8LL * v14 + 312) = v13;
      *(_DWORD *)(a1 + 16) &= ~(unsigned int)DirectComposition::CInteractionTrackerMarshaler::GetInertiaModifierMarshalerFlag(
                                               v18,
                                               v14);
      goto LABEL_10;
    }
    goto LABEL_29;
  }
  v10 = (unsigned int)(v10 - 1);
  if ( !(_DWORD)v10 )
  {
    v13 = Size;
    if ( Size > 0x1000 || (Size & 3) != 0 )
      goto LABEL_16;
    v14 = 1;
    goto LABEL_26;
  }
  v10 = (unsigned int)(v10 - 1);
  if ( !(_DWORD)v10 )
  {
    v13 = Size;
    if ( Size > 0x1000 )
      goto LABEL_16;
    v14 = 3;
    if ( (Size & 3) != 0 )
      goto LABEL_16;
    goto LABEL_26;
  }
  v10 = (unsigned int)(v10 - 1);
  if ( !(_DWORD)v10 )
  {
    v13 = Size;
    if ( Size > 0x1000 || (Size & 3) != 0 )
      goto LABEL_16;
    v14 = 2;
    goto LABEL_26;
  }
  if ( (_DWORD)v10 != 21 || Size != 12 )
  {
LABEL_16:
    v6 = -1073741811;
    goto LABEL_17;
  }
  v11 = (_QWORD *)(a1 + 384);
  v12 = *(_DWORD *)(a1 + 408);
  Src = *(_QWORD *)a4;
  v29 = a4[2];
  v6 = DirectComposition::CDCompDynamicArrayBase::Grow(
         (DirectComposition::CDCompDynamicArrayBase *)(a1 + 384),
         1LL,
         0x72694344u);
  if ( (v6 & 0x80000000) == 0 )
  {
    memmove((void *)(*v11 + v11[4] * v12), &Src, v11[4]);
LABEL_10:
    *a6 = 1;
    return v6;
  }
LABEL_17:
  if ( *(_QWORD *)(a1 + 368) )
    DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(
      (DirectComposition::CInteractionTrackerMarshaler *)a1,
      a2,
      v10,
      (__int64)a4);
  return v6;
}
