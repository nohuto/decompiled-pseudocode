/*
 * XREFs of ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV?$CWeakReference@VCResourceMarshaler@DirectComposition@@@2@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x14004926C
 * Callers:
 *     ?SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x1401C00E0 (-SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?SetReferenceProperty@CInteractionTracker2Marshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140237EA0 (-SetReferenceProperty@CInteractionTracker2Marshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
 *     ?SetReferenceProperty@CVisualReferenceControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140238770 (-SetReferenceProperty@CVisualReferenceControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicati.c)
 *     ?SetReferenceProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140243DA0 (-SetReferenceProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChann.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     DirectComposition::Memory::AllocateAndClear_0 @ 0x140048C08 (DirectComposition--Memory--AllocateAndClear_0.c)
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x140138DF0 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
        struct _RTL_GENERIC_TABLE *this,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int *a6,
        int a7,
        int a8,
        _BYTE *a9)
{
  unsigned int v9; // edi
  __int64 i; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbx
  _QWORD *v18; // rax
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rcx
  bool v22; // zf
  __int64 v23; // rsi
  PVOID v24; // rax
  int v25; // edx
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  __int64 Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int64 v30; // [rsp+28h] [rbp-20h]

  v9 = 0;
  if ( !a3 )
  {
LABEL_8:
    v15 = *a2;
    if ( v15 )
      v16 = *(_QWORD *)(v15 + 16);
    else
      v16 = 0LL;
    if ( a3 == v16 )
    {
      if ( v15 && !v16 )
      {
        DirectComposition::CApplicationChannel::ReleaseWeakReference(
          (DirectComposition::CApplicationChannel *)this,
          (struct DirectComposition::CWeakReferenceBase *)v15);
        *a2 = 0LL;
        v27 = *a6;
        if ( a8 == 1 )
          v28 = v27 & ~a7;
        else
          v28 = a7 | v27;
        *a6 = v28;
        *a9 = 1;
      }
      return v9;
    }
    v17 = 0LL;
    if ( !a3 )
    {
LABEL_23:
      v21 = *a2;
      if ( *a2 )
      {
        v22 = (*(_DWORD *)(v21 + 8))-- == 1;
        v23 = *(_QWORD *)(v21 + 16);
        if ( v22 )
        {
          GreDeleteFastMutex((char *)v21, v15, a3, a4);
          if ( v23 )
          {
            Buffer = v23;
            v30 = 0LL;
            v24 = RtlLookupElementGenericTable(this + 4, &Buffer);
            if ( v24 )
              RtlDeleteElementGenericTable(this + 4, v24);
            *(_DWORD *)(v23 + 16) &= ~4u;
          }
        }
      }
      *a2 = v17;
      v25 = *a6;
      if ( a8 == 1 )
        v26 = v25 & ~a7;
      else
        v26 = a7 | v25;
      *a6 = v26;
      *a9 = 1;
      return v9;
    }
    if ( (*(_DWORD *)(a3 + 16) & 4) != 0 )
    {
      Buffer = a3;
      v30 = 0LL;
      v18 = RtlLookupElementGenericTable(this + 4, &Buffer);
      if ( v18 )
        v17 = v18[1];
      if ( v17 )
      {
        v19 = *(_DWORD *)(v17 + 8);
        *(_DWORD *)(v17 + 8) = v19 + 1;
        if ( v19 == -1 )
        {
          *(_DWORD *)(v17 + 8) = -1;
          return (unsigned int)-1071775485;
        }
        goto LABEL_22;
      }
    }
    v20 = DirectComposition::Memory::AllocateAndClear_0(0x18uLL, 0x72774344u, 1);
    v17 = v20;
    if ( v20 )
    {
      *(_QWORD *)(v20 + 16) = a3;
      *(_DWORD *)(v20 + 8) = 1;
      Buffer = a3;
      v30 = v20;
      if ( RtlInsertElementGenericTable(this + 4, &Buffer, 0x10u, 0LL) )
      {
        *(_DWORD *)(a3 + 16) |= 4u;
LABEL_22:
        if ( (v9 & 0x80000000) != 0 )
          return v9;
        goto LABEL_23;
      }
      v9 = -1073741801;
      GreDeleteFastMutex((char *)v17, v15, a3, a4);
    }
    else
    {
      v9 = -1073741801;
    }
    v17 = 0LL;
    goto LABEL_22;
  }
  for ( i = *(unsigned int *)(a3 + 36); (unsigned int)i < 0xA6; LODWORD(i) = dword_14027CC90[i] )
  {
    if ( (_DWORD)i == a5 )
      goto LABEL_8;
  }
  return (unsigned int)-1073741811;
}
