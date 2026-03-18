/*
 * XREFs of ?GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPEAVCWeakReferenceBase@2@@Z @ 0x1400490A8
 * Callers:
 *     ?SetSourceModifier@CManipulationMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@W4SourceModifierIndex@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140162F80 (-SetSourceModifier@CManipulationMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@W4So.c)
 *     ?SetReferenceArrayProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x140194670 (-SetReferenceArrayProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     DirectComposition::Memory::AllocateAndClear_0 @ 0x140048C08 (DirectComposition--Memory--AllocateAndClear_0.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::GetWeakReferenceBase(
        struct _RTL_GENERIC_TABLE *this,
        struct DirectComposition::CResourceMarshaler *a2,
        struct DirectComposition::CWeakReferenceBase **a3)
{
  struct _RTL_GENERIC_TABLE *v3; // rbp
  unsigned int v4; // edi
  __int64 v7; // rbx
  _QWORD *v8; // rax
  int v9; // ecx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DirectComposition::CResourceMarshaler *Buffer; // [rsp+20h] [rbp-18h] BYREF
  __int64 v16; // [rsp+28h] [rbp-10h]

  v3 = this + 4;
  v4 = 0;
  if ( (*((_DWORD *)a2 + 4) & 4) == 0 )
    goto LABEL_7;
  Buffer = a2;
  v16 = 0LL;
  v7 = 0LL;
  v8 = RtlLookupElementGenericTable(this + 4, &Buffer);
  if ( v8 )
    v7 = v8[1];
  if ( v7 )
  {
    v9 = *(_DWORD *)(v7 + 8);
    *(_DWORD *)(v7 + 8) = v9 + 1;
    if ( v9 == -1 )
    {
      *(_DWORD *)(v7 + 8) = -1;
      return 3223191811LL;
    }
  }
  else
  {
LABEL_7:
    v11 = DirectComposition::Memory::AllocateAndClear_0(0x18uLL, 0x72774344u, 1);
    v7 = v11;
    if ( v11 )
    {
      *(_QWORD *)(v11 + 16) = a2;
      *(_DWORD *)(v11 + 8) = 1;
      Buffer = a2;
      v16 = v11;
      if ( RtlInsertElementGenericTable(v3, &Buffer, 0x10u, 0LL) )
      {
        *((_DWORD *)a2 + 4) |= 4u;
        goto LABEL_11;
      }
      v4 = -1073741801;
      GreDeleteFastMutex((char *)v7, v12, v13, v14);
    }
    else
    {
      v4 = -1073741801;
    }
    v7 = 0LL;
  }
LABEL_11:
  *a3 = (struct DirectComposition::CWeakReferenceBase *)v7;
  return v4;
}
