/*
 * XREFs of ??$QueryInterface@VConnectionIndirector@BamoImpl@Microsoft@@UIMessageConversationHost@@UIMessageConversationBouncer@@@Util@BamoImpl@Microsoft@@YAJPEAVConnectionIndirector@12@AEBU_GUID@@PEAPEAX@Z @ 0x180206DE4
 * Callers:
 *     ?QueryInterface@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801E3C70 (-QueryInterface@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::Util::QueryInterface<Microsoft::BamoImpl::ConnectionIndirector,IMessageConversationHost,IMessageConversationBouncer>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  v3 = *a2 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v3 = a2[1] - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v3 )
    goto LABEL_16;
  v4 = *a2 - *(_QWORD *)&GUID_6dfae6da_7941_4c1e_a565_c18161b30018.Data1;
  if ( *a2 == *(_QWORD *)&GUID_6dfae6da_7941_4c1e_a565_c18161b30018.Data1 )
    v4 = a2[1] - *(_QWORD *)GUID_6dfae6da_7941_4c1e_a565_c18161b30018.Data4;
  if ( v4 )
  {
    v5 = *a2 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v5 = a2[1] - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v5 )
    {
      v6 = *a2 - *(_QWORD *)&GUID_8a2fc306_f225_47dd_a4a4_6c28646de4a3.Data1;
      if ( *a2 == *(_QWORD *)&GUID_8a2fc306_f225_47dd_a4a4_6c28646de4a3.Data1 )
        v6 = a2[1] - *(_QWORD *)GUID_8a2fc306_f225_47dd_a4a4_6c28646de4a3.Data4;
      if ( v6 )
        goto LABEL_15;
    }
    if ( !a1 )
LABEL_15:
      v7 = 0LL;
    else
      v7 = a1 + 24;
  }
  else
  {
LABEL_16:
    if ( !a1 )
    {
      *a3 = 0LL;
      return 2147500034LL;
    }
    v7 = a1 + 16;
  }
  *a3 = v7;
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
    return 0LL;
  }
  return 2147500034LL;
}
