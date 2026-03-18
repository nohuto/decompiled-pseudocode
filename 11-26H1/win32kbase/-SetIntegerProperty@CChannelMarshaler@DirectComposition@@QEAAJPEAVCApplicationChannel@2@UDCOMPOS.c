/*
 * XREFs of ?SetIntegerProperty@CChannelMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x1401B6300
 * Callers:
 *     ?SetChannelIntegerProperty@CApplicationChannel@DirectComposition@@QEAAJUDCOMPOSITION_PROPERTY_ID@@_J@Z @ 0x1401B62B4 (-SetChannelIntegerProperty@CApplicationChannel@DirectComposition@@QEAAJUDCOMPOSITION_PROPERTY_ID.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CChannelMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        _BYTE *a5)
{
  unsigned int v5; // edi
  int v7; // r8d
  char v8; // si

  v5 = 0;
  if ( a3 )
  {
    v7 = a3 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        return (unsigned int)-1073741811;
      if ( *(_BYTE *)(a1 + 6) == (a4 != 0) )
        return v5;
      *(_DWORD *)a1 |= 4u;
      *(_BYTE *)(a1 + 6) = a4 != 0;
    }
    else
    {
      v8 = a4 != 0;
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2) != 2 )
        return (unsigned int)-1073741790;
      if ( *(_BYTE *)(a1 + 5) == v8 )
        return v5;
      *(_DWORD *)a1 |= 2u;
      *(_BYTE *)(a1 + 5) = v8;
    }
    *a5 = 1;
    return v5;
  }
  if ( *(_BYTE *)(a1 + 4) != (a4 != 0) )
  {
    *(_DWORD *)a1 |= 1u;
    *(_BYTE *)(a1 + 4) = a4 != 0;
    *a5 = 1;
  }
  return v5;
}
