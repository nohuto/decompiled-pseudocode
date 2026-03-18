/*
 * XREFs of ?GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPEAVCWeakReferenceBase@2@@Z @ 0x14004A060
 * Callers:
 *     ?SetReferenceArrayProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x14004A210 (-SetReferenceArrayProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x14004A710 (-SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?SetSourceModifier@CManipulationMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@W4SourceModifierIndex@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140059428 (-SetSourceModifier@CManipulationMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@W4So.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     DirectComposition::Memory::AllocateAndClear_0 @ 0x140049A84 (DirectComposition--Memory--AllocateAndClear_0.c)
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
  struct DirectComposition::CResourceMarshaler *Buffer; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+28h] [rbp-10h]

  v3 = this + 4;
  v4 = 0;
  if ( (*((_DWORD *)a2 + 4) & 4) == 0 )
    goto LABEL_7;
  Buffer = a2;
  v13 = 0LL;
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
    v11 = DirectComposition::Memory::AllocateAndClear_0(0x18uLL, 1920418628LL, 1);
    v7 = v11;
    if ( v11 )
    {
      *(_QWORD *)(v11 + 16) = a2;
      *(_DWORD *)(v11 + 8) = 1;
      Buffer = a2;
      v13 = v11;
      if ( RtlInsertElementGenericTable(v3, &Buffer, 0x10u, 0LL) )
      {
        *((_DWORD *)a2 + 4) |= 4u;
        goto LABEL_11;
      }
      v4 = -1073741801;
      GreDeleteFastMutex((char *)v7);
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
